/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_brakeModel_id_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_brakeModel_id */
void CAST_int_to_DMI_brakeModel_id_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::dmi_brakeModel_id_int */ DMI_brakeModel_id_INT_T_DATA dmi_brakeModel_id_int,
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::dmi_brakeModel_id_ct */ DMI_brakeModel_id_T_DMI_Types_Pkg *dmi_brakeModel_id_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L50 */ kcg_int _L50;
  /* DATA::Variables::CAST_int_to_DMI_brakeModel_id::_L46 */ kcg_int _L46;
  
  (*dmi_brakeModel_id_ct).number = dmi_brakeModel_id_int % 10;
  _L46 = dmi_brakeModel_id_int / 10;
  (*dmi_brakeModel_id_ct).dig1 = _L46 % 10;
  _L50 = _L46 / 10;
  (*dmi_brakeModel_id_ct).dig2 = _L50 % 10;
  (*dmi_brakeModel_id_ct).dig3 = _L50 / 10 % 10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_brakeModel_id_DATA_Variables.c
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

