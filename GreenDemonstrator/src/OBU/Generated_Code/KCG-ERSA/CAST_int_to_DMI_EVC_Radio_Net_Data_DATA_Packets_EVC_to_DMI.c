/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data */
void CAST_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::dmi_evc_radio_net_data_int */ DMI_EVC_Radio_Net_Data_int_array_T_DATA *dmi_evc_radio_net_data_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::dmi_evc_radio_net_data_ct */ DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_radio_net_data_ct)
{
  (*dmi_evc_radio_net_data_ct).system_clock = (*dmi_evc_radio_net_data_int)[1];
  (*dmi_evc_radio_net_data_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_evc_radio_net_data_int)[0]);
  (*dmi_evc_radio_net_data_ct).nid_mn = /* 1 */
    CAST_Int_to_NID_MN_TM_conversions((*dmi_evc_radio_net_data_int)[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

