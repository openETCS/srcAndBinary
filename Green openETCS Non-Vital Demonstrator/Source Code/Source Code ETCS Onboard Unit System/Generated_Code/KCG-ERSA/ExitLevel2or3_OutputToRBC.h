/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */
#ifndef _ExitLevel2or3_OutputToRBC_H_
#define _ExitLevel2or3_OutputToRBC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* OutputToRBC::ExitLevel2or3::PositionReportNeeded */ PositionReportNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _172_SSM_ST_SM1 /* OutputToRBC::ExitLevel2or3::SM1 */ SM1_state_nxt;
  M_POSITION /* OutputToRBC::ExitLevel2or3::Loc_Position */ Loc_Position;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ExitLevel2or3_OutputToRBC;

/* ===========  node initialization and cycle functions  =========== */
/* OutputToRBC::ExitLevel2or3 */
extern void ExitLevel2or3_OutputToRBC(
  /* OutputToRBC::ExitLevel2or3::new_level */M_LEVEL new_level,
  /* OutputToRBC::ExitLevel2or3::last_level */M_LEVEL last_level,
  /* OutputToRBC::ExitLevel2or3::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* OutputToRBC::ExitLevel2or3::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_ExitLevel2or3_OutputToRBC *outC);

extern void ExitLevel2or3_reset_OutputToRBC(
  outC_ExitLevel2or3_OutputToRBC *outC);

#endif /* _ExitLevel2or3_OutputToRBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ExitLevel2or3_OutputToRBC.h
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */

