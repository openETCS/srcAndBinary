/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_train_length_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_train_length */
void CAST_int_to_DMI_train_length_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_train_length::dmi_train_length_int */ DMI_train_length_INT_T_DATA dmi_train_length_int,
  /* DATA::Variables::CAST_int_to_DMI_train_length::dmi_train_length_ct */ DMI_train_length_T_DMI_Types_Pkg *dmi_train_length_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L52 */ kcg_int _L52;
  /* DATA::Variables::CAST_int_to_DMI_train_length::_L48 */ kcg_int _L48;
  
  (*dmi_train_length_ct).number = dmi_train_length_int % 10;
  _L48 = dmi_train_length_int / 10;
  (*dmi_train_length_ct).dig1 = _L48 % 10;
  _L52 = _L48 / 10;
  (*dmi_train_length_ct).dig2 = _L52 % 10;
  _L48 = _L52 / 10;
  (*dmi_train_length_ct).dig3 = _L48 % 10;
  (*dmi_train_length_ct).dig4 = _L48 / 10 % 10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_train_length_DATA_Variables.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

