/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */
#ifndef _sendVersion_manage_DMI_Output_
#define _sendVersion_manage_DMI_Output_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_System_Version_T_DMI_Messag /* manage_DMI_Output_Pkg::sendVersion::VersionPkg */ VersionPkg;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* manage_DMI_Output_Pkg::sendVersion::versionSent */ versionSent;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_sendVersion_manage_DMI_Out;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::sendVersion */
extern void sendVersion_manage_DMI_Output_P(
  /* manage_DMI_Output_Pkg::sendVersion::ownVersion */ M_VERSION ownVersion,
  /* manage_DMI_Output_Pkg::sendVersion::dmiStatus */ DMI_EVC_status_T_DMI_Types_Pkg *dmiStatus,
  /* manage_DMI_Output_Pkg::sendVersion::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  outC_sendVersion_manage_DMI_Out *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendVersion_reset_manage_DMI_Ou(
  outC_sendVersion_manage_DMI_Out *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendVersion_init_manage_DMI_Out(
  outC_sendVersion_manage_DMI_Out *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _sendVersion_manage_DMI_Output_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendVersion_manage_DMI_Output_P.h
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */

