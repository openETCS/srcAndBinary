/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_airtightSystem_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_airtightSystem */
void CAST_int_to_DMI_airtightSystem_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::dmi_airtightSystem_int */ DMI_airtightSystem_INT_T_DATA dmi_airtightSystem_int,
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::dmi_airtightSystem_ct */ DMI_airtightSystem_T_DMI_Types_Pkg *dmi_airtightSystem_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L49 */ kcg_int _L49;
  /* DATA::Variables::CAST_int_to_DMI_airtightSystem::_L48 */ kcg_int _L48;
  
  (*dmi_airtightSystem_ct).number = dmi_airtightSystem_int % 10;
  _L49 = dmi_airtightSystem_int / 10;
  (*dmi_airtightSystem_ct).dig1 = _L49 % 10;
  _L48 = _L49 / 10;
  (*dmi_airtightSystem_ct).dig2 = _L48 % 10;
  (*dmi_airtightSystem_ct).dig3 = _L48 / 10 % 10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_airtightSystem_DATA_Variables.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

