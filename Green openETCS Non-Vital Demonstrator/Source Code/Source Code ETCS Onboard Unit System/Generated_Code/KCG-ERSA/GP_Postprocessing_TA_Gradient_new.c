/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Postprocessing_TA_Gradient_new.h"

#ifndef KCG_USER_DEFINED_INIT
void GP_Postprocessing_init_TA_Gradient_new(
  outC_GP_Postprocessing_TA_Gradient_new *outC)
{
  kcg_int i;
  
  outC->available = kcg_true;
  outC->init = kcg_true;
  for (i = 0; i < 50; i++) {
    outC->rem__L4[i].valid = kcg_true;
    outC->rem__L4[i].Loc_Absolute = 0;
    outC->rem__L4[i].Loc_LRBG = 0;
    outC->rem__L4[i].Gradient = 0;
    outC->rem__L4[i].L_Gradient = 0;
    outC->GP[i].valid = kcg_true;
    outC->GP[i].Loc_Absolute = 0;
    outC->GP[i].Loc_LRBG = 0;
    outC->GP[i].Gradient = 0;
    outC->GP[i].L_Gradient = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Postprocessing_reset_TA_Gradient_new(
  outC_GP_Postprocessing_TA_Gradient_new *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_Gradient_new::GP_Postprocessing */
void GP_Postprocessing_TA_Gradient_new(
  /* TA_Gradient_new::GP_Postprocessing::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient_new::GP_Postprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient_new::GP_Postprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient_new::GP_Postprocessing::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradient_new *outC)
{
  /* TA_Gradient_new::GP_Postprocessing */ GradientProfile_t_TrackAtlasTypes tmp;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &tmp,
      (GradientProfile_t_TrackAtlasTypes *)
        &DEFAULT_GradientProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, &outC->rem__L4);
  }
  /* 1 */
  GP_Position_GP_with_BGs_TA_Gradient_new(
    Profile_in,
    pos_LRBG,
    pos_prvLRBG,
    there_is_prvLRBG,
    &tmp,
    &outC->GP,
    &outC->available,
    &outC->rem__L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Postprocessing_TA_Gradient_new.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

