/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_NTC_TM_conversi.h"

/* TM_conversions::CAST_Int_to_NID_NTC */
NID_NTC CAST_Int_to_NID_NTC_TM_conversi(
  /* TM_conversions::CAST_Int_to_NID_NTC::nid_ntc_int */ kcg_int nid_ntc_int)
{
  /* TM_conversions::CAST_Int_to_NID_NTC::nid_ntc */
  static NID_NTC nid_ntc;
  
  nid_ntc = nid_ntc_int;
  return nid_ntc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_NTC_TM_conversi.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

