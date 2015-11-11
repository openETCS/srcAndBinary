/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _sendDynamic_manage_DMI_Output_
#define _sendDynamic_manage_DMI_Output_

#include "kcg_types.h"
#include "mapMoRCtoRadio_CS_manage_DMI_Ou.h"
#include "calcDistances_manage_DMI_Output.h"
#include "convert_cm_s_km_h_manage_DMI_Ou.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_DMI_Output_Pkg::sendDynamic */
extern void sendDynamic_manage_DMI_Output_P(
  /* manage_DMI_Output_Pkg::sendDynamic::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::sendDynamic::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::sendDynamic::inTrainPosition */ trainPosition_T_TrainPosition_T *inTrainPosition,
  /* manage_DMI_Output_Pkg::sendDynamic::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Ty *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::sendDynamic::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Typ *inModeAndLevel,
  /* manage_DMI_Output_Pkg::sendDynamic::inNationalValues */ nationValuesForDMI_T_DMI_Types_ *inNationalValues,
  /* manage_DMI_Output_Pkg::sendDynamic::inMoRC_status */ morcStatus_T_RCM_Session_Types_ *inMoRC_status,
  /* manage_DMI_Output_Pkg::sendDynamic::inMovementAuthority */ movementAuthorityForDMI_T_DMI_T *inMovementAuthority,
  /* manage_DMI_Output_Pkg::sendDynamic::inNTC */ NID_NTC inNTC,
  /* manage_DMI_Output_Pkg::sendDynamic::packetDynamic */ DMI_Dynamic_T_DMI_Messages_EVC_ *packetDynamic);

#endif /* _sendDynamic_manage_DMI_Output_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendDynamic_manage_DMI_Output_P.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

