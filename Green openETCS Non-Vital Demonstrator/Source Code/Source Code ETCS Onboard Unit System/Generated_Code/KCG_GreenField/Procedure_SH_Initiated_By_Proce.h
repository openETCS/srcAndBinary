/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _Procedure_SH_Initiated_By_Proc
#define _Procedure_SH_Initiated_By_Proc

#include "kcg_types.h"
#include "SH_Initiated_By_Driver_On_Proce.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::Condition5 */ Condition5;
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::Condition6 */ Condition6;
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::Clean_BG_List_SH_Area */ Clean_BG_List_SH_Area;
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::End_Of_Mission_Procedure_Req */ End_Of_Mission_Procedure_Req;
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::Request_For_SH_To_RBC */ Request_For_SH_To_RBC;
  kcg_bool /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Refused_By_RBC_To_DMI */ SH_Refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SH_Initiated_By_Driver /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */ SH_Initiated_By_Driver_state_nx;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SH_Initiated_By_Driver_On_ /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_SH_Initiated_By_;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_SH_Initiated_By_Driver */
extern void Procedure_SH_Initiated_By_Proce(
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_SH_Initiated_By_Driver::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Train_Standstill */ kcg_bool Train_Standstill,
  outC_Procedure_SH_Initiated_By_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_SH_Initiated_By_reset(
  outC_Procedure_SH_Initiated_By_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_SH_Initiated_By_init_(
  outC_Procedure_SH_Initiated_By_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Procedure_SH_Initiated_By_Proc */
/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_SH_Initiated_By_Proce.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

