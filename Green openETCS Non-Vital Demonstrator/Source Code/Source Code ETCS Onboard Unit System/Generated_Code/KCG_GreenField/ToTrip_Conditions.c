/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToTrip_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToTrip_init_Conditions(outC_ToTrip_Conditions *outC)
{
  outC->Condition2Trip = kcg_true;
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToTrip_reset_Conditions(outC_ToTrip_Conditions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToTrip */
void ToTrip_Conditions(
  /* Conditions::ToTrip::BG_In_Expected_List_In_SH */ kcg_bool BG_In_Expected_List_In_SH,
  /* Conditions::ToTrip::BG_In_Expected_List_In_SR */ kcg_bool BG_In_Expected_List_In_SR,
  /* Conditions::ToTrip::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToTrip::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Conditions::ToTrip::Driver_Select_SH */ kcg_bool Driver_Select_SH,
  /* Conditions::ToTrip::Emergency_Stop_Message_Received */ kcg_bool Emergency_Stop_Message_Received,
  /* Conditions::ToTrip::Error_BG_System_Version */ kcg_bool Error_BG_System_Version,
  /* Conditions::ToTrip::Estimated_Front_End_Overpass_SR_Distance */ kcg_bool Estimated_Front_End_Overpass_SR,
  /* Conditions::ToTrip::Estimated_Front_End_Rear_Location_SSP_Or_Gradient */ kcg_bool Estimated_Front_End_Rear_Locati,
  /* Conditions::ToTrip::Interface_To_National_System */ kcg_bool Interface_To_National_System,
  /* Conditions::ToTrip::Linked_BG_Pased_In_Wrong_Direction */ kcg_bool Linked_BG_Pased_In_Wrong_Direct,
  /* Conditions::ToTrip::Linking_Reaction_To_Trip */ kcg_bool Linking_Reaction_To_Trip,
  /* Conditions::ToTrip::List_BG_Related_To_SR_Empty */ kcg_bool List_BG_Related_To_SR_Empty,
  /* Conditions::ToTrip::MA_Available */ kcg_bool MA_Available,
  /* Conditions::ToTrip::National_Trip_Order */ kcg_bool National_Trip_Order,
  /* Conditions::ToTrip::Override_Function_Active */ kcg_bool Override_Function_Active,
  /* Conditions::ToTrip::Override_Function_Former_Active */ kcg_bool Override_Function_Former_Active,
  /* Conditions::ToTrip::Stop_If_In_Shunting */ kcg_bool Stop_If_In_Shunting,
  /* Conditions::ToTrip::Stop_If_In_SR */ kcg_bool Stop_If_In_SR,
  /* Conditions::ToTrip::T_NVCONTACT_Overpass */ kcg_bool T_NVCONTACT_Overpass,
  /* Conditions::ToTrip::Train_Overpass_EOA_Antenna */ kcg_bool Train_Overpass_EOA_Antenna,
  /* Conditions::ToTrip::Train_Overpass_EOA_Front_End */ kcg_bool Train_Overpass_EOA_Front_End,
  /* Conditions::ToTrip::Train_Overpass_Former_EOA_Antenna */ kcg_bool Train_Overpass_Former_EOA_Anten,
  /* Conditions::ToTrip::Trip_Order_Given_By_Balise */ kcg_bool Trip_Order_Given_By_Balise,
  /* Conditions::ToTrip::TripModeFromLevel */ kcg_bool TripModeFromLevel,
  outC_ToTrip_Conditions *outC)
{
  /* Conditions::ToTrip::Mode_FS_LS_OS */
  static kcg_bool Mode_FS_LS_OS;
  /* Conditions::ToTrip::Mode_SR */
  static kcg_bool Mode_SR;
  /* Conditions::ToTrip::Mode_SN */
  static kcg_bool Mode_SN;
  /* Conditions::ToTrip::Mode_SH */
  static kcg_bool Mode_SH;
  /* Conditions::ToTrip::Level_L1_L2_L3 */
  static kcg_bool Level_L1_L2_L3;
  /* Conditions::ToTrip::Level_L1 */
  static kcg_bool Level_L1;
  /* Conditions::ToTrip::_L45 */
  static kcg_bool _L45;
  /* Conditions::ToTrip::_L49 */
  static kcg_bool _L49;
  /* Conditions::ToTrip::_L156 */
  static M_LEVEL _L156;
  /* Conditions::ToTrip::_L193 */
  static kcg_bool _L193;
  /* Conditions::ToTrip::_L201 */
  static kcg_bool _L201;
  
  _L45 = !Override_Function_Active;
  _L49 = !BG_In_Expected_List_In_SR;
  Mode_FS_LS_OS = (Current_Mode == FS_Level_And_Mode_Types_Pkg) |
    (Current_Mode == LS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
      OS_Level_And_Mode_Types_Pkg);
  Mode_SR = Current_Mode == SR_Level_And_Mode_Types_Pkg;
  Mode_SN = Current_Mode == SN_Level_And_Mode_Types_Pkg;
  Mode_SH = Current_Mode == SH_Level_And_Mode_Types_Pkg;
  _L193 = Mode_SN | (Current_Mode == UN_Level_And_Mode_Types_Pkg);
  _L201 = Mode_FS_LS_OS | Mode_SR;
  Level_L1 = Current_Level == M_LEVEL_Level_1;
  Level_L1_L2_L3 = Level_L1 | (Current_Level == M_LEVEL_Level_2) |
    (Current_Level == M_LEVEL_Level_3);
  /* last_init_ck_Current_Level */ if (outC->init) {
    outC->init = kcg_false;
    _L156 = M_LEVEL_Level_0;
  }
  else {
    _L156 = outC->rem_Current_Level;
  }
  outC->Condition2Trip = (Train_Overpass_EOA_Antenna & Level_L1 &
      Mode_FS_LS_OS) | (Train_Overpass_EOA_Front_End & ((Current_Level ==
          M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3)) &
      Mode_FS_LS_OS) | (Linking_Reaction_To_Trip & Mode_FS_LS_OS) | (_L45 &
      Trip_Order_Given_By_Balise & _L201) | (Emergency_Stop_Message_Received &
      !Mode_SH) | (Driver_Select_SH & Interface_To_National_System &
      National_Trip_Order & Mode_SN) | (_L49 & _L45 & Mode_SR) |
    (!(Current_Level == M_LEVEL_Level_NTC_specified_by_) & (_L156 ==
        Current_Level) & Interface_To_National_System & National_Trip_Order &
      Mode_SN) | ((Level_L1_L2_L3 & ((_L156 == M_LEVEL_Level_0) | (_L156 ==
            M_LEVEL_Level_NTC_specified_by_)) & !MA_Available & _L193) |
      TripModeFromLevel) | (T_NVCONTACT_Overpass & Mode_FS_LS_OS) |
    (Estimated_Front_End_Overpass_SR & _L45 & Mode_SR) |
    (Train_Overpass_Former_EOA_Anten & Override_Function_Former_Active & _L45 &
      Mode_SR) | (Stop_If_In_Shunting & _L45 & Mode_SH) |
    (!BG_In_Expected_List_In_SH & _L45 & Mode_SH) | (Stop_If_In_SR &
      (List_BG_Related_To_SR_Empty | _L49) & _L45 & Mode_SR) |
    (Error_BG_System_Version & Level_L1_L2_L3 & (Mode_FS_LS_OS | Mode_SH |
        Mode_SR)) | (Linked_BG_Pased_In_Wrong_Direct & _L201) | (Level_L1 &
      Level_L1_L2_L3 & Trip_Order_Given_By_Balise & !National_Trip_Order &
      _L193) | (Estimated_Front_End_Rear_Locati & _L201);
  outC->rem_Current_Level = Current_Level;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToTrip_Conditions.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

