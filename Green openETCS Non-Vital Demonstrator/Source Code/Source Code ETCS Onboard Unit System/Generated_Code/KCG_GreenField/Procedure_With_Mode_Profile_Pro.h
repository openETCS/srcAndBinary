/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _Procedure_With_Mode_Profile_Pr
#define _Procedure_With_Mode_Profile_Pr

#include "kcg_types.h"
#include "Mode_Profile_Calculations_Libra.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */ Condition_15_50_70;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */ Condition_34_61_71;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */ Condition_40_51_72;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */ Condition_73_74;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Service_Brake_Command */ Service_Brake_Command;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Ack_Req_To_Driver */ Ack_Req_To_Driver;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_Futher_Location_SM_Mo /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */ SM_Futher_Location_state_nxt_SM;
  SSM_ST_SM_Current_Location_SM_M /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */ SM_Current_Location_state_nxt_S;
  SSM_ST_SM_Mode_Profile_By_Track /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */ SM_Mode_Profile_By_Trackside_st;
  kcg_int /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */ Loc_Timer;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */ Loc_Confirmation;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int /* 8 */ Context_8;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_With_Mode_Profil;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_With_Mode_Profile */
extern void Procedure_With_Mode_Profile_Pro(
  /* Procedures::Procedure_With_Mode_Profile::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Driver_Ack_Mode_Profile */ kcg_bool Driver_Ack_Mode_Profile,
  /* Procedures::Procedure_With_Mode_Profile::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Procedures::Procedure_With_Mode_Profile::Procedure_Possible */ kcg_bool Procedure_Possible,
  /* Procedures::Procedure_With_Mode_Profile::Profile_Mode */ T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Selected_Mode */ T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Supervision_Modes */ kcg_bool Supervision_Modes,
  /* Procedures::Procedure_With_Mode_Profile::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Procedures::Procedure_With_Mode_Profile::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_With_Mode_Profil *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_With_Mode_Profile_res(
  outC_Procedure_With_Mode_Profil *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_With_Mode_Profile_ini(
  outC_Procedure_With_Mode_Profil *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Procedure_With_Mode_Profile_Pr */
/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_With_Mode_Profile_Pro.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

