/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data */
void CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::dmi_evc_level_data_int */ DMI_EVC_Level_Data_int_array_T_DATA *dmi_evc_level_data_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::dmi_evc_level_data_ct */ DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_level_data_ct)
{
  (*dmi_evc_level_data_ct).system_clock = (*dmi_evc_level_data_int)[1];
  (*dmi_evc_level_data_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_evc_level_data_int)[0]);
  /* 1 */
  CAST_int_to_DMI_LevelList_DATA_Variables(
    (DMI_LevelList_int_array_T_DATA *) &(*dmi_evc_level_data_int)[2],
    &(*dmi_evc_level_data_ct).levelList);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

