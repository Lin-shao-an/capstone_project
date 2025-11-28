module ID_Reg (
    input           clk,
    input           rst_n,
    input           en,
    input           clear,
    input           pc_valid_i,
    input  [31:0]   pc_i,
    input  [31:0]   pc_p4_i,
    input           bp_pred_taken_i,
    input  [31:0]   bp_pred_target_i,
    output          bp_pred_taken_o,
    output [31:0]   bp_pred_target_o,

    output          pc_valid_o,
    output [31:0]   pc_o,
    output [31:0]   pc_p4_o,
    input  [31:0]   inst_i,
    output [31:0]   inst_o
);

PipelineRegister #(.WIDTH( 1)) reg_pc_valid (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(pc_valid_i),   .data_o(pc_valid_o));
PipelineRegister #(.WIDTH(32)) reg_pc       (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(pc_i),   .data_o(pc_o));
PipelineRegister #(.WIDTH(32)) reg_pc4      (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(pc_p4_i), .data_o(pc_p4_o));
PipelineRegister #(.WIDTH(32)) reg_inst     (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(inst_i), .data_o(inst_o));

PipelineRegister #(.WIDTH( 1)) reg_bp_pred_taken (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(bp_pred_taken_i), .data_o(bp_pred_taken_o));
PipelineRegister #(.WIDTH(32)) reg_bp_pred_target (.clk(clk), .rst_n(rst_n), .clear(clear), .en(en), .data_i(bp_pred_target_i), .data_o(bp_pred_target_o));

endmodule
