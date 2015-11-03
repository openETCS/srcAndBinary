/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int */
kcg_int N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::n_total */ N_TOTAL n_total)
{
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::n_total2int */
  static kcg_int n_total2int;
  
  switch (n_total) {
    case N_TOTAL_1_balise_in_the_group :
      n_total2int = 1;
      break;
    case N_TOTAL_2_balises_in_the_group :
      n_total2int = 2;
      break;
    case N_TOTAL_3_balises_in_the_group :
      n_total2int = 3;
      break;
    case N_TOTAL_4_balises_in_the_group :
      n_total2int = 4;
      break;
    case N_TOTAL_5_balises_in_the_group :
      n_total2int = 5;
      break;
    case N_TOTAL_6_balises_in_the_group :
      n_total2int = 6;
      break;
    case N_TOTAL_7_balises_in_the_group :
      n_total2int = 7;
      break;
    case N_TOTAL_8_balises_in_the_group :
      n_total2int = 8;
      break;
    
  }
  return n_total2int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

