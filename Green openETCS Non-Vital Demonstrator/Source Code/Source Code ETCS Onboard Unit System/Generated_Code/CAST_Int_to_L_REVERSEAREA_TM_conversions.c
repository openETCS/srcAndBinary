/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_REVERSEAREA_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_REVERSEAREA */
L_REVERSEAREA CAST_Int_to_L_REVERSEAREA_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_REVERSEAREA::l_reversearea_int */ kcg_int l_reversearea_int)
{
  /* TM_conversions::CAST_Int_to_L_REVERSEAREA::l_reversearea */
  static L_REVERSEAREA l_reversearea;
  
  l_reversearea = l_reversearea_int;
  return l_reversearea;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_REVERSEAREA_TM_conversions.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

