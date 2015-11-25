/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:10
*************************************************************$ */
#ifndef _GP_Postprocessing_TA_Gradient_new_H_
#define _GP_Postprocessing_TA_Gradient_new_H_

#include "kcg_types.h"
#include "GP_Position_GP_with_BGs_TA_Gradient_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Gradient_new::GP_Postprocessing::available */ available;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient_new::GP_Postprocessing::GP */ GP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient_new::GP_Postprocessing::_L4 */ rem__L4;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_GP_Postprocessing_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Postprocessing */
extern void GP_Postprocessing_TA_Gradient_new(
  /* TA_Gradient_new::GP_Postprocessing::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient_new::GP_Postprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient_new::GP_Postprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient_new::GP_Postprocessing::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Postprocessing_reset_TA_Gradient_new(
  outC_GP_Postprocessing_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Postprocessing_init_TA_Gradient_new(
  outC_GP_Postprocessing_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _GP_Postprocessing_TA_Gradient_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Postprocessing_TA_Gradient_new.h
** Generation date: 2015-11-25T14:46:10
*************************************************************$ */

