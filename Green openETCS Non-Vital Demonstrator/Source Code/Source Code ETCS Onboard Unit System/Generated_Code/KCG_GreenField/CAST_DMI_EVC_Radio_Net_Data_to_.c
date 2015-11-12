/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Radio_Net_Data_to_.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int */
void CAST_DMI_EVC_Radio_Net_Data_to_(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::dmi_evc_radio_net_data_ct */ _27_DMI_EVC_Radio_Net_Data_T_DM *dmi_evc_radio_net_data_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::dmi_evc_radio_net_data_int */ DMI_EVC_Radio_Net_Data_int_arra *dmi_evc_radio_net_data_int)
{
  (*dmi_evc_radio_net_data_int)[1] = (*dmi_evc_radio_net_data_ct).system_clock;
  (*dmi_evc_radio_net_data_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_evc_radio_net_data_ct).valid);
  (*dmi_evc_radio_net_data_int)[2] = /* 1 */
    CAST_NID_MN_to_int_TM_conversio((*dmi_evc_radio_net_data_ct).nid_mn);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_EVC_Radio_Net_Data_to_.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

