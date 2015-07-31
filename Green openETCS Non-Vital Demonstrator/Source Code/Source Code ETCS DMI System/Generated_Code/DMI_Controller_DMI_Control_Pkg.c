/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_Controller_DMI_Control_Pkg.h"

void DMI_Controller_reset_DMI_Control_Pkg(
  outC_DMI_Controller_DMI_Control_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init4 = kcg_true;
  outC->init5 = kcg_true;
  outC->init6 = kcg_true;
  outC->init7 = kcg_true;
  /* 1 */ StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(&outC->Context_1);
  /* 1 */ D_behavior_reset(&outC->_1_Context_1);
  /* HourGlassAnimation */
  HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
    &outC->Context_HourGlassAnimation);
  /* FlashingIconsOperator */
  FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(
    &outC->Context_FlashingIconsOperator);
  /* 2 */ AckMsgManager_reset_DMI_Control_Pkg_Utils(&outC->Context_2);
  /* 1 */
  TextMessagesDispatcher_reset_DMI_Control_Pkg_Utils(&outC->_2_Context_1);
  /* 5 */ DMI_status_reset_DMI_Control_Pkg_Sub_func(&outC->Context_5);
  /* 5 */
  DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->_3_Context_5);
}

/* DMI_Control_Pkg::DMI_Controller */
void DMI_Controller_DMI_Control_Pkg(
  inC_DMI_Controller_DMI_Control_Pkg *inC,
  outC_DMI_Controller_DMI_Control_Pkg *outC)
{
  static Icon_group_T_DMI_Types_Pkg tmp12;
  static kcg_bool tmp11;
  static kcg_bool tmp10;
  static kcg_bool tmp9;
  static kcg_bool tmp8;
  static kcg_bool tmp7;
  static kcg_bool tmp6;
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg tmp5;
  static SSM_TR_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu tmp4;
  static kcg_int tmp3;
  static kcg_bool tmp2;
  static kcg_bool tmp1;
  static kcg_int i;
  static SSM_TR_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive tmp;
  static kcg_bool tmp16;
  static kcg_bool tmp17;
  static kcg_bool tmp14;
  static kcg_bool tmp15;
  static kcg_bool tmp13;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */
  static kcg_bool HandshakeSM_reset_act_CabinSM_DeskIsOpen;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */
  static SSM_ST_HandshakeSM_CabinSM_DeskIsOpen HandshakeSM_state_act_CabinSM_DeskIsOpen;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */
  static SSM_ST_HandshakeSM_CabinSM_DeskIsOpen HandshakeSM_state_sel_CabinSM_DeskIsOpen;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock5::then::_L9 */
  static array_real_5 _L9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock5::then::_L8 */
  static array_real_5 _L8_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock5::then::_L6 */
  static array_char_30_5 _L6_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock5::then::_L2 */
  static array_int_5 _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::vPermitted */
  static kcg_real _18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::else */
  static kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::vPermitted */
  static kcg_real vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::vPermitted */
  static kcg_real vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::isOrange */
  static kcg_bool isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::isDarkGrey */
  static kcg_bool isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::IfBlock1::else */
  static kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::_L45 */
  static kcg_bool _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isOrange */
  static kcg_bool isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isWhite */
  static kcg_bool isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isDarkGrey */
  static kcg_bool isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isMediumGrey */
  static kcg_bool isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::IfBlock4::else */
  static kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isOrange */
  static kcg_bool isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isYellow */
  static kcg_bool isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isMediumGrey */
  static kcg_bool isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::Vtarget */
  static kcg_real Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isDarkGrey */
  static kcg_bool isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::IfBlock4::else */
  static kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock4;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::isYellow */
  static kcg_bool isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::isMediumGrey */
  static kcg_bool isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM11::TextMsgToBeAck */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11_TextMsgToBeAck;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock */
  static Icon_control_flag_T_DMI_Types_Pkg IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_in_area::WhenBlock2::C::IfBlock1::else::then::CheckResult */
  static kcg_bool CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_in_area::WhenBlock2 */
  static Area_group_T_DMI_Types_Pkg WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::clear_area::WhenBlock2::C::IfBlock1 */
  static kcg_bool IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::clear_area::WhenBlock2 */
  static Area_group_T_DMI_Types_Pkg WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock::C::AreaRankIfBlock */
  static kcg_bool AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock */
  static Area_group_T_DMI_Types_Pkg AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_DriverID::_L60 */
  static kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_DriverID::_L53 */
  static kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_TrainRN::_L60 */
  static kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_TrainRN::_L56 */
  static kcg_int _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_TrainRN::_L53 */
  static kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_TrainRN::TrainRNKeyboardController::else */
  static kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboardController;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::_L4 */
  static DMI_Request_T_DMI_Types_Pkg _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::levelMenuVisibility_toDisplay */
  static kcg_bool levelMenuVisibility_toDisplay_strong;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM */
  static SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM */
  static SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::LevelWindow */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::LevelWindow */
  static kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN */
  static kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN */
  static kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */
  static kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */
  static kcg_bool br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */
  static kcg_bool br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */
  static kcg_bool br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataValidationWindow */
  static kcg_bool br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataWindow */
  static kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataWindow */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::TrainDataWindow */
  static kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled */
  static kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled */
  static kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */
  static kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */
  static kcg_bool br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */
  static kcg_bool br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */
  static kcg_bool br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */
  static kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */
  static kcg_bool br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */
  static kcg_bool br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::MainMenu */
  static kcg_bool br_5_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN::TrainRNKeyboardController::else */
  static kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN::_L53 */
  static kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN::_L56 */
  static kcg_int _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::Insert_TrainRN::_L60 */
  static kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled::_L53 */
  static kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM::DriverID_DMI_controlled::_L60 */
  static kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_DriverID */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::WaitingForReq */
  static kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::WaitingForReq */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::Insert_TrainRN */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu */
  static kcg_bool br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu */
  static kcg_bool br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu */
  static kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::LevelWindow */
  static kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SelectedLevel */
  static DMI_level_T_DMI_Types_Pkg last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::DMI_request */
  static DMI_Request_T_DMI_Types_Pkg last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::dmiCommand_NID_AreaGroup */
  static Area_group_T_DMI_Types_Pkg last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM */
  static SSM_ST_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM */
  static SSM_ST_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */
  static SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */
  static SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */
  static SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */
  static SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */
  static SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */
  static SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM */
  static SSM_ST_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */
  static SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */
  static SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */
  static SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */
  static SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM11 */
  static SSM_ST_SM11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM11_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM11 */
  static SSM_ST_SM11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM11_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */
  static SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */
  static SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM13 */
  static SSM_ST_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM13_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM13 */
  static SSM_ST_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM13_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::EntryRequestIsValid */
  static kcg_bool EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_AreaGroup */
  static Area_group_T_DMI_Types_Pkg NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Local_ImpMsgQueue */
  static array__15402 Local_ImpMsgQueue_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L475 */
  static array_real_4 _L475_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L474 */
  static array_bool_12 _L474_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L473 */
  static array_real_12 _L473_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L472 */
  static array_real_12 _L472_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L471 */
  static tScale _L471_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L512 */
  static array_real_10_2 _L512_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L508 */
  static array_real_12 _L508_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::traindataYesNoIndex_toDisplay */
  static kcg_int traindataYesNoIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_Scale_toDisplay */
  static tScale last_D_Scale_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_GradientStartInterpolated_toDisplay */
  static array_real_12 last_D_GradientStartInterpolated_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_GradientEndInterpolated_toDisplay */
  static array_real_12 last_D_GradientEndInterpolated_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_GradientVisible_toDisplay */
  static array_bool_12 last_D_GradientVisible_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_PASP_Distances_toDisplay */
  static array_real_4 last_D_PASP_Distances_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_SPDI_SpeedChangePosition_toDisplay */
  static array_real_10 last_D_SPDI_SpeedChangePosition_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_SPDI_SpeedChangeIndex_toDisplay */
  static array_int_10 last_D_SPDI_SpeedChangeIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::D_SPDI_SpeedChangeSymbolsVisible_toDisplay */
  static array_bool_10 last_D_SPDI_SpeedChangeSymbolsVisible_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DMI_level_data */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg last_DMI_level_data;
  /* DMI_Control_Pkg::DMI_Controller::ArrayLevelIndex_toDisplay */
  static array_int_12 last_ArrayLevelIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::Vinterv_Color_toDisplay */
  static kcg_int last_Vinterv_Color_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::vtarget_permColor_toDisplay */
  static kcg_int last_vtarget_permColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::iconGroupIndex_toDisplay */
  static kcg_int last_iconGroupIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainLoadingGougeIndex_toDisplay */
  static kcg_int last_trainLoadingGougeIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ModeSymbolVisibility_toDisplay */
  static kcg_bool last_ModeSymbolVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DistanceToTargetBarVisibility_toDisplay */
  static kcg_bool last_DistanceToTargetBarVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ArrayButtonsEnabler_toDisplay */
  static array_int_30 last_ArrayButtonsEnabler_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::window_mask_visibility__toDisplay */
  static array_bool_15 last_window_mask_visibility__toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainRN_Display_toDisplay */
  static array_int_9 last_TrainRN_Display_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DriverID_Display_toDisplay */
  static array_int_9 last_DriverID_Display_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DistanceToTargetVisibilityDigital_toDisplay */
  static kcg_bool last_DistanceToTargetVisibilityDigital_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedPermitted_toDisplay */
  static kcg_real last_SpeedPermitted_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedDigitThree_toDisplay */
  static kcg_real last_SpeedDigitThree_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedDigitTwo_toDisplay */
  static kcg_real last_SpeedDigitTwo_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainDataWindowVisibility_toDisplay */
  static kcg_bool last_TrainDataWindowVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainSpeed_toDisplay */
  static kcg_real last_TrainSpeed_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::LevelSymbolVisibility_toDisplay */
  static kcg_bool last_LevelSymbolVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM */
  static SSM_ST_CabinSM CabinSM_state_sel;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM */
  static SSM_ST_CabinSM CabinSM_state_act;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM */
  static kcg_bool CabinSM_reset_act;
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg default_DMI_driver_identifier;
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg default_DMI_train_running_number_id;
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_driver_request;
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_train_data_ack;
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_status_report;
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_text_message_ack;
  static array_int_5 default_IndexFixedMsg_toDisplay;
  static array_real_5 default_Array_mm_toDisplay;
  
  default_Array_mm_toDisplay[0] = - 1.0;
  default_Array_mm_toDisplay[1] = - 1.0;
  default_Array_mm_toDisplay[2] = - 1.0;
  default_Array_mm_toDisplay[3] = - 1.0;
  default_Array_mm_toDisplay[4] = - 1.0;
  default_IndexFixedMsg_toDisplay[0] = 0;
  default_IndexFixedMsg_toDisplay[1] = 0;
  default_IndexFixedMsg_toDisplay[2] = 0;
  default_IndexFixedMsg_toDisplay[3] = 0;
  default_IndexFixedMsg_toDisplay[4] = 0;
  default_DMI_text_message_ack.valid = kcg_false;
  default_DMI_text_message_ack.systemTime = 0;
  default_DMI_text_message_ack.textMessage_ID = 0;
  default_DMI_text_message_ack.acknowledged = kcg_false;
  default_DMI_status_report.valid = kcg_false;
  default_DMI_status_report.systemTime = 0;
  default_DMI_status_report.statusSet = Running_state_DMI_Types_Pkg;
  default_DMI_status_report.nAlive = 0;
  default_DMI_train_data_ack.valid = kcg_false;
  default_DMI_train_data_ack.systemTime = 0;
  default_DMI_train_data_ack.acknowledged = kcg_false;
  default_DMI_driver_request.valid = kcg_false;
  default_DMI_driver_request.systemTime = 0;
  default_DMI_driver_request.m_request = Start_of_mission_DMI_Types_Pkg;
  default_DMI_train_running_number_id.valid = kcg_false;
  default_DMI_train_running_number_id.systemTime = 0;
  default_DMI_train_running_number_id.trainRunningNumber = 1234;
  default_DMI_driver_identifier.valid = kcg_false;
  default_DMI_driver_identifier.systemTime = 0;
  default_DMI_driver_identifier.driverIdentifier[0] = '1';
  default_DMI_driver_identifier.driverIdentifier[1] = '2';
  default_DMI_driver_identifier.driverIdentifier[2] = '3';
  default_DMI_driver_identifier.driverIdentifier[3] = '4';
  default_DMI_driver_identifier.driverIdentifier[4] = '0';
  default_DMI_driver_identifier.driverIdentifier[5] = '0';
  default_DMI_driver_identifier.driverIdentifier[6] = '0';
  default_DMI_driver_identifier.driverIdentifier[7] = '0';
  default_DMI_driver_identifier.driverIdentifier[8] = '0';
  /* CheckDeskStatus */
  CheckDeskStatus_DMI_Control_Pkg_Sub_func(
    &inC->TIU_trainStatus,
    &tmp17,
    &tmp16);
  if (outC->init6) {
    CabinSM_state_sel = SSM_st_DeskIsClose_CabinSM;
    last_TrainSpeed_toDisplay = 0.0;
    traindataYesNoIndex_toDisplay = 4;
  }
  else {
    CabinSM_state_sel = outC->CabinSM_state_nxt;
    last_TrainSpeed_toDisplay = outC->TrainPosition_toDisplay;
    traindataYesNoIndex_toDisplay = outC->ETCS_LevelSymbol_toDisplay;
  }
  switch (CabinSM_state_sel) {
    case SSM_st_DeskIsOpen_CabinSM :
      if (tmp16) {
        CabinSM_state_act = SSM_st_DeskIsClose_CabinSM;
      }
      else {
        CabinSM_state_act = SSM_st_DeskIsOpen_CabinSM;
      }
      CabinSM_reset_act = tmp16;
      break;
    case SSM_st_DeskIsClose_CabinSM :
      if (tmp17) {
        CabinSM_state_act = SSM_st_DeskIsOpen_CabinSM;
      }
      else {
        CabinSM_state_act = SSM_st_DeskIsClose_CabinSM;
      }
      CabinSM_reset_act = tmp17;
      break;
    
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      levelMenuVisibility_toDisplay_strong = kcg_false;
      outC->TrainPosition_toDisplay = last_TrainSpeed_toDisplay;
      outC->ETCS_LevelSymbol_toDisplay = traindataYesNoIndex_toDisplay;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      if (CabinSM_reset_act) {
        outC->init = kcg_true;
      }
      if (outC->init) {
        HandshakeSM_state_sel_CabinSM_DeskIsOpen =
          SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM;
      }
      else {
        HandshakeSM_state_sel_CabinSM_DeskIsOpen =
          outC->HandshakeSM_state_nxt_CabinSM_DeskIsOpen;
      }
      switch (HandshakeSM_state_sel_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          HandshakeSM_reset_act_CabinSM_DeskIsOpen = kcg_false;
          HandshakeSM_state_act_CabinSM_DeskIsOpen =
            SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM;
          break;
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C_IfBlock1 =
            inC->DMI_identifier_request.valid;
          if (CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C_IfBlock1) {
            HandshakeSM_state_act_CabinSM_DeskIsOpen =
              SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM;
          }
          else {
            HandshakeSM_state_act_CabinSM_DeskIsOpen =
              SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM;
          }
          HandshakeSM_reset_act_CabinSM_DeskIsOpen =
            CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C_IfBlock1;
          break;
        
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            outC->init7 = kcg_true;
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        outC->init7 = kcg_true;
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          levelMenuVisibility_toDisplay_strong = kcg_false;
          outC->TrainPosition_toDisplay = last_TrainSpeed_toDisplay;
          outC->ETCS_LevelSymbol_toDisplay = traindataYesNoIndex_toDisplay;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (outC->init7) {
            TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
            RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
            SM11_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
          }
          else {
            TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            SM11_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SM11_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          switch (TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              if (inC->DMI_train_data.valid) {
                TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              }
              else {
                TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              }
              br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow =
                inC->DMI_train_data.valid;
              break;
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow =
                kcg_false;
              TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              break;
            
          }
          switch (TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow) {
                outC->init5 = kcg_true;
              }
              break;
            
          }
          EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            inC->DMI_entry_request.valid;
          if (EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 4 */
            DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest(
              &inC->DMI_entry_request,
              &last_TrainDataWindowVisibility_toDisplay,
              &last_LevelSymbolVisibility_toDisplay,
              &tmp17,
              &outC->HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp16);
            outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              last_LevelSymbolVisibility_toDisplay;
            outC->LevelMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp16;
            outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              last_TrainDataWindowVisibility_toDisplay;
            outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp17;
          }
          else if (outC->init7) {
            outC->HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->LevelMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
          }
          switch (RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow =
                inC->InputFieldAck_fromDisplay & inC->MousePressed;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow) {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                outC->HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive |
                (inC->closeButtonMain_fromDisplay & inC->MousePressed);
              br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                outC->LevelMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                  kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                  kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                  kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else {
                if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                  RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
                }
                else {
                  RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
                }
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                  br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                inC->InputFieldAck_fromDisplay & inC->MousePressed;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq =
                outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq =
                outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                (outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                  EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) |
                (inC->openMainMenu_fromDisplay & inC->MousePressed);
              br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                outC->LevelMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq) {
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                  kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq) {
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                  kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                  kcg_true;
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else {
                if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                  RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
                }
                else {
                  RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
                }
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                  br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow;
              }
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                inC->InputFieldAck_fromDisplay & inC->MousePressed;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              else {
                RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              }
              br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
              break;
            
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                outC->init4 = kcg_true;
              }
              break;
            
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            outC->init5 = kcg_true;
            outC->init4 = kcg_true;
          }
          tmp2 = inC->textMsgAck_fromDisplay & inC->MousePressed;
          switch (SM11_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11 :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11_TextMsgToBeAck =
                tmp2;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11_TextMsgToBeAck) {
                levelMenuVisibility_toDisplay_strong = kcg_true;
              }
              else {
                levelMenuVisibility_toDisplay_strong = kcg_false;
              }
              break;
            case SSM_st_TextMsgAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11 :
              levelMenuVisibility_toDisplay_strong = kcg_false;
              break;
            
          }
          outC->TrainPosition_toDisplay = 0.0;
          tmp17 = inC->DMI_dynamic.valid;
          if (tmp17) {
            /* 7 */
            LevelSymbolToIndex_DMI_Control_Pkg_Sub_func(
              inC->DMI_dynamic.level.level,
              &tmp16,
              &outC->_L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init7) {
            outC->_L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 4;
          }
          outC->ETCS_LevelSymbol_toDisplay =
            outC->_L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          break;
        
      }
      if (CabinSM_reset_act) {
        outC->init5 = kcg_true;
        outC->init4 = kcg_true;
      }
      break;
    
  }
  if (outC->init6) {
    last_LevelSymbolVisibility_toDisplay = kcg_false;
    last_TrainSpeed_toDisplay = 0.0;
    last_TrainDataWindowVisibility_toDisplay = kcg_false;
    last_SpeedDigitThree_toDisplay = 0.0;
  }
  else {
    last_LevelSymbolVisibility_toDisplay =
      outC->LevelSymbolVisibility_toDisplay;
    last_TrainSpeed_toDisplay = outC->TrainSpeed_toDisplay;
    last_TrainDataWindowVisibility_toDisplay =
      outC->TrainDataWindowVisibility_toDisplay;
    last_SpeedDigitThree_toDisplay = outC->SpeedDigitOne_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->LevelSymbolVisibility_toDisplay =
        last_LevelSymbolVisibility_toDisplay;
      outC->TrainSpeed_toDisplay = last_TrainSpeed_toDisplay;
      outC->TrainDataWindowVisibility_toDisplay =
        last_TrainDataWindowVisibility_toDisplay;
      outC->SpeedDigitOne_toDisplay = last_SpeedDigitThree_toDisplay;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->LevelSymbolVisibility_toDisplay =
            last_LevelSymbolVisibility_toDisplay;
          outC->TrainSpeed_toDisplay = last_TrainSpeed_toDisplay;
          outC->TrainDataWindowVisibility_toDisplay =
            last_TrainDataWindowVisibility_toDisplay;
          outC->SpeedDigitOne_toDisplay = last_SpeedDigitThree_toDisplay;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (tmp17) {
            outC->_L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp16;
            /* 3 */
            DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed(
              &inC->DMI_dynamic,
              &last_SpeedDigitTwo_toDisplay,
              &Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM,
              &last_SpeedPermitted_toDisplay,
              &outC->_L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
            outC->_L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              last_SpeedDigitTwo_toDisplay;
          }
          else if (outC->init7) {
            outC->_L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
          }
          outC->LevelSymbolVisibility_toDisplay =
            outC->_L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->TrainSpeed_toDisplay =
            outC->_L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          if (outC->init7) {
            YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
          }
          else {
            YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
            inC->MousePressed & inC->traindataNoAck_fromDisplay;
          isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
            inC->traindataYesAck_fromDisplay & inC->MousePressed;
          switch (YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM &
                !_L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              else {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              break;
            case SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              if (_L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM &
                !isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              else {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              break;
            
          }
          switch (YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              traindataYesNoIndex_toDisplay = 2;
              break;
            case SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              traindataYesNoIndex_toDisplay = 1;
              break;
            
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->TrainDataWindowVisibility_toDisplay =
                last_TrainDataWindowVisibility_toDisplay;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (outC->init4) {
                WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
              }
              else {
                WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
              }
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->TrainDataWindowVisibility_toDisplay =
                    last_TrainDataWindowVisibility_toDisplay;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->TrainDataWindowVisibility_toDisplay =
                    last_TrainDataWindowVisibility_toDisplay;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->TrainDataWindowVisibility_toDisplay =
                    last_TrainDataWindowVisibility_toDisplay;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp16 = inC->closeButton_fromDisplay & inC->MousePressed;
                  last_LevelSymbolVisibility_toDisplay =
                    outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                    EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                    (traindataYesNoIndex_toDisplay == 1) &
                    inC->traindataAck_fromDisplay & inC->MousePressed;
                  br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                    (traindataYesNoIndex_toDisplay == 2) &
                    inC->traindataAck_fromDisplay & inC->MousePressed;
                  if (tmp16) {
                    outC->TrainDataWindowVisibility_toDisplay = kcg_true;
                  }
                  else {
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                      last_LevelSymbolVisibility_toDisplay;
                    if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                      outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                    }
                    else {
                      br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                        br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow;
                      if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                        outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                      }
                      else {
                        br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                          br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow;
                        if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                          outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                        }
                        else {
                          outC->TrainDataWindowVisibility_toDisplay =
                            last_TrainDataWindowVisibility_toDisplay;
                        }
                      }
                    }
                  }
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow =
                    inC->closeButton_fromDisplay & inC->MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow =
                    inC->confirmTrainData_fromDisplay & inC->MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow) {
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else {
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow;
                    if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow) {
                      outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                    }
                    else {
                      outC->TrainDataWindowVisibility_toDisplay =
                        last_TrainDataWindowVisibility_toDisplay;
                    }
                  }
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->TrainDataWindowVisibility_toDisplay =
                    last_TrainDataWindowVisibility_toDisplay;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                    inC->openTrainDataWindow_fromDisplay & inC->MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    outC->TrainDataWindowVisibility_toDisplay = kcg_true;
                  }
                  else {
                    outC->TrainDataWindowVisibility_toDisplay =
                      last_TrainDataWindowVisibility_toDisplay;
                  }
                  break;
                
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->TrainDataWindowVisibility_toDisplay =
                last_TrainDataWindowVisibility_toDisplay;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->TrainDataWindowVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->TrainDataWindowVisibility_toDisplay =
                last_TrainDataWindowVisibility_toDisplay;
              break;
            
          }
          outC->SpeedDigitOne_toDisplay =
            outC->_L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          break;
        
      }
      break;
    
  }
  if (outC->init6) {
    last_SpeedDigitTwo_toDisplay = 0.0;
    last_SpeedDigitThree_toDisplay = 0.0;
  }
  else {
    last_SpeedDigitTwo_toDisplay = outC->SpeedDigitTwo_toDisplay;
    last_SpeedDigitThree_toDisplay = outC->SpeedDigitThree_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->SpeedDigitTwo_toDisplay = last_SpeedDigitTwo_toDisplay;
      outC->SpeedDigitThree_toDisplay = last_SpeedDigitThree_toDisplay;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->SpeedDigitTwo_toDisplay = last_SpeedDigitTwo_toDisplay;
          outC->SpeedDigitThree_toDisplay = last_SpeedDigitThree_toDisplay;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (tmp17) {
            outC->_L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
            outC->_L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              last_SpeedPermitted_toDisplay;
          }
          else if (outC->init7) {
            outC->_L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
          }
          outC->SpeedDigitTwo_toDisplay =
            outC->_L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->SpeedDigitThree_toDisplay =
            outC->_L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          break;
        
      }
      break;
    
  }
  if (outC->init6) {
    last_SpeedDigitTwo_toDisplay = 0.0;
    last_SpeedPermitted_toDisplay = 0.0;
  }
  else {
    last_SpeedDigitTwo_toDisplay = outC->SpeedTarget_toDisplay;
    last_SpeedPermitted_toDisplay = outC->SpeedPermitted_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->SpeedTarget_toDisplay = last_SpeedDigitTwo_toDisplay;
      outC->SpeedPermitted_toDisplay = last_SpeedPermitted_toDisplay;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->SpeedTarget_toDisplay = last_SpeedDigitTwo_toDisplay;
          outC->SpeedPermitted_toDisplay = last_SpeedPermitted_toDisplay;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (outC->init7) {
            SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
          }
          else {
            SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          switch (SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              if (tmp17) {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              }
              else {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              }
              break;
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              if (tmp17) {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              }
              else {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              }
              break;
            
          }
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->SpeedTarget_toDisplay = last_SpeedDigitTwo_toDisplay;
              outC->SpeedPermitted_toDisplay = last_SpeedPermitted_toDisplay;
              break;
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              last_TrainDataWindowVisibility_toDisplay =
                inC->DMI_dynamic.mode == M_MODE_Full_Supervision;
              if (last_TrainDataWindowVisibility_toDisplay) {
                WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2 =
                  inC->DMI_dynamic.sup_status;
                switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2) {
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->SpeedTarget_toDisplay = last_SpeedDigitTwo_toDisplay;
                    outC->SpeedPermitted_toDisplay =
                      last_SpeedPermitted_toDisplay;
                    break;
                  case RSM_DMI_Types_Pkg :
                    outC->SpeedTarget_toDisplay = last_SpeedDigitTwo_toDisplay;
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4 =
                      (supDis_intervention_DMI_Types_Pkg ==
                        inC->DMI_dynamic.m_warning) |
                      (inC->DMI_dynamic.m_warning ==
                        supDis_indication_DMI_Types_Pkg);
                    last_SpeedDigitTwo_toDisplay = (kcg_real)
                        inC->DMI_dynamic.v_permitted;
                    isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM =
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4 &
                      (last_SpeedDigitTwo_toDisplay >= (kcg_real)
                          inC->DMI_dynamic.v_target);
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM) {
                      outC->SpeedPermitted_toDisplay =
                        last_SpeedDigitTwo_toDisplay;
                    }
                    else {
                      outC->SpeedPermitted_toDisplay = 0.0;
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      (kcg_real) inC->DMI_dynamic.v_target;
                    isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM >=
                      0.0;
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->SpeedTarget_toDisplay =
                        Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    }
                    else {
                      outC->SpeedTarget_toDisplay = 0.0;
                    }
                    vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                      (kcg_real) inC->DMI_dynamic.v_permitted;
                    isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM =
                      vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM >=
                      Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM &
                      (inC->DMI_dynamic.m_warning !=
                        supDis_normal_DMI_Types_Pkg);
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->SpeedPermitted_toDisplay =
                        vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock4 =
                        (inC->DMI_dynamic.m_warning ==
                          supDis_normal_DMI_Types_Pkg) &
                        isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
                      if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock4) {
                        outC->SpeedPermitted_toDisplay =
                          vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
                      }
                      else {
                        outC->SpeedPermitted_toDisplay = 0.0;
                      }
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    last_SpeedDigitThree_toDisplay = (kcg_real)
                        inC->DMI_dynamic.v_target;
                    _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      inC->DMI_dynamic.m_warning !=
                      supDis_indication_DMI_Types_Pkg;
                    isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      (last_SpeedDigitThree_toDisplay >= 0.0) &
                      _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->SpeedTarget_toDisplay =
                        last_SpeedDigitThree_toDisplay;
                    }
                    else {
                      outC->SpeedTarget_toDisplay = 0.0;
                    }
                    vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM =
                      (kcg_real) inC->DMI_dynamic.v_permitted;
                    isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM &
                      (vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM >=
                        last_SpeedDigitThree_toDisplay);
                    if (isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->SpeedPermitted_toDisplay =
                        vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
                    }
                    else {
                      outC->SpeedPermitted_toDisplay =
                        last_SpeedPermitted_toDisplay;
                    }
                    break;
                  case CSM_DMI_Types_Pkg :
                    outC->SpeedTarget_toDisplay = 0.0;
                    _18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                      (kcg_real) inC->DMI_dynamic.v_permitted;
                    isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM =
                      (_18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM >=
                        0.0) & (inC->DMI_dynamic.m_warning !=
                        supDis_indication_DMI_Types_Pkg);
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM) {
                      outC->SpeedPermitted_toDisplay =
                        _18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
                    }
                    else {
                      outC->SpeedPermitted_toDisplay = 0.0;
                    }
                    break;
                  
                }
              }
              else {
                outC->SpeedTarget_toDisplay = 0.0;
                outC->SpeedPermitted_toDisplay = 0.0;
              }
              break;
            
          }
          break;
        
      }
      break;
    
  }
  if (outC->init6) {
    last_SpeedDigitTwo_toDisplay = 0.0;
  }
  else {
    last_SpeedDigitTwo_toDisplay = outC->SpeedRelease_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsOpen_CabinSM :
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              if (last_TrainDataWindowVisibility_toDisplay) {
                switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2) {
                  case CSM_DMI_Types_Pkg :
                    outC->SpeedRelease_toDisplay = 0.0;
                    break;
                  case PIM_DMI_Types_Pkg :
                    last_SpeedPermitted_toDisplay = (kcg_real)
                        inC->DMI_dynamic.v_release;
                    isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      (last_SpeedPermitted_toDisplay >= 0.0) &
                      _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->SpeedRelease_toDisplay =
                        last_SpeedPermitted_toDisplay;
                    }
                    else {
                      outC->SpeedRelease_toDisplay = 0.0;
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      (kcg_real) inC->DMI_dynamic.v_release;
                    isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM >=
                      0.0;
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->SpeedRelease_toDisplay =
                        Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    }
                    else {
                      outC->SpeedRelease_toDisplay = 0.0;
                    }
                    break;
                  case RSM_DMI_Types_Pkg :
                    last_SpeedDigitThree_toDisplay = (kcg_real)
                        inC->DMI_dynamic.v_release;
                    isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM =
                      (last_SpeedDigitThree_toDisplay >= 0.0) &
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4;
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM) {
                      outC->SpeedRelease_toDisplay =
                        last_SpeedDigitThree_toDisplay;
                    }
                    else {
                      outC->SpeedRelease_toDisplay = 0.0;
                    }
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->SpeedRelease_toDisplay = last_SpeedDigitTwo_toDisplay;
                    break;
                  
                }
              }
              else {
                outC->SpeedRelease_toDisplay = 0.0;
              }
              break;
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->SpeedRelease_toDisplay = last_SpeedDigitTwo_toDisplay;
              break;
            
          }
          break;
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->SpeedRelease_toDisplay = last_SpeedDigitTwo_toDisplay;
          break;
        
      }
      break;
    case SSM_st_DeskIsClose_CabinSM :
      outC->SpeedRelease_toDisplay = last_SpeedDigitTwo_toDisplay;
      break;
    
  }
  if (outC->init6) {
    last_SpeedDigitTwo_toDisplay = 0.0;
  }
  else {
    last_SpeedDigitTwo_toDisplay = outC->SpeedIntervention_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsOpen_CabinSM :
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              if (last_TrainDataWindowVisibility_toDisplay) {
                switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2) {
                  case CSM_DMI_Types_Pkg :
                    last_SpeedPermitted_toDisplay = (kcg_real)
                        inC->DMI_dynamic.v_intervention;
                    last_DistanceToTargetVisibilityDigital_toDisplay =
                      last_SpeedPermitted_toDisplay >
                      _18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
                    isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM =
                      last_DistanceToTargetVisibilityDigital_toDisplay &
                      ((inC->DMI_dynamic.m_warning ==
                          supDis_overspeed_DMI_Types_Pkg) |
                        (inC->DMI_dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM) {
                      outC->SpeedIntervention_toDisplay =
                        last_SpeedPermitted_toDisplay;
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM_IfBlock1 =
                        last_DistanceToTargetVisibilityDigital_toDisplay &
                        (inC->DMI_dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM_IfBlock1) {
                        outC->SpeedIntervention_toDisplay =
                          last_SpeedPermitted_toDisplay;
                      }
                      else {
                        outC->SpeedIntervention_toDisplay = 0.0;
                      }
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      (kcg_real) inC->DMI_dynamic.v_intervention;
                    tmp15 =
                      Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM >
                      vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
                    isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      tmp15 & ((inC->DMI_dynamic.m_warning ==
                          supDis_overspeed_DMI_Types_Pkg) |
                        (inC->DMI_dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->SpeedIntervention_toDisplay =
                        Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4 =
                        tmp15 & (inC->DMI_dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4) {
                        outC->SpeedIntervention_toDisplay =
                          Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                      }
                      else {
                        outC->SpeedIntervention_toDisplay = 0.0;
                      }
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    last_SpeedDigitThree_toDisplay = (kcg_real)
                        inC->DMI_dynamic.v_intervention;
                    tmp14 = last_SpeedDigitThree_toDisplay >
                      vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
                    isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      tmp14 & ((inC->DMI_dynamic.m_warning ==
                          supDis_overspeed_DMI_Types_Pkg) |
                        (inC->DMI_dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->SpeedIntervention_toDisplay =
                        last_SpeedDigitThree_toDisplay;
                    }
                    else {
                      _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                        tmp14 & (inC->DMI_dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (_L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                        outC->SpeedIntervention_toDisplay =
                          last_SpeedDigitThree_toDisplay;
                      }
                      else {
                        outC->SpeedIntervention_toDisplay = 0.0;
                      }
                    }
                    break;
                  case RSM_DMI_Types_Pkg :
                    outC->SpeedIntervention_toDisplay = 0.0;
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->SpeedIntervention_toDisplay =
                      last_SpeedDigitTwo_toDisplay;
                    break;
                  
                }
              }
              else {
                outC->SpeedIntervention_toDisplay = 0.0;
              }
              break;
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->SpeedIntervention_toDisplay = last_SpeedDigitTwo_toDisplay;
              break;
            
          }
          break;
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->SpeedIntervention_toDisplay = last_SpeedDigitTwo_toDisplay;
          break;
        
      }
      break;
    case SSM_st_DeskIsClose_CabinSM :
      outC->SpeedIntervention_toDisplay = last_SpeedDigitTwo_toDisplay;
      break;
    
  }
  if (outC->init6) {
    last_SpeedDigitTwo_toDisplay = 0.0;
    last_DistanceToTargetVisibilityDigital_toDisplay = kcg_false;
    Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
      0.0;
  }
  else {
    last_SpeedDigitTwo_toDisplay = outC->DistanceToTarget_toDisplay;
    last_DistanceToTargetVisibilityDigital_toDisplay =
      outC->DistanceToTargetVisibilityDigital_toDisplay;
    Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
      outC->InterpolatedDistanceToTarget_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->DistanceToTarget_toDisplay = last_SpeedDigitTwo_toDisplay;
      outC->DistanceToTargetVisibilityDigital_toDisplay =
        last_DistanceToTargetVisibilityDigital_toDisplay;
      outC->InterpolatedDistanceToTarget_toDisplay =
        Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      if (CabinSM_reset_act) {
        /* 5 */
        DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
          &outC->_3_Context_5);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->DistanceToTarget_toDisplay = last_SpeedDigitTwo_toDisplay;
          outC->DistanceToTargetVisibilityDigital_toDisplay =
            last_DistanceToTargetVisibilityDigital_toDisplay;
          outC->InterpolatedDistanceToTarget_toDisplay =
            Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 5 */
            DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
              &outC->_3_Context_5);
          }
          if (tmp17) {
            /* 5 */
            DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
              &inC->DMI_dynamic,
              &outC->_3_Context_5);
            tmp15 = outC->_3_Context_5.DistanceToTargetBarVisibility_toDisplay;
            outC->_L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->_3_Context_5.DistanceToTarget_toDisplay;
            outC->_L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->_3_Context_5.DistanceToTargetVisibilityDigital_toDisplay;
            outC->_L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->_3_Context_5.InterpolatedDistanceToTarget_toDisplay;
          }
          else if (outC->init7) {
            outC->_L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
          }
          outC->DistanceToTarget_toDisplay =
            outC->_L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->DistanceToTargetVisibilityDigital_toDisplay =
            outC->_L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->InterpolatedDistanceToTarget_toDisplay =
            outC->_L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          break;
        
      }
      break;
    
  }
  if (outC->init6) {
    tmp14 = kcg_false;
    i = cCOLOR_GREY_DMI_Control_Pkg;
    kcg_copy_array_int_9(
      &last_DriverID_Display_toDisplay,
      (array_int_9 *) &InitText1_DMI_Control_Pkg);
    kcg_copy_array_int_9(
      &last_TrainRN_Display_toDisplay,
      (array_int_9 *) &InitText1_DMI_Control_Pkg);
    last_window_mask_visibility__toDisplay[0] = kcg_false;
    last_window_mask_visibility__toDisplay[1] = kcg_false;
    last_window_mask_visibility__toDisplay[2] = kcg_false;
    last_window_mask_visibility__toDisplay[3] = kcg_false;
    last_window_mask_visibility__toDisplay[4] = kcg_false;
    last_window_mask_visibility__toDisplay[5] = kcg_false;
    last_window_mask_visibility__toDisplay[6] = kcg_false;
    last_window_mask_visibility__toDisplay[7] = kcg_false;
    last_window_mask_visibility__toDisplay[8] = kcg_false;
    last_window_mask_visibility__toDisplay[9] = kcg_false;
    last_window_mask_visibility__toDisplay[10] = kcg_false;
    last_window_mask_visibility__toDisplay[11] = kcg_false;
    last_window_mask_visibility__toDisplay[12] = kcg_false;
    last_window_mask_visibility__toDisplay[13] = kcg_false;
    last_window_mask_visibility__toDisplay[14] = kcg_false;
    last_ArrayButtonsEnabler_toDisplay[0] = 2;
    last_ArrayButtonsEnabler_toDisplay[1] = 2;
    last_ArrayButtonsEnabler_toDisplay[2] = 2;
    last_ArrayButtonsEnabler_toDisplay[3] = 2;
    last_ArrayButtonsEnabler_toDisplay[4] = 2;
    last_ArrayButtonsEnabler_toDisplay[5] = 2;
    last_ArrayButtonsEnabler_toDisplay[6] = 2;
    last_ArrayButtonsEnabler_toDisplay[7] = 2;
    last_ArrayButtonsEnabler_toDisplay[8] = 2;
    last_ArrayButtonsEnabler_toDisplay[9] = 2;
    last_ArrayButtonsEnabler_toDisplay[10] = 0;
    last_ArrayButtonsEnabler_toDisplay[11] = 0;
    last_ArrayButtonsEnabler_toDisplay[12] = 0;
    last_ArrayButtonsEnabler_toDisplay[13] = 0;
    last_ArrayButtonsEnabler_toDisplay[14] = 0;
    last_ArrayButtonsEnabler_toDisplay[15] = 0;
    last_ArrayButtonsEnabler_toDisplay[16] = 0;
    last_ArrayButtonsEnabler_toDisplay[17] = 0;
    last_ArrayButtonsEnabler_toDisplay[18] = 0;
    last_ArrayButtonsEnabler_toDisplay[19] = 0;
    last_ArrayButtonsEnabler_toDisplay[20] = 0;
    last_ArrayButtonsEnabler_toDisplay[21] = 0;
    last_ArrayButtonsEnabler_toDisplay[22] = 0;
    last_ArrayButtonsEnabler_toDisplay[23] = 0;
    last_ArrayButtonsEnabler_toDisplay[24] = 0;
    last_ArrayButtonsEnabler_toDisplay[25] = 0;
    last_ArrayButtonsEnabler_toDisplay[26] = 0;
    last_ArrayButtonsEnabler_toDisplay[27] = 0;
    last_ArrayButtonsEnabler_toDisplay[28] = 0;
    last_ArrayButtonsEnabler_toDisplay[29] = 0;
  }
  else {
    tmp14 = outC->StatusSymbolBrake_toDisplay;
    i = outC->PointerColor_toDisplay;
    kcg_copy_array_int_9(
      &last_DriverID_Display_toDisplay,
      &outC->DriverID_Display_toDisplay);
    kcg_copy_array_int_9(
      &last_TrainRN_Display_toDisplay,
      &outC->TrainRN_Display_toDisplay);
    kcg_copy_array_bool_15(
      &last_window_mask_visibility__toDisplay,
      &outC->window_mask_visibility__toDisplay);
    kcg_copy_array_int_30(
      &last_ArrayButtonsEnabler_toDisplay,
      &outC->ArrayButtonsEnabler_toDisplay);
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->StatusSymbolBrake_toDisplay = tmp14;
      outC->PointerColor_toDisplay = i;
      kcg_copy_array_int_9(
        &outC->DriverID_Display_toDisplay,
        &last_DriverID_Display_toDisplay);
      kcg_copy_array_int_9(
        &outC->TrainRN_Display_toDisplay,
        &last_TrainRN_Display_toDisplay);
      kcg_copy_array_bool_15(
        &outC->window_mask_visibility__toDisplay,
        &last_window_mask_visibility__toDisplay);
      outC->StatusSymbolVisibility_toDisplay = kcg_false;
      outC->DMI_identifier.valid = kcg_false;
      outC->DMI_identifier.systemTime = 0;
      outC->DMI_identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
      outC->DMI_identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
      outC->DMI_identifier.l_name = 0;
      outC->DMI_identifier.DMI_name[0] = ' ';
      outC->DMI_identifier.DMI_name[1] = ' ';
      outC->DMI_identifier.DMI_name[2] = ' ';
      outC->DMI_identifier.DMI_name[3] = ' ';
      outC->DMI_identifier.DMI_name[4] = ' ';
      outC->DMI_identifier.DMI_name[5] = ' ';
      outC->DMI_identifier.DMI_name[6] = ' ';
      outC->DMI_identifier.DMI_name[7] = ' ';
      outC->DMI_identifier.DMI_name[8] = ' ';
      outC->DMI_identifier.DMI_name[9] = ' ';
      outC->DMI_identifier.DMI_name[10] = ' ';
      outC->DMI_identifier.DMI_name[11] = ' ';
      outC->DMI_identifier.DMI_name[12] = ' ';
      outC->DMI_identifier.DMI_name[13] = ' ';
      outC->DMI_identifier.DMI_name[14] = ' ';
      outC->DMI_identifier.DMI_name[15] = ' ';
      outC->DMI_identifier.DMI_name[16] = ' ';
      outC->DMI_identifier.DMI_name[17] = ' ';
      outC->DMI_identifier.DMI_name[18] = ' ';
      outC->DMI_identifier.DMI_name[19] = ' ';
      outC->DMI_identifier.DMI_name[20] = ' ';
      outC->DMI_identifier.DMI_name[21] = ' ';
      outC->DMI_identifier.DMI_name[22] = ' ';
      outC->DMI_identifier.DMI_name[23] = ' ';
      outC->DMI_identifier.DMI_name[24] = ' ';
      outC->DMI_identifier.DMI_name[25] = ' ';
      outC->DMI_identifier.DMI_name[26] = ' ';
      outC->DMI_identifier.DMI_name[27] = ' ';
      outC->DMI_identifier.DMI_name[28] = ' ';
      outC->DMI_identifier.DMI_name[29] = ' ';
      outC->DMI_identifier.DMI_name[30] = ' ';
      outC->DMI_identifier.DMI_name[31] = ' ';
      outC->DMI_identifier.DMI_name[32] = ' ';
      outC->DMI_identifier.DMI_name[33] = ' ';
      outC->DMI_identifier.DMI_name[34] = ' ';
      outC->DMI_identifier.DMI_name[35] = ' ';
      outC->DMI_identifier.DMI_name[36] = ' ';
      outC->DMI_identifier.DMI_name[37] = ' ';
      outC->DMI_identifier.DMI_name[38] = ' ';
      outC->DMI_identifier.DMI_name[39] = ' ';
      outC->DMI_identifier.DMI_name[40] = ' ';
      outC->DMI_identifier.DMI_name[41] = ' ';
      outC->DMI_identifier.DMI_name[42] = ' ';
      outC->DMI_identifier.DMI_name[43] = ' ';
      outC->DMI_identifier.DMI_name[44] = ' ';
      outC->DMI_identifier.DMI_name[45] = ' ';
      outC->DMI_identifier.DMI_name[46] = ' ';
      outC->DMI_identifier.DMI_name[47] = ' ';
      outC->DMI_identifier.DMI_name[48] = ' ';
      outC->DMI_identifier.DMI_name[49] = ' ';
      outC->DMI_identifier.DMI_name[50] = ' ';
      outC->DMI_identifier.DMI_name[51] = ' ';
      outC->DMI_identifier.DMI_name[52] = ' ';
      outC->DMI_identifier.DMI_name[53] = ' ';
      outC->DMI_identifier.DMI_name[54] = ' ';
      outC->DMI_identifier.DMI_name[55] = ' ';
      outC->DMI_identifier.DMI_name[56] = ' ';
      outC->DMI_identifier.DMI_name[57] = ' ';
      outC->DMI_identifier.DMI_name[58] = ' ';
      outC->DMI_identifier.DMI_name[59] = ' ';
      outC->DMI_identifier.DMI_name[60] = ' ';
      outC->DMI_identifier.DMI_name[61] = ' ';
      outC->DMI_identifier.DMI_name[62] = ' ';
      outC->DMI_identifier.DMI_name[63] = ' ';
      outC->DMI_identifier.DMI_name[64] = ' ';
      outC->DMI_identifier.DMI_name[65] = ' ';
      outC->DMI_identifier.DMI_name[66] = ' ';
      outC->DMI_identifier.DMI_name[67] = ' ';
      outC->DMI_identifier.DMI_name[68] = ' ';
      outC->DMI_identifier.DMI_name[69] = ' ';
      outC->DMI_identifier.DMI_name[70] = ' ';
      outC->DMI_identifier.DMI_name[71] = ' ';
      outC->DMI_identifier.DMI_name[72] = ' ';
      outC->DMI_identifier.DMI_name[73] = ' ';
      outC->DMI_identifier.DMI_name[74] = ' ';
      outC->DMI_identifier.DMI_name[75] = ' ';
      outC->DMI_identifier.DMI_name[76] = ' ';
      outC->DMI_identifier.DMI_name[77] = ' ';
      outC->DMI_identifier.DMI_name[78] = ' ';
      outC->DMI_identifier.DMI_name[79] = ' ';
      outC->DMI_identifier.DMI_name[80] = ' ';
      outC->DMI_identifier.DMI_name[81] = ' ';
      outC->DMI_identifier.DMI_name[82] = ' ';
      outC->DMI_identifier.DMI_name[83] = ' ';
      outC->DMI_identifier.DMI_name[84] = ' ';
      outC->DMI_identifier.DMI_name[85] = ' ';
      outC->DMI_identifier.DMI_name[86] = ' ';
      outC->DMI_identifier.DMI_name[87] = ' ';
      outC->DMI_identifier.DMI_name[88] = ' ';
      outC->DMI_identifier.DMI_name[89] = ' ';
      outC->DMI_identifier.DMI_name[90] = ' ';
      outC->DMI_identifier.DMI_name[91] = ' ';
      outC->DMI_identifier.DMI_name[92] = ' ';
      outC->DMI_identifier.DMI_name[93] = ' ';
      outC->DMI_identifier.DMI_name[94] = ' ';
      outC->DMI_identifier.DMI_name[95] = ' ';
      outC->DMI_identifier.DMI_name[96] = ' ';
      outC->DMI_identifier.DMI_name[97] = ' ';
      outC->DMI_identifier.DMI_name[98] = ' ';
      outC->DMI_identifier.DMI_name[99] = ' ';
      outC->DMI_identifier.DMI_name[100] = ' ';
      outC->DMI_identifier.DMI_name[101] = ' ';
      outC->DMI_identifier.DMI_name[102] = ' ';
      outC->DMI_identifier.DMI_name[103] = ' ';
      outC->DMI_identifier.DMI_name[104] = ' ';
      outC->DMI_identifier.DMI_name[105] = ' ';
      outC->DMI_identifier.DMI_name[106] = ' ';
      outC->DMI_identifier.DMI_name[107] = ' ';
      outC->DMI_identifier.DMI_name[108] = ' ';
      outC->DMI_identifier.DMI_name[109] = ' ';
      outC->DMI_identifier.DMI_name[110] = ' ';
      outC->DMI_identifier.DMI_name[111] = ' ';
      outC->DMI_identifier.DMI_name[112] = ' ';
      outC->DMI_identifier.DMI_name[113] = ' ';
      outC->DMI_identifier.DMI_name[114] = ' ';
      outC->DMI_identifier.DMI_name[115] = ' ';
      outC->DMI_identifier.DMI_name[116] = ' ';
      outC->DMI_identifier.DMI_name[117] = ' ';
      outC->DMI_identifier.DMI_name[118] = ' ';
      outC->DMI_identifier.DMI_name[119] = ' ';
      outC->DMI_identifier.DMI_name[120] = ' ';
      outC->DMI_identifier.DMI_name[121] = ' ';
      outC->DMI_identifier.DMI_name[122] = ' ';
      outC->DMI_identifier.DMI_name[123] = ' ';
      outC->DMI_identifier.DMI_name[124] = ' ';
      outC->DMI_identifier.DMI_name[125] = ' ';
      outC->DMI_identifier.DMI_name[126] = ' ';
      outC->DMI_identifier.DMI_name[127] = ' ';
      outC->DMI_identifier.DMI_name[128] = ' ';
      outC->DMI_identifier.DMI_name[129] = ' ';
      outC->DMI_identifier.DMI_name[130] = ' ';
      outC->DMI_identifier.DMI_name[131] = ' ';
      outC->DMI_identifier.DMI_name[132] = ' ';
      outC->DMI_identifier.DMI_name[133] = ' ';
      outC->DMI_identifier.DMI_name[134] = ' ';
      outC->DMI_identifier.DMI_name[135] = ' ';
      outC->DMI_identifier.DMI_name[136] = ' ';
      outC->DMI_identifier.DMI_name[137] = ' ';
      outC->DMI_identifier.DMI_name[138] = ' ';
      outC->DMI_identifier.DMI_name[139] = ' ';
      outC->DMI_identifier.DMI_name[140] = ' ';
      outC->DMI_identifier.DMI_name[141] = ' ';
      outC->DMI_identifier.DMI_name[142] = ' ';
      outC->DMI_identifier.DMI_name[143] = ' ';
      outC->DMI_identifier.DMI_name[144] = ' ';
      outC->DMI_identifier.DMI_name[145] = ' ';
      outC->DMI_identifier.DMI_name[146] = ' ';
      outC->DMI_identifier.DMI_name[147] = ' ';
      outC->DMI_identifier.DMI_name[148] = ' ';
      outC->DMI_identifier.DMI_name[149] = ' ';
      outC->DMI_identifier.DMI_name[150] = ' ';
      outC->DMI_identifier.DMI_name[151] = ' ';
      outC->DMI_identifier.DMI_name[152] = ' ';
      outC->DMI_identifier.DMI_name[153] = ' ';
      outC->DMI_identifier.DMI_name[154] = ' ';
      outC->DMI_identifier.DMI_name[155] = ' ';
      outC->DMI_identifier.DMI_name[156] = ' ';
      outC->DMI_identifier.DMI_name[157] = ' ';
      outC->DMI_identifier.DMI_name[158] = ' ';
      outC->DMI_identifier.DMI_name[159] = ' ';
      outC->DMI_identifier.DMI_name[160] = ' ';
      outC->DMI_identifier.DMI_name[161] = ' ';
      outC->DMI_identifier.DMI_name[162] = ' ';
      outC->DMI_identifier.DMI_name[163] = ' ';
      outC->DMI_identifier.DMI_name[164] = ' ';
      outC->DMI_identifier.DMI_name[165] = ' ';
      outC->DMI_identifier.DMI_name[166] = ' ';
      outC->DMI_identifier.DMI_name[167] = ' ';
      outC->DMI_identifier.DMI_name[168] = ' ';
      outC->DMI_identifier.DMI_name[169] = ' ';
      outC->DMI_identifier.DMI_name[170] = ' ';
      outC->DMI_identifier.DMI_name[171] = ' ';
      outC->DMI_identifier.DMI_name[172] = ' ';
      outC->DMI_identifier.DMI_name[173] = ' ';
      outC->DMI_identifier.DMI_name[174] = ' ';
      outC->DMI_identifier.DMI_name[175] = ' ';
      outC->DMI_identifier.DMI_name[176] = ' ';
      outC->DMI_identifier.DMI_name[177] = ' ';
      outC->DMI_identifier.DMI_name[178] = ' ';
      outC->DMI_identifier.DMI_name[179] = ' ';
      outC->DMI_identifier.DMI_name[180] = ' ';
      outC->DMI_identifier.DMI_name[181] = ' ';
      outC->DMI_identifier.DMI_name[182] = ' ';
      outC->DMI_identifier.DMI_name[183] = ' ';
      outC->DMI_identifier.DMI_name[184] = ' ';
      outC->DMI_identifier.DMI_name[185] = ' ';
      outC->DMI_identifier.DMI_name[186] = ' ';
      outC->DMI_identifier.DMI_name[187] = ' ';
      outC->DMI_identifier.DMI_name[188] = ' ';
      outC->DMI_identifier.DMI_name[189] = ' ';
      outC->DMI_identifier.DMI_name[190] = ' ';
      outC->DMI_identifier.DMI_name[191] = ' ';
      outC->DMI_identifier.DMI_name[192] = ' ';
      outC->DMI_identifier.DMI_name[193] = ' ';
      outC->DMI_identifier.DMI_name[194] = ' ';
      outC->DMI_identifier.DMI_name[195] = ' ';
      outC->DMI_identifier.DMI_name[196] = ' ';
      outC->DMI_identifier.DMI_name[197] = ' ';
      outC->DMI_identifier.DMI_name[198] = ' ';
      outC->DMI_identifier.DMI_name[199] = ' ';
      outC->DMI_identifier.DMI_name[200] = ' ';
      outC->DMI_identifier.DMI_name[201] = ' ';
      outC->DMI_identifier.DMI_name[202] = ' ';
      outC->DMI_identifier.DMI_name[203] = ' ';
      outC->DMI_identifier.DMI_name[204] = ' ';
      outC->DMI_identifier.DMI_name[205] = ' ';
      outC->DMI_identifier.DMI_name[206] = ' ';
      outC->DMI_identifier.DMI_name[207] = ' ';
      outC->DMI_identifier.DMI_name[208] = ' ';
      outC->DMI_identifier.DMI_name[209] = ' ';
      outC->DMI_identifier.DMI_name[210] = ' ';
      outC->DMI_identifier.DMI_name[211] = ' ';
      outC->DMI_identifier.DMI_name[212] = ' ';
      outC->DMI_identifier.DMI_name[213] = ' ';
      outC->DMI_identifier.DMI_name[214] = ' ';
      outC->DMI_identifier.DMI_name[215] = ' ';
      outC->DMI_identifier.DMI_name[216] = ' ';
      outC->DMI_identifier.DMI_name[217] = ' ';
      outC->DMI_identifier.DMI_name[218] = ' ';
      outC->DMI_identifier.DMI_name[219] = ' ';
      outC->DMI_identifier.DMI_name[220] = ' ';
      outC->DMI_identifier.DMI_name[221] = ' ';
      outC->DMI_identifier.DMI_name[222] = ' ';
      outC->DMI_identifier.DMI_name[223] = ' ';
      outC->DMI_identifier.DMI_name[224] = ' ';
      outC->DMI_identifier.DMI_name[225] = ' ';
      outC->DMI_identifier.DMI_name[226] = ' ';
      outC->DMI_identifier.DMI_name[227] = ' ';
      outC->DMI_identifier.DMI_name[228] = ' ';
      outC->DMI_identifier.DMI_name[229] = ' ';
      outC->DMI_identifier.DMI_name[230] = ' ';
      outC->DMI_identifier.DMI_name[231] = ' ';
      outC->DMI_identifier.DMI_name[232] = ' ';
      outC->DMI_identifier.DMI_name[233] = ' ';
      outC->DMI_identifier.DMI_name[234] = ' ';
      outC->DMI_identifier.DMI_name[235] = ' ';
      outC->DMI_identifier.DMI_name[236] = ' ';
      outC->DMI_identifier.DMI_name[237] = ' ';
      outC->DMI_identifier.DMI_name[238] = ' ';
      outC->DMI_identifier.DMI_name[239] = ' ';
      outC->DMI_identifier.DMI_name[240] = ' ';
      outC->DMI_identifier.DMI_name[241] = ' ';
      outC->DMI_identifier.DMI_name[242] = ' ';
      outC->DMI_identifier.DMI_name[243] = ' ';
      outC->DMI_identifier.DMI_name[244] = ' ';
      outC->DMI_identifier.DMI_name[245] = ' ';
      outC->DMI_identifier.DMI_name[246] = ' ';
      outC->DMI_identifier.DMI_name[247] = ' ';
      outC->DMI_identifier.DMI_name[248] = ' ';
      outC->DMI_identifier.DMI_name[249] = ' ';
      outC->DMI_identifier.DMI_name[250] = ' ';
      outC->DMI_identifier.DMI_name[251] = ' ';
      outC->DMI_identifier.DMI_name[252] = ' ';
      outC->DMI_identifier.DMI_name[253] = ' ';
      outC->DMI_identifier.DMI_name[254] = ' ';
      outC->DMI_identifier.M_VERSION =
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
      kcg_copy_array_int_30(
        &outC->ArrayButtonsEnabler_toDisplay,
        &last_ArrayButtonsEnabler_toDisplay);
      kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
        &outC->DMI_driver_identifier,
        &default_DMI_driver_identifier);
      kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
        &outC->DMI_train_running_number_id,
        &default_DMI_train_running_number_id);
      outC->CloseButtonEnabler_toDisplay = 26;
      outC->RBC_status_symbol_toDisplay = 4;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->StatusSymbolBrake_toDisplay = tmp14;
          outC->PointerColor_toDisplay = i;
          kcg_copy_array_int_9(
            &outC->DriverID_Display_toDisplay,
            &last_DriverID_Display_toDisplay);
          kcg_copy_array_int_9(
            &outC->TrainRN_Display_toDisplay,
            &last_TrainRN_Display_toDisplay);
          kcg_copy_array_bool_15(
            &outC->window_mask_visibility__toDisplay,
            &last_window_mask_visibility__toDisplay);
          kcg_copy_array_int_30(
            &outC->ArrayButtonsEnabler_toDisplay,
            &last_ArrayButtonsEnabler_toDisplay);
          outC->StatusSymbolVisibility_toDisplay = kcg_false;
          kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
            &outC->DMI_driver_identifier,
            &default_DMI_driver_identifier);
          kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
            &outC->DMI_train_running_number_id,
            &default_DMI_train_running_number_id);
          outC->CloseButtonEnabler_toDisplay = 26;
          outC->RBC_status_symbol_toDisplay = 4;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (outC->init7) {
            IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
            SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
            last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              C_DMI_Types_Pkg;
          }
          else {
            IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                kcg_false;
              break;
            case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                kcg_true;
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                kcg_false;
              break;
            case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                kcg_true;
              break;
            
          }
          switch (IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              if (inC->DMI_icons.valid) {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              else {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              if (inC->DMI_icons.valid |
                else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              else {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              break;
            
          }
          switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_area_group;
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_area_group;
              break;
            
          }
          if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
            NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
              case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                last_vtarget_permColor_toDisplay =
                  cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_area_rank;
                tmp12 = cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_icon_group;
                tmp3 = cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_icon_rank;
                break;
              case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                last_vtarget_permColor_toDisplay = 0;
                tmp12 = status_symbols_DMI_Types_Pkg;
                tmp3 = 0;
                break;
              case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                last_vtarget_permColor_toDisplay =
                  cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_area_rank;
                tmp12 =
                  cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_icon_group;
                tmp3 =
                  cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_icon_rank;
                break;
              case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                last_vtarget_permColor_toDisplay = 0;
                tmp12 = status_symbols_DMI_Types_Pkg;
                tmp3 = 0;
                break;
              
            }
          }
          else {
            NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              inC->DMI_icons.DMI_nid_area_group;
            last_vtarget_permColor_toDisplay = inC->DMI_icons.DMI_nid_area_rank;
            tmp12 = inC->DMI_icons.DMI_nid_icon_group;
            tmp3 = inC->DMI_icons.DMI_nid_icon_rank;
          }
          switch (tmp12) {
            case level_symbol_DMI_Types_Pkg :
              last_Vinterv_Color_toDisplay =
                cLevelSymbol_IconGroup_DMI_Control_Pkg;
              break;
            case mode_symbols_DMI_Types_Pkg :
              last_Vinterv_Color_toDisplay =
                cModeSymbol_IconGroup_DMI_Control_Pkg;
              break;
            case status_symbols_DMI_Types_Pkg :
              last_Vinterv_Color_toDisplay =
                cStatusSymbol_IconGroup_DMI_Control_Pkg;
              break;
            case order_an_announcements_symbols_DMI_Types_Pkg :
              last_Vinterv_Color_toDisplay = 0;
              break;
            case planning_information_symbols_DMI_Types_Pkg :
              last_Vinterv_Color_toDisplay = 0;
              break;
            case navigation_symbols_DMI_Types_Pkg :
              last_Vinterv_Color_toDisplay = 0;
              break;
            
            default :
              last_Vinterv_Color_toDisplay = 0;
          }
          switch (IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->StatusSymbolBrake_toDisplay = tmp14;
              break;
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                  case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid =
                      clear_area_DMI_Types_Pkg;
                    break;
                  case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid =
                      cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_m_icon_control_flag;
                    break;
                  case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid =
                      clear_area_DMI_Types_Pkg;
                    break;
                  case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid =
                      cClearC1AreaSymbol_DMI_Control_Pkg.DMI_m_icon_control_flag;
                    break;
                  
                }
              }
              else {
                IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid =
                  inC->DMI_icons.DMI_m_icon_control_flag;
              }
              switch (IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid) {
                case show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg :
                  AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area =
                    NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  switch (AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area) {
                    case A_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case B_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case C_DMI_Types_Pkg :
                      AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C =
                        last_vtarget_permColor_toDisplay == 9;
                      if (AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C) {
                        tmp1 = (last_Vinterv_Color_toDisplay ==
                            cStatusSymbol_IconGroup_DMI_Control_Pkg) & (tmp3 ==
                            cSTATUS_Emergency_brake_DMI_Control_Pkg);
                        if (tmp1) {
                          outC->StatusSymbolBrake_toDisplay = kcg_true;
                        }
                        else {
                          outC->StatusSymbolBrake_toDisplay = tmp14;
                        }
                      }
                      else {
                        outC->StatusSymbolBrake_toDisplay = tmp14;
                      }
                      break;
                    case D_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case H_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    
                  }
                  break;
                case show_icon_flashing_in_area_DMI_Types_Pkg :
                  outC->StatusSymbolBrake_toDisplay = tmp14;
                  break;
                case clear_area_DMI_Types_Pkg :
                  WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area =
                    NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area) {
                    case A_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case B_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case C_DMI_Types_Pkg :
                      IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C =
                        last_vtarget_permColor_toDisplay == 9;
                      if (IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C) {
                        outC->StatusSymbolBrake_toDisplay =
                          !((last_Vinterv_Color_toDisplay == 3) & (tmp3 ==
                              cSTATUS_Emergency_brake_DMI_Control_Pkg));
                      }
                      else {
                        outC->StatusSymbolBrake_toDisplay = tmp14;
                      }
                      break;
                    case D_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case H_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    
                  }
                  break;
                case show_icon_in_area_DMI_Types_Pkg :
                  WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area =
                    NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area) {
                    case H_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case C_DMI_Types_Pkg :
                      last_DistanceToTargetVisibilityDigital_toDisplay =
                        last_vtarget_permColor_toDisplay == 9;
                      if (last_DistanceToTargetVisibilityDigital_toDisplay) {
                        outC->StatusSymbolBrake_toDisplay =
                          (last_Vinterv_Color_toDisplay == 3) & (tmp3 ==
                            cSTATUS_Emergency_brake_DMI_Control_Pkg);
                      }
                      else {
                        outC->StatusSymbolBrake_toDisplay = tmp14;
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay = tmp14;
                      break;
                    
                  }
                  break;
                
              }
              break;
            
          }
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                (inC->DMI_dynamic.mode == M_MODE_Full_Supervision) |
                (inC->DMI_dynamic.mode == M_MODE_Limited_Supervision) |
                (inC->DMI_dynamic.mode == M_MODE_On_Sight);
              if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                switch (inC->DMI_dynamic.sup_status) {
                  case CSM_DMI_Types_Pkg :
                    tmp11 = last_TrainSpeed_toDisplay > (kcg_real)
                        inC->DMI_dynamic.v_permitted;
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                      tmp11 & ((supDis_overspeed_DMI_Types_Pkg ==
                          inC->DMI_dynamic.m_warning) |
                        (inC->DMI_dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else {
                      _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                        tmp11 & (inC->DMI_dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                        outC->PointerColor_toDisplay =
                          cCOLOR_RED_DMI_Control_Pkg;
                      }
                      else {
                        outC->PointerColor_toDisplay =
                          cCOLOR_GREY_DMI_Control_Pkg;
                      }
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM =
                      (kcg_real) inC->DMI_dynamic.v_permitted;
                    tmp9 = last_TrainSpeed_toDisplay >
                      vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
                    tmp10 = tmp9 & ((supDis_overspeed_DMI_Types_Pkg ==
                          inC->DMI_dynamic.m_warning) |
                        (inC->DMI_dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (tmp10) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboardController =
                        tmp9 & (inC->DMI_dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboardController) {
                        outC->PointerColor_toDisplay =
                          cCOLOR_RED_DMI_Control_Pkg;
                      }
                      else {
                        else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController =
                          (last_TrainSpeed_toDisplay >= (kcg_real)
                              inC->DMI_dynamic.v_target) &
                          (last_TrainSpeed_toDisplay <=
                            vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM) &
                          ((supDis_normal_DMI_Types_Pkg ==
                              inC->DMI_dynamic.m_warning) |
                            (inC->DMI_dynamic.m_warning ==
                              supDis_intervention_DMI_Types_Pkg));
                        if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController) {
                          outC->PointerColor_toDisplay =
                            ccOLOR_WHITE_DMI_Control_Pkg;
                        }
                        else {
                          outC->PointerColor_toDisplay =
                            cCOLOR_GREY_DMI_Control_Pkg;
                        }
                      }
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                      (kcg_real) inC->DMI_dynamic.v_permitted;
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                      last_TrainSpeed_toDisplay >
                      vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
                    tmp8 =
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN &
                      ((supDis_overspeed_DMI_Types_Pkg ==
                          inC->DMI_dynamic.m_warning) |
                        (inC->DMI_dynamic.m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    tmp7 = (last_TrainSpeed_toDisplay >= (kcg_real)
                          inC->DMI_dynamic.v_target) &
                      (last_TrainSpeed_toDisplay <=
                        vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM);
                    if (tmp8) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else {
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN &
                        (inC->DMI_dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
                        outC->PointerColor_toDisplay =
                          cCOLOR_RED_DMI_Control_Pkg;
                      }
                      else {
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                          tmp7 & (supDis_normal_DMI_Types_Pkg ==
                            inC->DMI_dynamic.m_warning);
                        if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
                          outC->PointerColor_toDisplay =
                            ccOLOR_WHITE_DMI_Control_Pkg;
                        }
                        else {
                          _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                            tmp7 & ((inC->DMI_dynamic.m_warning ==
                                supDis_indication_DMI_Types_Pkg) |
                              (inC->DMI_dynamic.m_warning ==
                                supDis_intervention_DMI_Types_Pkg));
                          if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                            outC->PointerColor_toDisplay =
                              cCOLOR_YELLOW_DMI_Control_Pkg;
                          }
                          else {
                            outC->PointerColor_toDisplay =
                              cCOLOR_GREY_DMI_Control_Pkg;
                          }
                        }
                      }
                    }
                    break;
                  case RSM_DMI_Types_Pkg :
                    last_SpeedPermitted_toDisplay = (kcg_real)
                        inC->DMI_dynamic.v_release;
                    if (last_SpeedPermitted_toDisplay != - 1.0) {
                      _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                        (last_TrainSpeed_toDisplay >= 0.0) &
                        (last_TrainSpeed_toDisplay <=
                          last_SpeedPermitted_toDisplay) &
                        ((inC->DMI_dynamic.m_warning ==
                            supDis_indication_DMI_Types_Pkg) |
                          (inC->DMI_dynamic.m_warning ==
                            supDis_intervention_DMI_Types_Pkg));
                    }
                    else {
                      _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                        kcg_false;
                    }
                    if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                    }
                    else {
                      _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                        (last_TrainSpeed_toDisplay > (kcg_real)
                            inC->DMI_dynamic.v_permitted) &
                        (inC->DMI_dynamic.m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                        outC->PointerColor_toDisplay =
                          cCOLOR_RED_DMI_Control_Pkg;
                      }
                      else {
                        outC->PointerColor_toDisplay =
                          cCOLOR_GREY_DMI_Control_Pkg;
                      }
                    }
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = i;
                    break;
                  
                }
              }
              else {
                br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                  (inC->DMI_dynamic.mode == M_MODE_Staff_Responsible) |
                  (inC->DMI_dynamic.mode == M_MODE_Unfitted);
                if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                  switch (inC->DMI_dynamic.sup_status) {
                    case CSM_DMI_Types_Pkg :
                      br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                        last_TrainSpeed_toDisplay > (kcg_real)
                          inC->DMI_dynamic.v_permitted;
                      br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                        br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu &
                        ((supDis_overspeed_DMI_Types_Pkg ==
                            inC->DMI_dynamic.m_warning) |
                          (inC->DMI_dynamic.m_warning ==
                            supDis_warning_DMI_Types_Pkg));
                      if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        outC->PointerColor_toDisplay =
                          cCOLOR_ORANGE_DMI_Control_Pkg;
                      }
                      else {
                        br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                          br_5_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu &
                          (inC->DMI_dynamic.m_warning ==
                            supDis_intervention_DMI_Types_Pkg);
                        if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                          outC->PointerColor_toDisplay =
                            cCOLOR_RED_DMI_Control_Pkg;
                        }
                        else {
                          outC->PointerColor_toDisplay =
                            cCOLOR_GREY_DMI_Control_Pkg;
                        }
                      }
                      break;
                    case PIM_DMI_Types_Pkg :
                      last_SpeedDigitTwo_toDisplay = (kcg_real)
                          inC->DMI_dynamic.v_permitted;
                      last_ModeSymbolVisibility_toDisplay =
                        last_TrainSpeed_toDisplay >=
                        last_SpeedDigitTwo_toDisplay;
                      tmp6 = last_ModeSymbolVisibility_toDisplay &
                        ((supDis_overspeed_DMI_Types_Pkg ==
                            inC->DMI_dynamic.m_warning) |
                          (inC->DMI_dynamic.m_warning ==
                            supDis_warning_DMI_Types_Pkg));
                      if (tmp6) {
                        outC->PointerColor_toDisplay =
                          cCOLOR_ORANGE_DMI_Control_Pkg;
                      }
                      else {
                        br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                          last_ModeSymbolVisibility_toDisplay &
                          (inC->DMI_dynamic.m_warning ==
                            supDis_intervention_DMI_Types_Pkg);
                        if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                          outC->PointerColor_toDisplay =
                            cCOLOR_RED_DMI_Control_Pkg;
                        }
                        else {
                          br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                            (last_TrainSpeed_toDisplay >= (kcg_real)
                                inC->DMI_dynamic.v_target) &
                            (last_TrainSpeed_toDisplay <=
                              last_SpeedDigitTwo_toDisplay) &
                            ((supDis_normal_DMI_Types_Pkg ==
                                inC->DMI_dynamic.m_warning) |
                              (inC->DMI_dynamic.m_warning ==
                                supDis_intervention_DMI_Types_Pkg));
                          if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                            outC->PointerColor_toDisplay =
                              ccOLOR_WHITE_DMI_Control_Pkg;
                          }
                          else {
                            outC->PointerColor_toDisplay =
                              cCOLOR_GREY_DMI_Control_Pkg;
                          }
                        }
                      }
                      break;
                    case TSM_DMI_Types_Pkg :
                      _18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                        (kcg_real) inC->DMI_dynamic.v_permitted;
                      br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                        last_TrainSpeed_toDisplay >=
                        _18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
                      tmp13 =
                        br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled &
                        ((supDis_overspeed_DMI_Types_Pkg ==
                            inC->DMI_dynamic.m_warning) |
                          (inC->DMI_dynamic.m_warning ==
                            supDis_warning_DMI_Types_Pkg));
                      last_DistanceToTargetBarVisibility_toDisplay =
                        (last_TrainSpeed_toDisplay >= (kcg_real)
                            inC->DMI_dynamic.v_target) &
                        (last_TrainSpeed_toDisplay <=
                          _18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM);
                      if (tmp13) {
                        outC->PointerColor_toDisplay =
                          cCOLOR_ORANGE_DMI_Control_Pkg;
                      }
                      else {
                        br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                          br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled &
                          (inC->DMI_dynamic.m_warning ==
                            supDis_intervention_DMI_Types_Pkg);
                        if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                          outC->PointerColor_toDisplay =
                            cCOLOR_RED_DMI_Control_Pkg;
                        }
                        else {
                          br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                            last_DistanceToTargetBarVisibility_toDisplay &
                            (supDis_normal_DMI_Types_Pkg ==
                              inC->DMI_dynamic.m_warning);
                          if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                            outC->PointerColor_toDisplay =
                              ccOLOR_WHITE_DMI_Control_Pkg;
                          }
                          else {
                            br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                              last_DistanceToTargetBarVisibility_toDisplay &
                              ((inC->DMI_dynamic.m_warning ==
                                  supDis_indication_DMI_Types_Pkg) |
                                (inC->DMI_dynamic.m_warning ==
                                  supDis_intervention_DMI_Types_Pkg));
                            if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                              outC->PointerColor_toDisplay =
                                cCOLOR_YELLOW_DMI_Control_Pkg;
                            }
                            else {
                              outC->PointerColor_toDisplay =
                                cCOLOR_GREY_DMI_Control_Pkg;
                            }
                          }
                        }
                      }
                      break;
                    case RSM_DMI_Types_Pkg :
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                      break;
                    case supervision_status_unknown_DMI_Types_Pkg :
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                      break;
                    
                  }
                }
                else {
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow =
                    (inC->DMI_dynamic.mode == M_MODE_Shunting) |
                    (inC->DMI_dynamic.mode == M_MODE_Reversing);
                  if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow) {
                    switch (inC->DMI_dynamic.sup_status) {
                      case CSM_DMI_Types_Pkg :
                        br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                          last_TrainSpeed_toDisplay > (kcg_real)
                            inC->DMI_dynamic.v_permitted;
                        br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                          br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu &
                          ((supDis_overspeed_DMI_Types_Pkg ==
                              inC->DMI_dynamic.m_warning) |
                            (inC->DMI_dynamic.m_warning ==
                              supDis_warning_DMI_Types_Pkg));
                        if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                          outC->PointerColor_toDisplay =
                            cCOLOR_ORANGE_DMI_Control_Pkg;
                        }
                        else {
                          br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow =
                            br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu &
                            (inC->DMI_dynamic.m_warning ==
                              supDis_intervention_DMI_Types_Pkg);
                          if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow) {
                            outC->PointerColor_toDisplay =
                              cCOLOR_RED_DMI_Control_Pkg;
                          }
                          else {
                            outC->PointerColor_toDisplay =
                              cCOLOR_GREY_DMI_Control_Pkg;
                          }
                        }
                        break;
                      case PIM_DMI_Types_Pkg :
                        outC->PointerColor_toDisplay =
                          cCOLOR_GREY_DMI_Control_Pkg;
                        break;
                      case TSM_DMI_Types_Pkg :
                        outC->PointerColor_toDisplay =
                          cCOLOR_GREY_DMI_Control_Pkg;
                        break;
                      case RSM_DMI_Types_Pkg :
                        outC->PointerColor_toDisplay =
                          cCOLOR_GREY_DMI_Control_Pkg;
                        break;
                      case supervision_status_unknown_DMI_Types_Pkg :
                        outC->PointerColor_toDisplay =
                          cCOLOR_GREY_DMI_Control_Pkg;
                        break;
                      
                    }
                  }
                  else {
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                      (inC->DMI_dynamic.mode == M_MODE_Non_Leading) |
                      (inC->DMI_dynamic.mode == M_MODE_Stand_By) |
                      (inC->DMI_dynamic.mode == M_MODE_Post_Trip);
                    if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    else {
                      tmp14 = (inC->DMI_dynamic.mode == M_MODE_Trip) & tmp17;
                      if (tmp14) {
                        br_5_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                          ((last_TrainSpeed_toDisplay > (kcg_real)
                                inC->DMI_dynamic.v_permitted) &
                            ((inC->DMI_dynamic.sup_status ==
                                CSM_DMI_Types_Pkg) |
                              (inC->DMI_dynamic.sup_status ==
                                TSM_DMI_Types_Pkg) |
                              (inC->DMI_dynamic.sup_status ==
                                PIM_DMI_Types_Pkg))) |
                          ((inC->DMI_dynamic.sup_status == RSM_DMI_Types_Pkg) &
                            (last_TrainSpeed_toDisplay > (kcg_real)
                                inC->DMI_dynamic.v_release));
                        if (br_5_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                          outC->PointerColor_toDisplay =
                            cCOLOR_RED_DMI_Control_Pkg;
                        }
                        else {
                          outC->PointerColor_toDisplay =
                            cCOLOR_GREY_DMI_Control_Pkg;
                        }
                      }
                      else {
                        outC->PointerColor_toDisplay =
                          cCOLOR_GREY_DMI_Control_Pkg;
                      }
                    }
                  }
                }
              }
              break;
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->PointerColor_toDisplay = i;
              break;
            
          }
          if (inC->DMI_menu_request.valid) {
            /* 7 */
            DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest(
              &inC->DMI_menu_request,
              &outC->_L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init7) {
            kcg_copy_array_int_30(
              &outC->_L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_int_30 *) &AllMenuButtonsDisabled_DMI_Control_Pkg);
          }
          kcg_copy_array_int_30(
            &outC->ArrayButtonsEnabler_toDisplay,
            &outC->_L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_array_int_9(
                &outC->DriverID_Display_toDisplay,
                &last_DriverID_Display_toDisplay);
              kcg_copy_array_int_9(
                &outC->TrainRN_Display_toDisplay,
                &last_TrainRN_Display_toDisplay);
              kcg_copy_array_bool_15(
                &outC->window_mask_visibility__toDisplay,
                (array_bool_15 *) &cETCS_Level_Menu_mask_DMI_Control_Pkg);
              tmp9 = kcg_false;
              tmp7 = kcg_false;
              outC->CloseButtonEnabler_toDisplay = 26;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow =
                    inC->closeButton_fromDisplay & inC->MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow =
                    inC->InputFieldAck_fromDisplay & inC->MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  tmp9 = kcg_false;
                  tmp7 = kcg_false;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  tmp9 = kcg_false;
                  tmp7 = kcg_false;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                    inC->closeButton_fromDisplay & inC->MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                    inC->InputFieldAck_fromDisplay & inC->MousePressed;
                  tmp9 = kcg_false;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    tmp7 = kcg_false;
                  }
                  else {
                    if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    }
                    else {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    }
                    if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                      tmp7 = kcg_true;
                    }
                    else {
                      tmp7 = kcg_false;
                    }
                  }
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (tmp16) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (last_LevelSymbolVisibility_toDisplay) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  tmp9 = kcg_false;
                  tmp7 = kcg_false;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  tmp9 = kcg_false;
                  tmp7 = kcg_false;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    inC->closeButton_fromDisplay & inC->MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    inC->InputFieldAck_fromDisplay & inC->MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    tmp9 = kcg_false;
                  }
                  else {
                    if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    }
                    else {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                    }
                    if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                      tmp9 = kcg_true;
                    }
                    else {
                      tmp9 = kcg_false;
                    }
                  }
                  tmp7 = kcg_false;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                    inC->openDriverID_fromDisplay & inC->MousePressed;
                  br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                    inC->openTrainRN_fromDisplay & inC->MousePressed;
                  br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                    inC->openLevelMenu_fromDisplay & inC->MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  tmp9 = kcg_false;
                  tmp7 = kcg_false;
                  break;
                
              }
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    &last_window_mask_visibility__toDisplay);
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    &last_window_mask_visibility__toDisplay);
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                    kcg_false;
                  for (i = 0; i < 12; i++) {
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN |
                      inC->keypad_fromDisplay[i];
                  }
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                    /* 13 */
                    CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN,
                      &inC->keypad_fromDisplay);
                  _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                    (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN ==
                      ASCII_Backsp_DMI_Control_Pkg) & inC->MousePressed &
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                  if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                    /* 19 */
                    RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                      &last_TrainRN_Display_toDisplay,
                      &outC->TrainRN_Display_toDisplay);
                  }
                  else {
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController =
                      (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN !=
                        ASCII_Backsp_DMI_Control_Pkg) & inC->MousePressed &
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                    if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController) {
                      /* 18 */
                      AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                        &last_TrainRN_Display_toDisplay,
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN,
                        &outC->TrainRN_Display_toDisplay);
                    }
                    else {
                      kcg_copy_array_int_9(
                        &outC->TrainRN_Display_toDisplay,
                        &last_TrainRN_Display_toDisplay);
                    }
                  }
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    (array_bool_15 *) &TrainRN_window_mask_DMI_Control_Pkg);
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    &last_window_mask_visibility__toDisplay);
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    &last_window_mask_visibility__toDisplay);
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    kcg_false;
                  for (i = 0; i < 12; i++) {
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled |
                      inC->keypad_fromDisplay[i];
                  }
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                    /* 12 */
                    CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled,
                      &inC->keypad_fromDisplay);
                  _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN ==
                      ASCII_Backsp_DMI_Control_Pkg) & inC->MousePressed &
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                  if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                    /* 18 */
                    RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                      &last_DriverID_Display_toDisplay,
                      &outC->DriverID_Display_toDisplay);
                  }
                  else {
                    tmp14 =
                      (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN !=
                        ASCII_Backsp_DMI_Control_Pkg) & inC->MousePressed &
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                    if (tmp14) {
                      /* 17 */
                      AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                        &last_DriverID_Display_toDisplay,
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN,
                        &outC->DriverID_Display_toDisplay);
                    }
                    else {
                      kcg_copy_array_int_9(
                        &outC->DriverID_Display_toDisplay,
                        &last_DriverID_Display_toDisplay);
                    }
                  }
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    (array_bool_15 *) &DriverID_window_mask_DMI_Control_Pkg);
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_bool_15(
                    &outC->window_mask_visibility__toDisplay,
                    (array_bool_15 *) &Mainmenu_window_mask_DMI_Control_Pkg);
                  break;
                
              }
              outC->CloseButtonEnabler_toDisplay =
                cCloseButtonEnabledSymbol_DMI_Control_Pkg;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_array_int_9(
                &outC->DriverID_Display_toDisplay,
                &last_DriverID_Display_toDisplay);
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                kcg_false;
              for (i = 0; i < 12; i++) {
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN |
                  inC->keypad_fromDisplay[i];
              }
              _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                /* 8 */
                CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN,
                  &inC->keypad_fromDisplay);
              _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN ==
                  ASCII_Backsp_DMI_Control_Pkg) & inC->MousePressed &
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                /* 16 */
                RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                  &last_TrainRN_Display_toDisplay,
                  &outC->TrainRN_Display_toDisplay);
              }
              else {
                else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboardController =
                  (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN !=
                    ASCII_Backsp_DMI_Control_Pkg) & inC->MousePressed &
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboardController) {
                  /* 15 */
                  AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                    &last_TrainRN_Display_toDisplay,
                    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN,
                    &outC->TrainRN_Display_toDisplay);
                }
                else {
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                }
              }
              kcg_copy_array_bool_15(
                &outC->window_mask_visibility__toDisplay,
                (array_bool_15 *) &TrainRN_window_mask_DMI_Control_Pkg);
              tmp9 = kcg_false;
              tmp7 = kcg_false;
              outC->CloseButtonEnabler_toDisplay = 26;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_array_int_9(
                &outC->DriverID_Display_toDisplay,
                &last_DriverID_Display_toDisplay);
              kcg_copy_array_int_9(
                &outC->TrainRN_Display_toDisplay,
                &last_TrainRN_Display_toDisplay);
              kcg_copy_array_bool_15(
                &outC->window_mask_visibility__toDisplay,
                (array_bool_15 *) &HideMainmenu_window_mask_DMI_Control_Pkg);
              tmp9 = kcg_false;
              tmp7 = kcg_false;
              outC->CloseButtonEnabler_toDisplay = 26;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                kcg_false;
              for (i = 0; i < 12; i++) {
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID |
                  inC->keypad_fromDisplay[i];
              }
              _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                /* 7 */
                CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID,
                  &inC->keypad_fromDisplay);
              _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN ==
                  ASCII_Backsp_DMI_Control_Pkg) & inC->MousePressed &
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
                /* 15 */
                RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                  &last_DriverID_Display_toDisplay,
                  &outC->DriverID_Display_toDisplay);
              }
              else {
                else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                  (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN !=
                    ASCII_Backsp_DMI_Control_Pkg) & inC->MousePressed &
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                  /* 14 */
                  AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                    &last_DriverID_Display_toDisplay,
                    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN,
                    &outC->DriverID_Display_toDisplay);
                }
                else {
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                }
              }
              kcg_copy_array_int_9(
                &outC->TrainRN_Display_toDisplay,
                &last_TrainRN_Display_toDisplay);
              kcg_copy_array_bool_15(
                &outC->window_mask_visibility__toDisplay,
                (array_bool_15 *) &DriverID_window_mask_DMI_Control_Pkg);
              tmp9 = kcg_false;
              tmp7 = kcg_false;
              outC->CloseButtonEnabler_toDisplay = 26;
              break;
            
          }
          switch (RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp10 = kcg_false;
              tmp8 = kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp10 = kcg_false;
              tmp8 = kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp10 = kcg_false;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                tmp8 = kcg_true;
              }
              else {
                tmp8 = kcg_false;
              }
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp10 = kcg_false;
              tmp8 = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
                tmp10 = kcg_true;
              }
              else {
                tmp10 = kcg_false;
              }
              tmp8 = kcg_false;
              break;
            
          }
          /* Set_DriverID_packet */
          Set_DriverID_packet_DMI_Control_Pkg_Sub_func(
            &last_DriverID_Display_toDisplay,
            (kcg_bool) (tmp10 | tmp9),
            inC->SystemTime,
            &outC->DMI_driver_identifier);
          /* Set_TrainRN_packet */
          Set_TrainRN_packet_DMI_Control_Pkg_Sub_func(
            (kcg_bool) (tmp8 | tmp7),
            &last_TrainRN_Display_toDisplay,
            inC->SystemTime,
            &outC->DMI_train_running_number_id);
          if (tmp17) {
            /* 5 */
            RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func(
              inC->DMI_dynamic.radioConnectionStatus,
              &_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN,
              &outC->_L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
            outC->_L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
          }
          else if (outC->init7) {
            outC->_L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
          }
          outC->StatusSymbolVisibility_toDisplay =
            outC->_L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->RBC_status_symbol_toDisplay =
            outC->_L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          break;
        
      }
      switch (HandshakeSM_state_sel_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          tmp11 = kcg_false;
          break;
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          if (CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C_IfBlock1) {
            tmp11 = kcg_true;
          }
          else {
            tmp11 = kcg_false;
          }
          break;
        
      }
      /* 4 */
      Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func(
        (array_char_12 *) &DMI_name_DMI_Control_Pkg,
        inC->SystemTime,
        tmp11,
        &outC->DMI_identifier);
      break;
    
  }
  if (outC->init6) {
    last_DistanceToTargetBarVisibility_toDisplay = kcg_false;
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
      13;
    last_ModeSymbolVisibility_toDisplay = kcg_false;
    kcg_copy_array_int_5(
      &_L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5,
      &default_IndexFixedMsg_toDisplay);
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
      1;
  }
  else {
    last_DistanceToTargetBarVisibility_toDisplay =
      outC->DistanceToTargetBarVisibility_toDisplay;
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
      outC->ModeSymbol_toDisplay;
    last_ModeSymbolVisibility_toDisplay = outC->ModeSymbolVisibility_toDisplay;
    kcg_copy_array_int_5(
      &_L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5,
      &outC->ArrayOfMsgIndex_toDisplay);
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
      outC->trainCategoryIndex_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->DistanceToTargetBarVisibility_toDisplay =
        last_DistanceToTargetBarVisibility_toDisplay;
      outC->ModeSymbol_toDisplay =
        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
      outC->ModeSymbolVisibility_toDisplay =
        last_ModeSymbolVisibility_toDisplay;
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_driver_request,
        &default_DMI_driver_request);
      kcg_copy_array_int_5(
        &outC->ArrayOfMsgIndex_toDisplay,
        &_L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5);
      outC->trainCategoryIndex_toDisplay =
        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->DistanceToTargetBarVisibility_toDisplay =
            last_DistanceToTargetBarVisibility_toDisplay;
          outC->ModeSymbol_toDisplay =
            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
          outC->ModeSymbolVisibility_toDisplay =
            last_ModeSymbolVisibility_toDisplay;
          kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_driver_request,
            &default_DMI_driver_request);
          kcg_copy_array_int_5(
            &outC->ArrayOfMsgIndex_toDisplay,
            &_L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5);
          outC->trainCategoryIndex_toDisplay =
            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (tmp17) {
            outC->_L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp15;
            /* 4 */
            ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func(
              &inC->DMI_dynamic,
              &outC->LocalModeSymbolIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp13);
            outC->LocalModeSymbolVisibility_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp13;
          }
          else if (outC->init7) {
            outC->_L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->LocalModeSymbolIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              13;
            outC->LocalModeSymbolVisibility_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
          }
          outC->DistanceToTargetBarVisibility_toDisplay =
            outC->_L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->ModeSymbol_toDisplay =
            outC->LocalModeSymbolIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->ModeSymbolVisibility_toDisplay =
            outC->LocalModeSymbolVisibility_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          if (outC->init7) {
            last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              Start_of_mission_DMI_Types_Pkg;
          }
          else {
            last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_driver_request,
                &default_DMI_driver_request);
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp6 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp6 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp6 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp6 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp6 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp6 = kcg_false;
                  _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  br_5_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                    inC->MousePressed & inC->startRequest_fromDisplay;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp6 = kcg_false;
                    _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  }
                  else {
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
                    if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                      tmp6 = kcg_false;
                      _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                        last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                    }
                    else {
                      br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                        br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
                      if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp6 = kcg_false;
                        _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                          last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      }
                      else {
                        br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu =
                          br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu;
                        if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                          tmp6 = kcg_true;
                          _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                            Level_entry_request_DMI_Types_Pkg;
                        }
                        else if (br_5_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                          tmp6 = kcg_true;
                          _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                            Start_of_mission_DMI_Types_Pkg;
                        }
                        else {
                          tmp6 = kcg_false;
                          _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                            last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        }
                      }
                    }
                  }
                  break;
                
              }
              /* 2 */
              DMI_request_trigger_DMI_Control_Pkg_Sub_func(
                tmp6,
                inC->SystemTime,
                _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
                &outC->DMI_driver_request);
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_driver_request,
                &default_DMI_driver_request);
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_driver_request,
                &default_DMI_driver_request);
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_driver_request,
                &default_DMI_driver_request);
              break;
            
          }
          outC->ArrayOfMsgIndex_toDisplay[0] = 0;
          outC->ArrayOfMsgIndex_toDisplay[1] = 0;
          outC->ArrayOfMsgIndex_toDisplay[2] = 0;
          outC->ArrayOfMsgIndex_toDisplay[3] = 0;
          outC->ArrayOfMsgIndex_toDisplay[4] = 0;
          switch (TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
                &tmp5,
                (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
                  &DMI_train_data_constant_DMI_Control_Pkg);
              break;
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              if (inC->DMI_train_data.valid) {
                kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
                  &outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues,
                  &inC->DMI_train_data);
              }
              else if (outC->init5) {
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.valid =
                  kcg_false;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.systemTime =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.trainCategory =
                  NC_TRAIN_Passenger_train;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.l_train =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_brakeperct =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.v_maxTrain =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_axleLoad =
                  M_AXLELOADCAT_E5;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_airTight =
                  M_AIRTIGHT_Not_fitted;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_loadingGauge =
                  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
              }
              kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
                &tmp5,
                &outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues);
              break;
            
          }
          /* 1 */
          TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData(
            &tmp5,
            &outC->trainCategoryIndex_toDisplay,
            &last_trainLoadingGougeIndex_toDisplay,
            &last_TrainSpeed_toDisplay,
            &Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM,
            &last_iconGroupIndex_toDisplay,
            &_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN,
            &last_SpeedDigitThree_toDisplay);
          break;
        
      }
      break;
    
  }
  if (outC->init6) {
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
      1;
  }
  else {
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
      outC->trainAxleloadIndex_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsOpen_CabinSM :
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          outC->trainAxleloadIndex_toDisplay =
            last_trainLoadingGougeIndex_toDisplay;
          break;
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->trainAxleloadIndex_toDisplay =
            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
          break;
        
      }
      break;
    case SSM_st_DeskIsClose_CabinSM :
      outC->trainAxleloadIndex_toDisplay =
        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
      break;
    
  }
  if (outC->init6) {
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
      1;
    last_trainLoadingGougeIndex_toDisplay = 1;
    last_SpeedDigitTwo_toDisplay = 0.0;
    last_SpeedPermitted_toDisplay = 0.0;
    vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
      0.0;
    tmp14 = kcg_false;
  }
  else {
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
      outC->trainAirtightIndex_toDisplay;
    last_trainLoadingGougeIndex_toDisplay =
      outC->trainLoadingGougeIndex_toDisplay;
    last_SpeedDigitTwo_toDisplay = outC->trainLenght_toDisplay;
    last_SpeedPermitted_toDisplay = outC->trainBrakePerc_toDisplay;
    vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
      outC->trainMaxspeed_toDisplay;
    tmp14 = outC->traindataValidWinVisibility_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->trainAirtightIndex_toDisplay =
        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
      outC->trainLoadingGougeIndex_toDisplay =
        last_trainLoadingGougeIndex_toDisplay;
      outC->trainLenght_toDisplay = last_SpeedDigitTwo_toDisplay;
      outC->trainBrakePerc_toDisplay = last_SpeedPermitted_toDisplay;
      outC->trainMaxspeed_toDisplay =
        vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
      outC->traindataValidWinVisibility_toDisplay = tmp14;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->trainAirtightIndex_toDisplay =
            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
          outC->trainLoadingGougeIndex_toDisplay =
            last_trainLoadingGougeIndex_toDisplay;
          outC->trainLenght_toDisplay = last_SpeedDigitTwo_toDisplay;
          outC->trainBrakePerc_toDisplay = last_SpeedPermitted_toDisplay;
          outC->trainMaxspeed_toDisplay =
            vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
          outC->traindataValidWinVisibility_toDisplay = tmp14;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          outC->trainAirtightIndex_toDisplay =
            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
          outC->trainLoadingGougeIndex_toDisplay =
            last_iconGroupIndex_toDisplay;
          outC->trainLenght_toDisplay = last_TrainSpeed_toDisplay / 100.0;
          outC->trainBrakePerc_toDisplay = last_SpeedDigitThree_toDisplay;
          outC->trainMaxspeed_toDisplay =
            Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->traindataValidWinVisibility_toDisplay = tmp14;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->traindataValidWinVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->traindataValidWinVisibility_toDisplay = tmp14;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->traindataValidWinVisibility_toDisplay = tmp14;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->traindataValidWinVisibility_toDisplay = tmp14;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow) {
                    outC->traindataValidWinVisibility_toDisplay = tmp14;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_true;
                  }
                  else {
                    outC->traindataValidWinVisibility_toDisplay = tmp14;
                  }
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (tmp16) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                  }
                  else if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                  }
                  else if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                  }
                  else {
                    outC->traindataValidWinVisibility_toDisplay = tmp14;
                  }
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->traindataValidWinVisibility_toDisplay = tmp14;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->traindataValidWinVisibility_toDisplay = tmp14;
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->traindataValidWinVisibility_toDisplay = tmp14;
                  break;
                
              }
              break;
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->traindataValidWinVisibility_toDisplay = tmp14;
              break;
            
          }
          break;
        
      }
      break;
    
  }
  if (outC->init6) {
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
      1;
    last_iconGroupIndex_toDisplay = 0;
  }
  else {
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
      outC->traindataYesNoIndex_toDisplay;
    last_iconGroupIndex_toDisplay = outC->iconGroupIndex_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->yellowBorderC1Area_toDisplay = kcg_false;
      outC->yellowBorderBrakeSymbol_toDisplay = kcg_false;
      outC->openDesk_toDisplay = kcg_false;
      outC->yellowBorderMsg_toDisplay = kcg_false;
      outC->traindataYesNoIndex_toDisplay =
        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
      kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_train_data_ack,
        &default_DMI_train_data_ack);
      kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_status_report,
        &default_DMI_status_report);
      kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_text_message_ack,
        &default_DMI_text_message_ack);
      outC->closeButtonIndex_toDisplay = 26;
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_icons_ack,
        (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMI_Icons_Ack_DMI_Control_Pkg);
      outC->iconGroupIndex_toDisplay = last_iconGroupIndex_toDisplay;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      outC->openDesk_toDisplay = kcg_true;
      if (CabinSM_reset_act) {
        /* 5 */ DMI_status_reset_DMI_Control_Pkg_Sub_func(&outC->Context_5);
        /* 1 */
        TextMessagesDispatcher_reset_DMI_Control_Pkg_Utils(&outC->_2_Context_1);
        /* 2 */ AckMsgManager_reset_DMI_Control_Pkg_Utils(&outC->Context_2);
        /* FlashingIconsOperator */
        FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(
          &outC->Context_FlashingIconsOperator);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->traindataYesNoIndex_toDisplay =
            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
          kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_train_data_ack,
            &default_DMI_train_data_ack);
          kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_status_report,
            &default_DMI_status_report);
          kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_text_message_ack,
            &default_DMI_text_message_ack);
          outC->yellowBorderMsg_toDisplay = kcg_false;
          outC->closeButtonIndex_toDisplay = 26;
          outC->yellowBorderC1Area_toDisplay = kcg_false;
          outC->yellowBorderBrakeSymbol_toDisplay = kcg_false;
          kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_icons_ack,
            (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
              &cDMI_Icons_Ack_DMI_Control_Pkg);
          outC->iconGroupIndex_toDisplay = last_iconGroupIndex_toDisplay;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          outC->traindataYesNoIndex_toDisplay = traindataYesNoIndex_toDisplay;
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 5 */ DMI_status_reset_DMI_Control_Pkg_Sub_func(&outC->Context_5);
            /* 1 */
            TextMessagesDispatcher_reset_DMI_Control_Pkg_Utils(
              &outC->_2_Context_1);
            /* 2 */ AckMsgManager_reset_DMI_Control_Pkg_Utils(&outC->Context_2);
            /* FlashingIconsOperator */
            FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(
              &outC->Context_FlashingIconsOperator);
          }
          /* 5 */
          DMI_status_DMI_Control_Pkg_Sub_func(
            inC->SystemTime,
            &outC->Context_5);
          kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_status_report,
            &outC->Context_5.StatusOutput);
          if (levelMenuVisibility_toDisplay_strong) {
            outC->DMI_text_message_ack.valid =
              levelMenuVisibility_toDisplay_strong;
            outC->DMI_text_message_ack.systemTime = inC->SystemTime;
            outC->DMI_text_message_ack.textMessage_ID =
              inC->DMI_text_message.textMessage_ID;
            outC->DMI_text_message_ack.acknowledged = kcg_true;
          }
          else {
            kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
              &outC->DMI_text_message_ack,
              (DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                &cDMI_text_message_ack_DMI_Control_Pkg);
          }
          /* 1 */
          TextMessagesDispatcher_DMI_Control_Pkg_Utils(
            &inC->DMI_text_message,
            tmp2,
            inC->SystemTime,
            &outC->_2_Context_1);
          tmp8 = outC->_2_Context_1.AckMsgQ_isEmpty;
          kcg_copy_array__15402(
            &Local_ImpMsgQueue_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_2_Context_1.ImpMsgQueue);
          tmp9 = outC->_2_Context_1.ImpMsgQ_isEmpty;
          if (outC->init7) {
            SM13_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_State36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13;
            _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
              kcg_false;
            _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
              kcg_false;
            SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
            last_trainLoadingGougeIndex_toDisplay = 0;
            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
              0;
          }
          else {
            SM13_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SM13_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
              outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
              outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_trainLoadingGougeIndex_toDisplay =
              outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
              outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          switch (SM13_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_State36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13 :
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                tmp2 | tmp8;
              if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                SM13_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_State37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13;
              }
              else {
                SM13_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_State36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13;
              }
              break;
            case SSM_st_State37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13 :
              SM13_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_State37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13;
              break;
            
          }
          switch (SM13_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_State36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13 :
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                kcg_true;
              break;
            case SSM_st_State37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13 :
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
                kcg_false;
              break;
            
          }
          if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
            /* 2 */
            AckMsgManager_DMI_Control_Pkg_Utils(
              &outC->_2_Context_1.AckMsgQueue,
              inC->SystemTime,
              &outC->Context_2);
            kcg_copy_array_int_5(
              &_L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5,
              &outC->Context_2.IndexFixedMsg);
            kcg_copy_array_char_30_5(
              &_L6_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5,
              &outC->Context_2.ArrayPlainText);
            kcg_copy_array_real_5(
              &_L8_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5,
              &outC->Context_2.Array_hh);
            kcg_copy_array_real_5(
              &_L9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5,
              &outC->Context_2.Array_mm);
            outC->yellowBorderMsg_toDisplay = outC->Context_2.FlashingBorderMsg;
          }
          else {
            outC->yellowBorderMsg_toDisplay = kcg_false;
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_train_data_ack,
                &default_DMI_train_data_ack);
              outC->closeButtonIndex_toDisplay =
                closeButtonActiveSymbol_DMI_Control_Pkg;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &outC->DMI_train_data_ack,
                    &default_DMI_train_data_ack);
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &outC->DMI_train_data_ack,
                    &default_DMI_train_data_ack);
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &outC->DMI_train_data_ack,
                    &default_DMI_train_data_ack);
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (tmp16) {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &outC->DMI_train_data_ack,
                      &default_DMI_train_data_ack);
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &outC->DMI_train_data_ack,
                      &default_DMI_train_data_ack);
                  }
                  else if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &outC->DMI_train_data_ack,
                      (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                        &DMI_train_data_ack_positive_DMI_Control_Pkg);
                  }
                  else if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &outC->DMI_train_data_ack,
                      (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                        &DMI_train_data_ack_negative_DMI_Control_Pkg);
                  }
                  else {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &outC->DMI_train_data_ack,
                      &default_DMI_train_data_ack);
                  }
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &outC->DMI_train_data_ack,
                    &default_DMI_train_data_ack);
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &outC->DMI_train_data_ack,
                    &default_DMI_train_data_ack);
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &outC->DMI_train_data_ack,
                    &default_DMI_train_data_ack);
                  break;
                
              }
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay = 26;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay =
                    closeButtonActiveSymbol_DMI_Control_Pkg;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay = 26;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay = 26;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay =
                    closeButtonActiveSymbol_DMI_Control_Pkg;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay = 26;
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay =
                    closeButtonActiveSymbol_DMI_Control_Pkg;
                  break;
                
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_train_data_ack,
                &default_DMI_train_data_ack);
              outC->closeButtonIndex_toDisplay = 26;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_train_data_ack,
                &default_DMI_train_data_ack);
              outC->closeButtonIndex_toDisplay = 26;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_train_data_ack,
                &default_DMI_train_data_ack);
              outC->closeButtonIndex_toDisplay = 26;
              break;
            
          }
          switch (IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
              outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
              outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_trainLoadingGougeIndex_toDisplay;
              outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
              outC->iconGroupIndex_toDisplay = last_iconGroupIndex_toDisplay;
              break;
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              switch (IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid) {
                case show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg :
                  switch (AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area) {
                    case H_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_trainLoadingGougeIndex_toDisplay;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_trainLoadingGougeIndex_toDisplay;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_trainLoadingGougeIndex_toDisplay;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_trainLoadingGougeIndex_toDisplay;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_trainLoadingGougeIndex_toDisplay;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case C_DMI_Types_Pkg :
                      if (AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C) {
                        outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                        outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_trainLoadingGougeIndex_toDisplay;
                        if (tmp1) {
                          outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            kcg_true;
                          outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            inC->DMI_icons.DMI_nid_icon_identifier;
                        }
                        else {
                          outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                          outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                        }
                        outC->iconGroupIndex_toDisplay =
                          last_iconGroupIndex_toDisplay;
                      }
                      else {
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                          last_vtarget_permColor_toDisplay == 1;
                        outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                        outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                        if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                          tmp7 = /* LevelModeSymolsChecker */
                            LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func(
                              last_Vinterv_Color_toDisplay,
                              tmp3);
                          if (tmp7) {
                            outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                              kcg_true;
                            outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                              inC->DMI_icons.DMI_nid_icon_identifier;
                            outC->iconGroupIndex_toDisplay =
                              last_Vinterv_Color_toDisplay;
                          }
                          else {
                            outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                            outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                              last_trainLoadingGougeIndex_toDisplay;
                            outC->iconGroupIndex_toDisplay =
                              last_iconGroupIndex_toDisplay;
                          }
                        }
                        else {
                          outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                          outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            last_trainLoadingGougeIndex_toDisplay;
                          outC->iconGroupIndex_toDisplay =
                            last_iconGroupIndex_toDisplay;
                        }
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_trainLoadingGougeIndex_toDisplay;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_trainLoadingGougeIndex_toDisplay;
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    
                  }
                  break;
                case show_icon_flashing_in_area_DMI_Types_Pkg :
                  outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                  outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                  outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_trainLoadingGougeIndex_toDisplay;
                  outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                  outC->iconGroupIndex_toDisplay =
                    last_iconGroupIndex_toDisplay;
                  break;
                case clear_area_DMI_Types_Pkg :
                  outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_trainLoadingGougeIndex_toDisplay;
                  outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area) {
                    case H_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case C_DMI_Types_Pkg :
                      if (IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C) {
                        outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                        outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          kcg_false;
                        outC->iconGroupIndex_toDisplay =
                          last_iconGroupIndex_toDisplay;
                      }
                      else {
                        else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboardController =
                          last_vtarget_permColor_toDisplay == 1;
                        outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                        if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboardController) {
                          outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            kcg_false;
                          outC->iconGroupIndex_toDisplay = 0;
                        }
                        else {
                          outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                          outC->iconGroupIndex_toDisplay =
                            last_iconGroupIndex_toDisplay;
                        }
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    
                  }
                  break;
                case show_icon_in_area_DMI_Types_Pkg :
                  outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                  outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                  outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_trainLoadingGougeIndex_toDisplay;
                  outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area) {
                    case A_DMI_Types_Pkg :
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case B_DMI_Types_Pkg :
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case C_DMI_Types_Pkg :
                      if (last_DistanceToTargetVisibilityDigital_toDisplay) {
                        outC->iconGroupIndex_toDisplay =
                          last_iconGroupIndex_toDisplay;
                      }
                      else {
                        br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                          last_vtarget_permColor_toDisplay == 1;
                        if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                          br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                            kcg_false;
                          for (i = 0; i < 5; i++) {
                            tmp11 =
                              br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                            /* 1 */
                            CheckElem_iterator_DMI_Control_Pkg_Utils(
                              tmp11,
                              ArrayOfIndex_LevelAnnouncementNoAck_DMI_Control_Pkg[i],
                              tmp3,
                              &tmp10,
                              &br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled);
                            if (!tmp10) {
                              break;
                            }
                          }
                          CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C_IfBlock1 =
                            (last_Vinterv_Color_toDisplay ==
                              cLevelSymbol_IconGroup_DMI_Control_Pkg) &
                            br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                          if (CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C_IfBlock1) {
                            outC->iconGroupIndex_toDisplay =
                              last_Vinterv_Color_toDisplay;
                          }
                          else {
                            outC->iconGroupIndex_toDisplay =
                              last_iconGroupIndex_toDisplay;
                          }
                        }
                        else {
                          outC->iconGroupIndex_toDisplay =
                            last_iconGroupIndex_toDisplay;
                        }
                      }
                      break;
                    case D_DMI_Types_Pkg :
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    case H_DMI_Types_Pkg :
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      break;
                    
                  }
                  break;
                
              }
              break;
            
          }
          /* FlashingIconsOperator */
          FlashingIconsOperator_DMI_Control_Pkg_Utils(
            outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            inC->DMI_icons.DMI_m_icon_flashing_freq,
            inC->SystemTime,
            inC->DMI_icons.DMI_m_icon_flashing_freq,
            &outC->Context_FlashingIconsOperator);
          outC->yellowBorderBrakeSymbol_toDisplay =
            outC->Context_FlashingIconsOperator.yellowBorderBrakeSymbol_toDisplay;
          switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                inC->C1AreaAck_fromDisplay & inC->MousePressed;
              _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                inC->brakeStatusSymbolAck_fromDisplay & inC->MousePressed;
              if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
              }
              else {
                else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController =
                  _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
              }
              break;
            
          }
          switch (SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                      kcg_false;
                  }
                  else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController) {
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                      kcg_true;
                  }
                  else {
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                      kcg_false;
                  }
                  break;
                case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    kcg_false;
                  break;
                case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    kcg_false;
                  break;
                case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    kcg_false;
                  break;
                
              }
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              }
              else {
                switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                  case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                        kcg_true;
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                        kcg_false;
                    }
                    break;
                  case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                      kcg_false;
                    break;
                  case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                      kcg_false;
                    break;
                  case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                      kcg_false;
                    break;
                  
                }
                if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                  SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
                }
                else {
                  SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
                }
              }
              break;
            case SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            case SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            
          }
          switch (SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_icons_ack,
                (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                  &cDMI_Icons_Ack_DMI_Control_Pkg);
              break;
            case SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              /* 1 */
              Set_IconAck_DMI_Control_Pkg_Sub_func(
                kcg_true,
                inC->SystemTime,
                outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &outC->DMI_icons_ack);
              break;
            case SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              /* 2 */
              Set_IconAck_DMI_Control_Pkg_Sub_func(
                kcg_true,
                inC->SystemTime,
                outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &outC->DMI_icons_ack);
              break;
            
          }
          outC->yellowBorderC1Area_toDisplay =
            outC->Context_FlashingIconsOperator.yellowBorderC1Area_toDisplay;
          break;
        
      }
      break;
    
  }
  if (outC->init6) {
    traindataYesNoIndex_toDisplay = 0;
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
      0;
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
      0;
    last_trainLoadingGougeIndex_toDisplay = 0;
    last_iconGroupIndex_toDisplay = 0;
    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
      kcg_false;
    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
      kcg_false;
    last_vtarget_permColor_toDisplay = 1;
    last_Vinterv_Color_toDisplay = 1;
    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
      kcg_false;
    last_ArrayLevelIndex_toDisplay[0] = 0;
    last_ArrayLevelIndex_toDisplay[1] = 0;
    last_ArrayLevelIndex_toDisplay[2] = 0;
    last_ArrayLevelIndex_toDisplay[3] = 0;
    last_ArrayLevelIndex_toDisplay[4] = 0;
    last_ArrayLevelIndex_toDisplay[5] = 0;
    last_ArrayLevelIndex_toDisplay[6] = 0;
    last_ArrayLevelIndex_toDisplay[7] = 0;
    last_ArrayLevelIndex_toDisplay[8] = 0;
    last_ArrayLevelIndex_toDisplay[9] = 0;
    last_ArrayLevelIndex_toDisplay[10] = 0;
    last_ArrayLevelIndex_toDisplay[11] = 0;
  }
  else {
    traindataYesNoIndex_toDisplay =
      outC->levelSymbolAnnouncementIndex_toDisplay;
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
      outC->modeSymbolAnnouncementIndex_toDisplay;
    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
      outC->VpermColor_toDisplay;
    last_trainLoadingGougeIndex_toDisplay = outC->VreleaseColor_toDisplay;
    last_iconGroupIndex_toDisplay = outC->VtargetColor_toDisplay;
    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
      outC->Vtarget_permVisibility_toDisplay;
    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
      outC->Vinterv_Visibility_toDisplay;
    last_vtarget_permColor_toDisplay = outC->vtarget_permColor_toDisplay;
    last_Vinterv_Color_toDisplay = outC->Vinterv_Color_toDisplay;
    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID =
      outC->levelMenuVisibility_toDisplay;
    kcg_copy_array_int_12(
      &last_ArrayLevelIndex_toDisplay,
      &outC->ArrayLevelIndex_toDisplay);
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->levelSymbolAnnouncementIndex_toDisplay =
        traindataYesNoIndex_toDisplay;
      outC->hourGlassVisibility_toDisplay = kcg_false;
      outC->modeSymbolAnnouncementIndex_toDisplay =
        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
      outC->hourGlassCounter_toDisplay = 0.0;
      outC->VpermColor_toDisplay =
        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
      outC->VreleaseColor_toDisplay = last_trainLoadingGougeIndex_toDisplay;
      outC->VtargetColor_toDisplay = last_iconGroupIndex_toDisplay;
      outC->Vtarget_permVisibility_toDisplay =
        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
      outC->Vinterv_Visibility_toDisplay =
        _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
      outC->vtarget_permColor_toDisplay = last_vtarget_permColor_toDisplay;
      outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
      outC->levelMenuVisibility_toDisplay =
        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
      kcg_copy_array_int_12(
        &outC->ArrayLevelIndex_toDisplay,
        &last_ArrayLevelIndex_toDisplay);
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      if (CabinSM_reset_act) {
        /* HourGlassAnimation */
        HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
          &outC->Context_HourGlassAnimation);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->levelSymbolAnnouncementIndex_toDisplay =
            traindataYesNoIndex_toDisplay;
          outC->modeSymbolAnnouncementIndex_toDisplay =
            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
          outC->hourGlassVisibility_toDisplay = kcg_false;
          outC->hourGlassCounter_toDisplay = 0.0;
          outC->VpermColor_toDisplay =
            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
          outC->VreleaseColor_toDisplay = last_trainLoadingGougeIndex_toDisplay;
          outC->VtargetColor_toDisplay = last_iconGroupIndex_toDisplay;
          outC->Vtarget_permVisibility_toDisplay =
            _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
          outC->Vinterv_Visibility_toDisplay =
            _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
          outC->vtarget_permColor_toDisplay = last_vtarget_permColor_toDisplay;
          outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
          outC->levelMenuVisibility_toDisplay =
            _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
          kcg_copy_array_int_12(
            &outC->ArrayLevelIndex_toDisplay,
            &last_ArrayLevelIndex_toDisplay);
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          switch (IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->levelSymbolAnnouncementIndex_toDisplay =
                traindataYesNoIndex_toDisplay;
              outC->modeSymbolAnnouncementIndex_toDisplay =
                _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
              break;
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              switch (IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid) {
                case show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg :
                  switch (AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area) {
                    case H_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case C_DMI_Types_Pkg :
                      if (AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C) {
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          traindataYesNoIndex_toDisplay;
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      }
                      else if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                        if (tmp7) {
                          outC->levelSymbolAnnouncementIndex_toDisplay = tmp3;
                          outC->modeSymbolAnnouncementIndex_toDisplay = tmp3;
                        }
                        else {
                          outC->levelSymbolAnnouncementIndex_toDisplay =
                            traindataYesNoIndex_toDisplay;
                          outC->modeSymbolAnnouncementIndex_toDisplay =
                            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                        }
                      }
                      else {
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          traindataYesNoIndex_toDisplay;
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    
                  }
                  break;
                case show_icon_flashing_in_area_DMI_Types_Pkg :
                  outC->levelSymbolAnnouncementIndex_toDisplay =
                    traindataYesNoIndex_toDisplay;
                  outC->modeSymbolAnnouncementIndex_toDisplay =
                    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                  break;
                case clear_area_DMI_Types_Pkg :
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area) {
                    case H_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case C_DMI_Types_Pkg :
                      if (IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C) {
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          traindataYesNoIndex_toDisplay;
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      }
                      else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN_TrainRNKeyboardController) {
                        outC->levelSymbolAnnouncementIndex_toDisplay = 0;
                        outC->modeSymbolAnnouncementIndex_toDisplay = 0;
                      }
                      else {
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          traindataYesNoIndex_toDisplay;
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    
                  }
                  break;
                case show_icon_in_area_DMI_Types_Pkg :
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area) {
                    case H_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case C_DMI_Types_Pkg :
                      if (last_DistanceToTargetVisibilityDigital_toDisplay) {
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          traindataYesNoIndex_toDisplay;
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      }
                      else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                        if (CheckResult_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C_IfBlock1) {
                          outC->levelSymbolAnnouncementIndex_toDisplay = tmp3;
                          outC->modeSymbolAnnouncementIndex_toDisplay = tmp3;
                        }
                        else {
                          outC->levelSymbolAnnouncementIndex_toDisplay =
                            traindataYesNoIndex_toDisplay;
                          outC->modeSymbolAnnouncementIndex_toDisplay =
                            _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                        }
                      }
                      else {
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          traindataYesNoIndex_toDisplay;
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        traindataYesNoIndex_toDisplay;
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN;
                      break;
                    
                  }
                  break;
                
              }
              break;
            
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp17 = kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp17 = kcg_false;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp17 = kcg_false;
                  }
                  else if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp17 = kcg_false;
                  }
                  else if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                    tmp17 = kcg_true;
                  }
                  else {
                    tmp17 = kcg_false;
                  }
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                
              }
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                    case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                      if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp4 =
                          SSM_TR_MainMenu_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp4 =
                          SSM_TR_MainMenu_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp4 =
                          SSM_TR_MainMenu_3_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp4 =
                          SSM_TR_MainMenu_4_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_5_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_MainMenu) {
                        tmp4 =
                          SSM_TR_MainMenu_5_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else {
                        tmp4 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                      if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                        tmp4 =
                          SSM_TR_DriverID_DMI_controlled_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                        tmp4 =
                          SSM_TR_DriverID_DMI_controlled_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else {
                        tmp4 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                      if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow) {
                        tmp4 =
                          SSM_TR_TrainDataWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow) {
                        tmp4 =
                          SSM_TR_TrainDataWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else {
                        tmp4 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                      if (tmp16) {
                        tmp4 =
                          SSM_TR_TrainDataValidationWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (last_LevelSymbolVisibility_toDisplay) {
                        tmp4 =
                          SSM_TR_TrainDataValidationWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                        tmp4 =
                          SSM_TR_TrainDataValidationWindow_3_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                        tmp4 =
                          SSM_TR_TrainDataValidationWindow_4_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else {
                        tmp4 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                      if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                        tmp4 =
                          SSM_TR_Insert_TrainRN_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                        tmp4 =
                          SSM_TR_Insert_TrainRN_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else {
                        tmp4 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                      tmp4 =
                        SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      break;
                    case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                      if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow) {
                        tmp4 =
                          SSM_TR_LevelWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow) {
                        tmp4 =
                          SSM_TR_LevelWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      else {
                        tmp4 =
                          SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                      }
                      break;
                    
                  }
                  last_ModeSymbolVisibility_toDisplay = tmp4 !=
                    SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
                  break;
                
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp17 = kcg_false;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp17 = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp17 = kcg_false;
              break;
            
          }
          switch (RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp13 = kcg_false;
              last_DistanceToTargetBarVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp13 = kcg_false;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                last_DistanceToTargetBarVisibility_toDisplay = kcg_false;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                last_DistanceToTargetBarVisibility_toDisplay = kcg_true;
              }
              else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                last_DistanceToTargetBarVisibility_toDisplay = kcg_true;
              }
              else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                last_DistanceToTargetBarVisibility_toDisplay = kcg_true;
              }
              else {
                last_DistanceToTargetBarVisibility_toDisplay = kcg_false;
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                tmp13 = kcg_true;
              }
              else {
                tmp13 = kcg_false;
              }
              last_DistanceToTargetBarVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp13 = kcg_false;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq) {
                last_DistanceToTargetBarVisibility_toDisplay = kcg_true;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_WaitingForReq) {
                last_DistanceToTargetBarVisibility_toDisplay = kcg_true;
              }
              else {
                last_DistanceToTargetBarVisibility_toDisplay = kcg_false;
              }
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
                tmp13 = kcg_true;
              }
              else {
                tmp13 = kcg_false;
              }
              last_DistanceToTargetBarVisibility_toDisplay = kcg_false;
              break;
            
          }
          else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
            tmp13 | tmp17;
          br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
            inC->DMI_evc_level_data.valid;
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp15 = kcg_false;
              outC->levelMenuVisibility_toDisplay = kcg_true;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  levelMenuVisibility_toDisplay_strong =
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  levelMenuVisibility_toDisplay_strong =
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  levelMenuVisibility_toDisplay_strong =
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  levelMenuVisibility_toDisplay_strong =
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  levelMenuVisibility_toDisplay_strong =
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  levelMenuVisibility_toDisplay_strong =
                    _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow) {
                    levelMenuVisibility_toDisplay_strong = kcg_false;
                  }
                  else {
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow;
                    if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController) {
                      levelMenuVisibility_toDisplay_strong = kcg_false;
                    }
                    else {
                      levelMenuVisibility_toDisplay_strong =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
                    }
                  }
                  break;
                
              }
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp15 = kcg_false;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (last_ModeSymbolVisibility_toDisplay) {
                    tmp15 = kcg_false;
                    outC->levelMenuVisibility_toDisplay =
                      levelMenuVisibility_toDisplay_strong;
                  }
                  else {
                    br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                      br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow;
                    if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                      tmp15 = kcg_true;
                      outC->levelMenuVisibility_toDisplay = kcg_true;
                    }
                    else {
                      tmp15 = kcg_false;
                      outC->levelMenuVisibility_toDisplay =
                        levelMenuVisibility_toDisplay_strong;
                    }
                  }
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp15 = kcg_false;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp15 = kcg_false;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp15 = kcg_false;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp15 = kcg_false;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp15 = kcg_false;
                  outC->levelMenuVisibility_toDisplay =
                    levelMenuVisibility_toDisplay_strong;
                  break;
                
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp15 = kcg_false;
              outC->levelMenuVisibility_toDisplay =
                _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp15 = kcg_false;
              outC->levelMenuVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp15 = kcg_false;
              outC->levelMenuVisibility_toDisplay =
                _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID;
              break;
            
          }
          br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
            last_DistanceToTargetBarVisibility_toDisplay | tmp15;
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* HourGlassAnimation */
            HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
              &outC->Context_HourGlassAnimation);
          }
          /* HourGlassAnimation */
          HourGlassAnimation_DMI_Control_Pkg_Sub_func(
            else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock,
            br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow,
            inC->SystemTime,
            &outC->Context_HourGlassAnimation);
          outC->hourGlassCounter_toDisplay = (kcg_real)
              outC->Context_HourGlassAnimation.Output1;
          if (outC->init7) {
            HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
          }
          else {
            HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          switch (HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              else {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              break;
            case SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow |
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              else {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              break;
            
          }
          switch (HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->hourGlassVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->hourGlassVisibility_toDisplay = kcg_true;
              break;
            
          }
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->VpermColor_toDisplay =
                _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
              outC->VreleaseColor_toDisplay =
                last_trainLoadingGougeIndex_toDisplay;
              outC->VtargetColor_toDisplay = last_iconGroupIndex_toDisplay;
              outC->Vtarget_permVisibility_toDisplay =
                _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
              outC->Vinterv_Visibility_toDisplay =
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
              outC->vtarget_permColor_toDisplay =
                last_vtarget_permColor_toDisplay;
              outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
              break;
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              if (last_TrainDataWindowVisibility_toDisplay) {
                switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2) {
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->VpermColor_toDisplay =
                      _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                    outC->VreleaseColor_toDisplay =
                      last_trainLoadingGougeIndex_toDisplay;
                    outC->VtargetColor_toDisplay =
                      last_iconGroupIndex_toDisplay;
                    outC->Vtarget_permVisibility_toDisplay =
                      _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                    outC->Vinterv_Visibility_toDisplay =
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                    outC->vtarget_permColor_toDisplay =
                      last_vtarget_permColor_toDisplay;
                    outC->Vinterv_Color_toDisplay =
                      last_Vinterv_Color_toDisplay;
                    break;
                  case RSM_DMI_Types_Pkg :
                    outC->VpermColor_toDisplay =
                      _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM) {
                      outC->VreleaseColor_toDisplay =
                        cCOLOR_MEDIUM_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->VreleaseColor_toDisplay =
                        last_trainLoadingGougeIndex_toDisplay;
                    }
                    outC->VtargetColor_toDisplay =
                      last_iconGroupIndex_toDisplay;
                    outC->Vinterv_Visibility_toDisplay = kcg_false;
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM) {
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                      outC->vtarget_permColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                    }
                    else {
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                      outC->vtarget_permColor_toDisplay =
                        last_vtarget_permColor_toDisplay;
                    }
                    outC->Vinterv_Color_toDisplay =
                      last_Vinterv_Color_toDisplay;
                    break;
                  case TSM_DMI_Types_Pkg :
                    outC->VpermColor_toDisplay =
                      _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->VreleaseColor_toDisplay =
                        cCOLOR_MEDIUM_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->VreleaseColor_toDisplay =
                        last_trainLoadingGougeIndex_toDisplay;
                    }
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->VtargetColor_toDisplay =
                        cCOLOR_DARK_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->VtargetColor_toDisplay =
                        last_iconGroupIndex_toDisplay;
                    }
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                      outC->vtarget_permColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock4) {
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                      outC->vtarget_permColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                    }
                    else {
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                      outC->vtarget_permColor_toDisplay =
                        last_vtarget_permColor_toDisplay;
                    }
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->Vinterv_Visibility_toDisplay = kcg_false;
                      outC->Vinterv_Color_toDisplay =
                        last_Vinterv_Color_toDisplay;
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    outC->VpermColor_toDisplay =
                      _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->VreleaseColor_toDisplay =
                        cCOLOR_MEDIUM_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->VreleaseColor_toDisplay =
                        last_trainLoadingGougeIndex_toDisplay;
                    }
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->VtargetColor_toDisplay =
                        cCOLOR_DARK_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->VtargetColor_toDisplay =
                        last_iconGroupIndex_toDisplay;
                    }
                    if (isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                    }
                    else {
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                    }
                    outC->vtarget_permColor_toDisplay =
                      last_vtarget_permColor_toDisplay;
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4) {
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->Vinterv_Visibility_toDisplay = kcg_false;
                      outC->Vinterv_Color_toDisplay =
                        last_Vinterv_Color_toDisplay;
                    }
                    break;
                  case CSM_DMI_Types_Pkg :
                    outC->VreleaseColor_toDisplay =
                      last_trainLoadingGougeIndex_toDisplay;
                    outC->VtargetColor_toDisplay =
                      last_iconGroupIndex_toDisplay;
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM) {
                      outC->VpermColor_toDisplay =
                        cCOLOR_DARK_GREY_DMI_Control_Pkg;
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                    }
                    else {
                      outC->VpermColor_toDisplay =
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                      outC->Vtarget_permVisibility_toDisplay =
                        _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                    }
                    outC->vtarget_permColor_toDisplay =
                      last_vtarget_permColor_toDisplay;
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM) {
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM_IfBlock1) {
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->Vinterv_Visibility_toDisplay = kcg_false;
                      outC->Vinterv_Color_toDisplay =
                        last_Vinterv_Color_toDisplay;
                    }
                    break;
                  
                }
              }
              else {
                outC->VpermColor_toDisplay =
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                outC->VreleaseColor_toDisplay = 0;
                outC->VtargetColor_toDisplay = 0;
                outC->Vtarget_permVisibility_toDisplay = kcg_false;
                outC->Vinterv_Visibility_toDisplay = kcg_false;
                outC->vtarget_permColor_toDisplay =
                  last_vtarget_permColor_toDisplay;
                outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
              }
              break;
            
          }
          if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
            /* 4 */
            LevelListAdapter_DMI_Control_Pkg_Utils(
              &inC->DMI_evc_level_data,
              &outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init7) {
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[0] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[1] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[2] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[3] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[4] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[5] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[6] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[7] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[8] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[9] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[10] =
              0;
            outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[11] =
              0;
          }
          kcg_copy_array_int_12(
            &outC->ArrayLevelIndex_toDisplay,
            &outC->_L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          break;
        
      }
      break;
    
  }
  if (outC->init6) {
    traindataYesNoIndex_toDisplay = 0;
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
      &last_DMI_level_data,
      (DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMI_Level_data_DMI_Control_Pkg);
    kcg_copy_array_bool_10(
      &last_D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
      (array_bool_10 *) &cD_SPDI_SpeedChangeSymbolsVisible_DMI_Control_Pkg);
    kcg_copy_array_int_10(
      &last_D_SPDI_SpeedChangeIndex_toDisplay,
      (array_int_10 *) &cD_SPDI_SpeedChangeIndex_DMI_Control_Pkg);
    kcg_copy_array_real_10(
      &last_D_SPDI_SpeedChangePosition_toDisplay,
      (array_real_10 *) &cD_SPDI_SpeedChangePosition_DMI_Control_Pkg);
    kcg_copy_array_real_4(
      &last_D_PASP_Distances_toDisplay,
      (array_real_4 *) &cD_PASP_Speeds_DMI_Control_Pkg);
  }
  else {
    traindataYesNoIndex_toDisplay = outC->IndexLevel_toDisplay;
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
      &last_DMI_level_data,
      &outC->DMI_level_data);
    kcg_copy_array_bool_10(
      &last_D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
      &outC->D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
    kcg_copy_array_int_10(
      &last_D_SPDI_SpeedChangeIndex_toDisplay,
      &outC->D_SPDI_SpeedChangeIndex_toDisplay);
    kcg_copy_array_real_10(
      &last_D_SPDI_SpeedChangePosition_toDisplay,
      &outC->D_SPDI_SpeedChangePosition_toDisplay);
    kcg_copy_array_real_4(
      &last_D_PASP_Distances_toDisplay,
      &outC->D_PASP_Speeds_toDisplay);
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
      outC->isAuxiliarMsg_toDisplay = kcg_true;
      kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
        &outC->DMI_level_data,
        &last_DMI_level_data);
      kcg_copy_array_int_5(
        &outC->IndexFixedMsg_toDisplay,
        &default_IndexFixedMsg_toDisplay);
      kcg_copy_array_char_30_5(
        &outC->PlainText_toDisplay,
        (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
      kcg_copy_array_real_5(
        &outC->Array_hh_toDisplay,
        &default_Array_mm_toDisplay);
      kcg_copy_array_real_5(
        &outC->Array_mm_toDisplay,
        &default_Array_mm_toDisplay);
      kcg_copy_array_bool_10(
        &outC->D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
        &last_D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
      kcg_copy_array_int_10(
        &outC->D_SPDI_SpeedChangeIndex_toDisplay,
        &last_D_SPDI_SpeedChangeIndex_toDisplay);
      kcg_copy_array_real_10(
        &outC->D_SPDI_SpeedChangePosition_toDisplay,
        &last_D_SPDI_SpeedChangePosition_toDisplay);
      kcg_copy_array_real_4(
        &outC->D_PASP_Speeds_toDisplay,
        &last_D_PASP_Distances_toDisplay);
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      if (CabinSM_reset_act) {
        /* 1 */ D_behavior_reset(&outC->_1_Context_1);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
          outC->isAuxiliarMsg_toDisplay = kcg_true;
          kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
            &outC->DMI_level_data,
            &last_DMI_level_data);
          kcg_copy_array_int_5(
            &outC->IndexFixedMsg_toDisplay,
            &default_IndexFixedMsg_toDisplay);
          kcg_copy_array_char_30_5(
            &outC->PlainText_toDisplay,
            (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
          kcg_copy_array_real_5(
            &outC->Array_hh_toDisplay,
            &default_Array_mm_toDisplay);
          kcg_copy_array_real_5(
            &outC->Array_mm_toDisplay,
            &default_Array_mm_toDisplay);
          kcg_copy_array_bool_10(
            &outC->D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
            &last_D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
          kcg_copy_array_int_10(
            &outC->D_SPDI_SpeedChangeIndex_toDisplay,
            &last_D_SPDI_SpeedChangeIndex_toDisplay);
          kcg_copy_array_real_10(
            &outC->D_SPDI_SpeedChangePosition_toDisplay,
            &last_D_SPDI_SpeedChangePosition_toDisplay);
          kcg_copy_array_real_4(
            &outC->D_PASP_Speeds_toDisplay,
            &last_D_PASP_Distances_toDisplay);
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
            kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
              &outC->Local_DMI_evc_data_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &inC->DMI_evc_level_data);
          }
          else if (outC->init7) {
            kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
              &outC->Local_DMI_evc_data_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
                &cDMI_evc_Display_List_DMI_Control_Pkg);
          }
          if (outC->init7) {
            kcg_copy_DMI_level_T_DMI_Types_Pkg(
              &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (DMI_level_T_DMI_Types_Pkg *) &cDefLevelT_DMI_Control_Pkg);
          }
          else {
            kcg_copy_DMI_level_T_DMI_Types_Pkg(
              &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          switch (RequestSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              last_LevelSymbolVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              last_LevelSymbolVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              last_LevelSymbolVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              last_LevelSymbolVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_LevelWindow) {
                last_LevelSymbolVisibility_toDisplay = kcg_true;
              }
              else {
                last_LevelSymbolVisibility_toDisplay = kcg_false;
              }
              break;
            
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              tmp11 = kcg_false;
              for (i = 0; i < 12; i++) {
                tmp11 = tmp11 | inC->keypad_fromDisplay[i];
              }
              br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                tmp11 & inC->MousePressed;
              if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN =
                  0;
                for (i = 0; i < 12; i++) {
                  tmp3 =
                    _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN;
                  /* 4 */
                  CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
                    tmp3,
                    inC->keypad_fromDisplay[i],
                    &tmp10,
                    &_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN);
                  last_trainLoadingGougeIndex_toDisplay = i + 1;
                  if (!tmp10) {
                    break;
                  }
                }
                if ((0 <= last_trainLoadingGougeIndex_toDisplay - 1) &
                  (last_trainLoadingGougeIndex_toDisplay - 1 < 32)) {
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &outC->Local_DMI_evc_data_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive.levelList.levelList[last_trainLoadingGougeIndex_toDisplay -
                    1]);
                }
                else {
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    (DMI_level_T_DMI_Types_Pkg *) &cDefLevelT_DMI_Control_Pkg);
                }
                outC->IndexLevel_toDisplay = /* 3 */
                  LevelAdapter_DMI_Control_Pkg_Utils(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
              }
              else {
                outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
                kcg_copy_DMI_level_T_DMI_Types_Pkg(
                  &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                  &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
              }
              tmp17 = kcg_false;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp2 = kcg_false;
                  for (i = 0; i < 12; i++) {
                    tmp2 = tmp2 | inC->keypad_fromDisplay[i];
                  }
                  tmp16 = tmp2 & inC->MousePressed;
                  if (tmp16) {
                    last_iconGroupIndex_toDisplay = 0;
                    for (i = 0; i < 12; i++) {
                      _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN =
                        last_iconGroupIndex_toDisplay;
                      /* 2 */
                      CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
                        _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN,
                        inC->keypad_fromDisplay[i],
                        &tmp1,
                        &last_iconGroupIndex_toDisplay);
                      last_vtarget_permColor_toDisplay = i + 1;
                      if (!tmp1) {
                        break;
                      }
                    }
                    if ((0 <= last_vtarget_permColor_toDisplay - 1) &
                      (last_vtarget_permColor_toDisplay - 1 < 32)) {
                      kcg_copy_DMI_level_T_DMI_Types_Pkg(
                        &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                        &outC->Local_DMI_evc_data_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive.levelList.levelList[last_vtarget_permColor_toDisplay -
                        1]);
                    }
                    else {
                      kcg_copy_DMI_level_T_DMI_Types_Pkg(
                        &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                        (DMI_level_T_DMI_Types_Pkg *)
                          &cDefLevelT_DMI_Control_Pkg);
                    }
                    outC->IndexLevel_toDisplay = /* 1 */
                      LevelAdapter_DMI_Control_Pkg_Utils(
                        &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  }
                  else {
                    outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
                    kcg_copy_DMI_level_T_DMI_Types_Pkg(
                      &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                      &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  }
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
                  kcg_copy_DMI_level_T_DMI_Types_Pkg(
                    &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                    &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
                  break;
                
              }
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  tmp17 = kcg_false;
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_LevelWindow) {
                    tmp17 = kcg_false;
                  }
                  else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController) {
                    tmp17 = kcg_true;
                  }
                  else {
                    tmp17 = kcg_false;
                  }
                  break;
                
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
              kcg_copy_DMI_level_T_DMI_Types_Pkg(
                &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
              tmp17 = kcg_false;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
              kcg_copy_DMI_level_T_DMI_Types_Pkg(
                &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
              tmp17 = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->IndexLevel_toDisplay = traindataYesNoIndex_toDisplay;
              kcg_copy_DMI_level_T_DMI_Types_Pkg(
                &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &last_SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
              tmp17 = kcg_false;
              break;
            
          }
          /* 2 */
          Set_level_data_DMI_Control_Pkg_Sub_func(
            (kcg_bool) (last_LevelSymbolVisibility_toDisplay | tmp17),
            inC->SystemTime,
            &outC->SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->DMI_level_data);
          if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_DriverID) {
            outC->isAuxiliarMsg_toDisplay = kcg_true;
            kcg_copy_array_int_5(
              &outC->IndexFixedMsg_toDisplay,
              &_L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5);
            kcg_copy_array_char_30_5(
              &outC->PlainText_toDisplay,
              &_L6_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5);
            kcg_copy_array_real_5(
              &outC->Array_hh_toDisplay,
              &_L8_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5);
            kcg_copy_array_real_5(
              &outC->Array_mm_toDisplay,
              &_L9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock5);
          }
          else {
            br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow =
              !tmp9;
            if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
              /* 1 */
              ImpMsgManager_DMI_Control_Pkg_Utils(
                &Local_ImpMsgQueue_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &outC->IndexFixedMsg_toDisplay,
                &outC->PlainText_toDisplay,
                &outC->Array_hh_toDisplay,
                &outC->Array_mm_toDisplay,
                &outC->isAuxiliarMsg_toDisplay);
            }
            else {
              outC->isAuxiliarMsg_toDisplay = kcg_true;
              kcg_copy_array_int_5(
                &outC->IndexFixedMsg_toDisplay,
                &default_IndexFixedMsg_toDisplay);
              kcg_copy_array_char_30_5(
                &outC->PlainText_toDisplay,
                (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
              kcg_copy_array_real_5(
                &outC->Array_hh_toDisplay,
                &default_Array_mm_toDisplay);
              kcg_copy_array_real_5(
                &outC->Array_mm_toDisplay,
                &default_Array_mm_toDisplay);
            }
          }
          _18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
            (kcg_real) inC->DMI_dynamic.location_front_train;
          if (inC->Track_Atlas_Information.gradientProfiles.profileChanged) {
            /* 1 */
            Gradient_from_Track_DMI_Control_Pkg_Sub_func(
              &inC->Track_Atlas_Information.gradientProfiles.gradientProfiles,
              &outC->Track_Atlas_Gradient_End_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->Track_Atlas_Gradient_Begin_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->Track_Atlas_Gradient_Value_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init7) {
            kcg_copy_array_real_32(
              &outC->Track_Atlas_Gradient_Value_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_real_32 *) &cDMI_GradientsInit_DMI_Control_Pkg);
            kcg_copy_array_real_32(
              &outC->Track_Atlas_Gradient_End_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_real_32 *) &cDMI_GradientsInit_DMI_Control_Pkg);
            kcg_copy_array_real_32(
              &outC->Track_Atlas_Gradient_Begin_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_real_32 *) &cDMI_GradientsInit_DMI_Control_Pkg);
          }
          if (inC->Track_Atlas_Information.speedProfiles.profileChanged) {
            /* 1 */
            Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func(
              &inC->Track_Atlas_Information.speedProfiles.speedProfiles,
              &outC->Track_Atlas_Loc_LRBG_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->Track_Atlas_MRSP_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init7) {
            kcg_copy_array_real_32(
              &outC->Track_Atlas_Loc_LRBG_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_real_32 *) &cDMI_SpeedProfile_Init_DMI_Control_Pkg);
            kcg_copy_array_real_32(
              &outC->Track_Atlas_MRSP_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_real_32 *) &cDMI_SpeedProfile_Init_DMI_Control_Pkg);
          }
          /* 1 */
          Area_D_DMI_Control_Pkg_Sub_func_PlanningArea(
            _18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM,
            &outC->Track_Atlas_Gradient_Value_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Track_Atlas_Gradient_End_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Track_Atlas_Gradient_Begin_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            (kcg_real) inC->DMI_dynamic.v_permitted,
            &outC->Track_Atlas_Loc_LRBG_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Track_Atlas_MRSP_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &last_D_GradientStartInterpolated_toDisplay,
            &last_D_GradientEndInterpolated_toDisplay,
            &_L512_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM,
            &_L508_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 1 */ D_behavior_reset(&outC->_1_Context_1);
          }
          /* 1 */
          D_behavior(
            inC->MousePressed,
            inC->OverD9_fromDisplay,
            inC->OverD12_frpmDisplay,
            _18_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM,
            &last_D_GradientStartInterpolated_toDisplay,
            &last_D_GradientEndInterpolated_toDisplay,
            &_L512_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM,
            &outC->_1_Context_1);
          kcg_copy_tScale(
            &_L471_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_1_Context_1.Scale);
          kcg_copy_array_real_12(
            &_L472_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_1_Context_1.GradientStartInterpolated);
          kcg_copy_array_real_12(
            &_L473_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_1_Context_1.GradientEndInterpolated);
          kcg_copy_array_bool_12(
            &_L474_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_1_Context_1.GradientVisible);
          kcg_copy_array_real_4(
            &_L475_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->_1_Context_1.PASP_Distances);
          kcg_copy_array_bool_10(
            &outC->D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
            &outC->_1_Context_1.SPDI_SpeedChangeSymbolsVisible);
          kcg_copy_array_int_10(
            &outC->D_SPDI_SpeedChangeIndex_toDisplay,
            &outC->_1_Context_1.SPDI_SpeedChangeIndex);
          kcg_copy_array_real_10(
            &outC->D_SPDI_SpeedChangePosition_toDisplay,
            &outC->_1_Context_1.SPDI_SpeedChangePosition);
          kcg_copy_array_real_4(
            &outC->D_PASP_Speeds_toDisplay,
            &outC->_1_Context_1.PASP_Speeds);
          break;
        
      }
      break;
    
  }
  if (outC->init6) {
    kcg_copy_array_real_4(
      &last_D_PASP_Distances_toDisplay,
      (array_real_4 *) &cD_PASP_Distances_DMI_Control_Pkg);
    kcg_copy_array_bool_12(
      &last_D_GradientVisible_toDisplay,
      (array_bool_12 *) &cD_GradientVisible_DMI_Control_Pkg);
    kcg_copy_array_real_12(
      &last_D_GradientEndInterpolated_toDisplay,
      (array_real_12 *) &cD_GradientStartInterpolated_DMI_Control_Pkg);
    kcg_copy_array_real_12(
      &last_D_GradientStartInterpolated_toDisplay,
      (array_real_12 *) &cD_GradientStartInterpolated_DMI_Control_Pkg);
    kcg_copy_tScale(
      &last_D_Scale_toDisplay,
      (tScale *) &cD_tScale_DMI_Control_Pkg);
    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow =
      kcg_false;
  }
  else {
    kcg_copy_array_real_4(
      &last_D_PASP_Distances_toDisplay,
      &outC->D_PASP_Distances_toDisplay);
    kcg_copy_array_bool_12(
      &last_D_GradientVisible_toDisplay,
      &outC->D_GradientVisible_toDisplay);
    kcg_copy_array_real_12(
      &last_D_GradientEndInterpolated_toDisplay,
      &outC->D_GradientEndInterpolated_toDisplay);
    kcg_copy_array_real_12(
      &last_D_GradientStartInterpolated_toDisplay,
      &outC->D_GradientStartInterpolated_toDisplay);
    kcg_copy_tScale(&last_D_Scale_toDisplay, &outC->D_Scale_toDisplay);
    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow =
      outC->PlanningAreaVisibility_toDisplay;
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      kcg_copy_array_real_4(
        &outC->D_PASP_Distances_toDisplay,
        &last_D_PASP_Distances_toDisplay);
      kcg_copy_array_bool_12(
        &outC->D_GradientVisible_toDisplay,
        &last_D_GradientVisible_toDisplay);
      kcg_copy_array_real_12(
        &outC->D_GradientEndInterpolated_toDisplay,
        &last_D_GradientEndInterpolated_toDisplay);
      kcg_copy_array_real_12(
        &outC->D_GradientStartInterpolated_toDisplay,
        &last_D_GradientStartInterpolated_toDisplay);
      kcg_copy_tScale(&outC->D_Scale_toDisplay, &last_D_Scale_toDisplay);
      outC->PlanningAreaVisibility_toDisplay =
        br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      if (CabinSM_reset_act) {
        /* 1 */
        StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(&outC->Context_1);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          kcg_copy_array_real_4(
            &outC->D_PASP_Distances_toDisplay,
            &last_D_PASP_Distances_toDisplay);
          kcg_copy_array_bool_12(
            &outC->D_GradientVisible_toDisplay,
            &last_D_GradientVisible_toDisplay);
          kcg_copy_array_real_12(
            &outC->D_GradientEndInterpolated_toDisplay,
            &last_D_GradientEndInterpolated_toDisplay);
          kcg_copy_array_real_12(
            &outC->D_GradientStartInterpolated_toDisplay,
            &last_D_GradientStartInterpolated_toDisplay);
          kcg_copy_tScale(&outC->D_Scale_toDisplay, &last_D_Scale_toDisplay);
          outC->PlanningAreaVisibility_toDisplay =
            br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataWindow;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          kcg_copy_array_real_4(
            &outC->D_PASP_Distances_toDisplay,
            &_L475_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_bool_12(
            &outC->D_GradientVisible_toDisplay,
            &_L474_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_real_12(
            &outC->D_GradientEndInterpolated_toDisplay,
            &_L473_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_array_real_12(
            &outC->D_GradientStartInterpolated_toDisplay,
            &_L472_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          kcg_copy_tScale(
            &outC->D_Scale_toDisplay,
            &_L471_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 1 */
            StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(&outC->Context_1);
          }
          if (outC->LocalModeSymbolVisibility_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            last_Vinterv_Color_toDisplay =
              outC->LocalModeSymbolIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          else {
            last_Vinterv_Color_toDisplay = 0;
          }
          /* 1 */
          StatusPlanningArea_DMI_Control_Pkg_Sub_func(
            last_Vinterv_Color_toDisplay,
            inC->HidePlanningArea_fromDisplay,
            inC->ShowPlanningArea_fromDisplay,
            inC->MousePressed,
            &outC->Context_1);
          outC->PlanningAreaVisibility_toDisplay = outC->Context_1.Visibility;
          break;
        
      }
      break;
    
  }
  if (outC->init6) {
    outC->init6 = kcg_false;
    kcg_copy_array_real_12(
      &last_D_GradientEndInterpolated_toDisplay,
      (array_real_12 *) &cD_GradientsValue_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_12(
      &last_D_GradientEndInterpolated_toDisplay,
      &outC->D_GradientsValue_toDisplay);
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      kcg_copy_array_real_12(
        &outC->D_GradientsValue_toDisplay,
        &last_D_GradientEndInterpolated_toDisplay);
      outC->CabinSM_state_nxt = SSM_st_DeskIsClose_CabinSM;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      outC->init = kcg_false;
      outC->CabinSM_state_nxt = SSM_st_DeskIsOpen_CabinSM;
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          kcg_copy_array_real_12(
            &outC->D_GradientsValue_toDisplay,
            &last_D_GradientEndInterpolated_toDisplay);
          outC->HandshakeSM_state_nxt_CabinSM_DeskIsOpen =
            SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          kcg_copy_array_real_12(
            &outC->D_GradientsValue_toDisplay,
            &_L508_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          outC->HandshakeSM_state_nxt_CabinSM_DeskIsOpen =
            SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM;
          switch (YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              outC->YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              break;
            case SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              outC->YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              break;
            
          }
          switch (IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              break;
            
          }
          switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_Insert_TrainRN) {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              else if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              else {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              break;
            case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              if (outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive |
                outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              else {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              break;
            case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              break;
            
          }
          switch (SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            case SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            case SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            
          }
          switch (HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              break;
            case SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              break;
            
          }
          switch (SM11_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11 :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11_TextMsgToBeAck) {
                SM11_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_TextMsgAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
              }
              else {
                SM11_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
              }
              break;
            case SSM_st_TextMsgAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11 :
              SM11_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
              break;
            
          }
          switch (SM11_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11 :
              outC->SM11_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
              break;
            case SSM_st_TextMsgAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11 :
              outC->SM11_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_TextMsgAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
              break;
            
          }
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              break;
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              break;
            
          }
          switch (SM13_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_State36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13 :
              outC->SM13_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_State36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13;
              break;
            case SSM_st_State37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13 :
              switch (SM13_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                case SSM_st_State36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13 :
                  if (_L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Insert_TrainRN) {
                    tmp =
                      SSM_TR_State36_1_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  }
                  else {
                    tmp =
                      SSM_TR_no_trans_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  }
                  break;
                case SSM_st_State37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13 :
                  tmp =
                    SSM_TR_no_trans_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                
              }
              tmp14 = tmp !=
                SSM_TR_no_trans_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              if (tmp14) {
                outC->SM13_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_State37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13;
              }
              else if (tmp8) {
                outC->SM13_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_State37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13;
              }
              else {
                outC->SM13_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_State36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13;
              }
              break;
            
          }
          switch (RequestSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                _L4_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu) {
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  break;
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  break;
                case SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  if (last_ModeSymbolVisibility_toDisplay) {
                    outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  else {
                    outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                      SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  }
                  break;
                case SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu =
                    SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM;
                  break;
                
              }
              outC->init4 = kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM :
              outC->DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              outC->RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM;
              break;
            
          }
          switch (TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              outC->TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              outC->init5 = kcg_false;
              break;
            case SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              outC->TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              break;
            
          }
          outC->init7 = kcg_false;
          break;
        
      }
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_Controller_DMI_Control_Pkg.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

