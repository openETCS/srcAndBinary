/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */
#ifndef _GP_Position_GP_with_BGs_TA_Gradient_new_H_
#define _GP_Position_GP_with_BGs_TA_Gradient_new_H_

#include "kcg_types.h"
#include "GP_Merge_New_P21_to_Profile_TA_Gradient_new.h"
#include "GP_Normalize_Profile_TA_Gradient_new.h"
#include "GP_Truncate_at_BG_TA_Gradient_new.h"
#include "GP_Correct_StartSection_TA_Gradient_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_Gradient_new::GP_Position_GP_with_BGs */
extern void GP_Position_GP_with_BGs_TA_Gradient_new(
  /* TA_Gradient_new::GP_Position_GP_with_BGs::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::LastProfile */ GradientProfile_t_TrackAtlasTypes *LastProfile,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::ProfileOut */ GradientProfile_t_TrackAtlasTypes *ProfileOut,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::available */ kcg_bool *available,
  /* TA_Gradient_new::GP_Position_GP_with_BGs::ProfileLoopOut */ GradientProfile_t_TrackAtlasTypes *ProfileLoopOut);

#endif /* _GP_Position_GP_with_BGs_TA_Gradient_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Position_GP_with_BGs_TA_Gradient_new.h
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

