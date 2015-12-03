/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _mapnewCMD_toCmd_radioOutput_Pk
#define _mapnewCMD_toCmd_radioOutput_Pk

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  cmdRadioUnit_T_API_RadioCommuni /* radioOutput_Pkg::mapnewCMD_toCmd::toRTMCMD */ toRTMCMD;
  NID_RADIO /* radioOutput_Pkg::mapnewCMD_toCmd::outRadio */ outRadio;
  NID_MN /* radioOutput_Pkg::mapnewCMD_toCmd::outMN */ outMN;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_mapnewCMD_toCmd_radioOutpu;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::mapnewCMD_toCmd */
extern void mapnewCMD_toCmd_radioOutput_Pkg(
  /* radioOutput_Pkg::mapnewCMD_toCmd::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types *mobileConnectionCMD,
  /* radioOutput_Pkg::mapnewCMD_toCmd::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Typ *mobileRegistrationCMD,
  outC_mapnewCMD_toCmd_radioOutpu *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mapnewCMD_toCmd_reset_radioOutp(
  outC_mapnewCMD_toCmd_radioOutpu *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mapnewCMD_toCmd_init_radioOutpu(
  outC_mapnewCMD_toCmd_radioOutpu *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _mapnewCMD_toCmd_radioOutput_Pk */
/* $**************** KCG Version 6.4 (build i21) ****************
** mapnewCMD_toCmd_radioOutput_Pkg.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

