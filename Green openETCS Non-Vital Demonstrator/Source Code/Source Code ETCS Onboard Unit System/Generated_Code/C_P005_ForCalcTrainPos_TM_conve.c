/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_ForCalcTrainPos_TM_conve.h"

/* TM_conversions::C_P005_ForCalcTrainPos */
void C_P005_ForCalcTrainPos_TM_conve(
  /* TM_conversions::C_P005_ForCalcTrainPos::P005_in */ P005_OBU_T_TM *P005_in,
  /* TM_conversions::C_P005_ForCalcTrainPos::LRBG */ NID_LRBG LRBG,
  /* TM_conversions::C_P005_ForCalcTrainPos::NID_C_onboard */ NID_C NID_C_onboard,
  /* TM_conversions::C_P005_ForCalcTrainPos::LinkedBGsOUT */ LinkedBGs_T_BG_Types_Pkg *LinkedBGsOUT)
{
  static kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    C_P005_LinkedBGs_TM_conversions(
      LRBG,
      (*P005_in).q_dir,
      (*P005_in).q_scale,
      &(*P005_in).sections[i + 0],
      NID_C_onboard,
      &(*LinkedBGsOUT)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_ForCalcTrainPos_TM_conve.c
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

