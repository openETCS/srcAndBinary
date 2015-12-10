/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_L23_Postprocessing_TA_MA_new.h"

#ifndef KCG_USER_DEFINED_INIT
void MA_L23_Postprocessing_init_TA_MA_new(
  outC_MA_L23_Postprocessing_TA_MA_new *outC)
{
  kcg_int i;
  
  outC->MA_available = kcg_true;
  outC->MA_absolute.valid = kcg_true;
  outC->MA_absolute.Level = MA_L1_TrackAtlasTypes;
  outC->MA_absolute.q_dir = Q_DIR_Reverse;
  outC->MA_absolute.v_main = 0;
  outC->MA_absolute.v_loa = 0;
  outC->MA_absolute.t_loa_unlimited = kcg_true;
  outC->MA_absolute.t_loa = 0;
  outC->MA_absolute.n_iter = 0;
  for (i = 0; i < 10; i++) {
    outC->MA_absolute.sections[i].valid = kcg_true;
    outC->MA_absolute.sections[i].q_endsection = kcg_true;
    outC->MA_absolute.sections[i].l_section = 0;
    outC->MA_absolute.sections[i].q_sectiontimer = kcg_true;
    outC->MA_absolute.sections[i].t_sectiontimer = 0;
    outC->MA_absolute.sections[i].d_sectiontimerstoploc = 0;
  }
  outC->MA_absolute.q_dangerpoint = kcg_true;
  outC->MA_absolute.dangerpoint.d_DP_or_OL = 0;
  outC->MA_absolute.dangerpoint.v_release = 0;
  outC->MA_absolute.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_absolute.q_overlap = kcg_true;
  outC->MA_absolute.overlap.d_DP_or_OL = 0;
  outC->MA_absolute.overlap.v_release = 0;
  outC->MA_absolute.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_absolute.q_endtimer = kcg_true;
  outC->MA_absolute.endtimer_t.t_endtimer = 0;
  outC->MA_absolute.endtimer_t.d_endtimerstoploc = 0;
  outC->MA_at_LRBG.valid = kcg_true;
  outC->MA_at_LRBG.Level = MA_L1_TrackAtlasTypes;
  outC->MA_at_LRBG.q_dir = Q_DIR_Reverse;
  outC->MA_at_LRBG.v_main = 0;
  outC->MA_at_LRBG.v_loa = 0;
  outC->MA_at_LRBG.t_loa_unlimited = kcg_true;
  outC->MA_at_LRBG.t_loa = 0;
  outC->MA_at_LRBG.n_iter = 0;
  for (i = 0; i < 10; i++) {
    outC->MA_at_LRBG.sections[i].valid = kcg_true;
    outC->MA_at_LRBG.sections[i].q_endsection = kcg_true;
    outC->MA_at_LRBG.sections[i].l_section = 0;
    outC->MA_at_LRBG.sections[i].q_sectiontimer = kcg_true;
    outC->MA_at_LRBG.sections[i].t_sectiontimer = 0;
    outC->MA_at_LRBG.sections[i].d_sectiontimerstoploc = 0;
  }
  outC->MA_at_LRBG.q_dangerpoint = kcg_true;
  outC->MA_at_LRBG.dangerpoint.d_DP_or_OL = 0;
  outC->MA_at_LRBG.dangerpoint.v_release = 0;
  outC->MA_at_LRBG.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_at_LRBG.q_overlap = kcg_true;
  outC->MA_at_LRBG.overlap.d_DP_or_OL = 0;
  outC->MA_at_LRBG.overlap.v_release = 0;
  outC->MA_at_LRBG.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_at_LRBG.q_endtimer = kcg_true;
  outC->MA_at_LRBG.endtimer_t.t_endtimer = 0;
  outC->MA_at_LRBG.endtimer_t.d_endtimerstoploc = 0;
  /* 1 */ Update_MA_init_TA_MA_new(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_L23_Postprocessing_reset_TA_MA_new(
  outC_MA_L23_Postprocessing_TA_MA_new *outC)
{
  /* 1 */ Update_MA_reset_TA_MA_new(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_new::MA_L23_Postprocessing */
void MA_L23_Postprocessing_TA_MA_new(
  /* TA_MA_new::MA_L23_Postprocessing::Profile_in */ MovementAuthority_t_TrackAtlasTypes *Profile_in,
  /* TA_MA_new::MA_L23_Postprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MA_L23_Postprocessing_TA_MA_new *outC)
{
  /* 1 */ Update_MA_TA_MA_new(Profile_in, &outC->Context_1);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_absolute,
    &outC->Context_1.MA_in_force);
  /* 1 */
  MA_Normalize_MA_LRBG_TA_MA_new(
    &outC->MA_absolute,
    pos_LRBG,
    &outC->MA_at_LRBG);
  outC->MA_available = outC->MA_absolute.valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_L23_Postprocessing_TA_MA_new.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

