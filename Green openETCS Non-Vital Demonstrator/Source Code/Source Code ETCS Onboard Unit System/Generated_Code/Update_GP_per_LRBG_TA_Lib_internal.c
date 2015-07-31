/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_GP_per_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Update_GP_per_LRBG */
void Update_GP_per_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Update_GP_per_LRBG::new_GP */GradientProfile_t_TrackAtlasTypes *new_GP,
  /* TA_Lib_internal::Update_GP_per_LRBG::Last_GradientProfile_in */GradientProfile_t_TrackAtlasTypes *Last_GradientProfile_in,
  /* TA_Lib_internal::Update_GP_per_LRBG::GradientdProfile_out */GradientProfile_t_TrackAtlasTypes *GradientdProfile_out)
{
  static GradientProfile_t_TrackAtlasTypes tmp;
  static kcg_int i;
  /* TA_Lib_internal::Update_GP_per_LRBG::_L1 */
  static kcg_int _L1;
  
  _L1 = /* 1 */
    FindStartOfNewGradientProfile_TA_Lib_internal(
      Last_GradientProfile_in,
      new_GP);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    GradientdProfile_out,
    Last_GradientProfile_in);
  for (i = 0; i < 33; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, GradientdProfile_out);
    /* 1 */
    Update_GP_per_LRBG_loop_TA_Lib_internal(
      i,
      &tmp,
      _L1,
      new_GP,
      GradientdProfile_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_GP_per_LRBG_TA_Lib_internal.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

