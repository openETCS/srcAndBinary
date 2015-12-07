/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "N_PIG2int_CheckBGConsistency_Pk.h"

/* CheckBGConsistency_Pkg::SubFunction::N_PIG2int */
kcg_int N_PIG2int_CheckBGConsistency_Pk(
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig */ N_PIG n_pig)
{
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig2int */
  static kcg_int n_pig2int;
  
  switch (n_pig) {
    case N_PIG_I_am_the_1st :
      n_pig2int = 1;
      break;
    case N_PIG_I_am_the_2nd :
      n_pig2int = 2;
      break;
    case N_PIG_I_am_the_3rd :
      n_pig2int = 3;
      break;
    case N_PIG_I_am_the_4th :
      n_pig2int = 4;
      break;
    case N_PIG_I_am_the_5th :
      n_pig2int = 5;
      break;
    case N_PIG_I_am_the_6th :
      n_pig2int = 6;
      break;
    case N_PIG_I_am_the_7th :
      n_pig2int = 7;
      break;
    case N_PIG_I_am_the_8th :
      n_pig2int = 8;
      break;
    
  }
  return n_pig2int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** N_PIG2int_CheckBGConsistency_Pk.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

