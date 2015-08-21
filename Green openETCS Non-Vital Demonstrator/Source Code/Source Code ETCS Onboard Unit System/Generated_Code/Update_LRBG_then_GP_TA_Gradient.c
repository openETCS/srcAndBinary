/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_LRBG_then_GP_TA_Gradient.h"

/* TA_Gradient::Update_LRBG_then_GP */
void Update_LRBG_then_GP_TA_Gradient(
  /* TA_Gradient::Update_LRBG_then_GP::GP_in */GradientProfile_t_TrackAtlasTypes *GP_in,
  /* TA_Gradient::Update_LRBG_then_GP::P21_in */P021_OBU_T_TM *P21_in,
  /* TA_Gradient::Update_LRBG_then_GP::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  /* TA_Gradient::Update_LRBG_then_GP::new_profile_out */GradientProfile_t_TrackAtlasTypes *new_profile_out)
{
  static GradientProfile_t_TrackAtlasTypes tmp1;
  static GradientProfile_t_TrackAtlasTypes tmp;
  
  /* 1 */ Convert_P21_to_DistanceProfile_TA_Gradient(P21_in, &tmp1);
  /* 1 */
  MoveGPSectionsToNewLRBGafter_TA_Lib_internal(
    GP_in,
    (*TrainPosition_in).LRBG.location.nominal -
    (*TrainPosition_in).prvLRBG.location.nominal,
    &tmp);
  /* 1 */ Update_GP_per_LRBG_TA_Lib_internal(&tmp1, &tmp, new_profile_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_then_GP_TA_Gradient.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

