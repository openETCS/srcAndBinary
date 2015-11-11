/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */
#ifndef _GP_Position_GP_with_BGs_TA_Gra
#define _GP_Position_GP_with_BGs_TA_Gra

#include "kcg_types.h"
#include "GP_Merge_New_P21_to_Profile_TA_.h"
#include "GP_Normalize_Profile_TA_Gradien.h"
#include "GP_Truncate_at_BG_TA_Gradient.h"
#include "GP_Correct_StartSection_TA_Grad.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_Gradient::GP_Position_GP_with_BGs */
extern void GP_Position_GP_with_BGs_TA_Grad(
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileIn */ GradientProfile_t_TrackAtlasTyp *ProfileIn,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::LastProfile */ GradientProfile_t_TrackAtlasTyp *LastProfile,
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileOut */ GradientProfile_t_TrackAtlasTyp *ProfileOut,
  /* TA_Gradient::GP_Position_GP_with_BGs::available */ kcg_bool *available,
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileLoopOut */ GradientProfile_t_TrackAtlasTyp *ProfileLoopOut);

#endif /* _GP_Position_GP_with_BGs_TA_Gra */
/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Position_GP_with_BGs_TA_Grad.h
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

