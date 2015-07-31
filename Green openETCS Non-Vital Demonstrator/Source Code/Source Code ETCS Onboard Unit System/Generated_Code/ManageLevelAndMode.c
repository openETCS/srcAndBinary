/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevelAndMode.h"

void ManageLevelAndMode_reset(outC_ManageLevelAndMode *outC)
{
  /* 1 */ ManageModes_reset(&outC->Context_1);
  /* 1 */ ManageLevels_reset(&outC->_1_Context_1);
}

/* ManageLevelAndMode */
void ManageLevelAndMode(
  /* ManageLevelAndMode::Data_From_DMI */DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* ManageLevelAndMode::Data_From_Localisation */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* ManageLevelAndMode::Data_From_TIU */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* ManageLevelAndMode::Data_From_Track_Messages */T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* ManageLevelAndMode::Data_From_Track_Packets */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* ManageLevelAndMode::Data_From_Speed_and_Supervision */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* ManageLevelAndMode::Cab_In */T_Cab_Level_And_Mode_Types_Pkg Cab_In,
  /* ManageLevelAndMode::Continue_Shunting_Function_Active_In */kcg_bool Continue_Shunting_Function_Active_In,
  /* ManageLevelAndMode::driver_level_transition_In */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* ManageLevelAndMode::Error_BG_System_Version */kcg_bool Error_BG_System_Version,
  /* ManageLevelAndMode::Failure_Occured_In */kcg_bool Failure_Occured_In,
  /* ManageLevelAndMode::Interface_To_National_System_In */kcg_bool Interface_To_National_System_In,
  /* ManageLevelAndMode::Linking_Reaction_To_Trip */kcg_bool Linking_Reaction_To_Trip,
  /* ManageLevelAndMode::National_Trip_Order_In */kcg_bool National_Trip_Order_In,
  /* ManageLevelAndMode::OnBoard_Powered_In */kcg_bool OnBoard_Powered_In,
  /* ManageLevelAndMode::Stop_Shunting_Stored_In */kcg_bool Stop_Shunting_Stored_In,
  /* ManageLevelAndMode::Trip_Order_Given_By_Balise */kcg_bool Trip_Order_Given_By_Balise,
  /* ManageLevelAndMode::Valid_Train_Data_Stored_In */kcg_bool Valid_Train_Data_Stored_In,
  /* ManageLevelAndMode::ERTMS_capabilities_In */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  outC_ManageLevelAndMode *outC)
{
  static kcg_bool tmp;
  /* ManageLevelAndMode::Loc_Level_To_Apply */
  static M_LEVEL Loc_Level_To_Apply;
  /* ManageLevelAndMode::Loc_Mode_To_Apply */
  static T_Mode_Level_And_Mode_Types_Pkg Loc_Mode_To_Apply;
  /* ManageLevelAndMode::_L5 */
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _L5;
  /* ManageLevelAndMode::_L4 */
  static T_Data_To_DMI_Level_And_Mode_Types_Pkg _L4;
  /* ManageLevelAndMode::_L3 */
  static kcg_bool _L3;
  /* ManageLevelAndMode::_L2 */
  static kcg_bool _L2;
  /* ManageLevelAndMode::_L12 */
  static kcg_bool _L12;
  /* ManageLevelAndMode::_L11 */
  static kcg_bool _L11;
  /* ManageLevelAndMode::_L10 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L10;
  /* ManageLevelAndMode::_L9 */
  static kcg_bool _L9;
  /* ManageLevelAndMode::_L8 */
  static M_LEVEL _L8;
  /* ManageLevelAndMode::_L7 */
  static kcg_bool _L7;
  /* ManageLevelAndMode::_L26 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L26;
  /* ManageLevelAndMode::_L27 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L27;
  /* ManageLevelAndMode::_L30 */
  static kcg_int _L30;
  /* ManageLevelAndMode::_L31 */
  static kcg_int _L31;
  /* ManageLevelAndMode::_L33 */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _L33;
  /* ManageLevelAndMode::_L37 */
  static T_Cab_Level_And_Mode_Types_Pkg _L37;
  /* ManageLevelAndMode::_L38 */
  static kcg_bool _L38;
  /* ManageLevelAndMode::_L40 */
  static T_Data_From_DMI_Level_And_Mode_Types_Pkg _L40;
  /* ManageLevelAndMode::_L41 */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _L41;
  /* ManageLevelAndMode::_L42 */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _L42;
  /* ManageLevelAndMode::_L43 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L43;
  /* ManageLevelAndMode::_L44 */
  static T_Data_From_Track_Level_And_Mode_Types_Pkg _L44;
  /* ManageLevelAndMode::_L45 */
  static kcg_bool _L45;
  /* ManageLevelAndMode::_L46 */
  static kcg_bool _L46;
  /* ManageLevelAndMode::_L47 */
  static kcg_bool _L47;
  /* ManageLevelAndMode::_L48 */
  static kcg_bool _L48;
  /* ManageLevelAndMode::_L49 */
  static kcg_bool _L49;
  
  /* 1 */
  Input(
    Data_From_DMI,
    Data_From_Localisation,
    Data_From_TIU,
    Data_From_Track_Messages,
    Data_From_Track_Packets,
    Data_From_Speed_and_Supervision,
    Cab_In,
    Continue_Shunting_Function_Active_In,
    driver_level_transition_In,
    Error_BG_System_Version,
    Failure_Occured_In,
    Interface_To_National_System_In,
    Linking_Reaction_To_Trip,
    National_Trip_Order_In,
    OnBoard_Powered_In,
    Stop_Shunting_Stored_In,
    Trip_Order_Given_By_Balise,
    Valid_Train_Data_Stored_In,
    ERTMS_capabilities_In,
    &_L3,
    &_L26,
    &_L27,
    &_L10,
    &_L2,
    &_L30,
    &_L31,
    &_L12,
    &_L33,
    &_L11,
    &_L9,
    &_L7,
    &_L37,
    &_L38,
    &_L40,
    &_L41,
    &_L42,
    &_L43,
    &_L44,
    &_L45,
    &_L46,
    &_L47,
    &_L48,
    &_L49,
    &tmp);
  /* 1 */
  ManageLevels(
    _L3,
    &_L26,
    &_L27,
    &_L10,
    _L2,
    _L30,
    _L31,
    _L12,
    &_L33,
    _L11,
    _L9,
    _L7,
    &outC->_1_Context_1);
  Loc_Level_To_Apply = outC->_1_Context_1.next_level;
  _L7 = outC->_1_Context_1.TripTrain;
  _L8 = outC->_1_Context_1.previous_level;
  _L9 = outC->_1_Context_1.needsAckFromDriver;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L10,
    &outC->_1_Context_1.announced_level);
  _L11 = outC->_1_Context_1.announce_driver_selection;
  _L12 = outC->_1_Context_1.service_brake;
  /* 1 */
  ManageModes(
    Loc_Level_To_Apply,
    _L37,
    _L38,
    &_L40,
    &_L41,
    &_L42,
    &_L43,
    &_L44,
    _L45,
    _L46,
    _L47,
    _L48,
    _L49,
    tmp,
    &outC->Context_1);
  Loc_Mode_To_Apply = outC->Context_1.currentMode;
  _L2 = outC->Context_1.EB_Requested;
  _L3 = outC->Context_1.Service_Brake_Command;
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
    &_L4,
    &outC->Context_1.Data_To_DMI);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &_L5,
    &outC->Context_1.Data_To_BG_Management);
  tmp = /* 1 */ CheckLevelAndMode(Loc_Level_To_Apply, Loc_Mode_To_Apply);
  /* 1 */
  Output(
    Loc_Level_To_Apply,
    _L7,
    _L8,
    _L9,
    &_L10,
    _L11,
    _L12,
    Loc_Mode_To_Apply,
    _L2,
    _L3,
    &_L4,
    &_L5,
    tmp,
    &outC->Valid_Mode_And_Level,
    &outC->Data_To_DMI,
    &outC->Data_To_BG_Management,
    &outC->Service_Brake_Command,
    &outC->EB_Requested);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageLevelAndMode.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

