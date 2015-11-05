/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConditionnalTransition_InputManagement.h"

/* InputManagement::ConditionnalTransition */
void ConditionnalTransition_InputManagement(
  /* InputManagement::ConditionnalTransition::LRBG */ NID_LRBG LRBG,
  /* InputManagement::ConditionnalTransition::referenceLocation */ L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::ConditionnalTransition::Packet_46_One_Iter */ P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *Packet_46_One_Iter,
  /* InputManagement::ConditionnalTransition::One_Transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *One_Transition)
{
  (*One_Transition).is_set = (*Packet_46_One_Iter).valid;
  (*One_Transition).LRBG = LRBG;
  (*One_Transition).referenceLocation = referenceLocation;
  (*One_Transition).transition.position = 0;
  (*One_Transition).transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  (*One_Transition).transition.immediateAck = kcg_false;
  (*One_Transition).transition.AckLength = 0;
  (*One_Transition).transition.level = /* 2 */
    LevelTR2Level_InputManagement((*Packet_46_One_Iter).m_leveltr);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConditionnalTransition_InputManagement.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

