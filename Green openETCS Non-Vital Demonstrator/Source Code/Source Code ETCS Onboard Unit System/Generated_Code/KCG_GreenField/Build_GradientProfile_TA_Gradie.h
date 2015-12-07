/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:18
*************************************************************$ */
#ifndef _Build_GradientProfile_TA_Gradi
#define _Build_GradientProfile_TA_Gradi

#include "kcg_types.h"
#include "Read_P021_TM.h"
#include "Get_Position_of_LRBG_TA_Lib_int.h"
#include "GP_Preprocessing_TA_Gradient_ne.h"
#include "GP_Postprocessing_TA_Gradient_n.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTyp /* TA_Gradient_new::Build_GradientProfile::GP */ GP;
  kcg_bool /* TA_Gradient_new::Build_GradientProfile::updated */ updated;
  kcg_bool /* TA_Gradient_new::Build_GradientProfile::available */ available;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  GradientProfile_t_TrackAtlasTyp /* TA_Gradient_new::Build_GradientProfile::_L237 */ _L237;
  NID_BG /* TA_Gradient_new::Build_GradientProfile::_L247 */ rem__L247;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Postprocessing_TA_Gradi /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_GradientProfile_TA_G;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::Build_GradientProfile */
extern void Build_GradientProfile_TA_Gradie(
  /* TA_Gradient_new::Build_GradientProfile::reset */ kcg_bool reset,
  /* TA_Gradient_new::Build_GradientProfile::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_Gradient_new::Build_GradientProfile::train_position */ trainPosition_T_TrainPosition_T *train_position,
  /* TA_Gradient_new::Build_GradientProfile::balisegroups */ positionedBGs_T_TrainPosition_T *balisegroups,
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
** Generation date: 2015-12-07T14:50:18
*************************************************************$ */

