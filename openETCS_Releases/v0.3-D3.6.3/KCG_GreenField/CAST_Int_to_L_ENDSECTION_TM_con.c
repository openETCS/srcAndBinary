/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_ENDSECTION_TM_con.h"

/* TM_conversions::CAST_Int_to_L_ENDSECTION */
L_ENDSECTION CAST_Int_to_L_ENDSECTION_TM_con(
  /* TM_conversions::CAST_Int_to_L_ENDSECTION::l_endsection_int */ kcg_int l_endsection_int)
{
  /* TM_conversions::CAST_Int_to_L_ENDSECTION::l_endsection */
  static L_ENDSECTION l_endsection;
  
  l_endsection = l_endsection_int;
  return l_endsection;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_ENDSECTION_TM_con.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

