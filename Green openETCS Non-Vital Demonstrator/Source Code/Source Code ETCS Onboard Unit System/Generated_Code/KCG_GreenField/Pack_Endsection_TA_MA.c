/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Pack_Endsection_TA_MA.h"

/* TA_MA::Pack_Endsection */
void Pack_Endsection_TA_MA(
  /* TA_MA::Pack_Endsection::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA::Pack_Endsection::endsection */ P015_section_enum_T_TM *endsection)
{
  (*endsection).valid = kcg_true;
  (*endsection).l_section = (*Packet15_in).l_endsection;
  (*endsection).q_sectiontimer = (*Packet15_in).q_sectiontimer;
  (*endsection).t_sectiontimer = (*Packet15_in).t_sectiontimer;
  (*endsection).d_sectiontimerstoploc = (*Packet15_in).d_sectiontimerstoploc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Pack_Endsection_TA_MA.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

