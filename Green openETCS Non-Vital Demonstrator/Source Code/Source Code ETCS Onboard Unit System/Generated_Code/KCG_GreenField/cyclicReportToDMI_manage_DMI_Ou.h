/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _cyclicReportToDMI_manage_DMI_O
#define _cyclicReportToDMI_manage_DMI_O

#include "kcg_types.h"
#include "sendDynamic_manage_DMI_Output_P.h"
#include "isSendingNeeded_manage_DMI_Outp.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_ /* manage_DMI_Output_Pkg::cyclicReportToDMI::packetDynamic */ packetDynamic;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isSendingNeeded_manage_DMI /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_cyclicReportToDMI_manage_D;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::cyclicReportToDMI */
extern void cyclicReportToDMI_manage_DMI_Ou(
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inTrainPosition */ trainPosition_T_TrainPosition_T *inTrainPosition,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Ty *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Typ *inModeAndLevel,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNationalValues */ nationValuesForDMI_T_DMI_Types_ *inNationalValues,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMovementAuthority */ movementAuthorityForDMI_T_DMI_T *inMovementAuthority,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMoRC_status */ morcStatus_T_RCM_Session_Types_ *inMoRC_status,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNTC */ NID_NTC inNTC,
  outC_cyclicReportToDMI_manage_D *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void cyclicReportToDMI_reset_manage_(
  outC_cyclicReportToDMI_manage_D *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void cyclicReportToDMI_init_manage_D(
  outC_cyclicReportToDMI_manage_D *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _cyclicReportToDMI_manage_DMI_O */
/* $**************** KCG Version 6.4 (build i21) ****************
** cyclicReportToDMI_manage_DMI_Ou.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

