/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"

/* illegalScalesIndex */
const tScale illegalScalesIndex = { 0.0, 25.0, 50.0, 75.0, 100.0, 125.0, 250.0,
  500.0, 1000.0 };

/* Scales */
const array_real_9_6 Scales = { { 0.0, 25.0, 50.0, 75.0, 100.0, 125.0, 250.0,
    500.0, 1000.0 }, { 0.0, 50.0, 100.0, 150.0, 200.0, 250.0, 500.0, 1000.0,
    2000.0 }, { 0.0, 100.0, 200.0, 300.0, 400.0, 500.0, 1000.0, 2000.0,
    4000.0 }, { 0.0, 200.0, 400.0, 600.0, 800.0, 1000.0, 2000.0, 4000.0,
    8000.0 }, { 0.0, 400.0, 600.0, 1200.0, 1600.0, 2000.0, 4000.0, 8000.0,
    16000.0 }, { 0.0, 800.0, 1600.0, 2400.0, 3200.0, 4000.0, 8000.0, 16000.0,
    32000.0 } };

/* LinearScaleFactors */
const array_real_6 LinearScaleFactors = { 0.94, 1.88, 3.76, 7.52, 15.04,
  30.075 };

/* DMI_Control_Pkg::DMI_train_data_ack_positive */
const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_train_data_ack_positive_DMI_Control_Pkg = {
  kcg_true, 0, kcg_true };

/* DMI_Control_Pkg::DMI_train_data_ack_negative */
const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_train_data_ack_negative_DMI_Control_Pkg = {
  kcg_true, 0, kcg_false };

/* DMI_Control_Pkg::cDefLevelT */
const DMI_level_T_DMI_Types_Pkg cDefLevelT_DMI_Control_Pkg = { M_LEVEL_Level_0,
  0 };

/* DMI_Control_Pkg::AllMenuButtonsDisabled */
const array_int_30 AllMenuButtonsDisabled_DMI_Control_Pkg = { 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* DMI_Control_Pkg::DMI_train_data_constant */
const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg DMI_train_data_constant_DMI_Control_Pkg = {
  kcg_false, 0, NC_TRAIN_Passenger_train, 20084, 0, 160, M_AXLELOADCAT_E5,
  M_AIRTIGHT_Not_fitted,
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles };

/* DMI_Control_Pkg::ArrayOfIndex_LevelAnnouncementNoAck */
const array_int_5 ArrayOfIndex_LevelAnnouncementNoAck_DMI_Control_Pkg = { 6, 8,
  10, 12, 14 };

/* DMI_Control_Pkg::cClearBrakeStatusSymbol */
const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cClearBrakeStatusSymbol_DMI_Control_Pkg = {
  kcg_false, 0, clear_area_DMI_Types_Pkg, 0.0, status_symbols_DMI_Types_Pkg, 1,
  C_DMI_Types_Pkg, 9, 0 };

/* DMI_Control_Pkg::cClearC1AreaSymbol */
const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cClearC1AreaSymbol_DMI_Control_Pkg = {
  kcg_false, 0, clear_area_DMI_Types_Pkg, 0.0, status_symbols_DMI_Types_Pkg, 1,
  C_DMI_Types_Pkg, 1, 0 };

/* DMI_Control_Pkg::cDMI_text_message_ack */
const DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_text_message_ack_DMI_Control_Pkg = {
  kcg_false, 0, 0, kcg_false };

/* DMI_Control_Pkg::cDMI_evc_Display_List */
const DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg cDMI_evc_Display_List_DMI_Control_Pkg = {
  kcg_false, 0, { 0, { { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, {
        M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, {
        M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, {
        M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, {
        M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, {
        M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, {
        M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, {
        M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, {
        M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, {
        M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, {
        M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0, 0 }, { M_LEVEL_Level_0,
        0 } } } };

/* DMI_Control_Pkg::cDMI_GradientsInit */
const array_real_32 cDMI_GradientsInit_DMI_Control_Pkg = { 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

/* DMI_Control_Pkg::cDMI_SpeedProfile_Init */
const array_real_32 cDMI_SpeedProfile_Init_DMI_Control_Pkg = { 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

/* DMI_Control_Pkg::DMI_name */
const array_char_12 DMI_name_DMI_Control_Pkg = { 'O', 'p', 'e', 'n', 'E', 'T',
  'C', 'S', '_', 'D', 'M', 'I' };

/* DMI_Control_Pkg::InitText1 */
const array_int_9 InitText1_DMI_Control_Pkg = { 32, 32, 32, 32, 32, 32, 32, 32,
  32 };

/* DMI_Control_Pkg::cDMI_Icons_Ack */
const DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Icons_Ack_DMI_Control_Pkg = {
  kcg_false, 0, 0 };

/* DMI_Control_Pkg::cDMI_Level_data */
const DMI_Level_Data_T_DMI_Messages_Bothways_Pkg cDMI_Level_data_DMI_Control_Pkg = {
  kcg_false, 0, { M_LEVEL_Level_0, 0 } };

/* DMI_Control_Pkg::cD_SPDI_SpeedChangeSymbolsVisible */
const array_bool_10 cD_SPDI_SpeedChangeSymbolsVisible_DMI_Control_Pkg = {
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false,
  kcg_false, kcg_false, kcg_false };

/* DMI_Control_Pkg::cD_SPDI_SpeedChangeIndex */
const array_int_10 cD_SPDI_SpeedChangeIndex_DMI_Control_Pkg = { 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0 };

/* DMI_Control_Pkg::cD_SPDI_SpeedChangePosition */
const array_real_10 cD_SPDI_SpeedChangePosition_DMI_Control_Pkg = { 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

/* DMI_Control_Pkg::cD_PASP_Speeds */
const array_real_4 cD_PASP_Speeds_DMI_Control_Pkg = { 0.0, 0.0, 0.0, 0.0 };

/* DMI_Control_Pkg::cD_PASP_Distances */
const array_real_4 cD_PASP_Distances_DMI_Control_Pkg = { 0.0, 0.0, 0.0, 0.0 };

/* DMI_Control_Pkg::cD_GradientVisible */
const array_bool_12 cD_GradientVisible_DMI_Control_Pkg = { kcg_false, kcg_false,
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false,
  kcg_false, kcg_false, kcg_false };

/* DMI_Control_Pkg::cD_GradientStartInterpolated */
const array_real_12 cD_GradientStartInterpolated_DMI_Control_Pkg = { 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

/* DMI_Control_Pkg::cD_tScale */
const tScale cD_tScale_DMI_Control_Pkg = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0 };

/* DMI_Control_Pkg::cD_GradientsValue */
const array_real_12 cD_GradientsValue_DMI_Control_Pkg = { 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

/* DMI_Control_Pkg::cDMI_dynamic */
const DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg cDMI_dynamic_DMI_Control_Pkg = {
  kcg_false, 0, 0, 0, 0, 0, 0, 0, 0, 0, M_MODE_Full_Supervision, {
    M_LEVEL_Level_0, 0 }, 0, kcg_false, supDis_normal_DMI_Types_Pkg,
  CSM_DMI_Types_Pkg, 0, 0, 0, 0, 0, conn_unknown_API_RadioCommunication_Pkg,
  0 };

/* DMI_Control_Pkg::cTrack_Atlas_Information */
const DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg cTrack_Atlas_Information_DMI_Control_Pkg = {
  kcg_false, 0, { kcg_false, { { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
        0 } } }, { kcg_false, { { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 },
      { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
        kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
        0 } } }, { 0, { { 0,
        M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted }, {
        0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0, M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted },
      { 0,
        M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted } } } };

/* DMI_Control_Pkg::ArrayOfIndex_YellowModeSymbols */
const array_int_8 ArrayOfIndex_YellowModeSymbols_DMI_Control_Pkg = { 2, 5, 8,
  10, 15, 17, 20, 22 };

/* DMI_Control_Pkg::ArrayOfIndex_YellowLevelSymbols */
const array_int_5 ArrayOfIndex_YellowLevelSymbols_DMI_Control_Pkg = { 7, 9, 11,
  13, 15 };

/* DMI_Control_Pkg::DMI_identifier_const */
const DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg DMI_identifier_const_DMI_Control_Pkg = {
  kcg_true, 0, DMI_1_DMI_Types_Pkg, cabin_A_DMI_Types_Pkg, 0, { ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS };

/* DMI_Control_Pkg::DriverID_window_mask */
const array_bool_15 DriverID_window_mask_DMI_Control_Pkg = { kcg_true,
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false,
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false };

/* DMI_Control_Pkg::HideMainmenu_window_mask */
const array_bool_15 HideMainmenu_window_mask_DMI_Control_Pkg = { kcg_false,
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false,
  kcg_false, kcg_false, kcg_true, kcg_false, kcg_false, kcg_false, kcg_false };

/* DMI_Control_Pkg::TrainRN_window_mask */
const array_bool_15 TrainRN_window_mask_DMI_Control_Pkg = { kcg_false, kcg_true,
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false,
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false };

/* DMI_Control_Pkg::Mainmenu_window_mask */
const array_bool_15 Mainmenu_window_mask_DMI_Control_Pkg = { kcg_false,
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false,
  kcg_false, kcg_true, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false };

/* DMI_Control_Pkg::cETCS_Level_Menu_mask */
const array_bool_15 cETCS_Level_Menu_mask_DMI_Control_Pkg = { kcg_false,
  kcg_false, kcg_true, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false,
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false };

/* DMI_Control_Pkg::ValidateTraindata_window_mask */
const array_bool_15 ValidateTraindata_window_mask_DMI_Control_Pkg = { kcg_false,
  kcg_false, kcg_false, kcg_false, kcg_true, kcg_false, kcg_false, kcg_false,
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false };

/* DMI_Control_Pkg::cDMI_List_Entry_Request */
const Array_DMI_List_Entry_Request cDMI_List_Entry_Request_DMI_Control_Pkg = {
  Enter_revalidate_driver_identifier_DMI_Types_Pkg,
  Enter_revalidate_train_running_number_DMI_Types_Pkg,
  Enter_revalidate_ETCS_level_DMI_Types_Pkg,
  Enter_RBC_contact_menu_DMI_Types_Pkg, Validate_train_data_DMI_Types_Pkg,
  Enter_NTC_data_DMI_Types_Pkg, Spare_DMI_Types_Pkg,
  Enable_the_track_ahead_free_by_the_driver_DMI_Types_Pkg,
  Disable_the_Track_Ahead_free_page_DMI_Types_Pkg,
  Show_main_window_DMI_Types_Pkg, Hide_main_window_DMI_Types_Pkg,
  Hide_adhesion_factor_entry_window_DMI_Types_Pkg,
  Hide_staff_responsible_entry_window_DMI_Types_Pkg,
  Show_Set_VBC_validation_window_DMI_Types_Pkg,
  Show_Remove_VBC_validation_window_DMI_Types_Pkg };

/* DMI_Control_Pkg::cMsgStructQueue */
const array__15402 cMsgStructQueue_DMI_Control_Pkg = { { kcg_false, { kcg_false,
      0, 0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
      Q_TEXTCLASS_Auxiliary_Information,
      Q_TEXTCONFIRM_No_confirmation_required } }, { kcg_false, { kcg_false, 0,
      0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
      Q_TEXTCLASS_Auxiliary_Information,
      Q_TEXTCONFIRM_No_confirmation_required } }, { kcg_false, { kcg_false, 0,
      0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
      Q_TEXTCLASS_Auxiliary_Information,
      Q_TEXTCONFIRM_No_confirmation_required } }, { kcg_false, { kcg_false, 0,
      0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
      Q_TEXTCLASS_Auxiliary_Information,
      Q_TEXTCONFIRM_No_confirmation_required } }, { kcg_false, { kcg_false, 0,
      0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
      Q_TEXTCLASS_Auxiliary_Information,
      Q_TEXTCONFIRM_No_confirmation_required } } };

/* DMI_Control_Pkg::cListMsgStructure */
const array__15402 cListMsgStructure_DMI_Control_Pkg = { { kcg_false, {
      kcg_false, 0, 0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
      Q_TEXTCLASS_Auxiliary_Information,
      Q_TEXTCONFIRM_No_confirmation_required } }, { kcg_false, { kcg_false, 0,
      0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
      Q_TEXTCLASS_Auxiliary_Information,
      Q_TEXTCONFIRM_No_confirmation_required } }, { kcg_false, { kcg_false, 0,
      0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
      Q_TEXTCLASS_Auxiliary_Information,
      Q_TEXTCONFIRM_No_confirmation_required } }, { kcg_false, { kcg_false, 0,
      0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
      Q_TEXTCLASS_Auxiliary_Information,
      Q_TEXTCONFIRM_No_confirmation_required } }, { kcg_false, { kcg_false, 0,
      0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
      Q_TEXTCLASS_Auxiliary_Information,
      Q_TEXTCONFIRM_No_confirmation_required } } };

/* DMI_Control_Pkg::cMsgStructure */
const MsgStructure cMsgStructure_DMI_Control_Pkg = { kcg_false, { kcg_false, 0,
    0, balise_read_error_DMI_Types_Pkg, 0, { ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
    Q_TEXTCLASS_Auxiliary_Information,
    Q_TEXTCONFIRM_No_confirmation_required } };

/* DMI_Control_Pkg::cArray_hh */
const array_real_5 cArray_hh_DMI_Control_Pkg = { 17.0, - 1.0, - 1.0, - 1.0,
  - 1.0 };

/* DMI_Control_Pkg::cArray_mm */
const array_real_5 cArray_mm_DMI_Control_Pkg = { 30.0, - 1.0, - 1.0, - 1.0,
  - 1.0 };

/* DMI_Control_Pkg::ArrayEnum_Q_text */
const Array_DMI_Q_Text ArrayEnum_Q_text_DMI_Control_Pkg = {
  balise_read_error_DMI_Types_Pkg, communication_error_DMI_Types_Pkg,
  entering_FS_DMI_Types_Pkg, entering_OS_DMI_Types_Pkg,
  no_track_condition_will_be_received_DMI_Types_Pkg,
  runaway_movement_DMI_Types_Pkg, SH_refused_DMI_Types_Pkg,
  trackside_not_compatible_DMI_Types_Pkg, train_data_changed_DMI_Types_Pkg,
  train_is_rejected_DMI_Types_Pkg,
  unauthorized_passing_of_EOA_LOA_DMI_Types_Pkg,
  no_MA_received_at_level_transition_DMI_Types_Pkg,
  SR_distance_exceeded_DMI_Types_Pkg, SH_stop_order_DMI_Types_Pkg,
  SR_stop_order_DMI_Types_Pkg, emergency_stop_DMI_Types_Pkg,
  trackside_malfunction_DMI_Types_Pkg, SH_request_failed_DMI_Types_Pkg,
  RV_distance_esceeded_DMI_Types_Pkg, no_track_description_DMI_Types_Pkg,
  STM_brake_Deman_DMI_Types_Pkg,
  route_unsuitable_axle_load_category_DMI_Types_Pkg,
  route_unsuitable_loading_gauge_DMI_Types_Pkg,
  route_unsuitable_traction_system_DMI_Types_Pkg,
  radio_network_registration_failed_DMI_Types_Pkg,
  level_crossing_not_protected_DMI_Types_Pkg, acknowledgment_DMI_Types_Pkg };

/* DMI_Control_Pkg::cPlainText */
const array_char_30_5 cPlainText_DMI_Control_Pkg = { { ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }, { ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }, { ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }, { ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }, { ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' } };

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

