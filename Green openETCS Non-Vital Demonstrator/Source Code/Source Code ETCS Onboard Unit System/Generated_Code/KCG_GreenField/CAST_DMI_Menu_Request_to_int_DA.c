/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Menu_Request_to_int_DA.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int */
void CAST_DMI_Menu_Request_to_int_DA(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::dmi_menu_request_ct */ DMI_Menu_Request_T_DMI_Messages *dmi_menu_request_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::dmi_menu_request_int */ DMI_Menu_Request_int_array_T_DA *dmi_menu_request_int)
{
  (*dmi_menu_request_int)[1] = (*dmi_menu_request_ct).system_clock;
  (*dmi_menu_request_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_menu_request_ct).valid);
  (*dmi_menu_request_int)[2] = /* 1 */
    CAST_DMI_Available_Menu_to_int_(&(*dmi_menu_request_ct).available_menu);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Menu_Request_to_int_DA.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

