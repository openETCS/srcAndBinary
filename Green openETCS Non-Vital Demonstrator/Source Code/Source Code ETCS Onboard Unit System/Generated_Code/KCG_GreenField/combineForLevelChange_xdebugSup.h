/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _combineForLevelChange_xdebugSu
#define _combineForLevelChange_xdebugSu

#include "kcg_types.h"
#include "dataForLevelTransition_xdebugSu.h"
#include "Read_P027V1_Legacy_for_ML_TM_sp.h"
#include "Read_P137_Legacy_TM_specific.h"
#include "Read_P139_Legacy_TM_specific.h"
#include "Read_P015_Legacy_TM_specific.h"
#include "Read_P138_Legacy_TM_specific.h"
#include "Read_P021_Legacy_TM_specific.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_Track_MASSPGradient /* xdebugSupport_Pkg::combineForLevelChange::forLevelManagement */ forLevelManagement;
  filterRelatedEvents_T_Common_Ty /* xdebugSupport_Pkg::combineForLevelChange::outFilterEvents */ outFilterEvents;
  T_Data_From_Track_Packet_Level_ /* xdebugSupport_Pkg::combineForLevelChange::Data_to_From_Track_Packets_at_ML */ Data_to_From_Track_Packets_at_M;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */ LRBGpositionNeeded;
  dataCollectionForLevelTransitio /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */ infoForLevelTransition;
  M_LEVEL /* xdebugSupport_Pkg::combineForLevelChange::level */ rem_level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_combineForLevelChange_xdeb;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::combineForLevelChange */
extern void combineForLevelChange_xdebugSup(
  /* xdebugSupport_Pkg::combineForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage,
  /* xdebugSupport_Pkg::combineForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Typ *ModeLevel,
  /* xdebugSupport_Pkg::combineForLevelChange::transitionPositionPassed */ kcg_bool transitionPositionPassed,
  /* xdebugSupport_Pkg::combineForLevelChange::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* xdebugSupport_Pkg::combineForLevelChange::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  outC_combineForLevelChange_xdeb *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void combineForLevelChange_reset_xde(
  outC_combineForLevelChange_xdeb *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void combineForLevelChange_init_xdeb(
  outC_combineForLevelChange_xdeb *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _combineForLevelChange_xdebugSu */
/* $**************** KCG Version 6.4 (build i21) ****************
** combineForLevelChange_xdebugSup.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

