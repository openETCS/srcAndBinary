/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Postprocessing_TA_SSP_new.h"

#ifndef KCG_USER_DEFINED_INIT
void SSP_Postprocessing_init_TA_SSP_new(
  outC_SSP_Postprocessing_TA_SSP_new *outC)
{
  kcg_int i;
  
  outC->available = kcg_true;
  outC->init = kcg_true;
  for (i = 0; i < 50; i++) {
    outC->rem__L4[i].valid = kcg_true;
    outC->rem__L4[i].d_static_abs = 0;
    outC->rem__L4[i].d_static_LRBG = 0;
    outC->rem__L4[i].q_train_length_corr = kcg_true;
    outC->rem__L4[i].v_static = 0;
    outC->SSP[i].valid = kcg_true;
    outC->SSP[i].d_static_abs = 0;
    outC->SSP[i].d_static_LRBG = 0;
    outC->SSP[i].q_train_length_corr = kcg_true;
    outC->SSP[i].v_static = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Postprocessing_reset_TA_SSP_new(
  outC_SSP_Postprocessing_TA_SSP_new *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_SSP_new::SSP_Postprocessing */
void SSP_Postprocessing_TA_SSP_new(
  /* TA_SSP_new::SSP_Postprocessing::Profile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP_new::SSP_Postprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP_new::SSP_Postprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP_new::SSP_Postprocessing::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_SSP_new::SSP_Postprocessing::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Postprocessing_TA_SSP_new *outC)
{
  /* TA_SSP_new::SSP_Postprocessing */ StaticSpeedProfile_t_TrackAtlasTypes tmp;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &tmp,
      (StaticSpeedProfile_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, &outC->rem__L4);
  }
  /* 1 */
  SSP_Position_SSP_with_BGs_TA_SSP_new(
    Profile_in,
    pos_LRBG,
    pos_prvLRBG,
    there_is_prvLRBG,
    train_length,
    &tmp,
    &outC->SSP,
    &outC->available,
    &outC->rem__L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Postprocessing_TA_SSP_new.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

