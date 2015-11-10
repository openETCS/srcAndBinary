/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_M_LOC_RBC_Con.h"

/* RBC_Config_Pkg::PosRepParams__Get_M_LOC */
M_LOC PosRepParams__Get_M_LOC_RBC_Con(
  /* RBC_Config_Pkg::PosRepParams__Get_M_LOC::inPosRepParams */ PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_M_LOC::out_M_LOC */
  static M_LOC out_M_LOC;
  
  out_M_LOC = (*inPosRepParams).m_loc;
  return out_M_LOC;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__Get_M_LOC_RBC_Con.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

