/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_OPERATIONAL_to_int_TM_.h"

/* TM_conversions::CAST_NID_OPERATIONAL_to_int */
kcg_int CAST_NID_OPERATIONAL_to_int_TM_(
  /* TM_conversions::CAST_NID_OPERATIONAL_to_int::nid_operational */ NID_OPERATIONAL nid_operational)
{
  /* TM_conversions::CAST_NID_OPERATIONAL_to_int::nid_operational_int */
  static kcg_int nid_operational_int;
  
  nid_operational_int = nid_operational;
  return nid_operational_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_OPERATIONAL_to_int_TM_.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

