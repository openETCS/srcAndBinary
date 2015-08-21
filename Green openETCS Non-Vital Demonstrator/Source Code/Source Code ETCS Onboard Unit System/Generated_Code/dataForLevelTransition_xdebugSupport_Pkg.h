/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _dataForLevelTransition_xdebugSupport_Pkg_H_
#define _dataForLevelTransition_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "Read_P021_TM.h"
#include "locationOfReferenceLRBG_xdebugSupport_Pkg.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"

/* =====================  no input structure  ====================== */


/* xdebugSupport_Pkg::dataForLevelTransition */
extern void dataForLevelTransition_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::dataForLevelTransition::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::dataForLevelTransition::storedData */T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg *storedData,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::dataForLevelTransition::positionNeeded */kcg_bool positionNeeded,
  /* xdebugSupport_Pkg::dataForLevelTransition::forLevelManagement */T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg *forLevelManagement,
  /* xdebugSupport_Pkg::dataForLevelTransition::outPositionNeeded */kcg_bool *outPositionNeeded);

#endif /* _dataForLevelTransition_xdebugSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** dataForLevelTransition_xdebugSupport_Pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

