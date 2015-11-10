/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__GetSeconds */
T_TRAIN Clock__GetSeconds_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__GetSeconds::inClock */ Clock_T *inClock)
{
  /* RBC_Time_Pkg::Clock__GetSeconds::outValue */
  static T_TRAIN outValue;
  
  outValue = (*inClock).m_Value;
  return outValue;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Clock__GetSeconds_RBC_Time_Pkg.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

