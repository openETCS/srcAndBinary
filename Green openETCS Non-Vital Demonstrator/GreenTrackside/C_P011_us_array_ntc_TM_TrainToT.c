/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_us_array_ntc_TM_TrainToT.h"

/* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc */
NID_NTC C_P011_us_array_ntc_TM_TrainToT(
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc::flat */ kcg_int flat)
{
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc::sections */
  static NID_NTC sections;
  
  sections = /* 1 */ CAST_Int_to_NID_NTC_TM_conversi(flat);
  return sections;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_us_array_ntc_TM_TrainToT.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

