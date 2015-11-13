/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_RBC_TM_conversi.h"

/* TM_conversions::CAST_Int_to_NID_RBC */
NID_RBC CAST_Int_to_NID_RBC_TM_conversi(
  /* TM_conversions::CAST_Int_to_NID_RBC::nid_rbc_int */ kcg_int nid_rbc_int)
{
  /* TM_conversions::CAST_Int_to_NID_RBC::nid_rbc */
  static NID_RBC nid_rbc;
  
  nid_rbc = nid_rbc_int;
  return nid_rbc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_RBC_TM_conversi.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

