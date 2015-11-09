/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_RBC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_RBC */
NID_RBC CAST_Int_to_NID_RBC_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_RBC::nid_rbc_int */kcg_int nid_rbc_int)
{
  /* TM_conversions::CAST_Int_to_NID_RBC::nid_rbc */
  static NID_RBC nid_rbc;
  
  nid_rbc = nid_rbc_int;
  return nid_rbc;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_RBC_TM_conversions.c
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

