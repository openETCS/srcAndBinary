/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Get_M_LEVEL_RBC_Sessio.h"

/* RBC_Session_Pkg::PosData__Get_M_LEVEL */
M_LEVEL PosData__Get_M_LEVEL_RBC_Sessio(
  /* RBC_Session_Pkg::PosData__Get_M_LEVEL::inPosData */ PosData_T *inPosData)
{
  /* RBC_Session_Pkg::PosData__Get_M_LEVEL::out_M_LEVEL */
  static M_LEVEL out_M_LEVEL;
  
  out_M_LEVEL = (*inPosData).m_level;
  return out_M_LEVEL;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Get_M_LEVEL_RBC_Sessio.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

