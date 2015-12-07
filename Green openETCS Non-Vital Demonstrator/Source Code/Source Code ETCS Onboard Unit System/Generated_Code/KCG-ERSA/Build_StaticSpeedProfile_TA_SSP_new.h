/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:38
*************************************************************$ */
#ifndef _Build_StaticSpeedProfile_TA_SSP_new_H_
#define _Build_StaticSpeedProfile_TA_SSP_new_H_

#include "kcg_types.h"
#include "Read_P027V1_TM_baseline2.h"
#include "Get_Position_of_LRBG_TA_Lib_internal.h"
#include "SSP_Preprocessing_TA_SSP_new.h"
#include "SSP_Postprocessing_TA_SSP_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP_new::Build_StaticSpeedProfile::SSP */ SSP;
  kcg_bool /* TA_SSP_new::Build_StaticSpeedProfile::updated */ updated;
  kcg_bool /* TA_SSP_new::Build_StaticSpeedProfile::available */ available;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP_new::Build_StaticSpeedProfile::_L237 */ _L237;
  NID_BG /* TA_SSP_new::Build_StaticSpeedProfile::_L248 */ rem__L248;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Postprocessing_TA_SSP_new /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_StaticSpeedProfile_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::Build_StaticSpeedProfile */
extern void Build_StaticSpeedProfile_TA_SSP_new(
  /* TA_SSP_new::Build_StaticSpeedProfile::reset */ kcg_bool reset,
  /* TA_SSP_new::Build_StaticSpeedProfile::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SSP_new::Build_StaticSpeedProfile::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_SSP_new::Build_StaticSpeedProfile::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP_new::Build_StaticSpeedProfile::balisegroups */ positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_StaticSpeedProfile_reset_TA_SSP_new(
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_StaticSpeedProfile_init_TA_SSP_new(
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_StaticSpeedProfile_TA_SSP_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_StaticSpeedProfile_TA_SSP_new.h
** Generation date: 2015-12-07T14:47:38
*************************************************************$ */

