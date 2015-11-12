/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _SH_Initiated_By_Driver_On_Proc
#define _SH_Initiated_By_Driver_On_Proc

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::SH_Initiated_By_Driver_On::Clean_BG_List_SH_Area */ Clean_BG_List_SH_Area;
  kcg_bool /* Procedures::SH_Initiated_By_Driver_On::Condition5 */ Condition5;
  kcg_bool /* Procedures::SH_Initiated_By_Driver_On::Condition6 */ Condition6;
  kcg_bool /* Procedures::SH_Initiated_By_Driver_On::End_Of_Mission_Procedure_Req */ End_Of_Mission_Procedure_Req;
  kcg_bool /* Procedures::SH_Initiated_By_Driver_On::SH_Refused_By_RBC_To_DMI */ SH_Refused_By_RBC_To_DMI;
  kcg_bool /* Procedures::SH_Initiated_By_Driver_On::Request_For_SH_To_RBC */ Request_For_SH_To_RBC;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_SH_Initiated_By_Drive /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */ SM_SH_Initiated_By_Driver_state;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SH_Initiated_By_Driver_On_;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::SH_Initiated_By_Driver_On */
extern void SH_Initiated_By_Driver_On_Proce(
  /* Procedures::SH_Initiated_By_Driver_On::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::SH_Initiated_By_Driver_On::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::SH_Initiated_By_Driver_On::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::SH_Initiated_By_Driver_On::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  outC_SH_Initiated_By_Driver_On_ *outC);

extern void SH_Initiated_By_Driver_On_reset(
  outC_SH_Initiated_By_Driver_On_ *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SH_Initiated_By_Driver_On_init_(
  outC_SH_Initiated_By_Driver_On_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SH_Initiated_By_Driver_On_Proc */
/* $**************** KCG Version 6.4 (build i21) ****************
** SH_Initiated_By_Driver_On_Proce.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

