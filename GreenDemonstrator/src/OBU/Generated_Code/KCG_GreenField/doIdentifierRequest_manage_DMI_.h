/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */
#ifndef _doIdentifierRequest_manage_DMI
#define _doIdentifierRequest_manage_DMI

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _28_DMI_Identifier_Request_T_DM /* manage_DMI_Output_Pkg::doIdentifierRequest::identifierRequest */ identifierRequest;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_doIdentifierRequest_manage;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::doIdentifierRequest */
extern void doIdentifierRequest_manage_DMI_(
  /* manage_DMI_Output_Pkg::doIdentifierRequest::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::ownVersion */ M_VERSION ownVersion,
  outC_doIdentifierRequest_manage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void doIdentifierRequest_reset_manag(
  outC_doIdentifierRequest_manage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void doIdentifierRequest_init_manage(
  outC_doIdentifierRequest_manage *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _doIdentifierRequest_manage_DMI */
/* $**************** KCG Version 6.4 (build i21) ****************
** doIdentifierRequest_manage_DMI_.h
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */

