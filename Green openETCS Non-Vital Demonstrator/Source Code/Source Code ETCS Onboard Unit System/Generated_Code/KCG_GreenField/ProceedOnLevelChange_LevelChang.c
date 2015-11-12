/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProceedOnLevelChange_LevelChang.h"

/* LevelChangement::ProceedOnLevelChange */
void ProceedOnLevelChange_LevelChang(
  /* LevelChangement::ProceedOnLevelChange::current_level */ M_LEVEL current_level,
  /* LevelChangement::ProceedOnLevelChange::selected_level_transition */ T_LevelTransition_Level_And_Mod *selected_level_transition,
  /* LevelChangement::ProceedOnLevelChange::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* LevelChangement::ProceedOnLevelChange::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Leve *Data_From_Track_to_Level,
  /* LevelChangement::ProceedOnLevelChange::next_level */ M_LEVEL *next_level,
  /* LevelChangement::ProceedOnLevelChange::IsNewLevel */ kcg_bool *IsNewLevel,
  /* LevelChangement::ProceedOnLevelChange::Trip_Requested */ kcg_bool *Trip_Requested)
{
  /* 1 */
  ComputeNewLevel_LevelChangement(
    current_level,
    selected_level_transition,
    trainPosition,
    next_level,
    IsNewLevel);
  *Trip_Requested = /* 1 */
    TripRequests_LevelChangement(
      current_level,
      *next_level,
      Data_From_Track_to_Level);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ProceedOnLevelChange_LevelChang.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

