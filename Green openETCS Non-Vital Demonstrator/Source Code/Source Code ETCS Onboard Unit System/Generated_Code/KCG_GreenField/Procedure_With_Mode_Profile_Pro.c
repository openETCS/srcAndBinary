/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_With_Mode_Profile_Pro.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_With_Mode_Profile_ini(outC_Procedure_With_Mode_Profil *outC)
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
  outC->SM_Mode_Profile_By_Trackside_st = SSM_st_Procedure_Off_SM_Mode_Pr;
  outC->SM_Current_Location_state_nxt_S = SSM_st_Req_Current_Location_SM_;
  outC->SM_Futher_Location_state_nxt_SM = SSM_st_Req_Futher_Location_SM_M;
  /* 8 */ Counter_init_pwlinear_int(&outC->Context_8);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_With_Mode_Profile_res(outC_Procedure_With_Mode_Profil *outC)
{
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* 8 */ Counter_reset_pwlinear_int(&outC->Context_8);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_With_Mode_Profile */
void Procedure_With_Mode_Profile_Pro(
  /* Procedures::Procedure_With_Mode_Profile::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Driver_Ack_Mode_Profile */ kcg_bool Driver_Ack_Mode_Profile,
  /* Procedures::Procedure_With_Mode_Profile::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Procedures::Procedure_With_Mode_Profile::Procedure_Possible */ kcg_bool Procedure_Possible,
  /* Procedures::Procedure_With_Mode_Profile::Profile_Mode */ T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Selected_Mode */ T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Supervision_Modes */ kcg_bool Supervision_Modes,
  /* Procedures::Procedure_With_Mode_Profile::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Procedures::Procedure_With_Mode_Profile::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_With_Mode_Profil *outC)
{
  /* Procedures::Procedure_With_Mode_Profile */
  static kcg_bool tmp2;
  /* Procedures::Procedure_With_Mode_Profile */
  static kcg_int tmp1;
  /* Procedures::Procedure_With_Mode_Profile */
  static kcg_bool tmp;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mo SM_Futher_Location_state_act_SM;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mo SM_Futher_Location_state_sel_SM;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool SM_Current_Location_reset_act_S;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_M SM_Current_Location_state_act_S;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_M SM_Current_Location_state_sel_S;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack */
  static kcg_bool br_2_guard_SM_Mode_Profile_By_T;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Req_Current_Location */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_T;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Req_Current_Location */
  static kcg_bool _3_br_2_guard_SM_Mode_Profile_B;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::IfBlock1::else */
  static kcg_bool else_clock_SM_Mode_Profile_By_T;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::IfBlock1 */
  static kcg_bool IfBlock1_clock_SM_Mode_Profile_;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_ST_SM_Mode_Profile_By_Track SM_Mode_Profile_By_Trackside_st;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_ST_SM_Mode_Profile_By_Track _4_SM_Mode_Profile_By_Trackside;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static kcg_bool SM_Mode_Profile_By_Trackside_re;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Supervision_Condition_Covered */
  static kcg_bool Loc_Supervision_Condition_Cover;
  
  /* init_SM_Mode_Profile_By_Trackside */ if (outC->init2) {
    SM_Mode_Profile_By_Trackside_st = SSM_st_Procedure_Off_SM_Mode_Pr;
  }
  else {
    SM_Mode_Profile_By_Trackside_st = outC->SM_Mode_Profile_By_Trackside_st;
  }
  /* 1 */
  Mode_Profile_Calculations_Libra(
    Selected_Mode,
    Mode_Profile_On_Board,
    Profile_Mode,
    Train_Speed,
    Train_Position,
    &br_2_guard_SM_Mode_Profile_By_T,
    &Loc_Supervision_Condition_Cover,
    &IfBlock1_clock_SM_Mode_Profile_,
    &tmp2);
  /* sel_SM_Mode_Profile_By_Trackside */ switch (SM_Mode_Profile_By_Trackside_st) {
    case SSM_st_Current_Location_SM_Mode :
      /* last_init_ck_Loc_Confirmation */ if (outC->init2) {
        tmp2 = kcg_true;
      }
      else {
        tmp2 = outC->Loc_Confirmation;
      }
      SM_Mode_Profile_By_Trackside_re = !Procedure_Possible & tmp2;
      if (SM_Mode_Profile_By_Trackside_re) {
        _4_SM_Mode_Profile_By_Trackside = SSM_st_Procedure_Off_SM_Mode_Pr;
      }
      else {
        _4_SM_Mode_Profile_By_Trackside = SSM_st_Current_Location_SM_Mode;
      }
      break;
    case SSM_st_Futher_location_SM_Mode_ :
      tmp = !Procedure_Possible;
      if (tmp) {
        SM_Mode_Profile_By_Trackside_re = kcg_true;
        _4_SM_Mode_Profile_By_Trackside = SSM_st_Procedure_Off_SM_Mode_Pr;
      }
      else {
        if (br_2_guard_SM_Mode_Profile_By_T) {
          _4_SM_Mode_Profile_By_Trackside = SSM_st_Current_Location_SM_Mode;
        }
        else {
          _4_SM_Mode_Profile_By_Trackside = SSM_st_Futher_location_SM_Mode_;
        }
        SM_Mode_Profile_By_Trackside_re = br_2_guard_SM_Mode_Profile_By_T;
      }
      break;
    case SSM_st_Procedure_Off_SM_Mode_Pr :
      else_clock_SM_Mode_Profile_By_T = IfBlock1_clock_SM_Mode_Profile_ &
        !br_2_guard_SM_Mode_Profile_By_T;
      SM_Mode_Profile_By_Trackside_re = Procedure_Possible &
        (else_clock_SM_Mode_Profile_By_T | (IfBlock1_clock_SM_Mode_Profile_ &
            br_2_guard_SM_Mode_Profile_By_T));
      if (SM_Mode_Profile_By_Trackside_re) {
        if (else_clock_SM_Mode_Profile_By_T) {
          _4_SM_Mode_Profile_By_Trackside = SSM_st_Futher_location_SM_Mode_;
        }
        else {
          _4_SM_Mode_Profile_By_Trackside = SSM_st_Current_Location_SM_Mode;
        }
      }
      else {
        _4_SM_Mode_Profile_By_Trackside = SSM_st_Procedure_Off_SM_Mode_Pr;
      }
      break;
    
  }
  /* act_SM_Mode_Profile_By_Trackside */ switch (_4_SM_Mode_Profile_By_Trackside) {
    case SSM_st_Procedure_Off_SM_Mode_Pr :
      outC->Loc_Confirmation = kcg_true;
      outC->Service_Brake_Command = kcg_false;
      outC->Condition_73_74 = kcg_false;
      outC->Condition_40_51_72 = kcg_false;
      outC->Condition_34_61_71 = kcg_false;
      outC->Condition_15_50_70 = kcg_false;
      outC->Ack_Req_To_Driver = kcg_false;
      outC->Loc_Timer = 0;
      outC->SM_Mode_Profile_By_Trackside_st = SSM_st_Procedure_Off_SM_Mode_Pr;
      break;
    case SSM_st_Futher_location_SM_Mode_ :
      outC->Loc_Confirmation = kcg_true;
      outC->Service_Brake_Command = kcg_false;
      outC->Condition_73_74 = kcg_false;
      outC->Condition_40_51_72 = kcg_false;
      outC->Condition_34_61_71 = kcg_false;
      if (SM_Mode_Profile_By_Trackside_re) {
        outC->init1 = kcg_true;
      }
      /* init_SM_Futher_Location */ if (outC->init1) {
        outC->init1 = kcg_false;
        SM_Futher_Location_state_sel_SM = SSM_st_Req_Futher_Location_SM_M;
      }
      else {
        SM_Futher_Location_state_sel_SM = outC->SM_Futher_Location_state_nxt_SM;
      }
      /* sel_SM_Futher_Location */ switch (SM_Futher_Location_state_sel_SM) {
        case SSM_st_Req_Futher_Location_SM_M :
          if (Supervision_Modes) {
            SM_Futher_Location_state_act_SM = SSM_st_Start_Supervision_SM_Mod;
          }
          else {
            SM_Futher_Location_state_act_SM = SSM_st_Req_Futher_Location_SM_M;
          }
          break;
        case SSM_st_Start_Supervision_SM_Mod :
          if (Loc_Supervision_Condition_Cover) {
            SM_Futher_Location_state_act_SM = _188_SSM_st_Waiting_Ack_SM_Mode;
          }
          else {
            SM_Futher_Location_state_act_SM = SSM_st_Start_Supervision_SM_Mod;
          }
          break;
        case _188_SSM_st_Waiting_Ack_SM_Mode :
          if (Driver_Ack_Mode_Profile) {
            SM_Futher_Location_state_act_SM = _187_SSM_st_Switch_Mode_Confirm;
          }
          else {
            SM_Futher_Location_state_act_SM = _188_SSM_st_Waiting_Ack_SM_Mode;
          }
          break;
        case _187_SSM_st_Switch_Mode_Confirm :
          SM_Futher_Location_state_act_SM = _187_SSM_st_Switch_Mode_Confirm;
          break;
        
      }
      outC->Loc_Timer = 0;
      outC->SM_Mode_Profile_By_Trackside_st = SSM_st_Futher_location_SM_Mode_;
      /* act_SM_Futher_Location */ switch (SM_Futher_Location_state_act_SM) {
        case _187_SSM_st_Switch_Mode_Confirm :
          outC->Condition_15_50_70 = kcg_true;
          outC->Ack_Req_To_Driver = kcg_false;
          outC->SM_Futher_Location_state_nxt_SM =
            _187_SSM_st_Switch_Mode_Confirm;
          break;
        case _188_SSM_st_Waiting_Ack_SM_Mode :
          outC->Condition_15_50_70 = kcg_false;
          outC->Ack_Req_To_Driver = kcg_true;
          outC->SM_Futher_Location_state_nxt_SM =
            _188_SSM_st_Waiting_Ack_SM_Mode;
          break;
        case SSM_st_Start_Supervision_SM_Mod :
          outC->Condition_15_50_70 = kcg_false;
          outC->Ack_Req_To_Driver = kcg_false;
          outC->SM_Futher_Location_state_nxt_SM =
            SSM_st_Start_Supervision_SM_Mod;
          break;
        case SSM_st_Req_Futher_Location_SM_M :
          outC->Condition_15_50_70 = kcg_false;
          outC->Ack_Req_To_Driver = kcg_false;
          outC->SM_Futher_Location_state_nxt_SM =
            SSM_st_Req_Futher_Location_SM_M;
          break;
        
      }
      break;
    case SSM_st_Current_Location_SM_Mode :
      if (SM_Mode_Profile_By_Trackside_re) {
        outC->init = kcg_true;
      }
      /* init_SM_Current_Location */ if (outC->init) {
        outC->init = kcg_false;
        SM_Current_Location_state_sel_S = SSM_st_Req_Current_Location_SM_;
      }
      else {
        SM_Current_Location_state_sel_S = outC->SM_Current_Location_state_nxt_S;
      }
      /* sel_SM_Current_Location */ switch (SM_Current_Location_state_sel_S) {
        case SSM_st_Ack_Not_Received_SM_Mode :
          tmp = kcg_false;
          if (Driver_Ack_Mode_Profile) {
            SM_Current_Location_state_act_S = SSM_st_Switch_Mode_Confirmed_SM;
          }
          else {
            SM_Current_Location_state_act_S = SSM_st_Ack_Not_Received_SM_Mode;
          }
          SM_Current_Location_reset_act_S = Driver_Ack_Mode_Profile;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM :
          tmp = kcg_false;
          SM_Current_Location_state_act_S = SSM_st_Switch_Mode_Confirmed_SM;
          SM_Current_Location_reset_act_S = kcg_false;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Prof :
          tmp = kcg_false;
          if (Driver_Ack_Mode_Profile) {
            SM_Current_Location_state_act_S = SSM_st_Switch_Mode_Confirmed_SM;
          }
          else {
            SM_Current_Location_state_act_S = SSM_st_Waiting_Ack_SM_Mode_Prof;
          }
          SM_Current_Location_reset_act_S = Driver_Ack_Mode_Profile;
          break;
        case SSM_st_Switch_Autorized_Waiting :
          tmp = kcg_false;
          /* last_init_ck_Loc_Timer */ if (outC->init2) {
            tmp1 = 0;
          }
          else {
            tmp1 = outC->Loc_Timer;
          }
          br_2_guard_SM_Mode_Profile_By_T = tmp1 >
            C_Driver_Ack_Delay_Level_And_Mo;
          if (Driver_Ack_Mode_Profile) {
            SM_Current_Location_state_act_S = SSM_st_Switch_Mode_Confirmed_SM;
            SM_Current_Location_reset_act_S = kcg_true;
          }
          else {
            if (br_2_guard_SM_Mode_Profile_By_T) {
              SM_Current_Location_state_act_S = SSM_st_Ack_Not_Received_SM_Mode;
            }
            else {
              SM_Current_Location_state_act_S = SSM_st_Switch_Autorized_Waiting;
            }
            SM_Current_Location_reset_act_S = br_2_guard_SM_Mode_Profile_By_T;
          }
          break;
        case SSM_st_Req_Current_Location_SM_ :
          br_1_guard_SM_Mode_Profile_By_T = (Current_Mode ==
              UN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SR_Level_And_Mode_Types_Pkg) | Supervision_Modes;
          _3_br_2_guard_SM_Mode_Profile_B = (Current_Mode ==
              SB_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              PT_Level_And_Mode_Types_Pkg);
          if (br_1_guard_SM_Mode_Profile_By_T) {
            tmp = kcg_true;
            SM_Current_Location_state_act_S = SSM_st_Switch_Autorized_Waiting;
            SM_Current_Location_reset_act_S = kcg_true;
          }
          else {
            /* cb_anon_sm */ if (_3_br_2_guard_SM_Mode_Profile_B) {
              tmp = kcg_true;
              SM_Current_Location_state_act_S = SSM_st_Waiting_Ack_SM_Mode_Prof;
            }
            else {
              tmp = kcg_false;
              SM_Current_Location_state_act_S = SSM_st_Req_Current_Location_SM_;
            }
            SM_Current_Location_reset_act_S = _3_br_2_guard_SM_Mode_Profile_B;
          }
          break;
        
      }
      /* act_SM_Current_Location */ switch (SM_Current_Location_state_act_S) {
        case SSM_st_Ack_Not_Received_SM_Mode :
          tmp2 = kcg_false;
          outC->Service_Brake_Command = kcg_true;
          outC->Condition_73_74 = kcg_false;
          outC->Condition_40_51_72 = kcg_false;
          outC->Condition_34_61_71 = kcg_false;
          outC->Condition_15_50_70 = kcg_false;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM :
          tmp2 = kcg_false;
          outC->Service_Brake_Command = kcg_false;
          outC->Condition_73_74 = kcg_false;
          outC->Condition_40_51_72 = kcg_false;
          outC->Condition_34_61_71 = kcg_false;
          outC->Condition_15_50_70 = kcg_true;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Prof :
          tmp2 = kcg_true;
          outC->Service_Brake_Command = kcg_false;
          outC->Condition_73_74 = kcg_false;
          outC->Condition_40_51_72 = kcg_false;
          outC->Condition_34_61_71 = kcg_false;
          outC->Condition_15_50_70 = kcg_false;
          break;
        case SSM_st_Switch_Autorized_Waiting :
          tmp2 = kcg_false;
          outC->Service_Brake_Command = kcg_false;
          outC->Condition_15_50_70 = kcg_false;
          IfBlock1_clock_SM_Mode_Profile_ = (Current_Mode ==
              UN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SN_Level_And_Mode_Types_Pkg);
          /* ck_IfBlock1 */ if (IfBlock1_clock_SM_Mode_Profile_) {
            outC->Condition_73_74 = kcg_false;
            outC->Condition_40_51_72 = kcg_false;
            outC->Condition_34_61_71 = kcg_true;
          }
          else {
            outC->Condition_34_61_71 = kcg_false;
            else_clock_SM_Mode_Profile_By_T = (Current_Mode ==
                FS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
                SR_Level_And_Mode_Types_Pkg);
            /* ck_anon_activ */ if (else_clock_SM_Mode_Profile_By_T) {
              outC->Condition_73_74 = kcg_false;
              outC->Condition_40_51_72 = kcg_true;
            }
            else {
              outC->Condition_73_74 = kcg_true;
              outC->Condition_40_51_72 = kcg_false;
            }
          }
          break;
        case SSM_st_Req_Current_Location_SM_ :
          tmp2 = kcg_false;
          outC->Service_Brake_Command = kcg_false;
          outC->Condition_73_74 = kcg_false;
          outC->Condition_40_51_72 = kcg_false;
          outC->Condition_34_61_71 = kcg_false;
          outC->Condition_15_50_70 = kcg_false;
          break;
        
      }
      outC->Ack_Req_To_Driver = tmp | tmp2;
      /* act_SM_Current_Location */ switch (SM_Current_Location_state_act_S) {
        case SSM_st_Switch_Autorized_Waiting :
          if (SM_Current_Location_reset_act_S) {
            /* 8 */ Counter_reset_pwlinear_int(&outC->Context_8);
          }
          break;
        
      }
      if (SM_Mode_Profile_By_Trackside_re) {
        /* 8 */ Counter_reset_pwlinear_int(&outC->Context_8);
      }
      outC->SM_Mode_Profile_By_Trackside_st = SSM_st_Current_Location_SM_Mode;
      /* act_SM_Current_Location */ switch (SM_Current_Location_state_act_S) {
        case SSM_st_Ack_Not_Received_SM_Mode :
          outC->Loc_Confirmation = kcg_false;
          outC->Loc_Timer = 0;
          outC->SM_Current_Location_state_nxt_S =
            SSM_st_Ack_Not_Received_SM_Mode;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM :
          outC->Loc_Confirmation = kcg_true;
          outC->Loc_Timer = 0;
          outC->SM_Current_Location_state_nxt_S =
            SSM_st_Switch_Mode_Confirmed_SM;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Prof :
          outC->Loc_Confirmation = kcg_true;
          outC->Loc_Timer = 0;
          outC->SM_Current_Location_state_nxt_S =
            SSM_st_Waiting_Ack_SM_Mode_Prof;
          break;
        case SSM_st_Switch_Autorized_Waiting :
          outC->Loc_Confirmation = kcg_false;
          /* 8 */
          Counter_pwlinear_int(
            C_Cycle_Duration_Level_And_Mode,
            outC->Ack_Req_To_Driver,
            &outC->Context_8);
          outC->Loc_Timer = outC->Context_8.Count;
          outC->SM_Current_Location_state_nxt_S =
            SSM_st_Switch_Autorized_Waiting;
          break;
        case SSM_st_Req_Current_Location_SM_ :
          outC->Loc_Confirmation = kcg_true;
          outC->Loc_Timer = 0;
          outC->SM_Current_Location_state_nxt_S =
            SSM_st_Req_Current_Location_SM_;
          break;
        
      }
      break;
    
  }
  outC->init2 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_With_Mode_Profile_Pro.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

