/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */
#ifndef _MEM_combineForLevelChange_EVC_
#define _MEM_combineForLevelChange_EVC_

#include "kcg_types.h"
#include "Read_P027V1_Legacy_for_ML_TM_sp.h"
#include "Read_P137_Legacy_TM_specific.h"
#include "Read_P138_Legacy_TM_specific.h"
#include "Read_P139_Legacy_TM_specific.h"
#include "Read_P015_Legacy_TM_specific.h"
#include "Read_P021_Legacy_TM_specific.h"
#include "MEM_dataForLevelTransition_EVC_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_Track_Packet_Level_ /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::Data_From_Track_Packets_at_ML */ Data_From_Track_Packets_at_ML;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  dataCollectionForLevelTransitio /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::infoForLevelTransition */ infoForLevelTransition;
  kcg_bool /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::LRBGpositionNeeded */ LRBGpositionNeeded;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_MEM_combineForLevelChange_;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::MEM_combineForLevelChange */
extern void MEM_combineForLevelChange_EVC_M(
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage,
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Typ *ModeLevel,
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::nationalValues */ P003_OBU_T_TM *nationalValues,
  outC_MEM_combineForLevelChange_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MEM_combineForLevelChange_reset(
  outC_MEM_combineForLevelChange_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MEM_combineForLevelChange_init_(
  outC_MEM_combineForLevelChange_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MEM_combineForLevelChange_EVC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_combineForLevelChange_EVC_M.h
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

