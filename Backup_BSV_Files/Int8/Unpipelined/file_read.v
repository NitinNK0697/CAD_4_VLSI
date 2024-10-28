module file_read(
input clk,
input RST,
input EN,
input CLK_GATE,
input read,
output reg [7:0]out_a,
output reg [7:0]out_b,
output reg [31:0]out_c,
output reg [31:0]out_mac
);

reg [7:0]a_bin[1048:0];
reg [7:0]b_bin[1048:0];
reg [31:0]c_bin[1048:0];
reg [31:0]mac_bin[1048:0];
integer c=0;

initial 
begin
  $readmemb("A_binary.txt",a_bin);
  $readmemb("B_binary.txt",b_bin);
  $readmemb("C_binary.txt",c_bin);
  $readmemb("MAC_binary.txt",mac_bin);
end

always@(posedge clk)
begin
  if(read&&(c<1000))
    begin
    out_a <= a_bin[c];
    out_b <= b_bin[c];
    out_c <= c_bin[c];
    out_mac <= mac_bin[c];
    c <= c+1;
    end
  else
    begin
      out_a <= 16'd0;
      out_b <= 16'd0;
      out_c <= 32'd0;
      out_mac <= 32'd0;
      c <= 0;
    end


end

 /* #20
  f = $fopen("A_int.txt","w");
  #2
  for (i = 0; i<1000; i=i+1) 
    begin
        $fwrite(f,"%d\n",a[i]);
    end
    $fclose(f); 
  */
endmodule

/*module mkTb;
  reg clk;
  reg RST;
  reg EN;
  reg CLK_GATE;
  reg read;
  wire [15:0]out_a;
  wire [15:0]out_b;
  wire [31:0]out_c;
  integer i;

  file_read F1(clk,1'b0,1'b1,1'b1,1'b1,out_a,out_b,out_c);
  initial begin
    clk = 0;
  end
  always #5 clk = ~clk;

  always@(posedge clk) begin
      $display("A: %b",out_a);
  end

  initial begin
    #300 $finish();
  end
endmodule
*/