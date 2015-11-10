/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */
#ifndef _ProceedOnLevelChange_LevelChan
#define _ProceedOnLevelChange_LevelChan

#include "kcg_types.h"
#include "ComputeNewLevel_LevelChangement.h"
#include "TripRequests_LevelChangement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* LevelChangement::ProceedOnLevelChange */
extern void ProceedOnLevelChange_LevelChang(
  /* LevelChangement::ProceedOnLevelChange::current_level */ M_LEVEL current_level,
  /* LevelChangement::ProceedOnLevelChange::selected_level_transition */ T_LevelTransition_Level_And_Mod *selected_level_transition,
  /* LevelChangement::ProceedOnLevelChange::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* LevelChangement::ProceedOnLevelChange::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Leve *Data_From_Track_to_Level,
  /* LevelChangement::ProceedOnLevelChange::next_level */ M_LEVEL *next_level,
  /* LevelChangement::ProceedOnLevelChange::IsNewLevel */ kcg_bool *IsNewLevel,
  /* LevelChangement::ProceedOnLevelChange::Trip_Requested */ kcg_bool *Trip_Requested);

#endif /* _ProceedOnLevelChange_LevelChan */
/* $**************** KCG Version 6.4 (build i21) ****************
** ProceedOnLevelChange_LevelChang.h
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */

