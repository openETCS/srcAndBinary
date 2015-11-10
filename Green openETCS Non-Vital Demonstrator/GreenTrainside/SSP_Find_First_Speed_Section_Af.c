/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Find_First_Speed_Section_Af.h"

/* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop */
void SSP_Find_First_Speed_Section_Af(
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Acc */ kcg_int Acc,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Profile_in */ StaticSpeedProfile_t_TrackAtlas *Profile_in,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::cont */ kcg_bool *cont,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Pointer */ kcg_int *Pointer)
{
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop */
  static StaticSpeedSection_t_TrackAtlas tmp;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L13 */
  static kcg_int _L13;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_T(&tmp, &(*Profile_in)[i]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_T(
      &tmp,
      (StaticSpeedSection_t_TrackAtlas *) &DEFAULT_StaticSpeedSection_Trac);
  }
  *cont = tmp.d_static_LRBG < 0;
  _L13 = i - 1;
  /* 1 */ if (_L13 < 0) {
    *Pointer = 0;
  }
  else {
    *Pointer = _L13;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Find_First_Speed_Section_Af.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

