/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Cabin_identifier_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_Cabin_identifier_to_int */
kcg_int CAST_DMI_Cabin_identifier_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::dmi_cabin_identifier_ct */ DMI_Cabin_Identifier_T_DMI_Types_Pkg dmi_cabin_identifier_ct)
{
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::dmi_cabin_identifier_int */ kcg_int dmi_cabin_identifier_int;
  
  IfBlock1_clock = dmi_cabin_identifier_ct ==
    ENUM_DMI_Cabin_Identifier_T_cabin_A;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    dmi_cabin_identifier_int = INT_DMI_Cabin_Identifier_T_cabin_A;
  }
  else {
    else_clock_IfBlock1 = dmi_cabin_identifier_ct ==
      ENUM_DMI_Cabin_Identifier_T_cabin_B;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      dmi_cabin_identifier_int = INT_DMI_Cabin_Identifier_T_cabin_B;
    }
    else {
      dmi_cabin_identifier_int = INT_DMI_Cabin_Identifier_T_cabin_A;
    }
  }
  return dmi_cabin_identifier_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Cabin_identifier_to_int_DATA_Variables.c
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

