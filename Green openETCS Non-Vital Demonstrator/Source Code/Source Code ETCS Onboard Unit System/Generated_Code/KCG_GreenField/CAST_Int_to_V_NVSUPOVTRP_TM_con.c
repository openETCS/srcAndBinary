/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVSUPOVTRP_TM_con.h"

/* TM_conversions::CAST_Int_to_V_NVSUPOVTRP */
V_NVSUPOVTRP CAST_Int_to_V_NVSUPOVTRP_TM_con(
  /* TM_conversions::CAST_Int_to_V_NVSUPOVTRP::v_nvsupovtrp_int */ kcg_int v_nvsupovtrp_int)
{
  /* TM_conversions::CAST_Int_to_V_NVSUPOVTRP::v_nvsupovtrp */
  static V_NVSUPOVTRP v_nvsupovtrp;
  
  v_nvsupovtrp = v_nvsupovtrp_int * 5;
  return v_nvsupovtrp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_NVSUPOVTRP_TM_con.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

