/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_EM_TM_conversio.h"

/* TM_conversions::CAST_Int_to_NID_EM */
NID_EM CAST_Int_to_NID_EM_TM_conversio(
  /* TM_conversions::CAST_Int_to_NID_EM::nid_em_int */ kcg_int nid_em_int)
{
  /* TM_conversions::CAST_Int_to_NID_EM::nid_em */
  static NID_EM nid_em;
  
  nid_em = nid_em_int;
  return nid_em;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_EM_TM_conversio.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

