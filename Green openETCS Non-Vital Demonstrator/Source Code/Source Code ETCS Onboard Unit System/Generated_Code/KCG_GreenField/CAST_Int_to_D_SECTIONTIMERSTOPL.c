/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_SECTIONTIMERSTOPL.h"

/* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC */
D_SECTIONTIMERSTOPLOC CAST_Int_to_D_SECTIONTIMERSTOPL(
  /* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC::d_sectiontimerstoploc_int */ kcg_int d_sectiontimerstoploc_int)
{
  /* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC::d_sectiontimerstoploc */
  static D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  
  d_sectiontimerstoploc = d_sectiontimerstoploc_int;
  return d_sectiontimerstoploc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_SECTIONTIMERSTOPL.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

