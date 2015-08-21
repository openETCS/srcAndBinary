/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _Update_GP_only_TA_Gradient_H_
#define _Update_GP_only_TA_Gradient_H_

#include "kcg_types.h"
#include "Convert_P21_to_DistanceProfile_TA_Gradient.h"
#include "Update_GP_per_LRBG_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */


/* TA_Gradient::Update_GP_only */
extern void Update_GP_only_TA_Gradient(
  /* TA_Gradient::Update_GP_only::GP_in */GradientProfile_t_TrackAtlasTypes *GP_in,
  /* TA_Gradient::Update_GP_only::P21_in */P021_OBU_T_TM *P21_in,
  /* TA_Gradient::Update_GP_only::new_profile_out */GradientProfile_t_TrackAtlasTypes *new_profile_out);

#endif /* _Update_GP_only_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_GP_only_TA_Gradient.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

