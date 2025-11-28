module WB_Reg (
    input           clk,
    input           rst_n,

    input           en,
    input           clear,
    // data_in
    input           is_impl_i,
    input           pc_valid_i,
    input  [31:0]   pc_i,
    input  [31:0]   pc_p4_i,
    input  [4:0]    rd_i,
    input  [5:0]    exception_i,
    
    input  [31:0]   bypass_i,
    input  [31:0]   ALU_i,
    input  [31:0]   MUL_DIV_i,
    input  [31:0]   FPU_i,
    input  [31:0]   mem_data_i,
    input  [31:0]   csr_rd_data_i,
    // control_in
    input           reg_wr_en_i,
    input           freg_wr_en_i,
    input  [2:0]    reg_w_sel_i,
    // ===================================
    // data_out
    output          is_impl_o,
    output          pc_valid_o,
    output [31:0]   pc_o,
    output [31:0]   pc_p4_o,
    output [4:0]    rd_o,
    output [5:0]    exception_o,
    
    output [31:0]   bypass_o,
    output [31:0]   ALU_o,
    output [31:0]   MUL_DIV_o,
    output [31:0]   FPU_o,
    output [31:0]   mem_data_o,
    output [31:0]   csr_rd_data_o,
    // control_out
    output          reg_wr_en_o,
    output          freg_wr_en_o,
    output [2:0]    reg_w_sel_o
);

PipelineRegister #(.WIDTH( 1)) reg_is_impl    (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(is_impl_i),     .data_o(is_impl_o));
PipelineRegister #(.WIDTH( 1)) reg_pc_valid   (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(pc_valid_i),    .data_o(pc_valid_o));
PipelineRegister #(.WIDTH(32)) reg_pc         (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en),  .data_i(pc_i),         .data_o(pc_o));
PipelineRegister #(.WIDTH(32)) reg_pc_p4      (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(pc_p4_i),       .data_o(pc_p4_o));
PipelineRegister #(.WIDTH( 5)) reg_rd         (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(rd_i),          .data_o(rd_o));
PipelineRegister #(.WIDTH( 6)) reg_exception  (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(exception_i),   .data_o(exception_o));

PipelineRegister #(.WIDTH(32)) reg_bypass     (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(bypass_i),      .data_o(bypass_o));
PipelineRegister #(.WIDTH(32)) reg_alu        (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(ALU_i),         .data_o(ALU_o));
PipelineRegister #(.WIDTH(32)) reg_mul_div    (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(MUL_DIV_i),     .data_o(MUL_DIV_o));
PipelineRegister #(.WIDTH(32)) reg_fpu        (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(FPU_i),         .data_o(FPU_o));
PipelineRegister #(.WIDTH(32)) reg_mem_data   (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(mem_data_i),    .data_o(mem_data_o));
PipelineRegister #(.WIDTH(32)) csr_rd_data    (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(csr_rd_data_i), .data_o(csr_rd_data_o));

PipelineRegister #(.WIDTH( 1)) reg_reg_wr_en  (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(reg_wr_en_i),   .data_o(reg_wr_en_o));
PipelineRegister #(.WIDTH( 1)) reg_freg_wr_en (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(freg_wr_en_i),  .data_o(freg_wr_en_o));
PipelineRegister #(.WIDTH( 3)) reg_reg_w_sel  (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(reg_w_sel_i),   .data_o(reg_w_sel_o));

endmodule
