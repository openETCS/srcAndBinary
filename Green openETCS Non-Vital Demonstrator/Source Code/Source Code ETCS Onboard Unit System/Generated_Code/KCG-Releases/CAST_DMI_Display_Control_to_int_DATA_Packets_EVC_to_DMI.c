/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Display_Control_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Display_Control_to_int */
void CAST_DMI_Display_Control_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Display_Control_to_int::dmi_display_control_ct */ DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_display_control_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Display_Control_to_int::dmi_display_control_int */ DMI_Display_Control_int_array_T_DATA *dmi_display_control_int)
{
  (*dmi_display_control_int)[2] = (*dmi_display_control_ct).system_clock;
  (*dmi_display_control_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_display_control_ct).valid);
  (*dmi_display_control_int)[1] = /* 2 */
    Bool_to_Int_Utilities((*dmi_display_control_ct).cab_is_active);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Display_Control_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

