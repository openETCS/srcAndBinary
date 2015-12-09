/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_MobileConnectionContext_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext */
void MEM_MobileConnectionContext_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext::Radio_ID */ NID_RADIO Radio_ID,
  /* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext::inRadioHole */ kcg_bool inRadioHole,
  /* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext::MobileConnectionContext */ mobileConnectionContext_T_RCM_Types_Pkg *MobileConnectionContext)
{
  (*MobileConnectionContext).valid = (*MobileFromAPI).valid & (mobileDeviceNo >=
      0);
  (*MobileConnectionContext).mobileDeviceNo = mobileDeviceNo;
  (*MobileConnectionContext).nid_radio = Radio_ID;
  (*MobileConnectionContext).settingUpConnectionHasFailed =
    (*MobileFromAPI).settingUpConnectionHasFailed;
  (*MobileConnectionContext).connectionLost = (*MobileFromAPI).connectionLost;
  (*MobileConnectionContext).isInRadioHole = inRadioHole;
  (*MobileConnectionContext).status = /* 1 */
    getMobileConStatus_EVC_MEM_Support_Pkg((*MobileFromAPI).connectionStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_MobileConnectionContext_EVC_MEM_Support_Pkg.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

