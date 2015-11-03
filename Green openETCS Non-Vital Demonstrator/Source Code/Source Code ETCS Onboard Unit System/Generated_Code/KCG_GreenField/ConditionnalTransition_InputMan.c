/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConditionnalTransition_InputMan.h"

/* InputManagement::ConditionnalTransition */
void ConditionnalTransition_InputMan(
  /* InputManagement::ConditionnalTransition::LRBG */ NID_LRBG LRBG,
  /* InputManagement::ConditionnalTransition::referenceLocation */ L_internal_Type_Obu_BasicTypes_ referenceLocation,
  /* InputManagement::ConditionnalTransition::Packet_46_One_Iter */ P46_ConditionalLevelTransitionO *Packet_46_One_Iter,
  /* InputManagement::ConditionnalTransition::One_Transition */ T_LevelTransition_Level_And_Mod *One_Transition)
{
  (*One_Transition).is_set = (*Packet_46_One_Iter).valid;
  (*One_Transition).LRBG = LRBG;
  (*One_Transition).referenceLocation = referenceLocation;
  (*One_Transition).transition.position = 0;
  (*One_Transition).transition.transitionType = M_TransitionType_Conditional_Le;
  (*One_Transition).transition.immediateAck = kcg_false;
  (*One_Transition).transition.AckLength = 0;
  (*One_Transition).transition.level = /* 2 */
    LevelTR2Level_InputManagement((*Packet_46_One_Iter).m_leveltr);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConditionnalTransition_InputMan.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

