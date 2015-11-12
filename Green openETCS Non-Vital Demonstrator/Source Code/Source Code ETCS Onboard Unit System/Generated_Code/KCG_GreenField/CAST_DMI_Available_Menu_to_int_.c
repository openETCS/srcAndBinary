/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Available_Menu_to_int_.h"

/* DATA::Variables::CAST_DMI_Available_Menu_to_int */
DMI_Available_Menu_INT_T_DATA CAST_DMI_Available_Menu_to_int_(
  /* DATA::Variables::CAST_DMI_Available_Menu_to_int::dmi_available_menu_ct */ DMI_Available_Menu_T_DMI_Types_ *dmi_available_menu_ct)
{
  /* DATA::Variables::CAST_DMI_Available_Menu_to_int */
  static array_bool_30 tmp;
  /* DATA::Variables::CAST_DMI_Available_Menu_to_int::dmi_available_menu_int */
  static DMI_Available_Menu_INT_T_DATA dmi_available_menu_int;
  
  tmp[0] = (*dmi_available_menu_ct).Menu_button_start_of_mission;
  tmp[1] = (*dmi_available_menu_ct).Menu_button_shunting;
  tmp[2] = (*dmi_available_menu_ct).Menu_button_shunting_exit;
  tmp[3] = (*dmi_available_menu_ct).Menu_button_non_leading;
  tmp[4] = (*dmi_available_menu_ct).Menu_button_exit_non_leading;
  tmp[5] = (*dmi_available_menu_ct).Menu_button_maintain_shunting;
  tmp[6] = (*dmi_available_menu_ct).Menu_button_driver_ID;
  tmp[7] = (*dmi_available_menu_ct).Menu_button_train_running_numbe;
  tmp[8] = (*dmi_available_menu_ct).Menu_button_ETCS_level;
  tmp[9] = (*dmi_available_menu_ct).Menu_button_train_data_modifica;
  tmp[10] = (*dmi_available_menu_ct).Menu_button_train_data_view;
  tmp[11] = (*dmi_available_menu_ct).Menu_button_staff_responsible_d;
  tmp[12] = (*dmi_available_menu_ct).Menu_button_language_selection;
  tmp[13] = (*dmi_available_menu_ct).Menu_button_override_EOA;
  tmp[14] = (*dmi_available_menu_ct).Menu_button_override_route_suit;
  tmp[15] = (*dmi_available_menu_ct).Menu_button_adhesion_factor;
  tmp[16] = (*dmi_available_menu_ct).Menu_button_system_version;
  tmp[17] = (*dmi_available_menu_ct).Menu_button_volume;
  tmp[18] = (*dmi_available_menu_ct).Menu_button_luminance;
  tmp[19] = (*dmi_available_menu_ct).Menu_button_train_integrity;
  tmp[20] = (*dmi_available_menu_ct).Menu_button_isolation;
  tmp[21] = (*dmi_available_menu_ct).Show_hourglass;
  tmp[22] = (*dmi_available_menu_ct).Menu_button_use_short_number;
  tmp[23] = (*dmi_available_menu_ct).Menu_button_enter_RBC_data;
  tmp[24] = (*dmi_available_menu_ct).Menu_button_radio_network_ID;
  tmp[25] = (*dmi_available_menu_ct).Menu_button_contact_last_RBC;
  tmp[26] = (*dmi_available_menu_ct).Button_switch_for_train_data;
  tmp[27] = (*dmi_available_menu_ct).Fix_train_data_entry;
  tmp[28] = (*dmi_available_menu_ct).Menu_button_Set_VBC;
  tmp[29] = (*dmi_available_menu_ct).Menu_button_Remove_VBC;
  dmi_available_menu_int = /* 1 */ BoolVect2Int_digital_30(&tmp);
  return dmi_available_menu_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Available_Menu_to_int_.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

