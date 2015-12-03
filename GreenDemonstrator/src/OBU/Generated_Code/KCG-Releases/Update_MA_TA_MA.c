/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_MA_TA_MA.h"

#ifndef KCG_USER_DEFINED_INIT
void Update_MA_init_TA_MA(outC_Update_MA_TA_MA *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->MA_in_force.valid = kcg_true;
  outC->MA_in_force.Level = MA_L1_TrackAtlasTypes;
  outC->MA_in_force.q_dir = Q_DIR_Reverse;
  outC->MA_in_force.v_main = 0;
  outC->MA_in_force.v_loa = 0;
  outC->MA_in_force.t_loa_unlimited = kcg_true;
  outC->MA_in_force.t_loa = 0;
  outC->MA_in_force.n_iter = 0;
  for (i = 0; i < 10; i++) {
    outC->MA_in_force.sections[i].valid = kcg_true;
    outC->MA_in_force.sections[i].q_endsection = kcg_true;
    outC->MA_in_force.sections[i].l_section = 0;
    outC->MA_in_force.sections[i].q_sectiontimer = kcg_true;
    outC->MA_in_force.sections[i].t_sectiontimer = 0;
    outC->MA_in_force.sections[i].d_sectiontimerstoploc = 0;
  }
  outC->MA_in_force.q_dangerpoint = kcg_true;
  outC->MA_in_force.dangerpoint.d_DP_or_OL = 0;
  outC->MA_in_force.dangerpoint.v_release = 0;
  outC->MA_in_force.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_in_force.q_overlap = kcg_true;
  outC->MA_in_force.overlap.d_DP_or_OL = 0;
  outC->MA_in_force.overlap.v_release = 0;
  outC->MA_in_force.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_in_force.q_endtimer = kcg_true;
  outC->MA_in_force.endtimer_t.t_endtimer = 0;
  outC->MA_in_force.endtimer_t.d_endtimerstoploc = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Update_MA_reset_TA_MA(outC_Update_MA_TA_MA *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA::Update_MA */
void Update_MA_TA_MA(
  /* TA_MA::Update_MA::ProfileIn */ MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  outC_Update_MA_TA_MA *outC)
{
  /* TA_MA::Update_MA::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_MA::Update_MA::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_MA::Update_MA::action */
  static ActionType_TA_MA action;
  
  /* 1 */ if ((*ProfileIn).valid) {
    action = replace_MA_TA_MA;
  }
  else {
    action = keep_MA_TA_MA;
  }
  IfBlock1_clock = action == replace_MA_TA_MA;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->MA_in_force, ProfileIn);
  }
  else {
    else_clock_IfBlock1 = action == delete_MA_TA_MA;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &outC->MA_in_force,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
    }
    else /* last_init_ck_MA_in_force */ if (outC->init) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &outC->MA_in_force,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
    }
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Update_MA_TA_MA.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

