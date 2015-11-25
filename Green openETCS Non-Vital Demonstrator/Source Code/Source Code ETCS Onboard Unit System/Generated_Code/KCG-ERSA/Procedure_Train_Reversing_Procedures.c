/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_Train_Reversing_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_Train_Reversing_init_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC)
{
  outC->Condition_59 = kcg_true;
  outC->Ack_RV_Req_To_Driver = kcg_true;
  outC->init = kcg_true;
  outC->SM_Train_Reversing_state_nxt =
    SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_Train_Reversing_reset_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_Train_Reversing */
void Procedure_Train_Reversing_Procedures(
  /* Procedures::Procedure_Train_Reversing::Driver_Ack_RV */ kcg_bool Driver_Ack_RV,
  /* Procedures::Procedure_Train_Reversing::Train_Standstill */ kcg_bool Train_Standstill,
  /* Procedures::Procedure_Train_Reversing::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_Train_Reversing::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_Train_Reversing::Reversing_Data */ T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  outC_Procedure_Train_Reversing_Procedures *outC)
{
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */ SSM_ST_SM_Train_Reversing SM_Train_Reversing_state_sel;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */ SSM_ST_SM_Train_Reversing SM_Train_Reversing_state_act;
  /* Procedures::Procedure_Train_Reversing::Loc_Max_Safe_Front_In_RV_Area */ kcg_bool Loc_Max_Safe_Front_In_RV_Area;
  /* Procedures::Procedure_Train_Reversing::Loc_RV_Data_Available */ kcg_bool Loc_RV_Data_Available;
  /* Procedures::Procedure_Train_Reversing::Loc_Cond_Procedure_On */ kcg_bool Loc_Cond_Procedure_On;
  
  /* init_SM_Train_Reversing */ if (outC->init) {
    outC->init = kcg_false;
    SM_Train_Reversing_state_sel =
      SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
  }
  else {
    SM_Train_Reversing_state_sel = outC->SM_Train_Reversing_state_nxt;
  }
  /* 1 */
  Reversing_Calculations_Librairies(
    Reversing_Data,
    Train_Position,
    &Loc_Max_Safe_Front_In_RV_Area,
    &Loc_RV_Data_Available);
  Loc_Cond_Procedure_On = ((Current_Mode == FS_Level_And_Mode_Types_Pkg) |
      (Current_Mode == LS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
        OS_Level_And_Mode_Types_Pkg)) & Loc_RV_Data_Available;
  /* sel_SM_Train_Reversing */ switch (SM_Train_Reversing_state_sel) {
    case SSM_st_Reversing_Procedure_Off_SM_Train_Reversing :
      if (Loc_Cond_Procedure_On) {
        SM_Train_Reversing_state_act =
          SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      }
      else {
        SM_Train_Reversing_state_act =
          SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      }
      break;
    case SSM_st_Reversing_Condition_SM_Train_Reversing :
      if (Driver_Ack_RV) {
        SM_Train_Reversing_state_act = SSM_st_RV_Mode_SM_Train_Reversing;
      }
      else if (Loc_Cond_Procedure_On) {
        if (Train_Standstill & Loc_Max_Safe_Front_In_RV_Area) {
          SM_Train_Reversing_state_act =
            SSM_st_Reversing_Condition_SM_Train_Reversing;
        }
        else {
          SM_Train_Reversing_state_act =
            SSM_st_Reversing_Data_Available_SM_Train_Reversing;
        }
      }
      else {
        SM_Train_Reversing_state_act =
          SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      }
      break;
    case SSM_st_RV_Mode_SM_Train_Reversing :
      SM_Train_Reversing_state_act = SSM_st_RV_Mode_SM_Train_Reversing;
      break;
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      if (Train_Standstill & Loc_Max_Safe_Front_In_RV_Area) {
        SM_Train_Reversing_state_act =
          SSM_st_Reversing_Condition_SM_Train_Reversing;
      }
      else if (Loc_Cond_Procedure_On) {
        SM_Train_Reversing_state_act =
          SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      }
      else {
        SM_Train_Reversing_state_act =
          SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      }
      break;
    
  }
  /* act_SM_Train_Reversing */ switch (SM_Train_Reversing_state_act) {
    case SSM_st_Reversing_Procedure_Off_SM_Train_Reversing :
      outC->Ack_RV_Req_To_Driver = kcg_false;
      outC->Condition_59 = kcg_false;
      outC->SM_Train_Reversing_state_nxt =
        SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      break;
    case SSM_st_Reversing_Condition_SM_Train_Reversing :
      outC->Ack_RV_Req_To_Driver = kcg_true;
      outC->Condition_59 = kcg_false;
      outC->SM_Train_Reversing_state_nxt =
        SSM_st_Reversing_Condition_SM_Train_Reversing;
      break;
    case SSM_st_RV_Mode_SM_Train_Reversing :
      outC->Ack_RV_Req_To_Driver = kcg_false;
      outC->Condition_59 = kcg_true;
      outC->SM_Train_Reversing_state_nxt = SSM_st_RV_Mode_SM_Train_Reversing;
      break;
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      outC->Ack_RV_Req_To_Driver = kcg_false;
      outC->Condition_59 = kcg_false;
      outC->SM_Train_Reversing_state_nxt =
        SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_Train_Reversing_Procedures.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

