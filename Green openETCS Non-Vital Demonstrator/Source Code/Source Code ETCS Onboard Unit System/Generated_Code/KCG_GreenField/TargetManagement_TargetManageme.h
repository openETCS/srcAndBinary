/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:52
*************************************************************$ */
#ifndef _TargetManagement_TargetManagem
#define _TargetManagement_TargetManagem

#include "kcg_types.h"
#include "extractTargetsFromMRSP_TargetMa.h"
#include "calcMATargets_TargetManagement_.h"
#include "removeOverpassedMRSP_TargetMana.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TargetCollection_T_TargetManage /* TargetManagement_pkg::TargetManagement::targetCollection */ targetCollection;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Target_real_T_TargetManagement_ /* TargetManagement_pkg::TargetManagement::_L12 */ _L12;
  Target_real_T_TargetManagement_ /* TargetManagement_pkg::TargetManagement::_L93 */ _L93;
  Target_list_MRSP_real_T_TargetM /* TargetManagement_pkg::TargetManagement::MRSPTargetList */ rem_MRSPTargetList;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TargetManagement_TargetMan;

/* ===========  node initialization and cycle functions  =========== */
/* TargetManagement_pkg::TargetManagement */
extern void TargetManagement_TargetManageme(
  /* TargetManagement_pkg::TargetManagement::MRSP */ MRSP_internal_T_TargetManagemen *MRSP,
  /* TargetManagement_pkg::TargetManagement::MRSP_updated */ kcg_bool MRSP_updated,
  /* TargetManagement_pkg::TargetManagement::MA */ MA_section_real_T_TargetManagem *MA,
  /* TargetManagement_pkg::TargetManagement::MA_updated */ kcg_bool MA_updated,
  /* TargetManagement_pkg::TargetManagement::trainLocations */ TrainLocations_real_T_SDM_Types *trainLocations,
  outC_TargetManagement_TargetMan *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TargetManagement_reset_TargetMa(
  outC_TargetManagement_TargetMan *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TargetManagement_init_TargetMan(
  outC_TargetManagement_TargetMan *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TargetManagement_TargetManagem */
/* $**************** KCG Version 6.4 (build i21) ****************
** TargetManagement_TargetManageme.h
** Generation date: 2015-11-12T17:51:52
*************************************************************$ */

