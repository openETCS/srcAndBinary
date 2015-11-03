/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Icons_to_int_DATA_Pack.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int */
void CAST_DMI_Icons_to_int_DATA_Pack(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::dmi_icons_ct */ DMI_Icons_T_DMI_Messages_EVC_to *dmi_icons_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::dmi_icons_int */ DMI_Icons_int_array_T_DATA *dmi_icons_int)
{
  (*dmi_icons_int)[1] = (*dmi_icons_ct).system_clock;
  (*dmi_icons_int)[5] = (*dmi_icons_ct).DMI_nid_icon_rank;
  (*dmi_icons_int)[7] = (*dmi_icons_ct).DMI_nid_area_rank;
  (*dmi_icons_int)[8] = (*dmi_icons_ct).DMI_nid_icon_identifier;
  (*dmi_icons_int)[0] = /* 1 */ Bool_to_Int_Utilities((*dmi_icons_ct).valid);
  (*dmi_icons_int)[2] = /* 2 */
    CAST_Icon_control_flag_to_int_D((*dmi_icons_ct).DMI_m_icon_control_flag);
  (*dmi_icons_int)[3] = /* 2 */
    CAST_DMI_m_icon_flashing_freq_t((*dmi_icons_ct).DMI_m_icon_flashing_freq);
  (*dmi_icons_int)[4] = /* 1 */
    CAST_Icon_group_to_int_DATA_Var((*dmi_icons_ct).DMI_nid_icon_group);
  (*dmi_icons_int)[6] = /* 1 */
    CAST_Area_group_to_int_DATA_Var((*dmi_icons_ct).DMI_nid_area_group);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Icons_to_int_DATA_Pack.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

