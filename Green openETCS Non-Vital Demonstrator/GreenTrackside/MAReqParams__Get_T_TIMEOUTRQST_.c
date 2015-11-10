/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_T_TIMEOUTRQST_.h"

/* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST */
T_TIMEOUTRQST MAReqParams__Get_T_TIMEOUTRQST_(
  /* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST::inMAReqParams */ MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST::out_T_TIMEOUTRQST */
  static T_TIMEOUTRQST out_T_TIMEOUTRQST;
  
  out_T_TIMEOUTRQST = (*inMAReqParams).t_timeoutrqst;
  return out_T_TIMEOUTRQST;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MAReqParams__Get_T_TIMEOUTRQST_.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

