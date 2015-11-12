/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _maintainMobileConnectionContex
#define _maintainMobileConnectionContex

#include "kcg_types.h"
#include "getMobileConStatus_EVC_Support_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* EVC_Support_Pkg::maintainMobileConnectionContext */
extern void maintainMobileConnectionContext(
  /* EVC_Support_Pkg::maintainMobileConnectionContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::Radio_ID */ NID_RADIO Radio_ID,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::inRadioHole */ kcg_bool inRadioHole,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::MobileConnectionContext */ mobileConnectionContext_T_RCM_T *MobileConnectionContext);

#endif /* _maintainMobileConnectionContex */
/* $**************** KCG Version 6.4 (build i21) ****************
** maintainMobileConnectionContext.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

