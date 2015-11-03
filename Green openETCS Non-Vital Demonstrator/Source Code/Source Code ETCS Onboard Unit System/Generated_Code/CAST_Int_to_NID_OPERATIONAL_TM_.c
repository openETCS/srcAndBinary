/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_OPERATIONAL_TM_.h"

/* TM_conversions::CAST_Int_to_NID_OPERATIONAL */
NID_OPERATIONAL CAST_Int_to_NID_OPERATIONAL_TM_(
  /* TM_conversions::CAST_Int_to_NID_OPERATIONAL::nid_operational_int */ kcg_int nid_operational_int)
{
  /* TM_conversions::CAST_Int_to_NID_OPERATIONAL::nid_operational */
  static NID_OPERATIONAL nid_operational;
  
  nid_operational = nid_operational_int;
  return nid_operational;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_OPERATIONAL_TM_.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

