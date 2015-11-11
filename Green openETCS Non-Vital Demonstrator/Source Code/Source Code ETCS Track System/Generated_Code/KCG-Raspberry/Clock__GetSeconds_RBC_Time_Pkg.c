/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__GetSeconds */
T_TRAIN Clock__GetSeconds_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__GetSeconds::inClock */Clock_T *inClock)
{
  /* RBC_Time_Pkg::Clock__GetSeconds::outValue */ T_TRAIN outValue;
  
  outValue = (*inClock).m_Value;
  return outValue;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Clock__GetSeconds_RBC_Time_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

