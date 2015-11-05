/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Position_GP_with_BGs_TA_Gradient.h"

/* TA_Gradient::GP_Position_GP_with_BGs */
void GP_Position_GP_with_BGs_TA_Gradient(
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::LastProfile */ GradientProfile_t_TrackAtlasTypes *LastProfile,
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileOut */ GradientProfile_t_TrackAtlasTypes *ProfileOut,
  /* TA_Gradient::GP_Position_GP_with_BGs::available */ kcg_bool *available,
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileLoopOut */ GradientProfile_t_TrackAtlasTypes *ProfileLoopOut)
{
  /* TA_Gradient::GP_Position_GP_with_BGs */
  static GradientProfile_t_TrackAtlasTypes tmp1;
  /* TA_Gradient::GP_Position_GP_with_BGs */
  static GradientProfile_t_TrackAtlasTypes tmp;
  
  /* 1 */
  GP_Merge_New_P21_to_Profile_TA_Gradient(ProfileIn, LastProfile, &tmp1);
  /* 2 */ GP_Normalize_Profile_TA_Gradient(&tmp1, pos_prvLRBG, &tmp);
  /* 3 */ GP_Truncate_at_BG_TA_Gradient(&tmp, ProfileLoopOut);
  /* 1 */ GP_Normalize_Profile_TA_Gradient(&tmp1, pos_LRBG, &tmp);
  /* 2 */ GP_Truncate_at_BG_TA_Gradient(&tmp, &tmp1);
  /* 1 */ GP_Correct_StartSection_TA_Gradient(&tmp1, pos_LRBG, ProfileOut);
  *available = (*ProfileOut)[0].valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Position_GP_with_BGs_TA_Gradient.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

