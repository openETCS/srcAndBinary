/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_RBC_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_RBC_to_int */
kcg_int CAST_NID_RBC_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_RBC_to_int::nid_rbc */ NID_RBC nid_rbc)
{
  /* TM_conversions::CAST_NID_RBC_to_int::nid_rbc_int */
  static kcg_int nid_rbc_int;
  
  nid_rbc_int = nid_rbc;
  return nid_rbc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_RBC_to_int_TM_conversions.c
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

