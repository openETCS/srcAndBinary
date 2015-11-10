/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_Q_DIR_RBC_Conf.h"

/* RBC_Config_Pkg::MAReqParams__Get_Q_DIR */
Q_DIR MAReqParams__Get_Q_DIR_RBC_Conf(
  /* RBC_Config_Pkg::MAReqParams__Get_Q_DIR::inMAReqParams */ MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_Q_DIR::out_Q_DIR */
  static Q_DIR out_Q_DIR;
  
  out_Q_DIR = (*inMAReqParams).q_dir;
  return out_Q_DIR;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MAReqParams__Get_Q_DIR_RBC_Conf.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

