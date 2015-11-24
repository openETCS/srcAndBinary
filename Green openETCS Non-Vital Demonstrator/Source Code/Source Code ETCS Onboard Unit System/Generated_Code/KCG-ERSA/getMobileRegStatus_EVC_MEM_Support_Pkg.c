/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMobileRegStatus_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::getMobileRegStatus */
mobileRegistrationStatus_T_RCM_Types_Pkg getMobileRegStatus_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::getMobileRegStatus::HW_ConnectionStatus */ mobileHWConnectionStatus_Type_MoRC_Pck HW_ConnectionStatus)
{
  /* EVC_MEM_Support_Pkg::getMobileRegStatus::MobileRegistrationStatus */ mobileRegistrationStatus_T_RCM_Types_Pkg MobileRegistrationStatus;
  
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
** getMobileRegStatus_EVC_MEM_Support_Pkg.c
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

