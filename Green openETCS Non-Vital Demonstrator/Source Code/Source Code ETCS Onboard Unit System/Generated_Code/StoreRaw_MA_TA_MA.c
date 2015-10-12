/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StoreRaw_MA_TA_MA.h"

#ifndef KCG_USER_DEFINED_INIT
void StoreRaw_MA_init_TA_MA(outC_StoreRaw_MA_TA_MA *outC)
{
  static kcg_int i;
  
  outC->vald_MA = kcg_true;
  outC->new_MA = kcg_true;
  outC->init = kcg_true;
  outC->MA_onboard_out.valid = kcg_true;
  outC->MA_onboard_out.q_dir = Q_DIR_Reverse;
  outC->MA_onboard_out.q_scale = Q_SCALE_10_cm_scale;
  outC->MA_onboard_out.v_loa = 0;
  outC->MA_onboard_out.t_loa = 0;
  outC->MA_onboard_out.n_iter = 0;
  for (i = 0; i < 32; i++) {
    outC->MA_onboard_out.sections[i].valid = kcg_true;
    outC->MA_onboard_out.sections[i].l_section = 0;
    outC->MA_onboard_out.sections[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->MA_onboard_out.sections[i].t_sectiontimer = 0;
    outC->MA_onboard_out.sections[i].d_sectiontimerstoploc = 0;
  }
  outC->MA_onboard_out.l_endsection = 0;
  outC->MA_onboard_out.q_sectiontimer =
    Q_SECTIONTIMER_No_Section_Timer_information;
  outC->MA_onboard_out.t_sectiontimer = 0;
  outC->MA_onboard_out.d_sectiontimerstoploc = 0;
  outC->MA_onboard_out.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->MA_onboard_out.t_endtimer = 0;
  outC->MA_onboard_out.d_endtimerstartloc = 0;
  outC->MA_onboard_out.q_dangerpoint =
    Q_DANGERPOINT_No_danger_point_information;
  outC->MA_onboard_out.d_dp = 0;
  outC->MA_onboard_out.v_releasedp = 0;
  outC->MA_onboard_out.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->MA_onboard_out.d_startol = 0;
  outC->MA_onboard_out.t_ol = 0;
  outC->MA_onboard_out.d_ol = 0;
  outC->MA_onboard_out.v_releaseol = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void StoreRaw_MA_reset_TA_MA(outC_StoreRaw_MA_TA_MA *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA::StoreRaw_MA */
void StoreRaw_MA_TA_MA(
  /* TA_MA::StoreRaw_MA::packets_in */ CompressedPackets_T_Common_Types_Pkg *packets_in,
  outC_StoreRaw_MA_TA_MA *outC)
{
  /* TA_MA::StoreRaw_MA::_L22 */
  static P015_OBU_T_TM _L22;
  
  /* 1 */ Read_P015_TM(packets_in, &outC->new_MA, &_L22);
  /* ck_new_MA */ if (outC->new_MA) {
    /* 1 */ MA_storage_TA_MA(&_L22, &outC->MA_onboard_out, &outC->vald_MA);
  }
  else if (outC->init) {
    outC->vald_MA = kcg_false;
    kcg_copy_P015_OBU_T_TM(
      &outC->MA_onboard_out,
      (P015_OBU_T_TM *) &INIT_P15_OBU_TA_MA);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** StoreRaw_MA_TA_MA.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

