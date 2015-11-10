/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__Limit_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__Limit */
void Clock__Limit_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__Limit::inClock */ Clock_T *inClock,
  /* RBC_Time_Pkg::Clock__Limit::outClock */ Clock_T *outClock)
{
  /* RBC_Time_Pkg::Clock__Limit::_L10 */
  static T_TRAIN _L10;
  
  _L10 = /* 1 */ Clock__GetSeconds_RBC_Time_Pkg(inClock);
  /* 1 */ if ((_L10 >= T_TRAIN_MIN) & (_L10 <= T_TRAIN_MAX - CYCLE_TIME)) {
    kcg_copy_Clock_T(outClock, inClock);
  }
  else {
    /* 1 */ Clock__Reset_RBC_Time_Pkg(inClock, outClock);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Clock__Limit_RBC_Time_Pkg.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

