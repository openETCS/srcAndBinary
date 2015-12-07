/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */
#ifndef _mapCMDToRTM_radioOutput_Pkg_H_
#define _mapCMDToRTM_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "mapnewCMD_toCmd_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RadioManagement_T_API_RadioComm /* radioOutput_Pkg::mapCMDToRTM::toRTM */ toRTM;
  NID_RADIO /* radioOutput_Pkg::mapCMDToRTM::outRadio */ outRadio;
  NID_MN /* radioOutput_Pkg::mapCMDToRTM::outMN */ outMN;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mapnewCMD_toCmd_radioOutpu /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_mapCMDToRTM_radioOutput_Pk;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::mapCMDToRTM */
extern void mapCMDToRTM_radioOutput_Pkg(
  /* radioOutput_Pkg::mapCMDToRTM::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types *mobileConnectionCMD,
  /* radioOutput_Pkg::mapCMDToRTM::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Typ *mobileRegistrationCMD,
  outC_mapCMDToRTM_radioOutput_Pk *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mapCMDToRTM_reset_radioOutput_P(
  outC_mapCMDToRTM_radioOutput_Pk *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mapCMDToRTM_init_radioOutput_Pk(
  outC_mapCMDToRTM_radioOutput_Pk *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _mapCMDToRTM_radioOutput_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** mapCMDToRTM_radioOutput_Pkg.h
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

