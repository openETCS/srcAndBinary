/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */
#ifndef _ComputeNewLevel_LevelChangement_H_
#define _ComputeNewLevel_LevelChangement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* LevelChangement::ComputeNewLevel */
extern void ComputeNewLevel_LevelChangement(
  /* LevelChangement::ComputeNewLevel::current_level */M_LEVEL current_level,
  /* LevelChangement::ComputeNewLevel::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* LevelChangement::ComputeNewLevel::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* LevelChangement::ComputeNewLevel::next_level */M_LEVEL *next_level,
  /* LevelChangement::ComputeNewLevel::IsNewLevel */kcg_bool *IsNewLevel);

#endif /* _ComputeNewLevel_LevelChangement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ComputeNewLevel_LevelChangement.h
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */

