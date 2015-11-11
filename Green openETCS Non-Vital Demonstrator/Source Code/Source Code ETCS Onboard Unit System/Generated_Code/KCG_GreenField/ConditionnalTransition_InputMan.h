/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _ConditionnalTransition_InputMa
#define _ConditionnalTransition_InputMa

#include "kcg_types.h"
#include "LevelTR2Level_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InputManagement::ConditionnalTransition */
extern void ConditionnalTransition_InputMan(
  /* InputManagement::ConditionnalTransition::LRBG */ NID_LRBG LRBG,
  /* InputManagement::ConditionnalTransition::referenceLocation */ L_internal_Type_Obu_BasicTypes_ referenceLocation,
  /* InputManagement::ConditionnalTransition::Packet_46_One_Iter */ P46_ConditionalLevelTransitionO *Packet_46_One_Iter,
  /* InputManagement::ConditionnalTransition::One_Transition */ T_LevelTransition_Level_And_Mod *One_Transition);

#endif /* _ConditionnalTransition_InputMa */
/* $**************** KCG Version 6.4 (build i21) ****************
** ConditionnalTransition_InputMan.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

