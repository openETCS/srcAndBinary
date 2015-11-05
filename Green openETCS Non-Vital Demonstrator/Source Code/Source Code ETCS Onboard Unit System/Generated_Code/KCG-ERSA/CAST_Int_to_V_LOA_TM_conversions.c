/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_LOA_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_LOA */
V_LOA CAST_Int_to_V_LOA_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_LOA::v_loa_int */ kcg_int v_loa_int)
{
  /* TM_conversions::CAST_Int_to_V_LOA::v_loa */
  static V_LOA v_loa;
  
  v_loa = v_loa_int * 5;
  return v_loa;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_LOA_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

