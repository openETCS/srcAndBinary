/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _Master_Procedure_ManageProcedu
#define _Master_Procedure_ManageProcedu

#include "kcg_types.h"
#include "SoM_SR_FS_OS_LS_SH_SN_UN_SoMPro.h"
#include "SoM_NTC_SN_SoMProcedure_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Entry_Request_T_DMI_Message /* ManageProcedure_Pkg::Master_Procedure::DMI_Entry_Request_to_DMI */ DMI_Entry_Request_to_DMI;
  radioManagementMessage_T_Common /* ManageProcedure_Pkg::Master_Procedure::request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC */ request_Start_Mobile_Terminal_a;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::powerUp_to_MoRC */ powerUp_to_MoRC;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::statusstartofmissionongoing_to_MoRC */ statusstartofmissionongoing_to_;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::powerOff_to_MoRC */ powerOff_to_MoRC;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management */ request_MA_FS_SR_OS_LS_SH_to_MA;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management */ request_Mode_Change_SB_to_FS_to;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::start_ack_to_TIU */ start_ack_to_TIU;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init3;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  struct_97530 /* ManageProcedure_Pkg::Master_Procedure */ _2_fby_ck_fby;
  struct_97530 /* ManageProcedure_Pkg::Master_Procedure */ fby_ck_fby;
  SSM_ST_SM3_SM1_Awakness_of_Trai /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */ SM3_state_nxt_SM1_Awakness_of_T;
  _193_SSM_ST_SM1 /* ManageProcedure_Pkg::Master_Procedure::SM1 */ SM1_state_nxt;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::SM1 */ SM1_reset_nxt;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */ sendingPositionReport_to_RBC;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */ sendingTrainData_to_RBC;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SoM_NTC_SN_SoMProcedure_Pk /* 1 */ _1_Context_1;
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_S /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Master_Procedure_ManagePro;

/* ===========  node initialization and cycle functions  =========== */
/* ManageProcedure_Pkg::Master_Procedure */
extern void Master_Procedure_ManageProcedur(
  /* ManageProcedure_Pkg::Master_Procedure::statusDMI_from_DMI */ DMI_EVC_status_T_DMI_Types_Pkg *statusDMI_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */ kcg_bool Status_MA_FS_SR_OS_LS_SH_from_M,
  /* ManageProcedure_Pkg::Master_Procedure::systemtime */ T_internal_Type_Obu_BasicTypes_ systemtime,
  /* ManageProcedure_Pkg::Master_Procedure::StatusModeandLevel_from_Level_and_Mode_Management */ T_Mode_Level_Level_And_Mode_Typ *StatusModeandLevel_from_Level_a,
  /* ManageProcedure_Pkg::Master_Procedure::mobileStatus */ morcStatus_T_RCM_Session_Types_ *mobileStatus,
  /* ManageProcedure_Pkg::Master_Procedure::cabStatus_from_TIU */ TIU_trainStatus_T_TIU_Types_Pkg *cabStatus_from_TIU,
  /* ManageProcedure_Pkg::Master_Procedure::statusValid_Position_from_Position_Calculation */ kcg_bool statusValid_Position_from_Posit,
  /* ManageProcedure_Pkg::Master_Procedure::status_DMIlevel_from_DMI */ DMI_Driver_Request_T_DMI_Messag *status_DMIlevel_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::LevelValid_from_Level_and_Mode_Management */ kcg_bool LevelValid_from_Level_and_Mode_,
  outC_Master_Procedure_ManagePro *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Master_Procedure_reset_ManagePr(
  outC_Master_Procedure_ManagePro *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Master_Procedure_init_ManagePro(
  outC_Master_Procedure_ManagePro *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Master_Procedure_ManageProcedu */
/* $**************** KCG Version 6.4 (build i21) ****************
** Master_Procedure_ManageProcedur.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

