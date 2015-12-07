/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _Procedure_Train_Reversing_Proc
#define _Procedure_Train_Reversing_Proc

#include "kcg_types.h"
#include "Reversing_Calculations_Librairi.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_Train_Reversing::Condition_59 */ Condition_59;
  kcg_bool /* Procedures::Procedure_Train_Reversing::Ack_RV_Req_To_Driver */ Ack_RV_Req_To_Driver;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_Train_Reversing /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */ SM_Train_Reversing_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_Train_Reversing_;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_Train_Reversing */
extern void Procedure_Train_Reversing_Proce(
  /* Procedures::Procedure_Train_Reversing::Driver_Ack_RV */ kcg_bool Driver_Ack_RV,
  /* Procedures::Procedure_Train_Reversing::Train_Standstill */ kcg_bool Train_Standstill,
  /* Procedures::Procedure_Train_Reversing::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Procedures::Procedure_Train_Reversing::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_Train_Reversing::Reversing_Data */ T_Reversing_Data_Level_And_Mode *Reversing_Data,
  outC_Procedure_Train_Reversing_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_Train_Reversing_reset(
  outC_Procedure_Train_Reversing_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_Train_Reversing_init_(
  outC_Procedure_Train_Reversing_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Procedure_Train_Reversing_Proc */
/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_Train_Reversing_Proce.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

