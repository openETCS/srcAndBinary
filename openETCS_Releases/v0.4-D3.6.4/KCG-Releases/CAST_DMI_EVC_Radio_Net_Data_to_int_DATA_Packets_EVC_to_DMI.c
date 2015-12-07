/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int */
void CAST_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::dmi_evc_radio_net_data_ct */ DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_radio_net_data_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::dmi_evc_radio_net_data_int */ DMI_EVC_Radio_Net_Data_int_array_T_DATA *dmi_evc_radio_net_data_int)
{
  (*dmi_evc_radio_net_data_int)[1] = (*dmi_evc_radio_net_data_ct).system_clock;
  (*dmi_evc_radio_net_data_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_evc_radio_net_data_ct).valid);
  (*dmi_evc_radio_net_data_int)[2] = /* 1 */
    CAST_NID_MN_to_int_TM_conversions((*dmi_evc_radio_net_data_ct).nid_mn);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */
