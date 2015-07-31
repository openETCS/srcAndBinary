/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_GP_then_LRBG_TA_Gradient.h"

/* TA_Gradient::Update_GP_then_LRBG */
void Update_GP_then_LRBG_TA_Gradient(
  /* TA_Gradient::Update_GP_then_LRBG::GP_in */GradientProfile_t_TrackAtlasTypes *GP_in,
  /* TA_Gradient::Update_GP_then_LRBG::P27V1_in */P021_OBU_T_TM *P27V1_in,
  /* TA_Gradient::Update_GP_then_LRBG::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  /* TA_Gradient::Update_GP_then_LRBG::new_profile_out */GradientProfile_t_TrackAtlasTypes *new_profile_out)
{
  static GradientProfile_t_TrackAtlasTypes tmp1;
  static GradientProfile_t_TrackAtlasTypes tmp;
  
  /* 1 */ Convert_P21_to_DistanceProfile_TA_Gradient(P27V1_in, &tmp);
  /* 1 */ Update_GP_per_LRBG_TA_Lib_internal(&tmp, GP_in, &tmp1);
  /* 1 */
  MoveGPSectionsToNewLRBGafter_TA_Lib_internal(
    &tmp1,
    (*TrainPosition_in).LRBG.location.nominal -
    (*TrainPosition_in).prvLRBG.location.nominal,
    new_profile_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_GP_then_LRBG_TA_Gradient.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

