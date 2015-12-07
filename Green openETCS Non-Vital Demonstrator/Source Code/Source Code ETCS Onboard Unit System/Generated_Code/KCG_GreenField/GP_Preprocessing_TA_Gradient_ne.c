/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Preprocessing_TA_Gradient_ne.h"

/* TA_Gradient_new::GP_Preprocessing */
void GP_Preprocessing_TA_Gradient_ne(
  /* TA_Gradient_new::GP_Preprocessing::p21 */ P021_OBU_T_TM *p21,
  /* TA_Gradient_new::GP_Preprocessing::reset */ kcg_bool reset,
  /* TA_Gradient_new::GP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Gradient_new::GP_Preprocessing::GP */ GradientProfile_t_TrackAtlasTyp *GP)
{
  /* TA_Gradient_new::GP_Preprocessing */
  static GradientProfile_t_TrackAtlasTyp tmp;
  
  /* 1 */ _207_GP_Convert_P21_to_Distance(p21, &tmp);
  /* 1 */ MoveGPSectionsAbsolute_new_TA_L(&tmp, pos_LRBG, GP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Preprocessing_TA_Gradient_ne.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

