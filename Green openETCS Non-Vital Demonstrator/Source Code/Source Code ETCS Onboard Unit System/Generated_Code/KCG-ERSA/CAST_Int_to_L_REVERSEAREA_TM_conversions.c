/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
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
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

