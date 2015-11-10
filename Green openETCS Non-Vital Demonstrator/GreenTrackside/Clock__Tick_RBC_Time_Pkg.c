/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__Tick_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__Tick */
void Clock__Tick_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__Tick::inClock */ Clock_T *inClock,
  /* RBC_Time_Pkg::Clock__Tick::outClock */ Clock_T *outClock)
{
  /* RBC_Time_Pkg::Clock__Tick */
  static T_TRAIN tmp;
  
  tmp = /* 1 */ Clock__GetSeconds_RBC_Time_Pkg(inClock);
  /* 1 */ Clock__SetSeconds_RBC_Time_Pkg(inClock, tmp + CYCLE_TIME, outClock);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Clock__Tick_RBC_Time_Pkg.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

