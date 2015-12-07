/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */
#ifndef _MEM_dataForLevelTransition_EVC
#define _MEM_dataForLevelTransition_EVC

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "Read_P021_TM.h"
#include "Read_P080_TM.h"
#include "Read_P027V1_Legacy_for_ML_TM_sp.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "packetValid_xdebugSupport_Pkg.h"
#include "checkNTCPriority_xdebugSupport_.h"
#include "getLRBGFromMsg_xdebugSupport_Pk.h"
#include "MEM_locationOfReferenceLRBG_EVC.h"
#include "MEM_convertP80_EVC_MEM_Support_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition */
extern void MEM_dataForLevelTransition_EVC_(
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::storedData */ dataCollectionForLevelTransitio *storedData,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::positionNeeded */ kcg_bool positionNeeded,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::actualLevel */ M_LEVEL actualLevel,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::nationalValues */ P003_OBU_T_TM *nationalValues,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::outstoredData */ dataCollectionForLevelTransitio *outstoredData,
  /* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition::outPositionNeeded */ kcg_bool *outPositionNeeded);

#endif /* _MEM_dataForLevelTransition_EVC */
/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_dataForLevelTransition_EVC_.h
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

