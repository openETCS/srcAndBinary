/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DecodeEndsection_TA_MA.h"

/* TA_MA::DecodeEndsection */
void DecodeEndsection_TA_MA(
  /* TA_MA::DecodeEndsection::l_endsection */ L_ENDSECTION l_endsection,
  /* TA_MA::DecodeEndsection::q_scale */ Q_SCALE q_scale,
  /* TA_MA::DecodeEndsection::q_sectiontimer */ Q_SECTIONTIMER q_sectiontimer,
  /* TA_MA::DecodeEndsection::t_sectiontimer */ T_SECTIONTIMER t_sectiontimer,
  /* TA_MA::DecodeEndsection::d_sectiontimerstoploc */ D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc,
  /* TA_MA::DecodeEndsection::section */ MovementAuthoritySection_t_TrackAtlasTypes *section)
{
  (*section).valid = kcg_true;
  (*section).q_endsection = kcg_true;
  (*section).q_sectiontimer =
    Q_SECTIONTIMER_Section_Timer_information_to_follow == q_sectiontimer;
  (*section).t_sectiontimer = 1000 * t_sectiontimer;
  (*section).l_section = /* 1 */ Eval_Q_SCALE_TA_MRSP(q_scale, l_endsection);
  (*section).d_sectiontimerstoploc = /* 3 */
    Eval_Q_SCALE_TA_MRSP(q_scale, d_sectiontimerstoploc);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DecodeEndsection_TA_MA.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

