/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */
#ifndef _Procedure_SH_Ordered_By_Track_
#define _Procedure_SH_Ordered_By_Track_

#include "kcg_types.h"
#include "Procedure_With_Mode_Profile_Pro.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_SH_Ordered_By_Track::Condition50 */ Condition50;
  kcg_bool /* Procedures::Procedure_SH_Ordered_By_Track::Condition51 */ Condition51;
  kcg_bool /* Procedures::Procedure_SH_Ordered_By_Track::Condition61 */ Condition61;
  kcg_bool /* Procedures::Procedure_SH_Ordered_By_Track::Ack_SH_Req_To_Driver */ Ack_SH_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_SH_Ordered_By_Track::Service_Brake_Command */ Service_Brake_Command;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_With_Mode_Profil /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_SH_Ordered_By_Tr;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_SH_Ordered_By_Track */
extern void Procedure_SH_Ordered_By_Track_P(
  /* Procedures::Procedure_SH_Ordered_By_Track::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Ordered_By_Track::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_SH_Ordered_By_Track::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Procedures::Procedure_SH_Ordered_By_Track::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Procedures::Procedure_SH_Ordered_By_Track::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_SH_Ordered_By_Tr *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_SH_Ordered_By_Track_r(
  outC_Procedure_SH_Ordered_By_Tr *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_SH_Ordered_By_Track_i(
  outC_Procedure_SH_Ordered_By_Tr *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Procedure_SH_Ordered_By_Track_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_SH_Ordered_By_Track_P.h
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */

