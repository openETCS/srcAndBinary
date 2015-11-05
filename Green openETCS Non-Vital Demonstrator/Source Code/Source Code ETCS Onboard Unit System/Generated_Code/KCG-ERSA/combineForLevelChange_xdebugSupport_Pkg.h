/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */
#ifndef _combineForLevelChange_xdebugSupport_Pkg_H_
#define _combineForLevelChange_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "dataForLevelTransition_xdebugSupport_Pkg.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
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
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::forLevelManagement */ forLevelManagement;
  filterRelatedEvents_T_Common_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::outFilterEvents */ outFilterEvents;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::Data_to_From_Track_Packets_at_ML */ Data_to_From_Track_Packets_at_ML;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */ LRBGpositionNeeded;
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */ infoForLevelTransition;
  M_LEVEL /* xdebugSupport_Pkg::combineForLevelChange::level */ rem_level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_combineForLevelChange_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::combineForLevelChange */
extern void combineForLevelChange_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::combineForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::combineForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* xdebugSupport_Pkg::combineForLevelChange::transitionPositionPassed */ kcg_bool transitionPositionPassed,
  /* xdebugSupport_Pkg::combineForLevelChange::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::combineForLevelChange::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_combineForLevelChange_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void combineForLevelChange_reset_xdebugSupport_Pkg(
  outC_combineForLevelChange_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void combineForLevelChange_init_xdebugSupport_Pkg(
  outC_combineForLevelChange_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _combineForLevelChange_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** combineForLevelChange_xdebugSupport_Pkg.h
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */

