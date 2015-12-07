/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Preprocessing_TA_SSP_new.h"

/* TA_SSP_new::SSP_Preprocessing */
void SSP_Preprocessing_TA_SSP_new(
  /* TA_SSP_new::SSP_Preprocessing::p27v1 */ P027V1_OBU_T_TM_baseline2 *p27v1,
  /* TA_SSP_new::SSP_Preprocessing::reset */ kcg_bool reset,
  /* TA_SSP_new::SSP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_SSP_new::SSP_Preprocessing::SSP */ StaticSpeedProfile_t_TrackAtlas *SSP)
{
  /* TA_SSP_new::SSP_Preprocessing */
  static StaticSpeedProfile_t_TrackAtlas tmp;
  
  /* 1 */ _209_SSP_Convert_P27V1_to_Dista(p27v1, &tmp);
  /* 1 */ MoveSSPSectionsAbsolute_new_TA_(&tmp, pos_LRBG, SSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Preprocessing_TA_SSP_new.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

