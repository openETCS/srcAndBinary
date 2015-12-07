/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _Procedure_LimitedSupervision_P
#define _Procedure_LimitedSupervision_P

#include "kcg_types.h"
#include "Mode_Profile_Calculations_Libra.h"
#include "Procedure_With_Mode_Profile_Pro.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Condition70 */ Condition70;
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Condition71 */ Condition71;
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Condition72 */ Condition72;
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Condition74 */ Condition74;
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Ack_LS_Req_To_Driver */ Ack_LS_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Service_Brake_Command */ Service_Brake_Command;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_With_Mode_Profil /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_LimitedSupervisi;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_LimitedSupervision */
extern void Procedure_LimitedSupervision_Pr(
  /* Procedures::Procedure_LimitedSupervision::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_LimitedSupervision::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_LimitedSupervision::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Procedures::Procedure_LimitedSupervision::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Procedures::Procedure_LimitedSupervision::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_LimitedSupervisi *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_LimitedSupervision_re(
  outC_Procedure_LimitedSupervisi *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_LimitedSupervision_in(
  outC_Procedure_LimitedSupervisi *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Procedure_LimitedSupervision_P */
/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_LimitedSupervision_Pr.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

