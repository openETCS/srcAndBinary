/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_T_CYCRQST_RBC_.h"

/* RBC_Config_Pkg::MAReqParams__Get_T_CYCRQST */
T_CYCRQST MAReqParams__Get_T_CYCRQST_RBC_(
  /* RBC_Config_Pkg::MAReqParams__Get_T_CYCRQST::inMAReqParams */ MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_T_CYCRQST::out_T_CYCRQST */
  static T_CYCRQST out_T_CYCRQST;
  
  out_T_CYCRQST = (*inMAReqParams).t_cycrqst;
  return out_T_CYCRQST;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MAReqParams__Get_T_CYCRQST_RBC_.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

