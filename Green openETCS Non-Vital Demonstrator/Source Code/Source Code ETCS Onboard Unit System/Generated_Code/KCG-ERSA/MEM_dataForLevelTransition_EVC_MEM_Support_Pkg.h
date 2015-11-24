/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */
#ifndef _MEM_dataForLevelTransition_EVC_MEM_Support_Pkg_H_
#define _MEM_dataForLevelTransition_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "Read_P021_TM.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "packetValid_xdebugSupport_Pkg.h"
#include "checkNTCPriority_xdebugSupport_Pkg.h"
#include "getLRBGFromMsg_xdebugSupport_Pkg.h"
#include "MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */
extern void MEM_dataForLevelTransition_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::storedData */ dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *storedData,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::positionNeeded */ kcg_bool positionNeeded,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::actualLevel */ M_LEVEL actualLevel,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::outstoredData */ dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *outstoredData,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::outPositionNeeded */ kcg_bool *outPositionNeeded);

#endif /* _MEM_dataForLevelTransition_EVC_MEM_Support_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_dataForLevelTransition_EVC_MEM_Support_Pkg.h
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

