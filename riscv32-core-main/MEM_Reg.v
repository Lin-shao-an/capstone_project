module MEM_Reg(
    input           clk,
    input           rst_n,

    input           en,
    input           clear,
    // data_in
    input           pc_valid_i,
    input  [31:0]   pc_i,
    input  [31:0]   pc_p4_i,
    input  [31:0]   ALU_i,
    input  [31:0]   reg_rd_data2_i,
    input  [4:0]    rd_i,
    input  [31:0]   csr_rd_data_i,
    // control_in
    input           reg_wr_en_i,
    input  [1:0]    reg_w_sel_i,

    input           mem_wr_en_i,
    input           mem_rd_en_i,
    input  [3:0]    mem_ctrl_i,
    // ===================================
    // data_out
    output          pc_valid_o,
    output [31:0]   pc_o,
    output [31:0]   pc_p4_o,
    output [31:0]   ALU_o,
    output [31:0]   reg_rd_data2_o,
    output [4:0]    rd_o,
    output [31:0]   csr_rd_data_o,
    // control_out
    output          reg_wr_en_o,
    output [1:0]    reg_w_sel_o,

    output          mem_wr_en_o,
    output          mem_rd_en_o,
    output [3:0]    mem_ctrl_o
);

// data_in
PipelineRegister #(.WIDTH( 1)) reg_pc_valid   (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(pc_valid_i),       .data_o(pc_valid_o));
PipelineRegister #(.WIDTH(32)) reg_pc         (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(pc_i),             .data_o(pc_o));
PipelineRegister #(.WIDTH(32)) reg_pc_p4      (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(pc_p4_i),          .data_o(pc_p4_o));
PipelineRegister #(.WIDTH(32)) reg_ALU        (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(ALU_i),            .data_o(ALU_o));
PipelineRegister #(.WIDTH(32)) reg_rd_data2   (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(reg_rd_data2_i),   .data_o(reg_rd_data2_o));
PipelineRegister #(.WIDTH(5))  reg_rd         (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(rd_i),             .data_o(rd_o));
PipelineRegister #(.WIDTH(32)) csr_rd_data    (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(csr_rd_data_i),    .data_o(csr_rd_data_o));
// control_in
PipelineRegister #(.WIDTH(1))  reg_reg_wr_en  (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(reg_wr_en_i),      .data_o(reg_wr_en_o));
PipelineRegister #(.WIDTH(2))  reg_reg_w_sel  (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(reg_w_sel_i),      .data_o(reg_w_sel_o));

PipelineRegister #(.WIDTH(1))  reg_mem_wr_en  (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(mem_wr_en_i),      .data_o(mem_wr_en_o));
PipelineRegister #(.WIDTH(1))  reg_mem_rd_en  (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(mem_rd_en_i),      .data_o(mem_rd_en_o));
PipelineRegister #(.WIDTH(4))  reg_mem_ctrl   (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(mem_ctrl_i),       .data_o(mem_ctrl_o));

endmodule
