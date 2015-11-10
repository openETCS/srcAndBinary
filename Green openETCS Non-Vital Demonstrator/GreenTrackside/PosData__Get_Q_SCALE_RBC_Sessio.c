/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Get_Q_SCALE_RBC_Sessio.h"

/* RBC_Session_Pkg::PosData__Get_Q_SCALE */
Q_SCALE PosData__Get_Q_SCALE_RBC_Sessio(
  /* RBC_Session_Pkg::PosData__Get_Q_SCALE::inPosData */ PosData_T *inPosData)
{
  /* RBC_Session_Pkg::PosData__Get_Q_SCALE::out_Q_SCALE */
  static Q_SCALE out_Q_SCALE;
  
  out_Q_SCALE = (*inPosData).q_scale;
  return out_Q_SCALE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Get_Q_SCALE_RBC_Sessio.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

