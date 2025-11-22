// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_CSRFile.h"

VL_ATTR_COLD void VComputer_CSRFile___ctor_var_reset(VComputer_CSRFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputer_CSRFile___ctor_var_reset\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__cpu_id_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17716042512655663375ull);
    vlSelf->__PVT__misa_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1795218194430829922ull);
    vlSelf->__PVT__exception_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12130853313480592709ull);
    vlSelf->__PVT__exception_pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4367809251299883802ull);
    vlSelf->__PVT__exception_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8206873326730722983ull);
    vlSelf->csr_rd_addr_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12286165439502110966ull);
    vlSelf->__PVT__csr_rd_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3560047586967960218ull);
    vlSelf->__PVT__csr_wr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3483255979420883487ull);
    vlSelf->__PVT__csr_wr_addr_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13628206993137463069ull);
    vlSelf->__PVT__csr_wr_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17668281143974838476ull);
    vlSelf->__PVT__magic_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9092269294945577500ull);
    vlSelf->__PVT__csr_branch_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18282554067017894353ull);
    vlSelf->__PVT__csr_target_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17920179322722076055ull);
    vlSelf->__PVT__priv_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 977413424471612361ull);
    vlSelf->__PVT__mstatus_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11762524804381502769ull);
    vlSelf->__PVT__satp_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11351852144089682277ull);
    vlSelf->__PVT__interrupt_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 761880671729982424ull);
    vlSelf->__PVT__csr_priv_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2408923963999225424ull);
    vlSelf->__PVT__csr_priv_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14820922485002687565ull);
    vlSelf->__PVT__csr_mvendorid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1546754720082894470ull);
    vlSelf->__PVT__csr_marchid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11278133342508259551ull);
    vlSelf->__PVT__csr_mimpid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11436806015053943759ull);
    vlSelf->__PVT__csr_mhartid_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14152157126555167477ull);
    vlSelf->__PVT__csr_mconfigptr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 942331954654795246ull);
    vlSelf->__PVT__csr_mstatus_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14701453540317848195ull);
    vlSelf->__PVT__csr_medeleg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18404613532138910756ull);
    vlSelf->__PVT__csr_mideleg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14476863204005659738ull);
    vlSelf->__PVT__csr_mie_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4025060991301694264ull);
    vlSelf->__PVT__csr_mtvec_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6917498490170172483ull);
    vlSelf->__PVT__csr_mcounteren_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1266977566784286243ull);
    vlSelf->__PVT__csr_mstatush_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5010330932746422738ull);
    vlSelf->__PVT__csr_medelegh_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13106638616314501633ull);
    vlSelf->__PVT__csr_mscratch_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2130500537598733536ull);
    vlSelf->__PVT__csr_mepc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8912300469024302932ull);
    vlSelf->__PVT__csr_mcause_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2475974312391508953ull);
    vlSelf->__PVT__csr_mtval_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4421981254517084566ull);
    vlSelf->__PVT__csr_mip_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2352073457626462460ull);
    vlSelf->__PVT__csr_mip_next_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3719699992058465556ull);
    vlSelf->__PVT__csr_mtinst_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4684348301848931213ull);
    vlSelf->__PVT__csr_mtval2_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7574078341504143544ull);
    vlSelf->__PVT__csr_menvcfg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2006376645260194623ull);
    vlSelf->__PVT__csr_menvcfgh_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1479622764063399586ull);
    vlSelf->__PVT__csr_mseccfg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3856845328568185021ull);
    vlSelf->__PVT__csr_mseccfgh_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10349434355594439108ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__csr_pmpcfg_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3288185211760327718ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__csr_mstateen_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13452407571381349764ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__csr_mstateenh_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2497285590520570547ull);
    }
    vlSelf->__PVT__csr_mnscratch_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8585273397184273724ull);
    vlSelf->__PVT__csr_mnepc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15235489095156197860ull);
    vlSelf->__PVT__csr_mncause_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15800094697197084892ull);
    vlSelf->__PVT__csr_mnstatus_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6983022039504747170ull);
    vlSelf->__PVT__csr_mcycle_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10959796255019943024ull);
    vlSelf->__PVT__csr_minstret_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17391570586917038233ull);
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->__PVT__csr_mhpmcounter_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12389172770069212737ull);
    }
    vlSelf->__PVT__csr_mcycleh_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1370290869393970872ull);
    vlSelf->__PVT__csr_minstreth_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15750006460517316396ull);
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->__PVT__csr_mhpmcounterh_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5994341651025603580ull);
    }
    vlSelf->__PVT__csr_mcountinhibit_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8953712574980252022ull);
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->__PVT__csr_mhpmevent_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7966303397327026041ull);
    }
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->__PVT__csr_mhpmeventh_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16473881803027893286ull);
    }
    vlSelf->__PVT__csr_fflags_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17172553408612420830ull);
    vlSelf->__PVT__csr_frm_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4973142039206688742ull);
    vlSelf->__PVT__csr_mtimecmp_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14667360920669187241ull);
    vlSelf->__PVT__csr_mtime_ie_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6964060437912043177ull);
    vlSelf->csr_serial_flags_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3803832299516130146ull);
    vlSelf->csr_serial_io_in_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 850749087468163125ull);
    vlSelf->csr_serial_io_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6681476683948399380ull);
    vlSelf->__PVT__csr_satp_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17437457563691655291ull);
    vlSelf->__PVT__m_enabled_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 356325133909382512ull);
    vlSelf->__PVT__m_interrupts_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7937966725322070420ull);
    vlSelf->__PVT__irq_priv_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3720668572823454618ull);
    vlSelf->__PVT__csr_mip_upd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1479218429812218031ull);
    vlSelf->__PVT__csr_mvendorid_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3079002224423234919ull);
    vlSelf->__PVT__csr_marchid_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7864366093355019147ull);
    vlSelf->__PVT__csr_mimpid_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6642981265522188210ull);
    vlSelf->__PVT__csr_mhartid_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7551499166836847067ull);
    vlSelf->__PVT__csr_mconfigptr_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11885393649017916813ull);
    vlSelf->__PVT__csr_mstatus_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10449056739639039835ull);
    vlSelf->__PVT__csr_medeleg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14924343827292293471ull);
    vlSelf->__PVT__csr_mideleg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3077561826692943509ull);
    vlSelf->__PVT__csr_mie_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7600183045796380083ull);
    vlSelf->__PVT__csr_mtvec_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9228904751842526200ull);
    vlSelf->__PVT__csr_mcounteren_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16168508712727420987ull);
    vlSelf->__PVT__csr_mstatush_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5936985738818847413ull);
    vlSelf->__PVT__csr_mscratch_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8492874606594875334ull);
    vlSelf->__PVT__csr_mepc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10905623840785589150ull);
    vlSelf->__PVT__csr_mcause_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7794308365916900321ull);
    vlSelf->__PVT__csr_mtval_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13395408491760829441ull);
    vlSelf->__PVT__csr_mip_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14335505585088405272ull);
    vlSelf->__PVT__csr_mip_next_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11233538661788183565ull);
    vlSelf->__PVT__csr_mtinst_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16839753948174689367ull);
    vlSelf->__PVT__csr_mtval2_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10499361235972959091ull);
    vlSelf->__PVT__csr_menvcfg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9449792542487347678ull);
    vlSelf->__PVT__csr_menvcfgh_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9064248266492749410ull);
    vlSelf->__PVT__csr_mseccfg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7310469166695445821ull);
    vlSelf->__PVT__csr_mseccfgh_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4062900675149693333ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__csr_pmpcfg_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17551521812712909183ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__csr_mstateen_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7714166836269545856ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__csr_mstateenh_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4150729795435647621ull);
    }
    vlSelf->__PVT__csr_mnscratch_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15451537784231495589ull);
    vlSelf->__PVT__csr_mnepc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10470447640764683555ull);
    vlSelf->__PVT__csr_mncause_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 33398388518141711ull);
    vlSelf->__PVT__csr_mnstatus_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13879765262627129164ull);
    vlSelf->__PVT__csr_mcycle_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 231082342683691814ull);
    vlSelf->__PVT__csr_minstret_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2227073511923686510ull);
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->__PVT__csr_mhpmcounter_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14155193287959691155ull);
    }
    vlSelf->__PVT__csr_mcycleh_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6086625193649817659ull);
    vlSelf->__PVT__csr_minstreth_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4970312320196091540ull);
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->__PVT__csr_mhpmcounterh_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14414315176908812146ull);
    }
    vlSelf->__PVT__csr_mcountinhibit_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18361946099206477268ull);
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->__PVT__csr_mhpmevent_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7751576173202523294ull);
    }
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->__PVT__csr_mhpmeventh_r[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12395918938320449976ull);
    }
    vlSelf->__PVT__csr_fflags_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1694737418156695885ull);
    vlSelf->__PVT__csr_frm_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15542957184153113745ull);
    vlSelf->__PVT__csr_mtimecmp_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8723940675969758911ull);
    vlSelf->__PVT__csr_mtime_ie_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4671391092657200488ull);
    vlSelf->__PVT__csr_serial_flags_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3458639030311962761ull);
    vlSelf->__PVT__csr_serial_io_in_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3440433754754072915ull);
    vlSelf->__PVT__csr_serial_io_out_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9407710499029179687ull);
    vlSelf->__PVT__csr_satp_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7606248848705312336ull);
    vlSelf->__PVT__csr_magic_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8930661138295237170ull);
    vlSelf->__PVT__csr_branch_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17888862890337664116ull);
    vlSelf->__PVT__csr_target_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11771776484466507903ull);
}
