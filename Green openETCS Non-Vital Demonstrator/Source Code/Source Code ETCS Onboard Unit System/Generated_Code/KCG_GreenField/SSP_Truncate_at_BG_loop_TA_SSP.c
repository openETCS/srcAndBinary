/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Truncate_at_BG_loop_TA_SSP.h"

/* TA_SSP::SSP_Truncate_at_BG_loop */
void SSP_Truncate_at_BG_loop_TA_SSP(
  /* TA_SSP::SSP_Truncate_at_BG_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Acc */ StaticSpeedProfile_t_TrackAtlas *Acc,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Profile_in */ StaticSpeedProfile_t_TrackAtlas *Profile_in,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Pointer */ kcg_int Pointer,
  /* TA_SSP::SSP_Truncate_at_BG_loop::cont */ kcg_bool *cont,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Profile_out */ StaticSpeedProfile_t_TrackAtlas *Profile_out)
{
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L8 */
  static StaticSpeedSection_t_TrackAtlas _L8;
  
  if ((0 <= i + Pointer) & (i + Pointer < 50)) {
    kcg_copy_StaticSpeedSection_t_T(&_L8, &(*Profile_in)[i + Pointer]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_T(
      &_L8,
      (StaticSpeedSection_t_TrackAtlas *) &DEFAULT_StaticSpeedSection_Trac);
  }
  kcg_copy_StaticSpeedProfile_t_T(Profile_out, Acc);
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_T(&(*Profile_out)[i], &_L8);
  }
  *cont = _L8.valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Truncate_at_BG_loop_TA_SSP.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

