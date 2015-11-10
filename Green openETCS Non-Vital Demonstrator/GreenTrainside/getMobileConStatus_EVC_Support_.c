/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMobileConStatus_EVC_Support_.h"

/* EVC_Support_Pkg::getMobileConStatus */
mobileConnectionStatus_T_RCM_Ty getMobileConStatus_EVC_Support_(
  /* EVC_Support_Pkg::getMobileConStatus::HW_ConnectionStatus */ mobileHWConnectionStatus_Type_M HW_ConnectionStatus)
{
  /* EVC_Support_Pkg::getMobileConStatus::MobileConnectionStatus */
  static mobileConnectionStatus_T_RCM_Ty MobileConnectionStatus;
  
  switch (HW_ConnectionStatus) {
    case mhwc_notRegistered_MoRC_Pck :
      MobileConnectionStatus = mcs_disconnected_RCM_Types_Pkg;
      break;
    case mhwc_registered_MoRC_Pck :
      MobileConnectionStatus = mcs_disconnected_RCM_Types_Pkg;
      break;
    case mhwc_connected_MoRC_Pck :
      MobileConnectionStatus = mcs_connected_RCM_Types_Pkg;
      break;
    case mhwc_connecting_MoRC_Pck :
      MobileConnectionStatus = mcs_connecting_RCM_Types_Pkg;
      break;
    
    default :
      MobileConnectionStatus = mcs_disconnected_RCM_Types_Pkg;
  }
  return MobileConnectionStatus;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getMobileConStatus_EVC_Support_.c
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

