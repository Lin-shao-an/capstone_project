module DIV_Reg (
    input           clk,
    input           rst_n,
    input           start_i,
    input  [31:0]   r_i,
    input  [33:0]   d_i,
    input  [33:0]   neg_d_i,
    input  [65:0]   r_1_i,
    input  [65:0]   r_2_i,
    input  [31:0]   pos_q_i,
    input  [31:0]   neg_q_i,
    input  [4:0]    shift_i,
    input           r_sign_i, 
    input           d_sign_i,
    input           unsign_i,
    input           rem_i,

    output          start_o,
    output [31:0]   r_o,
    output [33:0]   d_o,
    output [33:0]   neg_d_o,
    output [65:0]   r_1_o,
    output [65:0]   r_2_o,
    output [31:0]   pos_q_o,
    output [31:0]   neg_q_o,
    output [4:0]    shift_o,
    output          r_sign_o, 
    output          d_sign_o,
    output          unsign_o,
    output          rem_o
);

PipelineRegister #(.WIDTH( 1)) reg_start    (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(start_i),    .data_o(start_o));
PipelineRegister #(.WIDTH(32)) reg_r        (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(r_i),        .data_o(r_o));
PipelineRegister #(.WIDTH(34)) reg_d        (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(d_i),        .data_o(d_o));
PipelineRegister #(.WIDTH(34)) reg_neg_d    (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(neg_d_i),    .data_o(neg_d_o));
PipelineRegister #(.WIDTH(66)) reg_r_1      (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(r_1_i),      .data_o(r_1_o));
PipelineRegister #(.WIDTH(66)) reg_r_2      (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(r_2_i),      .data_o(r_2_o));
PipelineRegister #(.WIDTH(32)) reg_pos_q    (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(pos_q_i),    .data_o(pos_q_o));
PipelineRegister #(.WIDTH(32)) reg_neg_q    (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(neg_q_i),    .data_o(neg_q_o));
PipelineRegister #(.WIDTH( 5)) reg_shift    (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(shift_i),    .data_o(shift_o));
PipelineRegister #(.WIDTH( 1)) reg_r_sign   (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(r_sign_i),   .data_o(r_sign_o));
PipelineRegister #(.WIDTH( 1)) reg_d_sign   (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(d_sign_i),   .data_o(d_sign_o));
PipelineRegister #(.WIDTH( 1)) reg_unsign   (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(unsign_i),   .data_o(unsign_o));
PipelineRegister #(.WIDTH( 1)) reg_rem      (.clk(clk), .rst_n(rst_n), .clear(1'b0), .en(1'b1), .data_i(rem_i),      .data_o(rem_o));

endmodule
