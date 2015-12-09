/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_With_Mode_Profile_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_With_Mode_Profile_init_Procedures(
  outC_Procedure_With_Mode_Profile_Procedures *outC)
{
  outC->Condition_15_50_70 = kcg_true;
  outC->Condition_34_61_71 = kcg_true;
  outC->Condition_40_51_72 = kcg_true;
  outC->Condition_73_74 = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Ack_Req_To_Driver = kcg_true;
  outC->Loc_Confirmation = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->Loc_Timer = 0;
  outC->SM_Mode_Profile_By_Trackside_state_nxt =
    SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
  outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
    SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
  outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
    SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
  /* 8 */ Counter_init_pwlinear_int(&outC->Context_8);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_With_Mode_Profile_reset_Procedures(
  outC_Procedure_With_Mode_Profile_Procedures *outC)
{
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* 8 */ Counter_reset_pwlinear_int(&outC->Context_8);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_With_Mode_Profile */
void Procedure_With_Mode_Profile_Procedures(
  /* Procedures::Procedure_With_Mode_Profile::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Driver_Ack_Mode_Profile */ kcg_bool Driver_Ack_Mode_Profile,
  /* Procedures::Procedure_With_Mode_Profile::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_With_Mode_Profile::Procedure_Possible */ kcg_bool Procedure_Possible,
  /* Procedures::Procedure_With_Mode_Profile::Profile_Mode */ T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Selected_Mode */ T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Supervision_Modes */ kcg_bool Supervision_Modes,
  /* Procedures::Procedure_With_Mode_Profile::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_With_Mode_Profile::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_With_Mode_Profile_Procedures *outC)
{
  /* Procedures::Procedure_With_Mode_Profile */ kcg_bool tmp2;
  /* Procedures::Procedure_With_Mode_Profile */ kcg_int tmp1;
  /* Procedures::Procedure_With_Mode_Profile */ kcg_bool tmp;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */ SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */ SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location SM_Futher_Location_state_sel_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */ kcg_bool SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */ SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */ SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location SM_Current_Location_state_sel_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack */ kcg_bool br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Req_Current_Location */ kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Req_Current_Location */ kcg_bool br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::IfBlock1::else */ kcg_bool else_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack_IfBlock1;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::IfBlock1 */ kcg_bool IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */ SSM_ST_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_state_sel;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */ SSM_ST_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_state_act;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */ kcg_bool SM_Mode_Profile_By_Trackside_reset_act;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Supervision_Condition_Covered */ kcg_bool Loc_Supervision_Condition_Covered;
  
  /* init_SM_Mode_Profile_By_Trackside */ if (outC->init2) {
    SM_Mode_Profile_By_Trackside_state_sel =
      SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
  }
  else {
    SM_Mode_Profile_By_Trackside_state_sel =
      outC->SM_Mode_Profile_By_Trackside_state_nxt;
  }
  /* 1 */
  Mode_Profile_Calculations_Librairies(
    Selected_Mode,
    Mode_Profile_On_Board,
    Profile_Mode,
    Train_Speed,
    Train_Position,
    &br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack,
    &Loc_Supervision_Condition_Covered,
    &IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack,
    &tmp2);
  /* sel_SM_Mode_Profile_By_Trackside */ switch (SM_Mode_Profile_By_Trackside_state_sel) {
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      /* last_init_ck_Loc_Confirmation */ if (outC->init2) {
        tmp2 = kcg_true;
      }
      else {
        tmp2 = outC->Loc_Confirmation;
      }
      SM_Mode_Profile_By_Trackside_reset_act = !Procedure_Possible & tmp2;
      if (SM_Mode_Profile_By_Trackside_reset_act) {
        SM_Mode_Profile_By_Trackside_state_act =
          SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      }
      else {
        SM_Mode_Profile_By_Trackside_state_act =
          SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
      }
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      tmp = !Procedure_Possible;
      if (tmp) {
        SM_Mode_Profile_By_Trackside_reset_act = kcg_true;
        SM_Mode_Profile_By_Trackside_state_act =
          SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      }
      else {
        if (br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack) {
          SM_Mode_Profile_By_Trackside_state_act =
            SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
        }
        else {
          SM_Mode_Profile_By_Trackside_state_act =
            SSM_st_Futher_location_SM_Mode_Profile_By_Trackside;
        }
        SM_Mode_Profile_By_Trackside_reset_act =
          br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
      }
      break;
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      else_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack_IfBlock1 =
        IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack &
        !br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
      SM_Mode_Profile_By_Trackside_reset_act = Procedure_Possible &
        (else_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack_IfBlock1 |
          (IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack &
            br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack));
      if (SM_Mode_Profile_By_Trackside_reset_act) {
        if (else_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack_IfBlock1) {
          SM_Mode_Profile_By_Trackside_state_act =
            SSM_st_Futher_location_SM_Mode_Profile_By_Trackside;
        }
        else {
          SM_Mode_Profile_By_Trackside_state_act =
            SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
        }
      }
      else {
        SM_Mode_Profile_By_Trackside_state_act =
          SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      }
      break;
    
  }
  /* act_SM_Mode_Profile_By_Trackside */ switch (SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      outC->Loc_Confirmation = kcg_true;
      outC->Service_Brake_Command = kcg_false;
      outC->Condition_73_74 = kcg_false;
      outC->Condition_40_51_72 = kcg_false;
      outC->Condition_34_61_71 = kcg_false;
      outC->Condition_15_50_70 = kcg_false;
      outC->Ack_Req_To_Driver = kcg_false;
      outC->Loc_Timer = 0;
      outC->SM_Mode_Profile_By_Trackside_state_nxt =
        SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      outC->Loc_Confirmation = kcg_true;
      outC->Service_Brake_Command = kcg_false;
      outC->Condition_73_74 = kcg_false;
      outC->Condition_40_51_72 = kcg_false;
      outC->Condition_34_61_71 = kcg_false;
      if (SM_Mode_Profile_By_Trackside_reset_act) {
        outC->init1 = kcg_true;
      }
      /* init_SM_Futher_Location */ if (outC->init1) {
        outC->init1 = kcg_false;
        SM_Futher_Location_state_sel_SM_Mode_Profile_By_Trackside_Futher_location =
          SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
      }
      else {
        SM_Futher_Location_state_sel_SM_Mode_Profile_By_Trackside_Futher_location =
          outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
      }
      /* sel_SM_Futher_Location */ switch (SM_Futher_Location_state_sel_SM_Mode_Profile_By_Trackside_Futher_location) {
        case SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          if (Supervision_Modes) {
            SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          else {
            SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          break;
        case SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          if (Loc_Supervision_Condition_Covered) {
            SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          else {
            SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          if (Driver_Ack_Mode_Profile) {
            SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          else {
            SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          break;
        
      }
      outC->Loc_Timer = 0;
      outC->SM_Mode_Profile_By_Trackside_state_nxt =
        SSM_st_Futher_location_SM_Mode_Profile_By_Trackside;
      /* act_SM_Futher_Location */ switch (SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location) {
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          outC->Condition_15_50_70 = kcg_true;
          outC->Ack_Req_To_Driver = kcg_false;
          outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          outC->Condition_15_50_70 = kcg_false;
          outC->Ack_Req_To_Driver = kcg_true;
          outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          break;
        case SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          outC->Condition_15_50_70 = kcg_false;
          outC->Ack_Req_To_Driver = kcg_false;
          outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          break;
        case SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          outC->Condition_15_50_70 = kcg_false;
          outC->Ack_Req_To_Driver = kcg_false;
          outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          break;
        
      }
      break;
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      if (SM_Mode_Profile_By_Trackside_reset_act) {
        outC->init = kcg_true;
      }
      /* init_SM_Current_Location */ if (outC->init) {
        outC->init = kcg_false;
        SM_Current_Location_state_sel_SM_Mode_Profile_By_Trackside_Current_Location =
          SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
      }
      else {
        SM_Current_Location_state_sel_SM_Mode_Profile_By_Trackside_Current_Location =
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
      }
      /* sel_SM_Current_Location */ switch (SM_Current_Location_state_sel_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp = kcg_false;
          if (Driver_Ack_Mode_Profile) {
            SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          else {
            SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            Driver_Ack_Mode_Profile;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp = kcg_false;
          SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            kcg_false;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp = kcg_false;
          if (Driver_Ack_Mode_Profile) {
            SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          else {
            SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            Driver_Ack_Mode_Profile;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp = kcg_false;
          /* last_init_ck_Loc_Timer */ if (outC->init2) {
            tmp1 = 0;
          }
          else {
            tmp1 = outC->Loc_Timer;
          }
          br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack =
            tmp1 > C_Driver_Ack_Delay_Level_And_Mode_Types_Pkg;
          if (Driver_Ack_Mode_Profile) {
            SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
            SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
              kcg_true;
          }
          else {
            if (br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack) {
              SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
                SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
            }
            else {
              SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
                SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
            }
            SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
              br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
          }
          break;
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location =
            (Current_Mode == UN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SR_Level_And_Mode_Types_Pkg) | Supervision_Modes;
          br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location =
            (Current_Mode == SB_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              PT_Level_And_Mode_Types_Pkg);
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location) {
            tmp = kcg_true;
            SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
            SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
              kcg_true;
          }
          else {
            /* cb_anon_sm */ if (br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location) {
              tmp = kcg_true;
              SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
                SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
            }
            else {
              tmp = kcg_false;
              SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
                SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
            }
            SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
              br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location;
          }
          break;
        
      }
      /* act_SM_Current_Location */ switch (SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp2 = kcg_false;
          outC->Service_Brake_Command = kcg_true;
          outC->Condition_73_74 = kcg_false;
          outC->Condition_40_51_72 = kcg_false;
          outC->Condition_34_61_71 = kcg_false;
          outC->Condition_15_50_70 = kcg_false;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp2 = kcg_false;
          outC->Service_Brake_Command = kcg_false;
          outC->Condition_73_74 = kcg_false;
          outC->Condition_40_51_72 = kcg_false;
          outC->Condition_34_61_71 = kcg_false;
          outC->Condition_15_50_70 = kcg_true;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp2 = kcg_true;
          outC->Service_Brake_Command = kcg_false;
          outC->Condition_73_74 = kcg_false;
          outC->Condition_40_51_72 = kcg_false;
          outC->Condition_34_61_71 = kcg_false;
          outC->Condition_15_50_70 = kcg_false;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp2 = kcg_false;
          outC->Service_Brake_Command = kcg_false;
          outC->Condition_15_50_70 = kcg_false;
          IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack =
            (Current_Mode == UN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SN_Level_And_Mode_Types_Pkg);
          /* ck_IfBlock1 */ if (IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack) {
            outC->Condition_73_74 = kcg_false;
            outC->Condition_40_51_72 = kcg_false;
            outC->Condition_34_61_71 = kcg_true;
          }
          else {
            outC->Condition_34_61_71 = kcg_false;
            else_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack_IfBlock1 =
              (Current_Mode == FS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
                SR_Level_And_Mode_Types_Pkg);
            /* ck_anon_activ */ if (else_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack_IfBlock1) {
              outC->Condition_73_74 = kcg_false;
              outC->Condition_40_51_72 = kcg_true;
            }
            else {
              outC->Condition_73_74 = kcg_true;
              outC->Condition_40_51_72 = kcg_false;
            }
          }
          if (SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location) {
            /* 8 */ Counter_reset_pwlinear_int(&outC->Context_8);
          }
          break;
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp2 = kcg_false;
          outC->Service_Brake_Command = kcg_false;
          outC->Condition_73_74 = kcg_false;
          outC->Condition_40_51_72 = kcg_false;
          outC->Condition_34_61_71 = kcg_false;
          outC->Condition_15_50_70 = kcg_false;
          break;
        
      }
      outC->Ack_Req_To_Driver = tmp | tmp2;
      if (SM_Mode_Profile_By_Trackside_reset_act) {
        /* 8 */ Counter_reset_pwlinear_int(&outC->Context_8);
      }
      outC->SM_Mode_Profile_By_Trackside_state_nxt =
        SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
      /* act_SM_Current_Location */ switch (SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          outC->Loc_Confirmation = kcg_false;
          outC->Loc_Timer = 0;
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          outC->Loc_Confirmation = kcg_true;
          outC->Loc_Timer = 0;
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          outC->Loc_Confirmation = kcg_true;
          outC->Loc_Timer = 0;
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          outC->Loc_Confirmation = kcg_false;
          /* 8 */
          Counter_pwlinear_int(
            C_Cycle_Duration_Level_And_Mode_Types_Pkg,
            outC->Ack_Req_To_Driver,
            &outC->Context_8);
          outC->Loc_Timer = outC->Context_8.Count;
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          break;
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          outC->Loc_Confirmation = kcg_true;
          outC->Loc_Timer = 0;
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          break;
        
      }
      break;
    
  }
  outC->init2 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_With_Mode_Profile_Procedures.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

