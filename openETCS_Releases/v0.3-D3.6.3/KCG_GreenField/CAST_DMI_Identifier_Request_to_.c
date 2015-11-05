/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Identifier_Request_to_.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int */
void CAST_DMI_Identifier_Request_to_(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::dmi_id_ct */ _26_DMI_Identifier_Request_T_DM *dmi_id_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int::dmi_id_int */ DMI_Identifier_Request_int_arra *dmi_id_int)
{
  (&(&(*dmi_id_int)[0])[0])[1] = (*dmi_id_ct).system_clock;
  (&(&(*dmi_id_int)[0])[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_id_ct).valid);
  (&(&(*dmi_id_int)[0])[0])[2] = /* 1 */
    CAST_M_VERSION_to_int_TM_conver((*dmi_id_ct).ERTMS_Version);
  (&(&(*dmi_id_int)[0])[0])[3] = /* 2 */
    CAST_M_VERSION_to_int_TM_conver((*dmi_id_ct).EVC_Version);
  (&(&(*dmi_id_int)[0])[0])[4] = /* 1 */
    CAST_L_TEXT_to_int_TM_conversio((*dmi_id_ct).l_name);
  /* 1 */
  CAST_DMI_TEXT_to_int_DATA_Varia(
    &(*dmi_id_ct).x_name,
    (DMI_TEXT_INT_Array_T_DATA *) &(&(*dmi_id_int)[0])[5]);
  (&(*dmi_id_int)[260])[0] = /* 2 */
    CAST_L_TEXT_to_int_TM_conversio((*dmi_id_ct).l_extra);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Identifier_Request_to_.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

