/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Radio_Net_Data.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data */
void Write_int_to_DMI_Radio_Net_Data(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_int */ DMI_Radio_Net_Data_int_array_T_ *dmi_radio_net_data_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_ct */ DMI_Radio_Net_Data_T_DMI_Messag *dmi_radio_net_data_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::_L9 */
  static kcg_bool _L9;
  
  _L9 = 1 == (*dmi_radio_net_data_int)[0];
  /* ck__L9 */ if (_L9) {
    /* 1 */
    C_int_to_DMI_Radio_Net_Data_DAT(
      dmi_radio_net_data_int,
      dmi_radio_net_data_ct);
  }
  else {
    kcg_copy_DMI_Radio_Net_Data_T_D(
      dmi_radio_net_data_ct,
      (DMI_Radio_Net_Data_T_DMI_Messag *) &cDMI_Radio_Net_Data_DATA_Packet);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Radio_Net_Data.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

