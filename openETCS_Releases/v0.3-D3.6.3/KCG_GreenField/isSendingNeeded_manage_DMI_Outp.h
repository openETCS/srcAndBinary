/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */
#ifndef _isSendingNeeded_manage_DMI_Out
#define _isSendingNeeded_manage_DMI_Out

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* manage_DMI_Output_Pkg::isSendingNeeded::sendingNeeded */ sendingNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_ /* manage_DMI_Output_Pkg::isSendingNeeded::lastDMI_Update */ lastDMI_Update;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_isSendingNeeded_manage_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::isSendingNeeded */
extern void isSendingNeeded_manage_DMI_Outp(
  /* manage_DMI_Output_Pkg::isSendingNeeded::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::isSendingNeeded::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  outC_isSendingNeeded_manage_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void isSendingNeeded_reset_manage_DM(
  outC_isSendingNeeded_manage_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void isSendingNeeded_init_manage_DMI(
  outC_isSendingNeeded_manage_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _isSendingNeeded_manage_DMI_Out */
/* $**************** KCG Version 6.4 (build i21) ****************
** isSendingNeeded_manage_DMI_Outp.h
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */

