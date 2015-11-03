/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Master_Procedure_ManageProcedure_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Master_Procedure_init_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  static kcg_int i;
  
  outC->powerUp_to_MoRC = kcg_true;
  outC->statusstartofmissionongoing_to_MoRC = kcg_true;
  outC->powerOff_to_MoRC = kcg_true;
  outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_true;
  outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management = kcg_true;
  outC->start_ack_to_TIU = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->sendingPositionReport_to_RBC = kcg_true;
  outC->sendingTrainData_to_RBC = kcg_true;
  outC->init3 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_state_nxt = SSM_st_NP_SM1;
  outC->SM3_state_nxt_SM1_Awakness_of_Train =
    SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
  outC->fby_ck_fby.idx = 0;
  outC->_2_fby_ck_fby.idx = 0;
  for (i = 0; i < 4; i++) {
    outC->fby_ck_fby.items[i] = kcg_true;
    outC->_2_fby_ck_fby.items[i] = kcg_true;
  }
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.messageSource =
    msrc_undefined_Common_Types_Pkg;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.radioDevice =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_message =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_train =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_lrbg =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_train_reference =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_em =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_sr =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_sh_rqst =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_ref =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_emergencystop =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_c =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_rbc =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_radio =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.nid_mn =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.nid_c =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.rbc_id =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.device_id =
    0;
  outC->DMI_Entry_Request_to_DMI.valid = kcg_true;
  outC->DMI_Entry_Request_to_DMI.system_clock = 0;
  outC->DMI_Entry_Request_to_DMI.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  /* 1 */ SoM_NTC_SN_init_SoMProcedure_Pkg(&outC->_1_Context_1);
  /* 1 */ SoM_SR_FS_OS_LS_SH_SN_UN_init_SoMProcedure_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Master_Procedure_reset_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  outC->init3 = kcg_true;
  outC->init = kcg_true;
  /* 1 */ SoM_NTC_SN_reset_SoMProcedure_Pkg(&outC->_1_Context_1);
  /* 1 */ SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ManageProcedure_Pkg::Master_Procedure */
void Master_Procedure_ManageProcedure_Pkg(
  /* ManageProcedure_Pkg::Master_Procedure::statusDMI_from_DMI */ DMI_EVC_status_T_DMI_Types_Pkg *statusDMI_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */ kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* ManageProcedure_Pkg::Master_Procedure::systemtime */ T_internal_Type_Obu_BasicTypes_Pkg systemtime,
  /* ManageProcedure_Pkg::Master_Procedure::StatusModeandLevel_from_Level_and_Mode_Management */ T_Mode_Level_Level_And_Mode_Types_Pkg *StatusModeandLevel_from_Level_and_Mode_Management,
  /* ManageProcedure_Pkg::Master_Procedure::mobileStatus */ morcStatus_T_RCM_Session_Types_Pkg *mobileStatus,
  /* ManageProcedure_Pkg::Master_Procedure::cabStatus_from_TIU */ TIU_trainStatus_T_TIU_Types_Pkg *cabStatus_from_TIU,
  /* ManageProcedure_Pkg::Master_Procedure::statusValid_Position_from_Position_Calculation */ kcg_bool statusValid_Position_from_Position_Calculation,
  /* ManageProcedure_Pkg::Master_Procedure::status_DMIlevel_from_DMI */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *status_DMIlevel_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::LevelValid_from_Level_and_Mode_Management */ kcg_bool LevelValid_from_Level_and_Mode_Management,
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  static kcg_int i;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train SM3_state_sel_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool Awakness_of_Train_weakb_clock_SM1;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_driver_selection_E10_E11_or_E12 */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_Mobile_terminal_registration */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::SB */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_SB;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_Acknowledgement_of_Train_Data_from_RBC */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Second_Validation_of_Train_Number_from_Driver */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Second_Validation_of_Train_Number_from_Driver */
  static kcg_bool br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Validation_of_Train_Data_from_Driver */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Acknowlege_of_Position_from_RBC */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_RBC_Establishment */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::request_Level */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_request_Level;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waition_for_Driver_ID */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool br_2_guard_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool br_3_guard_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool last_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool last_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _34_SSM_ST_SM1 SM1_state_sel;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _34_SSM_ST_SM1 SM1_state_act;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _36_SSM_TR_SM1 SM1_fired_strong;
  /* ManageProcedure_Pkg::Master_Procedure::M_LEVEL_Level_NTC */
  static kcg_bool M_LEVEL_Level_NTC;
  /* ManageProcedure_Pkg::Master_Procedure::M_LEVEL_Level2 */
  static kcg_bool M_LEVEL_Level2;
  /* ManageProcedure_Pkg::Master_Procedure::M_LEVEL_Level3 */
  static kcg_bool M_LEVEL_Level3;
  /* ManageProcedure_Pkg::Master_Procedure::_L67 */
  static kcg_bool _L67;
  /* ManageProcedure_Pkg::Master_Procedure::_L69 */
  static kcg_bool _L69;
  /* ManageProcedure_Pkg::Master_Procedure::_L261 */
  static kcg_bool _L261;
  /* ManageProcedure_Pkg::Master_Procedure::_L255 */
  static kcg_bool _L255;
  /* ManageProcedure_Pkg::Master_Procedure::_L252 */
  static kcg_bool _L252;
  /* ManageProcedure_Pkg::Master_Procedure::_L240 */
  static kcg_bool _L240;
  /* ManageProcedure_Pkg::Master_Procedure::_L262 */
  static kcg_bool _L262;
  
  outC->DMI_Entry_Request_to_DMI.system_clock = systemtime;
  br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC =
    (*cabStatus_from_TIU).deskOpen & (*cabStatus_from_TIU).valid;
  /* last_init_ck_sendingTrainData_to_RBC */ if (outC->init3) {
    SM1_state_sel = SSM_st_NP_SM1;
    /* 2 */ for (i = 0; i < 4; i++) {
      outC->_2_fby_ck_fby.items[i] = kcg_false;
      outC->fby_ck_fby.items[i] = kcg_false;
    }
    outC->_2_fby_ck_fby.idx = 0;
    outC->fby_ck_fby.idx = 0;
    br_1_guard_SM1_Awakness_of_Train_SM3_SB = kcg_false;
    last_sendingPositionReport_to_RBC = kcg_true;
    outC->init3 = kcg_false;
    last_sendingTrainData_to_RBC = kcg_true;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
    br_1_guard_SM1_Awakness_of_Train_SM3_SB = outC->SM1_reset_nxt;
    last_sendingPositionReport_to_RBC = outC->sendingPositionReport_to_RBC;
    last_sendingTrainData_to_RBC = outC->sendingTrainData_to_RBC;
  }
  M_LEVEL_Level2 = (*StatusModeandLevel_from_Level_and_Mode_Management).level ==
    M_LEVEL_Level_2;
  M_LEVEL_Level3 = (*StatusModeandLevel_from_Level_and_Mode_Management).level ==
    M_LEVEL_Level_3;
  br_3_guard_SM1_Awakness_of_Train =
    (*StatusModeandLevel_from_Level_and_Mode_Management).level ==
    M_LEVEL_Level_0;
  br_2_guard_SM1_Awakness_of_Train =
    (*StatusModeandLevel_from_Level_and_Mode_Management).level ==
    M_LEVEL_Level_1;
  M_LEVEL_Level_NTC =
    (*StatusModeandLevel_from_Level_and_Mode_Management).level ==
    M_LEVEL_Level_NTC_specified_by_NID_NTC;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_SoM_NTC_SN_SM1 :
      Awakness_of_Train_weakb_clock_SM1 = kcg_false;
      SM1_state_act = SSM_st_SoM_NTC_SN_SM1;
      outC->powerOff_to_MoRC = kcg_false;
      outC->powerUp_to_MoRC = kcg_false;
      SM1_fired_strong = _35_SSM_TR_no_trans_SM1;
      if (br_1_guard_SM1_Awakness_of_Train_SM3_SB) {
        /* 1 */ SoM_NTC_SN_reset_SoMProcedure_Pkg(&outC->_1_Context_1);
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      Awakness_of_Train_weakb_clock_SM1 = kcg_false;
      SM1_state_act = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      outC->powerOff_to_MoRC = kcg_false;
      outC->powerUp_to_MoRC = kcg_false;
      SM1_fired_strong = _35_SSM_TR_no_trans_SM1;
      if (br_1_guard_SM1_Awakness_of_Train_SM3_SB) {
        /* 1 */
        SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(&outC->Context_1);
      }
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12 =
        !br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC;
      Awakness_of_Train_weakb_clock_SM1 =
        br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12;
      outC->powerUp_to_MoRC = kcg_false;
      if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12) {
        SM1_state_act = SSM_st_NP_SM1;
        outC->powerOff_to_MoRC = kcg_true;
        SM1_fired_strong = SSM_TR_Awakness_of_Train_1_SM1;
      }
      else {
        SM1_state_act = SSM_st_Awakness_of_Train_SM1;
        outC->powerOff_to_MoRC = kcg_false;
        SM1_fired_strong = _35_SSM_TR_no_trans_SM1;
      }
      break;
    case SSM_st_NP_SM1 :
      br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration =
        br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC &
        ((*StatusModeandLevel_from_Level_and_Mode_Management).Mode ==
          M_MODE_Stand_By);
      Awakness_of_Train_weakb_clock_SM1 =
        br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration;
      outC->powerOff_to_MoRC = kcg_false;
      if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration) {
        SM1_state_act = SSM_st_Awakness_of_Train_SM1;
        outC->powerUp_to_MoRC = kcg_true;
        SM1_fired_strong = SSM_TR_NP_1_SM1;
      }
      else {
        SM1_state_act = SSM_st_NP_SM1;
        outC->powerUp_to_MoRC = kcg_false;
        SM1_fired_strong = _35_SSM_TR_no_trans_SM1;
      }
      break;
    
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      _L252 = kcg_false;
      _L262 = kcg_false;
      _L261 = kcg_false;
      _L255 = kcg_false;
      _L240 = kcg_false;
      _L69 = kcg_false;
      _L67 = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _L252 = kcg_false;
      _L262 = kcg_false;
      _L261 = kcg_false;
      _L255 = kcg_false;
      _L240 = kcg_false;
      _L69 = kcg_false;
      _L67 = kcg_false;
      outC->statusstartofmissionongoing_to_MoRC = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      if (Awakness_of_Train_weakb_clock_SM1) {
        outC->init = kcg_true;
      }
      /* init_SM3 */ if (outC->init) {
        SM3_state_sel_SM1_Awakness_of_Train =
          SSM_st_SB_SM1_Awakness_of_Train_SM3;
      }
      else {
        SM3_state_sel_SM1_Awakness_of_Train =
          outC->SM3_state_nxt_SM1_Awakness_of_Train;
      }
      /* sel_SM3 */ switch (SM3_state_sel_SM1_Awakness_of_Train) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          _L262 = kcg_false;
          _L261 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12 =
            LevelValid_from_Level_and_Mode_Management &
            (br_3_guard_SM1_Awakness_of_Train |
              br_2_guard_SM1_Awakness_of_Train | M_LEVEL_Level_NTC);
          /* guard_Waiting_for_driver_selection_E10_E11_or_E12 */ if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12) {
            _L255 = kcg_true;
          }
          else {
            _L255 = kcg_false;
          }
          _L240 = kcg_false;
          _L69 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          _L262 = kcg_false;
          _L261 = kcg_false;
          _L255 = kcg_false;
          _L240 = kcg_false;
          _L67 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration =
            (*mobileStatus).registration.status == mrs_registered_RCM_Types_Pkg;
          /* guard_Waiting_for_Mobile_terminal_registration */ if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration) {
            _L69 = kcg_true;
          }
          else {
            _L69 = kcg_false;
          }
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          _L262 = kcg_false;
          _L261 = kcg_false;
          _L255 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_SB = kcg_true;
          _L69 = kcg_false;
          _L67 = kcg_false;
          /* guard_SB */ if (br_1_guard_SM1_Awakness_of_Train_SM3_SB) {
            _L240 = kcg_true;
          }
          else {
            _L240 = kcg_false;
          }
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          _L262 = kcg_false;
          _L261 = kcg_false;
          _L255 = kcg_false;
          _L240 = kcg_false;
          _L69 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          _L262 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC =
            outC->_2_fby_ck_fby.items[outC->_2_fby_ck_fby.idx];
          /* guard_Waiting_for_Acknowledgement_of_Train_Data_from_RBC */ if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC) {
            _L261 = kcg_true;
          }
          else {
            _L261 = kcg_false;
          }
          _L255 = kcg_false;
          _L240 = kcg_false;
          _L69 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          _L262 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver =
            (*statusDMI_from_DMI).DMI_TrainRunningNumberValidated &
            (M_LEVEL_Level2 | M_LEVEL_Level3);
          br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver =
            (*statusDMI_from_DMI).DMI_TrainRunningNumberValidated &
            (br_3_guard_SM1_Awakness_of_Train |
              br_2_guard_SM1_Awakness_of_Train | M_LEVEL_Level_NTC);
          /* guard_Second_Validation_of_Train_Number_from_Driver */ if (br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            _L261 = kcg_false;
          }
          else /* cb_anon_sm */ if (br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            _L261 = kcg_true;
          }
          else {
            _L261 = kcg_false;
          }
          _L255 = kcg_false;
          _L240 = kcg_false;
          _L69 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          _L262 = kcg_false;
          _L261 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver =
            (*statusDMI_from_DMI).DMI_TrainDataValidated;
          /* guard_Validation_of_Train_Data_from_Driver */ if (br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver) {
            _L255 = kcg_true;
          }
          else {
            _L255 = kcg_false;
          }
          _L240 = kcg_false;
          _L69 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          _L262 = kcg_false;
          _L261 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC =
            outC->fby_ck_fby.items[outC->fby_ck_fby.idx];
          /* guard_Acknowlege_of_Position_from_RBC */ if (br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC) {
            _L255 = kcg_true;
          }
          else {
            _L255 = kcg_false;
          }
          _L240 = kcg_false;
          _L69 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          _L262 = kcg_false;
          _L261 = kcg_false;
          _L255 = kcg_false;
          _L240 = kcg_false;
          _L69 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          _L262 = kcg_false;
          _L261 = kcg_false;
          _L255 = kcg_false;
          _L240 = kcg_false;
          _L69 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_request_Level = M_LEVEL_Level2 |
            M_LEVEL_Level3;
          /* guard_request_Level */ if (br_1_guard_SM1_Awakness_of_Train_SM3_request_Level) {
            _L67 = kcg_true;
          }
          else {
            _L67 = kcg_false;
          }
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          _L252 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
            (*statusDMI_from_DMI).DMI_TrainRunningNumberFirstValidation &
            statusValid_Position_from_Position_Calculation;
          br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
            (*statusDMI_from_DMI).DMI_TrainRunningNumberFirstValidation &
            !statusValid_Position_from_Position_Calculation &
            !LevelValid_from_Level_and_Mode_Management;
          _L261 = kcg_false;
          br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
            (*statusDMI_from_DMI).DMI_TrainRunningNumberFirstValidation &
            !statusValid_Position_from_Position_Calculation &
            LevelValid_from_Level_and_Mode_Management;
          /* guard_first_Validation_for_Train_Number */ if (br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _L262 = kcg_false;
            _L255 = kcg_false;
          }
          else /* cb_anon_sm */ if (br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _L262 = kcg_true;
            _L255 = kcg_false;
          }
          else {
            _L262 = kcg_false;
            /* cb_anon_sm */ if (br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
              _L255 = kcg_true;
            }
            else {
              _L255 = kcg_false;
            }
          }
          _L240 = kcg_false;
          _L69 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID =
            (*statusDMI_from_DMI).DMI_DriverIdValidated;
          /* guard_Waition_for_Driver_ID */ if (br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID) {
            _L252 = kcg_true;
          }
          else {
            _L252 = kcg_false;
          }
          _L261 = kcg_false;
          _L255 = kcg_false;
          _L240 = kcg_false;
          _L69 = kcg_false;
          _L67 = kcg_false;
          break;
        
      }
      outC->statusstartofmissionongoing_to_MoRC = kcg_true;
      break;
    case SSM_st_NP_SM1 :
      _L252 = kcg_false;
      _L262 = kcg_false;
      _L261 = kcg_false;
      _L255 = kcg_false;
      _L240 = kcg_false;
      _L69 = kcg_false;
      _L67 = kcg_false;
      outC->statusstartofmissionongoing_to_MoRC = kcg_false;
      break;
    
  }
  outC->DMI_Entry_Request_to_DMI.valid = _L240 | _L252 | _L255 | _L261 | _L262;
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      /* 1 */
      SoM_NTC_SN_SoMProcedure_Pkg(
        StatusModeandLevel_from_Level_and_Mode_Management,
        &outC->_1_Context_1);
      outC->start_ack_to_TIU = outC->_1_Context_1.start_ack_to_TIU;
      outC->sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
      outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
      outC->SM1_reset_nxt = kcg_false;
      outC->SM1_state_nxt = SSM_st_SoM_NTC_SN_SM1;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      /* 1 */
      SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg(
        Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
        StatusModeandLevel_from_Level_and_Mode_Management,
        &outC->Context_1);
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        outC->Context_1.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        outC->Context_1.request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      outC->start_ack_to_TIU = outC->Context_1.start_ack_to_TIU;
      outC->sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
      outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
      outC->SM1_reset_nxt = kcg_false;
      outC->SM1_state_nxt = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        kcg_false;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_false;
      outC->start_ack_to_TIU = kcg_false;
      Awakness_of_Train_weakb_clock_SM1 = SM1_fired_strong !=
        _35_SSM_TR_no_trans_SM1;
      /* strong_fired_Awakness_of_Train */ if (Awakness_of_Train_weakb_clock_SM1) {
        outC->SM1_reset_nxt = kcg_false;
        outC->SM1_state_nxt = SSM_st_Awakness_of_Train_SM1;
      }
      else {
        br_2_guard_SM1_Awakness_of_Train =
          (*statusDMI_from_DMI).DMI_StartReceived & (M_LEVEL_Level2 |
            M_LEVEL_Level3);
        br_3_guard_SM1_Awakness_of_Train =
          (*statusDMI_from_DMI).DMI_StartReceived & M_LEVEL_Level_NTC;
        if (br_2_guard_SM1_Awakness_of_Train) {
          outC->SM1_reset_nxt = kcg_true;
          outC->SM1_state_nxt = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
        }
        else {
          if (br_3_guard_SM1_Awakness_of_Train) {
            outC->SM1_state_nxt = SSM_st_SoM_NTC_SN_SM1;
          }
          else {
            outC->SM1_state_nxt = SSM_st_Awakness_of_Train_SM1;
          }
          outC->SM1_reset_nxt = br_3_guard_SM1_Awakness_of_Train;
        }
      }
      /* sel_SM3 */ switch (SM3_state_sel_SM1_Awakness_of_Train) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3;
          }
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3;
          }
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_SB) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_SB_SM1_Awakness_of_Train_SM3;
          }
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          SM3_state_act_SM1_Awakness_of_Train =
            SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3;
          }
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            outC->sendingTrainData_to_RBC = kcg_true;
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3;
          }
          else {
            outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
            if (br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
              SM3_state_act_SM1_Awakness_of_Train =
                SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
            }
            else {
              SM3_state_act_SM1_Awakness_of_Train =
                SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3;
            }
          }
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3;
          }
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            (*mobileStatus).session.phase ==
            sp_maintaining_RCM_Session_Types_Pkg;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment) {
            outC->sendingPositionReport_to_RBC = kcg_true;
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3;
          }
          else {
            outC->sendingPositionReport_to_RBC =
              last_sendingPositionReport_to_RBC;
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3;
          }
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_request_Level) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_request_Level_SM1_Awakness_of_Train_SM3;
          }
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_request_Level_SM1_Awakness_of_Train_SM3;
          }
          else if (br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3;
          }
          else if (br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3;
          }
          break;
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
          }
          break;
        
      }
      /* act_SM3 */ switch (SM3_state_act_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_request_Level_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_SB_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3;
          break;
        
      }
      outC->init = kcg_false;
      break;
    case SSM_st_NP_SM1 :
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        kcg_false;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_false;
      outC->start_ack_to_TIU = kcg_false;
      outC->sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
      outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
      outC->SM1_reset_nxt = kcg_false;
      outC->SM1_state_nxt = SSM_st_NP_SM1;
      break;
    
  }
  outC->fby_ck_fby.items[outC->fby_ck_fby.idx] =
    outC->sendingPositionReport_to_RBC;
  outC->fby_ck_fby.idx = (outC->fby_ck_fby.idx + 1) % 4;
  outC->_2_fby_ck_fby.items[outC->_2_fby_ck_fby.idx] =
    outC->sendingTrainData_to_RBC;
  outC->_2_fby_ck_fby.idx = (outC->_2_fby_ck_fby.idx + 1) % 4;
  /* 3 */ if (_L67) {
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.valid =
      _L67;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.messageSource =
      msrc_OBU_Common_Types_Pkg;
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header,
      (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
        &cNID_BG_Radio_Header_ManageProcedure_Pkg);
    kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42,
      (P42_SessionManagement_T_Packet_Types_Pkg *)
        &cpacket42_to_MoRC_ManageProcedure_Pkg);
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.valid =
      _L67;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.q_dir =
      Q_DIR_Both_directions;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.nid_mn =
      cpacket45_nid_mn_to_MoRC_ManageProcedure_Pkg;
    kcg_copy_RBC_Id_T_Common_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC,
      (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_ManageProcedure_Pkg);
  }
  else /* 5 */ if (_L69) {
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.valid =
      _L69;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.messageSource =
      msrc_OBU_Common_Types_Pkg;
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header,
      (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
        &cNID_BG_Radio_Header_ManageProcedure_Pkg);
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.valid =
      _L69;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_dir =
      Q_DIR_Both_directions;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_rbc =
      cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg.q_rbc;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_c =
      cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg.nid_c;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_rbc =
      cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg.nid_rbc;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_radio =
      cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg.nid_radio;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_sleepsession =
      cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg.q_sleepsession;
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45,
      (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
        &cpacket45_to_MoRC_ManageProcedure_Pkg);
    kcg_copy_RBC_Id_T_Common_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC,
      (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_ManageProcedure_Pkg);
  }
  else {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC,
      (radioManagementMessage_T_Common_Types_Pkg *)
        &cdefault_manageT_ManageProcedure_Pkg);
  }
  /* 9 */ if (_L240) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  }
  else /* 8 */ if (_L252) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Enter_revalidate_train_running_number_DMI_Types_Pkg;
  }
  else /* 7 */ if (_L255) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Validate_train_data_DMI_Types_Pkg;
  }
  else /* 10 */ if (_L261) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Show_main_window_DMI_Types_Pkg;
  }
  else /* 11 */ if (_L262) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Enter_revalidate_ETCS_level_DMI_Types_Pkg;
  }
  else {
    outC->DMI_Entry_Request_to_DMI.entry_request = Spare_DMI_Types_Pkg;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Master_Procedure_ManageProcedure_Pkg.c
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

