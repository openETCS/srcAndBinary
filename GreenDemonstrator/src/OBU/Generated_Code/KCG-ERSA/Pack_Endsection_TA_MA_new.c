/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Pack_Endsection_TA_MA_new.h"

/* TA_MA_new::Pack_Endsection */
void Pack_Endsection_TA_MA_new(
  /* TA_MA_new::Pack_Endsection::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA_new::Pack_Endsection::endsection */ P015_section_enum_T_TM *endsection)
{
  (*endsection).valid = kcg_true;
  (*endsection).l_section = (*Packet15_in).l_endsection;
  (*endsection).q_sectiontimer = (*Packet15_in).q_sectiontimer;
  (*endsection).t_sectiontimer = (*Packet15_in).t_sectiontimer;
  (*endsection).d_sectiontimerstoploc = (*Packet15_in).d_sectiontimerstoploc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Pack_Endsection_TA_MA_new.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

