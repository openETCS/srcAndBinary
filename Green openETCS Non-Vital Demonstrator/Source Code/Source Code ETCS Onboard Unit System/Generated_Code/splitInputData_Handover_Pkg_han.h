/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _splitInputData_Handover_Pkg_ha
#define _splitInputData_Handover_Pkg_ha

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Handover_Pkg::handoverUtils_Pkg::splitInputData */
extern void splitInputData_Handover_Pkg_han(
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatus_1 */ morcStatus_T_RCM_Session_Types_ *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatus_2 */ morcStatus_T_RCM_Session_Types_ *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromHandingOverMobile */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromHandingOverMobile,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromAcceptingMobile */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromAcceptingMobile,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromBalise */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromBalise,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromTrack_out */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_out);

#endif /* _splitInputData_Handover_Pkg_ha */
/* $**************** KCG Version 6.4 (build i21) ****************
** splitInputData_Handover_Pkg_han.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

