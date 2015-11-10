/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RBC__ProcessModeAndLevel_RBC_M
#define _RBC__ProcessModeAndLevel_RBC_M

#include "kcg_types.h"
#include "RadioTrainTrackMessage__GetPack.h"
#include "_150_RadioTrainTrackPackets__Ge.h"
#include "_149_RadioTrainTrackPackets__Ge.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_MODE /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::out_mode */ out_mode;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::out_modeChanged */ out_modeChanged;
  M_LEVEL /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::out_level */ out_level;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::out_levelChanged */ out_levelChanged;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessModeAndLevel_R;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessModeAndLevel */
extern void RBC__ProcessModeAndLevel_RBC_Mo(
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::inTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inTrainTrackMessage,
  outC_RBC__ProcessModeAndLevel_R *outC);

extern void RBC__ProcessModeAndLevel_reset_(
  outC_RBC__ProcessModeAndLevel_R *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessModeAndLevel_init_R(
  outC_RBC__ProcessModeAndLevel_R *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessModeAndLevel_RBC_M */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessModeAndLevel_RBC_Mo.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

