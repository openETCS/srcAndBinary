/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Postprocessing_TA_Gradient.h"

#ifndef KCG_USER_DEFINED_INIT
void GP_Postprocessing_init_TA_Gradi(outC_GP_Postprocessing_TA_Gradi *outC)
{
  static kcg_int i;
  
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
void GP_Postprocessing_reset_TA_Grad(outC_GP_Postprocessing_TA_Gradi *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_Gradient::GP_Postprocessing */
void GP_Postprocessing_TA_Gradient(
  /* TA_Gradient::GP_Postprocessing::Profile_in */ GradientProfile_t_TrackAtlasTyp *Profile_in,
  /* TA_Gradient::GP_Postprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Gradient::GP_Postprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_Gradient::GP_Postprocessing::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradi *outC)
{
  /* TA_Gradient::GP_Postprocessing */
  static GradientProfile_t_TrackAtlasTyp tmp;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_GradientProfile_t_Trac(
      &tmp,
      (GradientProfile_t_TrackAtlasTyp *) &DEFAULT_GradientProfile_TrackAt);
  }
  else {
    kcg_copy_GradientProfile_t_Trac(&tmp, &outC->rem__L4);
  }
  /* 1 */
  GP_Position_GP_with_BGs_TA_Grad(
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
** GP_Postprocessing_TA_Gradient.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

