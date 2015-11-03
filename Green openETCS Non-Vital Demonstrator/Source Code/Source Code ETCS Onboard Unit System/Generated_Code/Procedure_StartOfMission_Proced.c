/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_StartOfMission_Proced.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_StartOfMission_init_P(outC_Procedure_StartOfMission_P *outC)
{
  outC->Ack_LS_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_SN_Req_To_Driver = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_UN_Req_To_Driver = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Condition_5 = kcg_true;
  outC->Condition_6 = kcg_true;
  outC->Condition_8 = kcg_true;
  outC->Condition_10 = kcg_true;
  outC->Condition_15 = kcg_true;
  outC->Condition_46 = kcg_true;
  outC->Condition_50 = kcg_true;
  outC->Condition_58 = kcg_true;
  outC->Condition_60 = kcg_true;
  outC->Condition_70 = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  outC->SM_StartOfMissionProcedure_stat = SSM_st_Procedure_Off_SM_StartOf;
  outC->SM_SoM_On_state_nxt_SM_StartOfM = SSM_st_Waiting_Driver_Command_S;
  /* 1 */ SH_Initiated_By_Driver_On_init_(&outC->_1_Context_1);
  /* 1 */ Procedure_Start_L1_L2_L3_init_P(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_StartOfMission_reset_(outC_Procedure_StartOfMission_P *outC)
{
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_reset(&outC->_1_Context_1);
  /* 1 */ Procedure_Start_L1_L2_L3_reset_(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_StartOfMission */
void Procedure_StartOfMission_Proced(
  /* Procedures::Procedure_StartOfMission::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_StartOfMission::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_StartOfMission::Desk_Open */ kcg_bool Desk_Open,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_OS */ kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SN */ kcg_bool Driver_Ack_SN,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SR */ kcg_bool Driver_Ack_SR,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_UN */ kcg_bool Driver_Ack_UN,
  /* Procedures::Procedure_StartOfMission::Driver_Req_NL */ kcg_bool Driver_Req_NL,
  /* Procedures::Procedure_StartOfMission::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_StartOfMission::Driver_Req_Start */ kcg_bool Driver_Req_Start,
  /* Procedures::Procedure_StartOfMission::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  /* Procedures::Procedure_StartOfMission::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Procedures::Procedure_StartOfMission::RBC_Authorizes_SR */ kcg_bool RBC_Authorizes_SR,
  /* Procedures::Procedure_StartOfMission::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_StartOfMission::Train_Permitted_NL */ kcg_bool Train_Permitted_NL,
  /* Procedures::Procedure_StartOfMission::Train_Standstill */ kcg_bool Train_Standstill,
  /* Procedures::Procedure_StartOfMission::Valid_Train_Data_Stored */ kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_StartOfMission_P *outC)
{
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool SM_SoM_On_reset_act_SM_StartOfM;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMiss SM_SoM_On_state_act_SM_StartOfM;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMiss SM_SoM_On_state_sel_SM_StartOfM;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Strating_Command */
  static kcg_bool br_1_guard_SM_StartOfMissionPro;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Strating_Command */
  static kcg_bool br_2_guard_SM_StartOfMissionPro;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Strating_Command */
  static kcg_bool _1_br_1_guard_SM_StartOfMission;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Command */
  static kcg_bool _2_br_1_guard_SM_StartOfMission;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L10 */
  static kcg_bool _L10_SM_StartOfMissionProcedure;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L9 */
  static kcg_bool _L9_SM_StartOfMissionProcedure_;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L8 */
  static kcg_bool _L8_SM_StartOfMissionProcedure_;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L7 */
  static kcg_bool _L7_SM_StartOfMissionProcedure_;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L6 */
  static kcg_bool _L6_SM_StartOfMissionProcedure_;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L5 */
  static kcg_bool _L5_SM_StartOfMissionProcedure_;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedu SM_StartOfMissionProcedure_stat;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedu _3_SM_StartOfMissionProcedure_s;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static kcg_bool SM_StartOfMissionProcedure_rese;
  
  /* init_SM_StartOfMissionProcedure */ if (outC->init2) {
    outC->init2 = kcg_false;
    SM_StartOfMissionProcedure_stat = SSM_st_Procedure_Off_SM_StartOf;
  }
  else {
    SM_StartOfMissionProcedure_stat = outC->SM_StartOfMissionProcedure_stat;
  }
  /* sel_SM_StartOfMissionProcedure */ switch (SM_StartOfMissionProcedure_stat) {
    case SSM_st_Procedure_Off_SM_StartOf :
      SM_StartOfMissionProcedure_rese = (Current_Mode ==
          SB_Level_And_Mode_Types_Pkg) & Train_Standstill & Desk_Open;
      if (SM_StartOfMissionProcedure_rese) {
        _3_SM_StartOfMissionProcedure_s = SSM_st_Procedure_On_SM_StartOfM;
      }
      else {
        _3_SM_StartOfMissionProcedure_s = SSM_st_Procedure_Off_SM_StartOf;
      }
      break;
    case SSM_st_Procedure_On_SM_StartOfM :
      br_1_guard_SM_StartOfMissionPro = (Current_Mode ==
          SB_Level_And_Mode_Types_Pkg) & !Train_Standstill;
      br_2_guard_SM_StartOfMissionPro = !(Current_Mode ==
          SB_Level_And_Mode_Types_Pkg) | !Desk_Open;
      if (br_1_guard_SM_StartOfMissionPro) {
        SM_StartOfMissionProcedure_rese = kcg_true;
        _3_SM_StartOfMissionProcedure_s = SSM_st_EB_Requested_SM_StartOfM;
      }
      else {
        if (br_2_guard_SM_StartOfMissionPro) {
          _3_SM_StartOfMissionProcedure_s = SSM_st_Procedure_Off_SM_StartOf;
        }
        else {
          _3_SM_StartOfMissionProcedure_s = SSM_st_Procedure_On_SM_StartOfM;
        }
        SM_StartOfMissionProcedure_rese = br_2_guard_SM_StartOfMissionPro;
      }
      break;
    case SSM_st_EB_Requested_SM_StartOfM :
      if (Train_Standstill) {
        _3_SM_StartOfMissionProcedure_s = SSM_st_Procedure_Off_SM_StartOf;
      }
      else {
        _3_SM_StartOfMissionProcedure_s = SSM_st_EB_Requested_SM_StartOfM;
      }
      SM_StartOfMissionProcedure_rese = Train_Standstill;
      break;
    
  }
  /* act_SM_StartOfMissionProcedure */ switch (_3_SM_StartOfMissionProcedure_s) {
    case SSM_st_Procedure_Off_SM_StartOf :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->EB_Requested = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_60 = kcg_false;
      outC->Condition_58 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_46 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_10 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_UN_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SN_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_StartOfMissionProcedure_stat = SSM_st_Procedure_Off_SM_StartOf;
      break;
    case SSM_st_Procedure_On_SM_StartOfM :
      outC->EB_Requested = kcg_false;
      if (SM_StartOfMissionProcedure_rese) {
        outC->init = kcg_true;
      }
      /* init_SM_SoM_On */ if (outC->init) {
        outC->init = kcg_false;
        SM_SoM_On_state_sel_SM_StartOfM = SSM_st_Waiting_Driver_Command_S;
      }
      else {
        SM_SoM_On_state_sel_SM_StartOfM = outC->SM_SoM_On_state_nxt_SM_StartOfM;
      }
      /* sel_SM_SoM_On */ switch (SM_SoM_On_state_sel_SM_StartOfM) {
        case SSM_st_Waiting_Driver_Command_S :
          _2_br_1_guard_SM_StartOfMission = Driver_Req_NL & Train_Permitted_NL;
          if (_2_br_1_guard_SM_StartOfMission) {
            SM_SoM_On_reset_act_SM_StartOfM = kcg_true;
            SM_SoM_On_state_act_SM_StartOfM = SSM_st_NL_Mode_SM_StartOfMissio;
          }
          else if (Driver_Req_SH) {
            SM_SoM_On_reset_act_SM_StartOfM = kcg_true;
            SM_SoM_On_state_act_SM_StartOfM = _181_SSM_st_Procedure_SH_Initia;
          }
          else {
            if (Valid_Train_Data_Stored) {
              SM_SoM_On_state_act_SM_StartOfM = SSM_st_Waiting_Driver_Strating_;
            }
            else {
              SM_SoM_On_state_act_SM_StartOfM = SSM_st_Waiting_Driver_Command_S;
            }
            SM_SoM_On_reset_act_SM_StartOfM = Valid_Train_Data_Stored;
          }
          break;
        case SSM_st_NL_Mode_SM_StartOfMissio :
          SM_SoM_On_reset_act_SM_StartOfM = kcg_false;
          SM_SoM_On_state_act_SM_StartOfM = SSM_st_NL_Mode_SM_StartOfMissio;
          break;
        case _181_SSM_st_Procedure_SH_Initia :
          SM_SoM_On_reset_act_SM_StartOfM = kcg_false;
          SM_SoM_On_state_act_SM_StartOfM = _181_SSM_st_Procedure_SH_Initia;
          break;
        case SSM_st_Waiting_Driver_Strating_ :
          br_1_guard_SM_StartOfMissionPro = (Current_Level == M_LEVEL_Level_1) |
            (Current_Level == M_LEVEL_Level_2) | (Current_Level ==
              M_LEVEL_Level_3);
          _1_br_1_guard_SM_StartOfMission = Current_Level == M_LEVEL_Level_0;
          br_2_guard_SM_StartOfMissionPro = Driver_Req_Start &
            (_1_br_1_guard_SM_StartOfMission | (Current_Level ==
                M_LEVEL_Level_NTC_specified_by_));
          if (br_1_guard_SM_StartOfMissionPro) {
            SM_SoM_On_reset_act_SM_StartOfM = kcg_true;
            SM_SoM_On_state_act_SM_StartOfM = _180_SSM_st_Waiting_Driver_Sele;
          }
          else {
            if (br_2_guard_SM_StartOfMissionPro) {
              if (_1_br_1_guard_SM_StartOfMission) {
                SM_SoM_On_state_act_SM_StartOfM =
                  SSM_st_Level_0_SM_StartOfMissio;
              }
              else {
                SM_SoM_On_state_act_SM_StartOfM =
                  SSM_st_Level_NTC_SM_StartOfMiss;
              }
            }
            else {
              SM_SoM_On_state_act_SM_StartOfM = SSM_st_Waiting_Driver_Strating_;
            }
            SM_SoM_On_reset_act_SM_StartOfM = br_2_guard_SM_StartOfMissionPro;
          }
          break;
        case SSM_st_Level_0_SM_StartOfMissio :
          if (Driver_Ack_UN) {
            SM_SoM_On_state_act_SM_StartOfM = SSM_st_UN_Mode_SM_StartOfMissio;
          }
          else {
            SM_SoM_On_state_act_SM_StartOfM = SSM_st_Level_0_SM_StartOfMissio;
          }
          SM_SoM_On_reset_act_SM_StartOfM = Driver_Ack_UN;
          break;
        case SSM_st_Level_NTC_SM_StartOfMiss :
          if (Driver_Ack_SN) {
            SM_SoM_On_state_act_SM_StartOfM = SSM_st_SN_Mode_SM_StartOfMissio;
          }
          else {
            SM_SoM_On_state_act_SM_StartOfM = SSM_st_Level_NTC_SM_StartOfMiss;
          }
          SM_SoM_On_reset_act_SM_StartOfM = Driver_Ack_SN;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissio :
          SM_SoM_On_reset_act_SM_StartOfM = kcg_false;
          SM_SoM_On_state_act_SM_StartOfM = SSM_st_SN_Mode_SM_StartOfMissio;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissio :
          SM_SoM_On_reset_act_SM_StartOfM = kcg_false;
          SM_SoM_On_state_act_SM_StartOfM = SSM_st_UN_Mode_SM_StartOfMissio;
          break;
        case _180_SSM_st_Waiting_Driver_Sele :
          SM_SoM_On_reset_act_SM_StartOfM = kcg_false;
          SM_SoM_On_state_act_SM_StartOfM = _180_SSM_st_Waiting_Driver_Sele;
          break;
        
      }
      /* act_SM_SoM_On */ switch (SM_SoM_On_state_act_SM_StartOfM) {
        case _180_SSM_st_Waiting_Driver_Sele :
          if (SM_SoM_On_reset_act_SM_StartOfM) {
            /* 1 */ Procedure_Start_L1_L2_L3_reset_(&outC->Context_1);
          }
          break;
        
      }
      if (SM_StartOfMissionProcedure_rese) {
        /* 1 */ Procedure_Start_L1_L2_L3_reset_(&outC->Context_1);
      }
      /* act_SM_SoM_On */ switch (SM_SoM_On_state_act_SM_StartOfM) {
        case SSM_st_Waiting_Driver_Command_S :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissio :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case _181_SSM_st_Procedure_SH_Initia :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          if (SM_SoM_On_reset_act_SM_StartOfM) {
            /* 1 */ SH_Initiated_By_Driver_On_reset(&outC->_1_Context_1);
          }
          break;
        case SSM_st_Waiting_Driver_Strating_ :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_Level_0_SM_StartOfMissio :
          outC->Ack_UN_Req_To_Driver = kcg_true;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_Level_NTC_SM_StartOfMiss :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_true;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissio :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissio :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case _180_SSM_st_Waiting_Driver_Sele :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          /* 1 */
          Procedure_Start_L1_L2_L3_Proced(
            Current_Level,
            Driver_Ack_LS,
            Driver_Ack_OS,
            Driver_Ack_SH,
            Driver_Ack_SR,
            Driver_Req_Start,
            MA_SSP_Gradiant_Available,
            Mode_Profile_On_Board,
            RBC_Authorizes_SR,
            &outC->Context_1);
          _L5_SM_StartOfMissionProcedure_ = outC->Context_1.Condition_8;
          _L6_SM_StartOfMissionProcedure_ = outC->Context_1.Condition_10_31;
          _L7_SM_StartOfMissionProcedure_ = outC->Context_1.Condition_15;
          _L8_SM_StartOfMissionProcedure_ = outC->Context_1.Condition_50;
          _L9_SM_StartOfMissionProcedure_ = outC->Context_1.Condition_70;
          _L10_SM_StartOfMissionProcedure = outC->Context_1.MA_Req_To_RBC;
          outC->Ack_LS_Req_To_Driver = outC->Context_1.Ack_LS_Req_To_Driver;
          outC->Ack_OS_Req_To_Driver = outC->Context_1.Ack_OS_Req_To_Driver;
          outC->Ack_SH_Req_To_Driver = outC->Context_1.Ack_SH_Req_To_Driver;
          outC->Ack_SR_Req_To_Driver = outC->Context_1.Ack_SR_Req_To_Driver;
          break;
        
      }
      if (SM_StartOfMissionProcedure_rese) {
        /* 1 */ SH_Initiated_By_Driver_On_reset(&outC->_1_Context_1);
      }
      outC->SM_StartOfMissionProcedure_stat = SSM_st_Procedure_On_SM_StartOfM;
      /* act_SM_SoM_On */ switch (SM_SoM_On_state_act_SM_StartOfM) {
        case _180_SSM_st_Waiting_Driver_Sele :
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->Condition_8 = _L5_SM_StartOfMissionProcedure_;
          outC->Condition_10 = _L6_SM_StartOfMissionProcedure_;
          outC->Condition_15 = _L7_SM_StartOfMissionProcedure_;
          outC->Condition_50 = _L8_SM_StartOfMissionProcedure_;
          outC->Condition_70 = _L9_SM_StartOfMissionProcedure_;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->MA_Req_To_RBC = _L10_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_state_nxt_SM_StartOfM =
            _180_SSM_st_Waiting_Driver_Sele;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissio :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_true;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfM =
            SSM_st_UN_Mode_SM_StartOfMissio;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissio :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_true;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfM =
            SSM_st_SN_Mode_SM_StartOfMissio;
          break;
        case SSM_st_Level_NTC_SM_StartOfMiss :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfM =
            SSM_st_Level_NTC_SM_StartOfMiss;
          break;
        case SSM_st_Level_0_SM_StartOfMissio :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfM =
            SSM_st_Level_0_SM_StartOfMissio;
          break;
        case SSM_st_Waiting_Driver_Strating_ :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfM =
            SSM_st_Waiting_Driver_Strating_;
          break;
        case _181_SSM_st_Procedure_SH_Initia :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          /* 1 */
          SH_Initiated_By_Driver_On_Proce(
            Current_Level,
            Driver_Req_SH,
            kcg_false,
            Shunting_Granted_By_RBC,
            &outC->_1_Context_1);
          outC->Clean_BG_List_SH_Area =
            outC->_1_Context_1.Clean_BG_List_SH_Area;
          outC->Condition_5 = outC->_1_Context_1.Condition5;
          outC->Condition_6 = outC->_1_Context_1.Condition6;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req =
            outC->_1_Context_1.End_Of_Mission_Procedure_Req;
          outC->Request_For_SH_To_RBC =
            outC->_1_Context_1.Request_For_SH_To_RBC;
          outC->SH_Refused_By_RBC_To_DMI =
            outC->_1_Context_1.SH_Refused_By_RBC_To_DMI;
          outC->SM_SoM_On_state_nxt_SM_StartOfM =
            _181_SSM_st_Procedure_SH_Initia;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissio :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_true;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfM =
            SSM_st_NL_Mode_SM_StartOfMissio;
          break;
        case SSM_st_Waiting_Driver_Command_S :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfM =
            SSM_st_Waiting_Driver_Command_S;
          break;
        
      }
      break;
    case SSM_st_EB_Requested_SM_StartOfM :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->EB_Requested = kcg_true;
      outC->Condition_70 = kcg_false;
      outC->Condition_60 = kcg_false;
      outC->Condition_58 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_46 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_10 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_UN_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SN_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_StartOfMissionProcedure_stat = SSM_st_EB_Requested_SM_StartOfM;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_StartOfMission_Proced.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

