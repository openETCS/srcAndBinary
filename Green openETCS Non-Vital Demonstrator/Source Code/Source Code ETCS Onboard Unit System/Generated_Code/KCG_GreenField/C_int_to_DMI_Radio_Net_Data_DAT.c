/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Radio_Net_Data_DAT.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data */
void C_int_to_DMI_Radio_Net_Data_DAT(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_int */ DMI_Radio_Net_Data_int_array_T_ *dmi_radio_net_data_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_ct */ DMI_Radio_Net_Data_T_DMI_Messag *dmi_radio_net_data_ct)
{
  (*dmi_radio_net_data_ct).systemTime = (*dmi_radio_net_data_int)[1];
  (*dmi_radio_net_data_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_radio_net_data_int)[0]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Radio_Net_Data_DAT.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

