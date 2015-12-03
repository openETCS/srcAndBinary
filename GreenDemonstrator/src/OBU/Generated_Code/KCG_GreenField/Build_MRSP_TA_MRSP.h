/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
#ifndef _Build_MRSP_TA_MRSP_H_
#define _Build_MRSP_TA_MRSP_H_

#include "kcg_types.h"
#include "Calculate_MRSP1_TA_MRSP.h"
#include "Build_SSP_Matrix_TA_SpeedProfil.h"
#include "SP_ASP_TA_SpeedProfiles.h"
#include "SP_LX_SR_TA_SpeedProfiles.h"
#include "SP_MaxTrainSpeed_TA_SpeedProfil.h"
#include "SP_ModeRelated_TA_SpeedProfiles.h"
#include "SP_OverrideRelated_TA_SpeedProf.h"
#include "SP_PBD_SR_TA_SpeedProfiles.h"
#include "SP_SignalingRelated_TA_SpeedPro.h"
#include "SP_STM_MaxSpeed_TA_SpeedProfile.h"
#include "SP_STM_SystemSpeed_TA_SpeedProf.h"
#include "SP_TSR_TA_SpeedProfiles.h"
#include "Build_StaticSpeedProfile_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MRSP::Build_MRSP::newMRSP */ newMRSP;
  MRSP_Profile_t_TrackAtlasTypes /* TA_MRSP::Build_MRSP::MRSP */ MRSP;
  kcg_bool /* TA_MRSP::Build_MRSP::SSP_available */ SSP_available;
  StaticSpeedProfile_t_TrackAtlas /* TA_MRSP::Build_MRSP::SSP */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_StaticSpeedProfile_T /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_MRSP_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::Build_MRSP */
extern void Build_MRSP_TA_MRSP(
  /* TA_MRSP::Build_MRSP::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_MRSP::Build_MRSP::TrainDataIn */ FromTIU_t_TrackAtlasTypes TrainDataIn,
  /* TA_MRSP::Build_MRSP::ModeAndLevel_in */ T_Mode_Level_Level_And_Mode_Typ *ModeAndLevel_in,
  /* TA_MRSP::Build_MRSP::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  /* TA_MRSP::Build_MRSP::train_position */ trainPosition_T_TrainPosition_T *train_position,
  outC_Build_MRSP_TA_MRSP *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_MRSP_reset_TA_MRSP(outC_Build_MRSP_TA_MRSP *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_MRSP_init_TA_MRSP(outC_Build_MRSP_TA_MRSP *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_MRSP_TA_MRSP_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MRSP_TA_MRSP.h
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */

