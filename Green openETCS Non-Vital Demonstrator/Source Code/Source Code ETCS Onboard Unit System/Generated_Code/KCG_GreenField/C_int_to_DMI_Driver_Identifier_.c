/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Driver_Identifier_.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier */
void C_int_to_DMI_Driver_Identifier_(
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array *dmi_driver_identifier_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::dmi_driver_identifier_ct */ _25_DMI_Driver_Identifier_T_DMI *dmi_driver_identifier_ct)
{
  (*dmi_driver_identifier_ct).systemTime = (*dmi_driver_identifier_int)[1];
  (*dmi_driver_identifier_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_driver_identifier_int)[0]);
  /* 1 */
  CAST_int_to_DriverIdentfier_DAT(
    (DriverIdentifier_INT_T_DATA *) &(*dmi_driver_identifier_int)[2],
    &(*dmi_driver_identifier_ct).driverIdentifier);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Driver_Identifier_.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

