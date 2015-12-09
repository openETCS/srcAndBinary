/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Preprocessing_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Preprocessing */
void GP_Preprocessing_TA_Gradient_new(
  /* TA_Gradient_new::GP_Preprocessing::p21 */ P021_OBU_T_TM *p21,
  /* TA_Gradient_new::GP_Preprocessing::reset */ kcg_bool reset,
  /* TA_Gradient_new::GP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient_new::GP_Preprocessing::GP */ GradientProfile_t_TrackAtlasTypes *GP)
{
  /* TA_Gradient_new::GP_Preprocessing */ GradientProfile_t_TrackAtlasTypes tmp;
  
  /* 1 */ GP_Convert_P21_to_DistanceProfile_TA_Gradient_new(p21, &tmp);
  /* 1 */ MoveGPSectionsAbsolute_new_TA_Lib_internal(&tmp, pos_LRBG, GP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Preprocessing_TA_Gradient_new.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

