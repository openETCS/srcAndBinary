/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int */
void CAST_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int::dmi_evc_level_data_ct */ DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_level_data_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int::dmi_evc_level_data_int */ DMI_EVC_Level_Data_int_array_T_DATA *dmi_evc_level_data_int)
{
  (&(*dmi_evc_level_data_int)[0])[1] = (*dmi_evc_level_data_ct).system_clock;
  (&(*dmi_evc_level_data_int)[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_evc_level_data_ct).valid);
  /* 1 */
  CAST_DMI_LevelList_to_int_DATA_Variables(
    &(*dmi_evc_level_data_ct).levelList,
    (DMI_LevelList_int_array_T_DATA *) &(*dmi_evc_level_data_int)[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

