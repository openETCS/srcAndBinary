/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_Train_Trip_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_Train_Trip_init_Proce(outC_Procedure_Train_Trip_Proce *outC)
{
  outC->Ack_LS_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_TR_Req_To_Driver = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Condition_Trip = kcg_true;
  outC->Condition_5 = kcg_true;
  outC->Condition_6 = kcg_true;
  outC->Condition_7 = kcg_true;
  outC->Condition_8 = kcg_true;
  outC->Condition_31 = kcg_true;
  outC->Condition_15 = kcg_true;
  outC->Condition_50 = kcg_true;
  outC->Condition_62 = kcg_true;
  outC->Condition_63 = kcg_true;
  outC->Condition_68 = kcg_true;
  outC->Condition_70 = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->init = kcg_true;
  outC->SM_Train_Trip_state_nxt = SSM_st_Train_Trip_procedure_off;
  /* 1 */ SH_Initiated_By_Driver_On_init_(&outC->_1_Context_1);
  /* 1 */ Procedure_Start_L1_L2_L3_init_P(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_Train_Trip_reset_Proc(outC_Procedure_Train_Trip_Proce *outC)
{
  outC->init = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_reset(&outC->_1_Context_1);
  /* 1 */ Procedure_Start_L1_L2_L3_reset_(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_Train_Trip */
void Procedure_Train_Trip_Procedures(
  /* Procedures::Procedure_Train_Trip::Condition_To_Trip */ kcg_bool Condition_To_Trip,
  /* Procedures::Procedure_Train_Trip::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_Train_Trip::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_OS */ kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_SR */ kcg_bool Driver_Ack_SR,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_TR */ kcg_bool Driver_Ack_TR,
  /* Procedures::Procedure_Train_Trip::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_Train_Trip::Driver_Req_Start */ kcg_bool Driver_Req_Start,
  /* Procedures::Procedure_Train_Trip::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  /* Procedures::Procedure_Train_Trip::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Procedures::Procedure_Train_Trip::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::Procedure_Train_Trip::RCB_Ack_And_EB_Revocked */ kcg_bool RCB_Ack_And_EB_Revocked,
  /* Procedures::Procedure_Train_Trip::RBC_Authorizes_SR */ kcg_bool RBC_Authorizes_SR,
  /* Procedures::Procedure_Train_Trip::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_Train_Trip::Train_Standstill */ kcg_bool Train_Standstill,
  /* Procedures::Procedure_Train_Trip::Valid_Train_Data_Stored */ kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_Train_Trip_Proce *outC)
{
  /* Procedures::Procedure_Train_Trip */
  static kcg_bool tmp;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack */
  static kcg_bool _2_br_2_guard_SM_Train_Trip_Tri;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack */
  static kcg_bool _1_br_1_guard_SM_Train_Trip_Tri;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack */
  static kcg_bool br_2_guard_SM_Train_Trip_Trip_M;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack */
  static kcg_bool br_1_guard_SM_Train_Trip_Trip_M;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Post_Trip_Mode */
  static kcg_bool br_2_guard_SM_Train_Trip_Post_T;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Post_Trip_Mode */
  static kcg_bool br_1_guard_SM_Train_Trip_Post_T;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip SM_Train_Trip_state_sel;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool SM_Train_Trip_reset_act;
  
  /* init_SM_Train_Trip */ if (outC->init) {
    outC->init = kcg_false;
    SM_Train_Trip_state_sel = SSM_st_Train_Trip_procedure_off;
  }
  else {
    SM_Train_Trip_state_sel = outC->SM_Train_Trip_state_nxt;
  }
  /* sel_SM_Train_Trip */ switch (SM_Train_Trip_state_sel) {
    case SSM_st_Train_Trip_procedure_off :
      switch (Current_Mode) {
        case FS_Level_And_Mode_Types_Pkg :
          tmp = kcg_true;
          break;
        case LS_Level_And_Mode_Types_Pkg :
          tmp = kcg_true;
          break;
        case OS_Level_And_Mode_Types_Pkg :
          tmp = kcg_true;
          break;
        case SR_Level_And_Mode_Types_Pkg :
          tmp = kcg_true;
          break;
        case SN_Level_And_Mode_Types_Pkg :
          tmp = kcg_true;
          break;
        case UN_Level_And_Mode_Types_Pkg :
          tmp = kcg_true;
          break;
        case SH_Level_And_Mode_Types_Pkg :
          tmp = kcg_true;
          break;
        case SB_Level_And_Mode_Types_Pkg :
          tmp = kcg_true;
          break;
        
        default :
          tmp = kcg_false;
      }
      SM_Train_Trip_reset_act = tmp & Condition_To_Trip;
      if (SM_Train_Trip_reset_act) {
        SM_Train_Trip_state_act = SSM_st_Trip_Mode_SM_Train_Trip;
      }
      else {
        SM_Train_Trip_state_act = SSM_st_Train_Trip_procedure_off;
      }
      break;
    case SSM_st_Trip_Mode_SM_Train_Trip :
      if (Train_Standstill) {
        SM_Train_Trip_state_act = SSM_st_Trip_Mode_Waiting_Ack_SM;
      }
      else {
        SM_Train_Trip_state_act = SSM_st_Trip_Mode_SM_Train_Trip;
      }
      SM_Train_Trip_reset_act = Train_Standstill;
      break;
    case SSM_st_Trip_Mode_Waiting_Ack_SM :
      br_1_guard_SM_Train_Trip_Trip_M = (Current_Level == M_LEVEL_Level_1) |
        (Current_Level == M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
      _1_br_1_guard_SM_Train_Trip_Tri = Current_Level == M_LEVEL_Level_0;
      _2_br_2_guard_SM_Train_Trip_Tri = Current_Level ==
        M_LEVEL_Level_NTC_specified_by_;
      br_2_guard_SM_Train_Trip_Trip_M = !Valid_Train_Data_Stored &
        (_1_br_1_guard_SM_Train_Trip_Tri | _2_br_2_guard_SM_Train_Trip_Tri);
      SM_Train_Trip_reset_act = Driver_Ack_TR &
        (br_1_guard_SM_Train_Trip_Trip_M | (br_2_guard_SM_Train_Trip_Trip_M |
            (Valid_Train_Data_Stored & (_1_br_1_guard_SM_Train_Trip_Tri |
                _2_br_2_guard_SM_Train_Trip_Tri))));
      if (SM_Train_Trip_reset_act) {
        if (br_1_guard_SM_Train_Trip_Trip_M) {
          SM_Train_Trip_state_act = SSM_st_Post_Trip_Mode_SM_Train_;
        }
        else if (br_2_guard_SM_Train_Trip_Trip_M) {
          SM_Train_Trip_state_act = SSM_st_SH_Mode_SM_Train_Trip;
        }
        else if (_1_br_1_guard_SM_Train_Trip_Tri) {
          SM_Train_Trip_state_act = SSM_st_UN_Mode_SM_Train_Trip;
        }
        else {
          SM_Train_Trip_state_act = SSM_st_SN_Mode_SM_Train_Trip;
        }
      }
      else {
        SM_Train_Trip_state_act = SSM_st_Trip_Mode_Waiting_Ack_SM;
      }
      break;
    case SSM_st_Post_Trip_Mode_SM_Train_ :
      br_1_guard_SM_Train_Trip_Post_T = Current_Level == M_LEVEL_Level_1;
      br_2_guard_SM_Train_Trip_Post_T = (Current_Level == M_LEVEL_Level_2) |
        (Current_Level == M_LEVEL_Level_3);
      if (br_1_guard_SM_Train_Trip_Post_T) {
        SM_Train_Trip_reset_act = kcg_true;
        SM_Train_Trip_state_act = SSM_st_Waiting_Driver_Selection;
      }
      else if (br_2_guard_SM_Train_Trip_Post_T) {
        SM_Train_Trip_reset_act = kcg_true;
        SM_Train_Trip_state_act = SSM_st_Wait_RBC_Ack_SM_Train_Tr;
      }
      else {
        if (Driver_Req_SH) {
          SM_Train_Trip_state_act = SSM_st_Procedure_SH_Initiated_B;
        }
        else {
          SM_Train_Trip_state_act = SSM_st_Post_Trip_Mode_SM_Train_;
        }
        SM_Train_Trip_reset_act = Driver_Req_SH;
      }
      break;
    case SSM_st_SH_Mode_SM_Train_Trip :
      SM_Train_Trip_reset_act = kcg_false;
      SM_Train_Trip_state_act = SSM_st_SH_Mode_SM_Train_Trip;
      break;
    case SSM_st_UN_Mode_SM_Train_Trip :
      SM_Train_Trip_reset_act = kcg_false;
      SM_Train_Trip_state_act = SSM_st_UN_Mode_SM_Train_Trip;
      break;
    case SSM_st_SN_Mode_SM_Train_Trip :
      SM_Train_Trip_reset_act = kcg_false;
      SM_Train_Trip_state_act = SSM_st_SN_Mode_SM_Train_Trip;
      break;
    case SSM_st_Waiting_Driver_Selection :
      if (Driver_Req_SH) {
        SM_Train_Trip_state_act = SSM_st_Procedure_SH_Initiated_B;
      }
      else {
        SM_Train_Trip_state_act = SSM_st_Waiting_Driver_Selection;
      }
      SM_Train_Trip_reset_act = Driver_Req_SH;
      break;
    case SSM_st_Wait_RBC_Ack_SM_Train_Tr :
      if (RCB_Ack_And_EB_Revocked) {
        SM_Train_Trip_state_act = SSM_st_Waiting_Driver_Selection;
      }
      else {
        SM_Train_Trip_state_act = SSM_st_Wait_RBC_Ack_SM_Train_Tr;
      }
      SM_Train_Trip_reset_act = RCB_Ack_And_EB_Revocked;
      break;
    case SSM_st_Procedure_SH_Initiated_B :
      SM_Train_Trip_reset_act = kcg_false;
      SM_Train_Trip_state_act = SSM_st_Procedure_SH_Initiated_B;
      break;
    
  }
  /* act_SM_Train_Trip */ switch (SM_Train_Trip_state_act) {
    case SSM_st_Train_Trip_procedure_off :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_68 = kcg_false;
      outC->Condition_63 = kcg_false;
      outC->Condition_62 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_31 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_7 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Condition_Trip = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_Train_Trip_state_nxt = SSM_st_Train_Trip_procedure_off;
      break;
    case SSM_st_Trip_Mode_SM_Train_Trip :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_68 = kcg_false;
      outC->Condition_63 = kcg_false;
      outC->Condition_62 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_31 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_7 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Condition_Trip = kcg_true;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_Train_Trip_state_nxt = SSM_st_Trip_Mode_SM_Train_Trip;
      break;
    case SSM_st_Trip_Mode_Waiting_Ack_SM :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_68 = kcg_false;
      outC->Condition_63 = kcg_false;
      outC->Condition_62 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_31 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_7 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Condition_Trip = kcg_true;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_TR_Req_To_Driver = kcg_true;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_Train_Trip_state_nxt = SSM_st_Trip_Mode_Waiting_Ack_SM;
      break;
    case SSM_st_Post_Trip_Mode_SM_Train_ :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_68 = kcg_false;
      outC->Condition_63 = kcg_false;
      outC->Condition_62 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_31 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_7 = kcg_true;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Condition_Trip = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_Train_Trip_state_nxt = SSM_st_Post_Trip_Mode_SM_Train_;
      break;
    case SSM_st_SH_Mode_SM_Train_Trip :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_68 = kcg_true;
      outC->Condition_63 = kcg_false;
      outC->Condition_62 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_31 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_7 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Condition_Trip = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_Train_Trip_state_nxt = SSM_st_SH_Mode_SM_Train_Trip;
      break;
    case SSM_st_UN_Mode_SM_Train_Trip :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_68 = kcg_false;
      outC->Condition_63 = kcg_false;
      outC->Condition_62 = kcg_true;
      outC->Condition_50 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_31 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_7 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Condition_Trip = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_Train_Trip_state_nxt = SSM_st_UN_Mode_SM_Train_Trip;
      break;
    case SSM_st_SN_Mode_SM_Train_Trip :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_68 = kcg_false;
      outC->Condition_63 = kcg_true;
      outC->Condition_62 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_31 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_7 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Condition_Trip = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_Train_Trip_state_nxt = SSM_st_SN_Mode_SM_Train_Trip;
      break;
    case SSM_st_Waiting_Driver_Selection :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition_68 = kcg_false;
      outC->Condition_63 = kcg_false;
      outC->Condition_62 = kcg_false;
      outC->Condition_7 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Condition_Trip = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_TR_Req_To_Driver = kcg_false;
      if (SM_Train_Trip_reset_act) {
        /* 1 */ Procedure_Start_L1_L2_L3_reset_(&outC->Context_1);
      }
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
      outC->Ack_LS_Req_To_Driver = outC->Context_1.Ack_LS_Req_To_Driver;
      outC->Ack_OS_Req_To_Driver = outC->Context_1.Ack_OS_Req_To_Driver;
      outC->Ack_SH_Req_To_Driver = outC->Context_1.Ack_SH_Req_To_Driver;
      outC->Ack_SR_Req_To_Driver = outC->Context_1.Ack_SR_Req_To_Driver;
      outC->Condition_8 = outC->Context_1.Condition_8;
      outC->Condition_31 = outC->Context_1.Condition_10_31;
      outC->Condition_15 = outC->Context_1.Condition_15;
      outC->Condition_50 = outC->Context_1.Condition_50;
      outC->Condition_70 = outC->Context_1.Condition_70;
      outC->MA_Req_To_RBC = outC->Context_1.MA_Req_To_RBC;
      outC->SM_Train_Trip_state_nxt = SSM_st_Waiting_Driver_Selection;
      break;
    case SSM_st_Wait_RBC_Ack_SM_Train_Tr :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_68 = kcg_false;
      outC->Condition_63 = kcg_false;
      outC->Condition_62 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_31 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_7 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Condition_Trip = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_Train_Trip_state_nxt = SSM_st_Wait_RBC_Ack_SM_Train_Tr;
      break;
    case SSM_st_Procedure_SH_Initiated_B :
      outC->MA_Req_To_RBC = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_68 = kcg_false;
      outC->Condition_63 = kcg_false;
      outC->Condition_62 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_31 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_7 = kcg_false;
      outC->Condition_Trip = kcg_false;
      outC->Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      if (SM_Train_Trip_reset_act) {
        /* 1 */ SH_Initiated_By_Driver_On_reset(&outC->_1_Context_1);
      }
      /* 1 */
      SH_Initiated_By_Driver_On_Proce(
        Current_Level,
        Driver_Req_SH,
        On_Going_Mission,
        Shunting_Granted_By_RBC,
        &outC->_1_Context_1);
      outC->Clean_BG_List_SH_Area = outC->_1_Context_1.Clean_BG_List_SH_Area;
      outC->Condition_5 = outC->_1_Context_1.Condition5;
      outC->Condition_6 = outC->_1_Context_1.Condition6;
      outC->End_Of_Mission_Procedure_Req =
        outC->_1_Context_1.End_Of_Mission_Procedure_Req;
      outC->Request_For_SH_To_RBC = outC->_1_Context_1.Request_For_SH_To_RBC;
      outC->SH_Refused_By_RBC_To_DMI =
        outC->_1_Context_1.SH_Refused_By_RBC_To_DMI;
      outC->SM_Train_Trip_state_nxt = SSM_st_Procedure_SH_Initiated_B;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_Train_Trip_Procedures.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

