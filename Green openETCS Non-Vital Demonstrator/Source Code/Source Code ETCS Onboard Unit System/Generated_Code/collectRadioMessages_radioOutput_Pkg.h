/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _collectRadioMessages_radioOutput_Pkg_H_
#define _collectRadioMessages_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "mapToRTM_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_EuroRadioOutput_T_API_RadioCommunication_Pkg /* radioOutput_Pkg::collectRadioMessages::outRadioToAPI */ outRadioToAPI;
  /* -----------------------   local probes  ------------------------- */
  NID_MESSAGE /* radioOutput_Pkg::collectRadioMessages::MSG1_ID */ MSG1_ID;
  NID_MESSAGE /* radioOutput_Pkg::collectRadioMessages::MSG2_ID */ MSG2_ID;
  NID_MESSAGE /* radioOutput_Pkg::collectRadioMessages::MSG3_ID */ MSG3_ID;
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_collectRadioMessages_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::collectRadioMessages */
extern void collectRadioMessages_radioOutput_Pkg(
  /* radioOutput_Pkg::collectRadioMessages::inFromPositionReport */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* radioOutput_Pkg::collectRadioMessages::inFromRadioSM */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromRadioSM,
  /* radioOutput_Pkg::collectRadioMessages::inFromTrainData */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromTrainData,
  /* radioOutput_Pkg::collectRadioMessages::cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::collectRadioMessages::inFromMA */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromMA,
  /* radioOutput_Pkg::collectRadioMessages::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* radioOutput_Pkg::collectRadioMessages::insafeSessionEstablished */ kcg_bool insafeSessionEstablished,
  outC_collectRadioMessages_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void collectRadioMessages_reset_radioOutput_Pkg(
  outC_collectRadioMessages_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void collectRadioMessages_init_radioOutput_Pkg(
  outC_collectRadioMessages_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _collectRadioMessages_radioOutput_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** collectRadioMessages_radioOutput_Pkg.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

