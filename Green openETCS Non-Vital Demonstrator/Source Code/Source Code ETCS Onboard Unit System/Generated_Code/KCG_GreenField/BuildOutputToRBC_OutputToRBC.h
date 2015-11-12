/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _BuildOutputToRBC_OutputToRBC_H
#define _BuildOutputToRBC_OutputToRBC_H

#include "kcg_types.h"
#include "RBCSessionRequests_OutputToRBC.h"
#include "EntryInLevel2or3_OutputToRBC.h"
#include "ExitLevel2or3_OutputToRBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* OutputToRBC::BuildOutputToRBC::Connection_to_RBC_Requested */ Connection_to_RBC_Requested;
  kcg_bool /* OutputToRBC::BuildOutputToRBC::PositionReportNeeded */ PositionReportNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ExitLevel2or3_OutputToRBC /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_BuildOutputToRBC_OutputToR;

/* ===========  node initialization and cycle functions  =========== */
/* OutputToRBC::BuildOutputToRBC */
extern void BuildOutputToRBC_OutputToRBC(
  /* OutputToRBC::BuildOutputToRBC::selected_level_transition */ T_LevelTransition_Level_And_Mod *selected_level_transition,
  /* OutputToRBC::BuildOutputToRBC::last_level */ M_LEVEL last_level,
  /* OutputToRBC::BuildOutputToRBC::new_level */ M_LEVEL new_level,
  /* OutputToRBC::BuildOutputToRBC::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  outC_BuildOutputToRBC_OutputToR *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BuildOutputToRBC_reset_OutputTo(
  outC_BuildOutputToRBC_OutputToR *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BuildOutputToRBC_init_OutputToR(
  outC_BuildOutputToRBC_OutputToR *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _BuildOutputToRBC_OutputToRBC_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** BuildOutputToRBC_OutputToRBC.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

