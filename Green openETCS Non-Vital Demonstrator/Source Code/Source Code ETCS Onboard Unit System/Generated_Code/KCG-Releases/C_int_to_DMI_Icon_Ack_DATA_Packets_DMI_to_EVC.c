/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack */
void C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack::dmi_icon_ack_int */ DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack::dmi_icon_ack_ct */ DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_icon_ack_ct)
{
  (*dmi_icon_ack_ct).systemTime = (*dmi_icon_ack_int)[1];
  (*dmi_icon_ack_ct).DMI_nid_icon_identifier = (*dmi_icon_ack_int)[2];
  (*dmi_icon_ack_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_icon_ack_int)[0]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

