package MAC_Project;
    //Package imports if needed

    //Custom Structs
 

    //MAC_Interface
    interface MAC_ifc;
    method Action get_input(Bit#(16)a,Bit#(16)b,Bit#(32)c,Bit#(1)s1_or_s0);
    method Bit#(32) get_result();
    endinterface:MAC_ifc

    function Bit#(9) adder_8_bit(Bit#(8)x, Bit#(8)y, Bit#(1)cin);
        Bit#(9) sum;
        Bit#(9) carry=9'b0;
        carry[0]=cin;

        for (Integer i = 0; i < 8; i=i+1)
        begin
            sum[i] = x[i] ^ y[i] ^ carry[i];
            carry[i+1] = (x[i] & y[i]) | (y[i] & carry[i]) | (x[i] & carry[i]);
        end
        sum[8]=carry[8];
        
        return sum;

    endfunction:adder_8_bit

    function Bit#(10) adder_9_bit(Bit#(9)x, Bit#(9)y, Bit#(1)cin);
        Bit#(10) sum;
        Bit#(10) carry=10'b0;
        carry[0]=cin;

        for (Integer i = 0; i < 9; i=i+1)
        begin
            sum[i] = x[i] ^ y[i] ^ carry[i];
            carry[i+1] = (x[i] & y[i]) | (y[i] & carry[i]) | (x[i] & carry[i]);
        end
        sum[9]=carry[9];
        
        return sum;

    endfunction:adder_9_bit

    function Bit#(5) adder_4_bit(Bit#(4)x, Bit#(4)y, Bit#(1)cin);
        Bit#(5) sum;
        Bit#(5) carry=5'b0;
        carry[0]=cin;

        for (Integer i = 0; i < 4; i=i+1)
        begin
            sum[i] = x[i] ^ y[i] ^ carry[i];
            carry[i+1] = (x[i] & y[i]) | (y[i] & carry[i]) | (x[i] & carry[i]);
        end

        sum[4]=carry[4];

        return sum;

    endfunction:adder_4_bit

    function Bit#(25) adder_24_bit (Bit#(24)x,Bit#(24)y,Bit#(1)cin);
        Bit#(25) sum;
        Bit#(25) carry=25'd0;
        carry[0]=cin;

        for(Integer i=0 ;i < 24; i=i+1)
        begin
            sum[i] = x[i] ^ y[i] ^ carry[i];
            carry[i+1] = (x[i] & y[i]) | (y[i] & carry[i]) | (x[i] & carry[i]);
        end
        
        sum[24]=carry[24];

        return sum;

    endfunction:adder_24_bit

    (*synthesize*)
    module mkMAC(MAC_ifc);        //Registers and wires being used in the design
        Reg#(Bit#(16)) a_r  <- mkReg(0);
        Reg#(Bit#(16)) b_r  <- mkReg(0);
        Reg#(Bit#(32)) c_r  <- mkReg(0);
        Reg#(Bit#(1))  s1_r <- mkReg(0);
        Reg#(Bit#(32)) out_r <- mkReg(0);
       
        rule compute;
        //sign of product of a & b
        Bit#(1) sign= a_r[15] ^ b_r[15];

        //adding exponents (exp(a)+exp(b))
        Bit#(9) exp_sum= adder_8_bit(a_r[14:7],b_r[14:7],1'b0);
        
        //subtracting bias(127) using 2's compliment addition
        Bit#(10) bias_sub= adder_9_bit(exp_sum,9'b110000000,1'b1);//1's compliment of 127

        //Multiplying the mantissa of a & b; z1={1,mantissa_a}*{1,mantissa_b};
        Bit#(16) z1= unsignedMul8({1'b1,a_r[6:0]},{1'b1,b_r[6:0]});
        Bit#(32) p11;
        Bit#(10) bias_sub_1;

        if(z1[15]==1'b1)
        begin
            bias_sub_1=bias_sub+1;
            p11={sign,bias_sub_1[7:0],z1[14:0],8'd0};
        end

        else
        begin
            bias_sub_1=bias_sub;
            p11={sign,bias_sub_1[7:0],z1[13:0],9'd0};
        end

        //p=a*b in fp32 format
        Bit#(32) p=p11;

        Bit#(32) greater,lesser;

        //comparison exponents of numbers to be added
        if(p[30:23]>=c_r[30:23])
        begin
            greater=p;
            lesser=c_r;
        end
        else
        begin
            greater=c_r;
            lesser=p;
        end

        Bit#(24) right_shifted= {1'b1,lesser[22:0]} >> ( greater[30:23]-lesser[30:23] );
        Bit#(24) a2,a3;

        if((greater[31] ^ lesser[31])==0)
        begin
            a2=right_shifted;           //Greater,Lesser has same sign. 2's complement not required
            a3={1'b1,greater[22:0]};
        end

        else
        begin
            if(lesser[31]==0)
            begin
                a2 = ~(right_shifted) + 1;   //Lesser is negative. So taking 2's complement for addition
                a3 = {1'b1,greater[22:0]};
            end
            
            else
            begin
                a2=right_shifted;
                a3=(~({1'b1,greater[22:0]}))+1;     //Greater is negative. So taking 2's complement for addition
            end
        end

        //adding the mantissa
        Bit#(25)c2 = adder_24_bit(a2,a3,1'b0);
        
        Bit#(32)out;

        //adjusting the exponent after addition
        Bit#(8)r4;
        if(c2[24]==1'b1)
        begin
            r4=greater[30:23]+1;
            if((greater[31]^lesser[31])==0)
                out={greater[31],r4,c2[23:1]};
            else
                out={1'b1,r4,c2[23:1]};
        end
        else
        begin
            r4=greater[30:23];
            if((greater[31]^lesser[31])==0)
                out={greater[31],r4,c2[22:0]};
            else
                out={1'b1,r4,c2[22:0]};
        end
        out_r<=out;
    endrule:compute

        method Action get_input(Bit#(16)a,Bit#(16)b,Bit#(32)c,Bit#(1)s1);
            a_r<=a;
            b_r<=b;
            c_r<=c;
            s1_r<=s1;
        endmethod : get_input

        method get_result();
            return out_r;

        endmethod : get_result

    endmodule

    module mkTb(Empty);
        Reg#(int) count <- mkReg(1);
        Reg#(Bit#(16)) rg_a  <- mkReg(16'b0100110000000011);        
        Reg#(Bit#(16)) rg_b  <- mkReg(16'b0100111111110000);
        Reg#(Bit#(32)) rg_c  <- mkReg(32'b01010001100011110101110000101001);
        Reg#(Bit#(1)) rg_s1_or_s2 <-mkReg(1'b0);
    
        // Reg#(FloatingPoint#(8,23)) rg_af <- mkReg(16952);        
        // Reg#(FloatingPoint#(8,23)) rg_bf <- mkReg(217); //unpack({1'b1, 8'd0, 23'd0})
        // Reg#(FloatingPoint#(8,23)) rg_cf <- mkReg(1209771492);
        
        MAC_ifc mac <- mkMAC;          
    
        rule inp(count==1);
            mac.get_input(rg_a,rg_b,rg_c,rg_s1_or_s2);
            count <= count+1;
        endrule
    
        rule stall(count < 3 && count>1);
            count <= count+1;
        endrule
    
        rule res(count==3);
            Bit#(32) rg_m = mac.get_result();
            $display("%d  MAC O/P =  %b",count, rg_m);
           // $display("Floating Point OP---- %b", pack(((rg_af*rg_bf)+rg_cf)));
            $finish(0);
        endrule
        endmodule

function Bit#(16) unsignedMul8(Bit#(8) a ,Bit#(8) b);

   //STAGE 1: Partial Product Generation

        Bit#(16)        pp[8];
        Bit#(16)        stage1_op[5];
        Bit#(5)         r1,r2,r3,r4,r5,r6;

        pp[0]   =   {8'd0, a[7:0]& signExtend(b[0])};                        
        pp[1]   =   {7'd0,a[7:0]& signExtend(b[1]),1'b0};             
        pp[2]   =   {6'd0,a[7:0]& signExtend(b[2]),2'd0};             
        pp[3]   =   {5'd0,a[7:0]& signExtend(b[3]),3'd0};            
        pp[4]   =   {4'd0,a[7:0]& signExtend(b[4]),4'd0};          
        pp[5]   =   {3'd0,a[7:0]& signExtend(b[5]),5'd0};
        pp[5]   =   {3'd0,a[7:0]& signExtend(b[5]),5'd0};
        pp[6]   =   {2'd0,a[7:0]& signExtend(b[6]),6'd0};          
        pp[7]   =   {1'd0,a[7:0]& signExtend(b[7]),7'd0}; 

         //Reduction using CLA:
        r1                  =   mk_CLA(pp[0][5:2], pp[1][5:2], pp[2][2]);
        stage1_op[0][5:2]   =   r1[4:1];
        stage1_op[0][6]     =   r1[0];

        r2                  =   mk_CLA(pp[2][7:4], pp[3][7:4], pp[4][4]);
        stage1_op[1][7:4]   =   r2[4:1];
        stage1_op[1][8]     =   r2[0];

        r3                  =   mk_CLA(pp[4][9:6], pp[5][9:6], pp[0][6]);
        stage1_op[2][9:6]   =   r3[4:1];
        stage1_op[2][10]    =   r3[0];

        r4                  =   mk_CLA(pp[6][13:10], pp[7][13:10], pp[5][10]);
        stage1_op[1][13:10]   =   r4[4:1];
        stage1_op[1][14]      =   r4[0];

        r5                  =   mk_CLA({pp[4][11],pp[3][10],pp[2][9:8]}, {pp[5][11],pp[4][10],pp[3][9:8]}, pp[1][8]);
        stage1_op[0][11:8]  =   r5[4:1];
        stage1_op[0][12]    =   r5[0];

        r6                  =   mk_CLA(pp[6][9:6], {pp[7][9:7],pp[1][6]}, 1'b0);
        stage1_op[3][9:6]   =   r6[4:1];
        stage1_op[3][10]    =   r6[0];

        stage1_op[0][15:13] =   {1'b0, pp[7][14],1'b0};
        stage1_op[0][1:0]   =   pp[0][1:0];
        stage1_op[0][7]     =   pp[0][7];
        stage1_op[1][3:0]   =   {pp[2][3],1'b0, pp[1][1], {1'b0}};
        stage1_op[1][9]     =   1'b0;
        stage1_op[1][15]    =   1'b0;                                                                 
        stage1_op[2][15:11] =   {3'b0,pp[5][12],1'b0};
        stage1_op[2][5:0]   =   {pp[4][5],1'b0,pp[3][3], 3'b0};
        stage1_op[3][15:11] =   5'b0;
        stage1_op[3][5:0]   =   {pp[5][5],5'b0};
        stage1_op[4][15:0]  =   {7'b0,1'b0,pp[1][7],7'b0}; 


   //STAGE 2: Reduction using CLA
        Bit#(16)        stage2_op[3];
        Bit#(5)         o1,o2,o3;

        o1                  =   mk_CLA(stage1_op[0][6:3],stage1_op[1][6:3],stage1_op[2][3]);
        stage2_op[0][6:3]   =   o1[4:1];
        stage2_op[0][7]     =   o1[0];

        o2                  =   mk_CLA({stage1_op[0][8:7],stage1_op[2][6:5]}, {stage1_op[1][8:7], stage1_op[3][6:5]}, 1'b0);
        stage2_op[1][8:5]   =   o2[4:1];
        stage2_op[1][9]     =   o2[0];

        o3                  =   mk_CLA(stage1_op[2][10:7], stage1_op[3][10:7], stage1_op[4][7]);
        stage2_op[2][10:7]  =   o3[4:1];
        stage2_op[2][11]    =   o3[0];

        stage2_op[0][15:8]  =   {1'b0,stage1_op[0][14],stage1_op[1][13],stage1_op[0][12:9],stage1_op[4][8]};
        stage2_op[0][2:0]   =   stage1_op[0][2:0];
        stage2_op[1][4:0]   =   {3'b0, stage1_op[1][1], 1'b0};
        stage2_op[1][15:10] =   {1'b0,stage1_op[1][14],1'b0,stage1_op[1][12:10]};
        stage2_op[2][6:0]   =   7'd0;
        stage2_op[2][15:12] =   {1'b0,2'b0,stage1_op[2][12]};
    
   //Stage 3: Reduction using HA and FA
        Bit#(16)        stage3_op[2];
        Bit#(2)         s1,s2,s3,s4,s5,s6;

        s1                  =   mk_HA(stage2_op[0][7], stage2_op[1][7]);
        stage3_op[0][7]     =   s1[1];
        stage3_op[1][8]     =   s1[0];

        s2                  =   mk_FA(stage2_op[0][8],stage2_op[1][8],stage2_op[2][8]);
        stage3_op[0][8]     =   s2[1];
        stage3_op[1][9]     =   s2[0];

        s3                  =   mk_FA(stage2_op[0][9],stage2_op[1][9],stage2_op[2][9]);
        stage3_op[0][9]     =   s3[1];
        stage3_op[1][10]    =   s3[0];

        s4                  =   mk_FA(stage2_op[0][10],stage2_op[1][10],stage2_op[2][10]);
        stage3_op[0][10]    =   s4[1];
        stage3_op[1][11]    =   s4[0];

        s5                  =   mk_FA(stage2_op[0][11],stage2_op[1][11],stage2_op[2][11]);
        stage3_op[0][11]    =   s5[1];
        stage3_op[1][12]    =   s5[0];

        s6                  =   mk_FA(stage2_op[0][12],stage2_op[1][12],stage2_op[2][12]);
        stage3_op[0][12]    =   s6[1];
        stage3_op[1][13]    =   s6[0];

        stage3_op[0][15:13] = {1'b0,stage2_op[0][14:13]};
        stage3_op[0][6:0]   = stage2_op[0][6:0];
        stage3_op[1][15:14] = {1'b0,stage2_op[1][14]};
        stage3_op[1][7:0]   = {stage2_op[2][7], stage2_op[1][6:5], 3'b0, stage2_op[1][1], 1'b0};


    //STAGE 4: Vector Merge Stage
    

        Bit#(16)        stage4_op;
        Bit#(4)         t = 4'd0;
        Bit#(5)         c1,c2,c3,c4;

        c1                  =   mk_CLA(stage3_op[0][3:0],stage3_op[1][3:0], 1'b0);
        stage4_op[3:0]      =   c1[4:1];
        t[0]                =   c1[0];

        c2                  =   mk_CLA(stage3_op[0][7:4],stage3_op[1][7:4], t[0]);
        stage4_op[7:4]      =   c2[4:1];
        t[1]                =   c2[0];

        c3                  =   mk_CLA(stage3_op[0][11:8],stage3_op[1][11:8], t[1]);
        stage4_op[11:8]     =   c3[4:1];
        t[2]                =   c3[0];

        c4                  =   mk_CLA({1'b0,stage3_op[0][14:12]},{1'b0,stage3_op[1][14:12]}, t[2]);
        stage4_op[15:12]    =   c4[4:1];

        return stage4_op;

endfunction:unsignedMul8

//SubModules for Unsigned Multiplier:

//1. 4-bit Carry Lookahead Adder
function Bit#(5) mk_CLA(Bit#(4) a, Bit#(4) b, bit cin);
    Bit#(4)             g,p,sum,carrrg_b;
    bit                 cout;
    g               =   a&b;
    p               =   a^b;
    carrrg_b[0]     =   cin;
    carrrg_b[1]     =   g[0] | p[0]&cin;
    carrrg_b[2]     =   g[1] | p[1]&g[0] | p[1]&p[0]&cin;
    carrrg_b[3]     =   g[2] | p[2]&g[1] | p[2]&p[1]&g[0] | p[2]&p[1]&p[0]&cin;
    cout            =   g[3] | p[3]&g[2] | p[3]&p[2]&g[1] | p[3]&p[2]&p[1]&g[0] | p[3]&p[2]&p[1]&p[0]&cin; 
    sum             =   p ^ carrrg_b;
    return    {sum, cout};
endfunction

//2. Half Adder
function Bit#(2) mk_HA(bit a, bit b);
    Bit#(2) sum;
    sum[1] = a^b;
    sum[0] = a&b;
    return sum;
endfunction

//3. Full Adder
function Bit#(2) mk_FA(bit a, bit b, bit cin);
   Bit#(2) sum;
   sum[1] = a^b^cin;
   sum[0] = (a&b) | (a^b)&cin;
   return sum;
endfunction
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


endpackage

