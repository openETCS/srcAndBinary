/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */
#ifndef _ConditionnalTransition_InputManagement_H_
#define _ConditionnalTransition_InputManagement_H_

#include "kcg_types.h"
#include "LevelTR2Level_InputManagement.h"

/* =====================  no input structure  ====================== */


/* InputManagement::ConditionnalTransition */
extern void ConditionnalTransition_InputManagement(
  /* InputManagement::ConditionnalTransition::LRBG */NID_LRBG LRBG,
  /* InputManagement::ConditionnalTransition::referenceLocation */L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::ConditionnalTransition::Packet_46_One_Iter */P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *Packet_46_One_Iter,
  /* InputManagement::ConditionnalTransition::One_Transition */T_LevelTransition_Level_And_Mode_Types_Pkg *One_Transition);

#endif /* _ConditionnalTransition_InputManagement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConditionnalTransition_InputManagement.h
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */

