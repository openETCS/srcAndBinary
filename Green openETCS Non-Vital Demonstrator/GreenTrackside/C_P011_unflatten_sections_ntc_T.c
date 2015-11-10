/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_unflatten_sections_ntc_T.h"

/* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc */
void C_P011_unflatten_sections_ntc_T(
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc::P011 */ P011_ntc_list_array_T_TM_TrainT *P011,
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc::sections */ P011_ntc_list_TM_TrainToTrack *sections)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 5; i++) {
    (*sections)[i] = /* 1 */ C_P011_us_array_ntc_TM_TrainToT((*P011)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_unflatten_sections_ntc_T.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

