/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_MobileConnectionContext_EVC.h"

/* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext */
void MEM_MobileConnectionContext_EVC(
  /* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext::Radio_ID */ NID_RADIO Radio_ID,
  /* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext::inRadioHole */ kcg_bool inRadioHole,
  /* EVC_MEM_Support_Pkg::MEM_MobileConnectionContext::MobileConnectionContext */ mobileConnectionContext_T_RCM_T *MobileConnectionContext)
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
    getMobileConStatus_EVC_MEM_Supp((*MobileFromAPI).connectionStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_MobileConnectionContext_EVC.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

