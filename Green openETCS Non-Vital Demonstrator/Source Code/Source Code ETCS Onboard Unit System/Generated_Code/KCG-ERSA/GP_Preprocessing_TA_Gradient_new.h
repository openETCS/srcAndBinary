/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:40
*************************************************************$ */
#ifndef _GP_Preprocessing_TA_Gradient_new_H_
#define _GP_Preprocessing_TA_Gradient_new_H_

#include "kcg_types.h"
#include "MoveGPSectionsAbsolute_new_TA_Lib_internal.h"
#include "GP_Convert_P21_to_DistanceProfile_TA_Gradient_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_Gradient_new::GP_Preprocessing */
extern void GP_Preprocessing_TA_Gradient_new(
  /* TA_Gradient_new::GP_Preprocessing::p21 */ P021_OBU_T_TM *p21,
  /* TA_Gradient_new::GP_Preprocessing::reset */ kcg_bool reset,
  /* TA_Gradient_new::GP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient_new::GP_Preprocessing::GP */ GradientProfile_t_TrackAtlasTypes *GP);

#endif /* _GP_Preprocessing_TA_Gradient_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Preprocessing_TA_Gradient_new.h
** Generation date: 2015-11-25T12:17:40
*************************************************************$ */

