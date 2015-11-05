/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _GP_Postprocessing_TA_Gradient_
#define _GP_Postprocessing_TA_Gradient_

#include "kcg_types.h"
#include "GP_Position_GP_with_BGs_TA_Grad.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Gradient::GP_Postprocessing::available */ available;
  GradientProfile_t_TrackAtlasTyp /* TA_Gradient::GP_Postprocessing::GP */ GP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  GradientProfile_t_TrackAtlasTyp /* TA_Gradient::GP_Postprocessing::_L4 */ rem__L4;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_GP_Postprocessing_TA_Gradi;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Postprocessing */
extern void GP_Postprocessing_TA_Gradient(
  /* TA_Gradient::GP_Postprocessing::Profile_in */ GradientProfile_t_TrackAtlasTyp *Profile_in,
  /* TA_Gradient::GP_Postprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Gradient::GP_Postprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_Gradient::GP_Postprocessing::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradi *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Postprocessing_reset_TA_Grad(
  outC_GP_Postprocessing_TA_Gradi *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Postprocessing_init_TA_Gradi(
  outC_GP_Postprocessing_TA_Gradi *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _GP_Postprocessing_TA_Gradient_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Postprocessing_TA_Gradient.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

