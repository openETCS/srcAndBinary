/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _Build_GradientProfile_TA_Gradi
#define _Build_GradientProfile_TA_Gradi

#include "kcg_types.h"
#include "Read_P021_TM.h"
#include "Eval_LRBG_TA_Lib_internal.h"
#include "GP_Preprocessing_TA_Gradient.h"
#include "GP_Postprocessing_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTyp /* TA_Gradient::Build_GradientProfile::GP */ GP;
  kcg_bool /* TA_Gradient::Build_GradientProfile::updated */ updated;
  kcg_bool /* TA_Gradient::Build_GradientProfile::available */ available;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  GradientProfile_t_TrackAtlasTyp /* TA_Gradient::Build_GradientProfile::_L237 */ _L237;
  NID_BG /* TA_Gradient::Build_GradientProfile::_L111 */ rem__L111;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Postprocessing_TA_Gradi /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_GradientProfile_TA_G;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Build_GradientProfile */
extern void Build_GradientProfile_TA_Gradie(
  /* TA_Gradient::Build_GradientProfile::reset */ kcg_bool reset,
  /* TA_Gradient::Build_GradientProfile::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_Gradient::Build_GradientProfile::train_position */ trainPosition_T_TrainPosition_T *train_position,
  outC_Build_GradientProfile_TA_G *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_GradientProfile_reset_TA_(
  outC_Build_GradientProfile_TA_G *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_GradientProfile_init_TA_G(
  outC_Build_GradientProfile_TA_G *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_GradientProfile_TA_Gradi */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_GradientProfile_TA_Gradie.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

