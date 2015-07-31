/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* illegalScalesIndex */
extern const tScale illegalScalesIndex;

/* numberOfObjects */
#define numberOfObjects 12

/* Scales */
extern const array_real_9_6 Scales;

/* logScaleFactor */
#define logScaleFactor 142.84

/* ScaleLine5 */
#define ScaleLine5 133.0

/* LinearScaleFactors */
extern const array_real_6 LinearScaleFactors;

/* cPASP_Array_Size */
#define cPASP_Array_Size 10

/* DMI_Control_Pkg::ASCII_Backsp */
#define ASCII_Backsp_DMI_Control_Pkg 8

/* DMI_Control_Pkg::closeButtonActiveSymbol */
#define closeButtonActiveSymbol_DMI_Control_Pkg 25

/* DMI_Control_Pkg::DMI_train_data_ack_positive */
extern const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_train_data_ack_positive_DMI_Control_Pkg;

/* DMI_Control_Pkg::DMI_train_data_ack_negative */
extern const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_train_data_ack_negative_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDefLevelT */
extern const DMI_level_T_DMI_Types_Pkg cDefLevelT_DMI_Control_Pkg;

/* DMI_Control_Pkg::cCloseButtonEnabledSymbol */
#define cCloseButtonEnabledSymbol_DMI_Control_Pkg 25

/* DMI_Control_Pkg::AllMenuButtonsDisabled */
extern const array_int_30 AllMenuButtonsDisabled_DMI_Control_Pkg;

/* DMI_Control_Pkg::DMI_train_data_constant */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg DMI_train_data_constant_DMI_Control_Pkg;

/* DMI_Control_Pkg::cStatusSymbol_IconGroup */
#define cStatusSymbol_IconGroup_DMI_Control_Pkg 3

/* DMI_Control_Pkg::cSTATUS_Emergency_brake */
#define cSTATUS_Emergency_brake_DMI_Control_Pkg 1

/* DMI_Control_Pkg::ArrayOfIndex_LevelAnnouncementNoAck */
extern const array_int_5 ArrayOfIndex_LevelAnnouncementNoAck_DMI_Control_Pkg;

/* DMI_Control_Pkg::cClearBrakeStatusSymbol */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cClearBrakeStatusSymbol_DMI_Control_Pkg;

/* DMI_Control_Pkg::cClearC1AreaSymbol */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cClearC1AreaSymbol_DMI_Control_Pkg;

/* DMI_Control_Pkg::cCOLOR_GREY */
#define cCOLOR_GREY_DMI_Control_Pkg 3

/* DMI_Control_Pkg::cCOLOR_RED */
#define cCOLOR_RED_DMI_Control_Pkg 10

/* DMI_Control_Pkg::cCOLOR_ORANGE */
#define cCOLOR_ORANGE_DMI_Control_Pkg 9

/* DMI_Control_Pkg::ccOLOR_WHITE */
#define ccOLOR_WHITE_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cCOLOR_YELLOW */
#define cCOLOR_YELLOW_DMI_Control_Pkg 8

/* DMI_Control_Pkg::cCOLOR_DARK_GREY */
#define cCOLOR_DARK_GREY_DMI_Control_Pkg 5

/* DMI_Control_Pkg::cCOLOR_MEDIUM_GREY */
#define cCOLOR_MEDIUM_GREY_DMI_Control_Pkg 4

/* DMI_Control_Pkg::cDMI_text_message_ack */
extern const DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_text_message_ack_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_evc_Display_List */
extern const DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg cDMI_evc_Display_List_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_GradientsInit */
extern const array_real_32 cDMI_GradientsInit_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_SpeedProfile_Init */
extern const array_real_32 cDMI_SpeedProfile_Init_DMI_Control_Pkg;

/* DMI_Control_Pkg::DMI_name */
extern const array_char_12 DMI_name_DMI_Control_Pkg;

/* DMI_Control_Pkg::InitText1 */
extern const array_int_9 InitText1_DMI_Control_Pkg;

/* DMI_Control_Pkg::MaxNumDisplayMsg */
#define MaxNumDisplayMsg_DMI_Control_Pkg 5

/* DMI_Control_Pkg::cDMI_Icons_Ack */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Icons_Ack_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_Level_data */
extern const DMI_Level_Data_T_DMI_Messages_Bothways_Pkg cDMI_Level_data_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_SPDI_SpeedChangeSymbolsVisible */
extern const array_bool_10 cD_SPDI_SpeedChangeSymbolsVisible_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_SPDI_SpeedChangeIndex */
extern const array_int_10 cD_SPDI_SpeedChangeIndex_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_SPDI_SpeedChangePosition */
extern const array_real_10 cD_SPDI_SpeedChangePosition_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_PASP_Speeds */
extern const array_real_4 cD_PASP_Speeds_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_PASP_Distances */
extern const array_real_4 cD_PASP_Distances_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_GradientVisible */
extern const array_bool_12 cD_GradientVisible_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_GradientStartInterpolated */
extern const array_real_12 cD_GradientStartInterpolated_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_tScale */
extern const tScale cD_tScale_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_GradientsValue */
extern const array_real_12 cD_GradientsValue_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_dynamic */
extern const DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg cDMI_dynamic_DMI_Control_Pkg;

/* DMI_Control_Pkg::cTrack_Atlas_Information */
extern const DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg cTrack_Atlas_Information_DMI_Control_Pkg;

/* DMI_Control_Pkg::cLevelSymbol_IconGroup */
#define cLevelSymbol_IconGroup_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cModeSymbol_IconGroup */
#define cModeSymbol_IconGroup_DMI_Control_Pkg 2

/* DMI_Control_Pkg::ArrayOfIndex_YellowModeSymbols */
extern const array_int_8 ArrayOfIndex_YellowModeSymbols_DMI_Control_Pkg;

/* DMI_Control_Pkg::ArrayOfIndex_YellowLevelSymbols */
extern const array_int_5 ArrayOfIndex_YellowLevelSymbols_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMODE_Limited_Supervision */
#define cMODE_Limited_Supervision_DMI_Control_Pkg 21

/* DMI_Control_Pkg::cMODE_Non_leading */
#define cMODE_Non_leading_DMI_Control_Pkg 12

/* DMI_Control_Pkg::cMODE_On_Sight */
#define cMODE_On_Sight_DMI_Control_Pkg 7

/* DMI_Control_Pkg::cMODE_Post_trip */
#define cMODE_Post_trip_DMI_Control_Pkg 6

/* DMI_Control_Pkg::cMODE_Reversing */
#define cMODE_Reversing_DMI_Control_Pkg 14

/* DMI_Control_Pkg::cMODE_Staff_Responsible */
#define cMODE_Staff_Responsible_DMI_Control_Pkg 9

/* DMI_Control_Pkg::cMODE_System_Faliure */
#define cMODE_System_Faliure_DMI_Control_Pkg 18

/* DMI_Control_Pkg::cMODE_Trip */
#define cMODE_Trip_DMI_Control_Pkg 4

/* DMI_Control_Pkg::cMODE_Unfitted */
#define cMODE_Unfitted_DMI_Control_Pkg 16

/* DMI_Control_Pkg::cMODE_Stand_By */
#define cMODE_Stand_By_DMI_Control_Pkg 13

/* DMI_Control_Pkg::cMODE_Shunting */
#define cMODE_Shunting_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cMODE_System_National */
#define cMODE_System_National_DMI_Control_Pkg 19

/* DMI_Control_Pkg::cStatusIntervalTime */
#define cStatusIntervalTime_DMI_Control_Pkg 10

/* DMI_Control_Pkg::cMODE_Full_Supervision */
#define cMODE_Full_Supervision_DMI_Control_Pkg 11

/* DMI_Control_Pkg::Dim_DMI_name */
#define Dim_DMI_name_DMI_Control_Pkg 12

/* DMI_Control_Pkg::DMI_identifier_const */
extern const DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg DMI_identifier_const_DMI_Control_Pkg;

/* DMI_Control_Pkg::ASCII_0 */
#define ASCII_0_DMI_Control_Pkg 48

/* DMI_Control_Pkg::ASCII_offset_Backsp */
#define ASCII_offset_Backsp_DMI_Control_Pkg (- 40)

/* DMI_Control_Pkg::ASCII_offset_0 */
#define ASCII_offset_0_DMI_Control_Pkg 0

/* DMI_Control_Pkg::MAXTextLength */
#define MAXTextLength_DMI_Control_Pkg cDiverIdentifierLength_DMI_Messages_Bothways_Pkg

/* DMI_Control_Pkg::ASCII_space */
#define ASCII_space_DMI_Control_Pkg 32

/* DMI_Control_Pkg::DriverID_window_mask */
extern const array_bool_15 DriverID_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::HideMainmenu_window_mask */
extern const array_bool_15 HideMainmenu_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::TrainRN_window_mask */
extern const array_bool_15 TrainRN_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::Mainmenu_window_mask */
extern const array_bool_15 Mainmenu_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::cETCS_Level_Menu_mask */
extern const array_bool_15 cETCS_Level_Menu_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::ValidateTraindata_window_mask */
extern const array_bool_15 ValidateTraindata_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_List_Entry_Request */
extern const Array_DMI_List_Entry_Request cDMI_List_Entry_Request_DMI_Control_Pkg;

/* DMI_Control_Pkg::DimButtonEnabler */
#define DimButtonEnabler_DMI_Control_Pkg 30

/* DMI_Control_Pkg::Px100To1001 */
#define Px100To1001_DMI_Control_Pkg 153.0

/* DMI_Control_Pkg::Y100I1 */
#define Y100I1_DMI_Control_Pkg (- 56.5)

/* DMI_Control_Pkg::MAX_GRADIENTS_DMI */
#define MAX_GRADIENTS_DMI_DMI_Control_Pkg cDMI_maxGradientProfile_DMI_Types_Pkg

/* DMI_Control_Pkg::MAX_GRADIENTS */
#define MAX_GRADIENTS_DMI_Control_Pkg 12

/* DMI_Control_Pkg::MAX_SPEEDPROFILES */
#define MAX_SPEEDPROFILES_DMI_Control_Pkg 32

/* DMI_Control_Pkg::MAX_SPEEDPROFILES_DMI */
#define MAX_SPEEDPROFILES_DMI_DMI_Control_Pkg 10

/* DMI_Control_Pkg::cMaxNumLevelHandeld */
#define cMaxNumLevelHandeld_DMI_Control_Pkg 12

/* DMI_Control_Pkg::cLevel_2_Index */
#define cLevel_2_Index_DMI_Control_Pkg 3

/* DMI_Control_Pkg::cLevel_ATB_Index */
#define cLevel_ATB_Index_DMI_Control_Pkg 5

/* DMI_Control_Pkg::cLevel_3_Index */
#define cLevel_3_Index_DMI_Control_Pkg 4

/* DMI_Control_Pkg::cLevel_0_Index */
#define cLevel_0_Index_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cLevel_1_Index */
#define cLevel_1_Index_DMI_Control_Pkg 2

/* DMI_Control_Pkg::cMsgStructQueue */
extern const array__15402 cMsgStructQueue_DMI_Control_Pkg;

/* DMI_Control_Pkg::cListMsgStructure */
extern const array__15402 cListMsgStructure_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMsgStructure */
extern const MsgStructure cMsgStructure_DMI_Control_Pkg;

/* DMI_Control_Pkg::cArray_hh */
extern const array_real_5 cArray_hh_DMI_Control_Pkg;

/* DMI_Control_Pkg::cArray_mm */
extern const array_real_5 cArray_mm_DMI_Control_Pkg;

/* DMI_Control_Pkg::ArrayEnum_Q_text */
extern const Array_DMI_Q_Text ArrayEnum_Q_text_DMI_Control_Pkg;

/* DMI_Control_Pkg::Num_Q_TextMsg */
#define Num_Q_TextMsg_DMI_Control_Pkg 27

/* DMI_Control_Pkg::cPlainText */
extern const array_char_30_5 cPlainText_DMI_Control_Pkg;

/* DMI_Control_Pkg::cIntervalFlashingTimeMsg */
#define cIntervalFlashingTimeMsg_DMI_Control_Pkg 10

/* DMI_Control_Pkg::cDIM_MSGQueue */
#define cDIM_MSGQueue_DMI_Control_Pkg 5

/* DMI_Messages_Bothways_Pkg::cDiverIdentifierLength */
#define cDiverIdentifierLength_DMI_Messages_Bothways_Pkg 9

/* DMI_Types_Pkg::cDMI_maxLevels */
#define cDMI_maxLevels_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_maxSpeedProfile */
#define cDMI_maxSpeedProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_maxGradientProfile */
#define cDMI_maxGradientProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_maxTrackCondProfile */
#define cDMI_maxTrackCondProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_charsInText */
#define cDMI_charsInText_DMI_Types_Pkg 255

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

