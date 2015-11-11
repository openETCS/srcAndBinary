/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainMobileConnectionContext.h"

/* EVC_Support_Pkg::maintainMobileConnectionContext */
void maintainMobileConnectionContext(
  /* EVC_Support_Pkg::maintainMobileConnectionContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::Radio_ID */ NID_RADIO Radio_ID,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::inRadioHole */ kcg_bool inRadioHole,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::MobileConnectionContext */ mobileConnectionContext_T_RCM_T *MobileConnectionContext)
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
    getMobileConStatus_EVC_Support_((*MobileFromAPI).connectionStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** maintainMobileConnectionContext.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

