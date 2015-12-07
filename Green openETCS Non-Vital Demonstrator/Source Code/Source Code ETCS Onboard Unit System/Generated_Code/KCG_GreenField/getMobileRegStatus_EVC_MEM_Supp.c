/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMobileRegStatus_EVC_MEM_Supp.h"

/* EVC_MEM_Support_Pkg::getMobileRegStatus */
mobileRegistrationStatus_T_RCM_ getMobileRegStatus_EVC_MEM_Supp(
  /* EVC_MEM_Support_Pkg::getMobileRegStatus::HW_ConnectionStatus */ mobileHWConnectionStatus_Type_M HW_ConnectionStatus)
{
  /* EVC_MEM_Support_Pkg::getMobileRegStatus::MobileRegistrationStatus */
  static mobileRegistrationStatus_T_RCM_ MobileRegistrationStatus;
  
  switch (HW_ConnectionStatus) {
    case mhwc_notRegistered_MoRC_Pck :
      MobileRegistrationStatus = mrs_unregistered_RCM_Types_Pkg;
      break;
    case mhwc_registered_MoRC_Pck :
      MobileRegistrationStatus = mrs_registered_RCM_Types_Pkg;
      break;
    case mhwc_connected_MoRC_Pck :
      MobileRegistrationStatus = mrs_registered_RCM_Types_Pkg;
      break;
    case mhwc_connecting_MoRC_Pck :
      MobileRegistrationStatus = mrs_registered_RCM_Types_Pkg;
      break;
    
    default :
      MobileRegistrationStatus = mrs_unregistered_RCM_Types_Pkg;
  }
  return MobileRegistrationStatus;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getMobileRegStatus_EVC_MEM_Supp.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */
