/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */
#ifndef _dataForLevelTransition_xdebugS
#define _dataForLevelTransition_xdebugS

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "Read_P021_TM.h"
#include "locationOfReferenceLRBG_xdebugS.h"
#include "packetValid_xdebugSupport_Pkg.h"
#include "checkNTCPriority_xdebugSupport_.h"
#include "getLRBGFromMsg_xdebugSupport_Pk.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P027V1_Legacy_for_ML_TM_sp.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* xdebugSupport_Pkg::dataForLevelTransition */
extern void dataForLevelTransition_xdebugSu(
  /* xdebugSupport_Pkg::dataForLevelTransition::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage,
  /* xdebugSupport_Pkg::dataForLevelTransition::storedData */ dataCollectionForLevelTransitio *storedData,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* xdebugSupport_Pkg::dataForLevelTransition::positionNeeded */ kcg_bool positionNeeded,
  /* xdebugSupport_Pkg::dataForLevelTransition::actualLevel */ M_LEVEL actualLevel,
  /* xdebugSupport_Pkg::dataForLevelTransition::outstoredData */ dataCollectionForLevelTransitio *outstoredData,
  /* xdebugSupport_Pkg::dataForLevelTransition::outPositionNeeded */ kcg_bool *outPositionNeeded);

#endif /* _dataForLevelTransition_xdebugS */
/* $**************** KCG Version 6.4 (build i21) ****************
** dataForLevelTransition_xdebugSu.h
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */

