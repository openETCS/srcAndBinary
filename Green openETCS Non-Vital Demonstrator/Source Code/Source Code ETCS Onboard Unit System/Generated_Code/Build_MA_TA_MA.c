/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_TA_MA.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_MA_init_TA_MA(outC_Build_MA_TA_MA *outC)
{
  static kcg_int i;
  
  outC->new_MA = kcg_true;
  outC->vald_MA = kcg_true;
  outC->currentEOA = 0;
  outC->MA_onboard_out.valid = kcg_true;
  outC->MA_onboard_out.Level = MA_L1_TrackAtlasTypes;
  outC->MA_onboard_out.q_dir = Q_DIR_Reverse;
  outC->MA_onboard_out.v_main = 0;
  outC->MA_onboard_out.v_loa = 0;
  outC->MA_onboard_out.t_loa_unlimited = kcg_true;
  outC->MA_onboard_out.t_loa = 0;
  outC->MA_onboard_out.n_iter = 0;
  for (i = 0; i < 10; i++) {
    outC->MA_onboard_out.sections[i].valid = kcg_true;
    outC->MA_onboard_out.sections[i].q_endsection = kcg_true;
    outC->MA_onboard_out.sections[i].l_section = 0;
    outC->MA_onboard_out.sections[i].q_sectiontimer = kcg_true;
    outC->MA_onboard_out.sections[i].t_sectiontimer = 0;
    outC->MA_onboard_out.sections[i].d_sectiontimerstoploc = 0;
  }
  outC->MA_onboard_out.q_dangerpoint = kcg_true;
  outC->MA_onboard_out.dangerpoint.d_DP_or_OL = 0;
  outC->MA_onboard_out.dangerpoint.v_release = 0;
  outC->MA_onboard_out.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_onboard_out.q_overlap = kcg_true;
  outC->MA_onboard_out.overlap.d_DP_or_OL = 0;
  outC->MA_onboard_out.overlap.v_release = 0;
  outC->MA_onboard_out.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_onboard_out.q_endtimer = kcg_true;
  outC->MA_onboard_out.endtimer_t.t_endtimer = 0;
  outC->MA_onboard_out.endtimer_t.d_endtimerstoploc = 0;
  /* 1 */ StoreRaw_MA_init_TA_MA(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MA_reset_TA_MA(outC_Build_MA_TA_MA *outC)
{
  /* 1 */ StoreRaw_MA_reset_TA_MA(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA::Build_MA */
void Build_MA_TA_MA(
  /* TA_MA::Build_MA::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MA::Build_MA::NV_onboard_in */ P003V1_OBU_T_TM_baseline2 *NV_onboard_in,
  /* TA_MA::Build_MA::reject_new_MA */ kcg_bool reject_new_MA,
  /* TA_MA::Build_MA::updatedEOA_from_EM */ kcg_bool updatedEOA_from_EM,
  /* TA_MA::Build_MA::newEOA_from_EM */ L_internal_Type_Obu_BasicTypes_Pkg newEOA_from_EM,
  outC_Build_MA_TA_MA *outC)
{
  /* TA_MA::Build_MA::_L3 */
  static P015_OBU_T_TM _L3;
  
  /* 1 */ StoreRaw_MA_TA_MA(&(*MessageIn).packets, &outC->Context_1);
  outC->vald_MA = outC->Context_1.vald_MA;
  outC->new_MA = outC->Context_1.new_MA;
  kcg_copy_P015_OBU_T_TM(&_L3, &outC->Context_1.MA_onboard_out);
  /* 1 */ Decode_P015_TA_MA(&_L3, NV_onboard_in, &outC->MA_onboard_out);
  outC->currentEOA = 0;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_TA_MA.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

