/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainMobileRegistrationConte.h"

/* EVC_Support_Pkg::maintainMobileRegistrationContext */
void maintainMobileRegistrationConte(
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::Registered_MN */ NID_MN Registered_MN,
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::MobileRegistrationContext */ mobileRegistrationContext_T_RCM *MobileRegistrationContext)
{
  (*MobileRegistrationContext).valid = (*MobileFromAPI).valid &
    (mobileDeviceNo >= 0);
  (*MobileRegistrationContext).mobileDeviceNo = mobileDeviceNo;
  (*MobileRegistrationContext).nid_mn = Registered_MN;
  /* 1 */ if ((*MobileFromAPI).valid) {
    (*MobileRegistrationContext).healthStatus = mhs_ok_RCM_Types_Pkg;
  }
  else {
    (*MobileRegistrationContext).healthStatus = mhs_nok_RCM_Types_Pkg;
  }
  (*MobileRegistrationContext).status = /* 1 */
    getMobileRegStatus_EVC_Support_((*MobileFromAPI).connectionStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** maintainMobileRegistrationConte.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

