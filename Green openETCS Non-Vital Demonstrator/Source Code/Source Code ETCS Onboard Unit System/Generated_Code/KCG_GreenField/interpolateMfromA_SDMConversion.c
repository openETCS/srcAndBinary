/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "interpolateMfromA_SDMConversion.h"

/* SDMConversionModelPkg::interpolateMfromA */
A_internal_Type_Obu_BasicTypes_ interpolateMfromA_SDMConversion(
  /* SDMConversionModelPkg::interpolateMfromA::a */ A_internal_Type_Obu_BasicTypes_ a,
  /* SDMConversionModelPkg::interpolateMfromA::a12 */ A_internal_Type_Obu_BasicTypes_ a12,
  /* SDMConversionModelPkg::interpolateMfromA::a23 */ A_internal_Type_Obu_BasicTypes_ a23,
  /* SDMConversionModelPkg::interpolateMfromA::m12 */ A_internal_Type_Obu_BasicTypes_ m12,
  /* SDMConversionModelPkg::interpolateMfromA::m23 */ A_internal_Type_Obu_BasicTypes_ m23)
{
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* SDMConversionModelPkg::interpolateMfromA::m */
  static A_internal_Type_Obu_BasicTypes_ m;
  
  IfBlock1_clock = a <= a12;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m = m12;
  }
  else {
    else_clock_IfBlock1 = a23 <= a;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      m = m23;
    }
    else {
      m = m12 + (m23 - m12) * (a - a12) / (a23 - a12);
    }
  }
  return m;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** interpolateMfromA_SDMConversion.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

