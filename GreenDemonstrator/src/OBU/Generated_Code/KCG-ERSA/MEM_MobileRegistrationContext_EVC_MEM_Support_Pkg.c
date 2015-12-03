/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext */
void MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext::Registered_MN */ NID_MN Registered_MN,
  /* EVC_MEM_Support_Pkg::MEM_MobileRegistrationContext::MobileRegistrationContext */ mobileRegistrationContext_T_RCM_Types_Pkg *MobileRegistrationContext)
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
    getMobileRegStatus_EVC_MEM_Support_Pkg((*MobileFromAPI).connectionStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

