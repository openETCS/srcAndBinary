/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_identifier_DATA_Pa.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier */
void C_int_to_DMI_identifier_DATA_Pa(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::dmi_identifier_int_in */ DMI_Identifier_int_array_T_DATA *dmi_identifier_int_in,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier::dmi_identifier_ct_out */ DMI_Identifier_T_DMI_Messages_D *dmi_identifier_ct_out)
{
  (*dmi_identifier_ct_out).systemTime = (*dmi_identifier_int_in)[1];
  (*dmi_identifier_ct_out).l_name = (*dmi_identifier_int_in)[4];
  (*dmi_identifier_ct_out).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_identifier_int_in)[0]);
  (*dmi_identifier_ct_out).DMI_Identifier = /* 1 */
    CAST_int_to_DMI_DMI_identifier_((*dmi_identifier_int_in)[2]);
  (*dmi_identifier_ct_out).Cabin_Identifier = /* 1 */
    CAST_int_to_DMI_Cabin_identifie((*dmi_identifier_int_in)[3]);
  /* 1 */
  CAST_int_to_DMI_TEXT_DATA_Varia(
    (DMI_TEXT_INT_Array_T_DATA *) &(*dmi_identifier_int_in)[5],
    &(*dmi_identifier_ct_out).DMI_name);
  (*dmi_identifier_ct_out).m_version = /* 1 */
    CAST_Int_to_M_VERSION_TM_conver((*dmi_identifier_int_in)[260]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_identifier_DATA_Pa.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

