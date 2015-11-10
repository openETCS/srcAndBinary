/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Driver_Identifier_to_int1.h"

/* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1 */
void C_DMI_Driver_Identifier_to_int1(
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::dmi_driver_identifier_ct */ _26_DMI_Driver_Identifier_T_DMI *dmi_driver_identifier_ct,
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array *dmi_driver_identifier_int)
{
  (&(*dmi_driver_identifier_int)[0])[1] =
    (*dmi_driver_identifier_ct).systemTime;
  (&(*dmi_driver_identifier_int)[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_driver_identifier_ct).valid);
  /* 1 */
  CAST_DriverIdentfier_to_int_DAT(
    &(*dmi_driver_identifier_ct).driverIdentifier,
    (DriverIdentifier_INT_T_DATA *) &(*dmi_driver_identifier_int)[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Driver_Identifier_to_int1.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

