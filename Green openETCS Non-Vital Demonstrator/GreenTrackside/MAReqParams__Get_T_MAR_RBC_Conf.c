/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_T_MAR_RBC_Conf.h"

/* RBC_Config_Pkg::MAReqParams__Get_T_MAR */
T_MAR MAReqParams__Get_T_MAR_RBC_Conf(
  /* RBC_Config_Pkg::MAReqParams__Get_T_MAR::inMAReqParams */ MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_T_MAR::out_T_MAR */
  static T_MAR out_T_MAR;
  
  out_T_MAR = (*inMAReqParams).t_mar;
  return out_T_MAR;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MAReqParams__Get_T_MAR_RBC_Conf.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

