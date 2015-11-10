/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_Q_DIR_RBC_Con.h"

/* RBC_Config_Pkg::PosRepParams__Get_Q_DIR */
Q_DIR PosRepParams__Get_Q_DIR_RBC_Con(
  /* RBC_Config_Pkg::PosRepParams__Get_Q_DIR::inPosRepParams */ PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_Q_DIR::out_Q_DIR */
  static Q_DIR out_Q_DIR;
  
  out_Q_DIR = (*inPosRepParams).q_dir;
  return out_Q_DIR;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__Get_Q_DIR_RBC_Con.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

