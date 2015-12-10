/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Preprocessing_TA_SSP_new.h"

/* TA_SSP_new::SSP_Preprocessing */
void SSP_Preprocessing_TA_SSP_new(
  /* TA_SSP_new::SSP_Preprocessing::p27v1 */ P027V1_OBU_T_TM_baseline2 *p27v1,
  /* TA_SSP_new::SSP_Preprocessing::reset */ kcg_bool reset,
  /* TA_SSP_new::SSP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP_new::SSP_Preprocessing::SSP */ StaticSpeedProfile_t_TrackAtlasTypes *SSP)
{
  /* TA_SSP_new::SSP_Preprocessing */ StaticSpeedProfile_t_TrackAtlasTypes tmp;
  
  /* 1 */ SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new(p27v1, &tmp);
  /* 1 */ MoveSSPSectionsAbsolute_new_TA_Lib_internal(&tmp, pos_LRBG, SSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Preprocessing_TA_SSP_new.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

