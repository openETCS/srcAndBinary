/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Position_GP_with_BGs_TA_Grad.h"

/* TA_Gradient_new::GP_Position_GP_with_BGs */
void GP_Position_GP_with_BGs_TA_Grad(
  /* TA_Gradient_new::GP_Position_GP_with_BGs::ProfileIn */ GradientProfile_t_TrackAtlasTyp *ProfileIn,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::LastProfile */ GradientProfile_t_TrackAtlasTyp *LastProfile,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::ProfileOut */ GradientProfile_t_TrackAtlasTyp *ProfileOut,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::available */ kcg_bool *available,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::ProfileLoopOut */ GradientProfile_t_TrackAtlasTyp *ProfileLoopOut)
{
  /* TA_Gradient_new::GP_Position_GP_with_BGs */
  static GradientProfile_t_TrackAtlasTyp tmp1;
  /* TA_Gradient_new::GP_Position_GP_with_BGs */
  static GradientProfile_t_TrackAtlasTyp tmp;
  
  /* 1 */ GP_Merge_New_P21_to_Profile_TA_(ProfileIn, LastProfile, &tmp1);
  /* 2 */ GP_Normalize_Profile_TA_Gradien(&tmp1, pos_prvLRBG, &tmp);
  /* 3 */ GP_Truncate_at_BG_TA_Gradient_n(&tmp, ProfileLoopOut);
  /* 1 */ GP_Normalize_Profile_TA_Gradien(&tmp1, pos_LRBG, &tmp);
  /* 2 */ GP_Truncate_at_BG_TA_Gradient_n(&tmp, &tmp1);
  /* 1 */ GP_Correct_StartSection_TA_Grad(&tmp1, pos_LRBG, ProfileOut);
  *available = (*ProfileOut)[0].valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Position_GP_with_BGs_TA_Grad.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

