/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:38
*************************************************************$ */
#ifndef _Build_MRSP_TA_MRSP_new_H_
#define _Build_MRSP_TA_MRSP_new_H_

#include "kcg_types.h"
#include "Calculate_MRSP1_TA_MRSP_new.h"
#include "Build_SSP_Matrix_TA_SpeedProfiles.h"
#include "SP_ASP_TA_SpeedProfiles.h"
#include "SP_LX_SR_TA_SpeedProfiles.h"
#include "SP_MaxTrainSpeed_TA_SpeedProfiles.h"
#include "SP_ModeRelated_TA_SpeedProfiles.h"
#include "SP_OverrideRelated_TA_SpeedProfiles.h"
#include "SP_PBD_SR_TA_SpeedProfiles.h"
#include "SP_SignalingRelated_TA_SpeedProfiles.h"
#include "SP_STM_MaxSpeed_TA_SpeedProfiles.h"
#include "SP_STM_SystemSpeed_TA_SpeedProfiles.h"
#include "SP_TSR_TA_SpeedProfiles.h"
#include "Build_StaticSpeedProfile_TA_SSP_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MRSP_new::Build_MRSP::newMRSP */ newMRSP;
  MRSP_Profile_t_TrackAtlasTypes /* TA_MRSP_new::Build_MRSP::MRSP */ MRSP;
  kcg_bool /* TA_MRSP_new::Build_MRSP::SSP_available */ SSP_available;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_MRSP_new::Build_MRSP::SSP */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_StaticSpeedProfile_TA_SSP_new /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_MRSP_TA_MRSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP_new::Build_MRSP */
extern void Build_MRSP_TA_MRSP_new(
  /* TA_MRSP_new::Build_MRSP::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MRSP_new::Build_MRSP::TrainDataIn */ FromTIU_t_TrackAtlasTypes TrainDataIn,
  /* TA_MRSP_new::Build_MRSP::ModeAndLevel_in */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TA_MRSP_new::Build_MRSP::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_MRSP_new::Build_MRSP::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_MRSP_new::Build_MRSP::balisegroups */ positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_MRSP_TA_MRSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_MRSP_reset_TA_MRSP_new(outC_Build_MRSP_TA_MRSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_MRSP_init_TA_MRSP_new(outC_Build_MRSP_TA_MRSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_MRSP_TA_MRSP_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MRSP_TA_MRSP_new.h
** Generation date: 2015-12-07T14:47:38
*************************************************************$ */

