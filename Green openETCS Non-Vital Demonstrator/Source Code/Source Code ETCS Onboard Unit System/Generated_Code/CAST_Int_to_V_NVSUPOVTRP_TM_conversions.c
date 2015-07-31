/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVSUPOVTRP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVSUPOVTRP */
V_NVSUPOVTRP CAST_Int_to_V_NVSUPOVTRP_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVSUPOVTRP::v_nvsupovtrp_int */kcg_int v_nvsupovtrp_int)
{
  /* TM_conversions::CAST_Int_to_V_NVSUPOVTRP::v_nvsupovtrp */
  static V_NVSUPOVTRP v_nvsupovtrp;
  
  v_nvsupovtrp = v_nvsupovtrp_int * 5;
  return v_nvsupovtrp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_NVSUPOVTRP_TM_conversions.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

