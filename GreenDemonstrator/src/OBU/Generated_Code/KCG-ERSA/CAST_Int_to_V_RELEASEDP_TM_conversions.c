/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_RELEASEDP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_RELEASEDP */
V_RELEASEDP CAST_Int_to_V_RELEASEDP_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_RELEASEDP::v_releasedp_int */ kcg_int v_releasedp_int)
{
  /* TM_conversions::CAST_Int_to_V_RELEASEDP::v_releasedp */ V_RELEASEDP v_releasedp;
  
  v_releasedp = v_releasedp_int * 5;
  return v_releasedp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_RELEASEDP_TM_conversions.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

