/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
#ifndef _SelectLevelTransition_LevelTra
#define _SelectLevelTransition_LevelTra

#include "kcg_types.h"
#include "SelectConditionnalTransition_Le.h"
#include "SelectNormalTransition_LevelTra.h"
#include "SelectDriverCondition_LevelTran.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_Level_And_Mod /* LevelTransitionSelection::SelectLevelTransition::selected_level_transition */ selected_level_transition;
  kcg_bool /* LevelTransitionSelection::SelectLevelTransition::IsAvailableForUse */ IsAvailableForUse;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SelectLevelTransition_Leve;

/* ===========  node initialization and cycle functions  =========== */
/* LevelTransitionSelection::SelectLevelTransition */
extern void SelectLevelTransition_LevelTran(
  /* LevelTransitionSelection::SelectLevelTransition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectLevelTransition::train_standstill */ kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectLevelTransition::driver_level_transition */ T_LevelTransition_Level_And_Mod *driver_level_transition,
  /* LevelTransitionSelection::SelectLevelTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_ *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectLevelTransition::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Leve *Data_From_Track_to_Level,
  outC_SelectLevelTransition_Leve *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SelectLevelTransition_reset_Lev(
  outC_SelectLevelTransition_Leve *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SelectLevelTransition_init_Leve(
  outC_SelectLevelTransition_Leve *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SelectLevelTransition_LevelTra */
/* $**************** KCG Version 6.4 (build i21) ****************
** SelectLevelTransition_LevelTran.h
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */

