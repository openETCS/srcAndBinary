/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int */
void Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int::dmi_radio_net_data_ct */ DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_radio_net_data_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int::dmi_radio_net_data_int */ DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int)
{
  /* ck__L19 */ if ((*dmi_radio_net_data_ct).valid) {
    /* 1 */
    C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(
      dmi_radio_net_data_ct,
      dmi_radio_net_data_int);
  }
  else {
    kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(
      dmi_radio_net_data_int,
      (DMI_Radio_Net_Data_int_array_T_DATA *)
        &cDMI_Radio_Net_Data_int_array_DATA_Packets_DMI_to_EVC);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

