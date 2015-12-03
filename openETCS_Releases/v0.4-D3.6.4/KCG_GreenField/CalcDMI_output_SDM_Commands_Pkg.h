/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _CalcDMI_output_SDM_Commands_Pk
#define _CalcDMI_output_SDM_Commands_Pk

#include "kcg_types.h"
#include "LowerOrHold_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  speedSupervisionForDMI_T_DMI_Ty /* SDM_Commands_Pkg::CalcDMI_output::sdmToDMI */ sdmToDMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LowerOrHold_SDM_Commands_P /* 2 */ Context_2;
  outC_LowerOrHold_SDM_Commands_P /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_CalcDMI_output_SDM_Command;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcDMI_output */
extern void CalcDMI_output_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDMI_output::in_sdmCmd */ SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcDMI_output::limit_locations */ SDM_Locations_T_SDM_Types_Pkg *limit_locations,
  /* SDM_Commands_Pkg::CalcDMI_output::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CalcDMI_output::mrdt */ Target_T_TargetManagement_types *mrdt,
  outC_CalcDMI_output_SDM_Command *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcDMI_output_reset_SDM_Comman(
  outC_CalcDMI_output_SDM_Command *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcDMI_output_init_SDM_Command(
  outC_CalcDMI_output_SDM_Command *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CalcDMI_output_SDM_Commands_Pk */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcDMI_output_SDM_Commands_Pkg.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */

