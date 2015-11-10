/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_RBC_to_int_TM_conversi.h"

/* TM_conversions::CAST_NID_RBC_to_int */
kcg_int CAST_NID_RBC_to_int_TM_conversi(
  /* TM_conversions::CAST_NID_RBC_to_int::nid_rbc */ NID_RBC nid_rbc)
{
  /* TM_conversions::CAST_NID_RBC_to_int::nid_rbc_int */
  static kcg_int nid_rbc_int;
  
  nid_rbc_int = nid_rbc;
  return nid_rbc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_RBC_to_int_TM_conversi.c
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

