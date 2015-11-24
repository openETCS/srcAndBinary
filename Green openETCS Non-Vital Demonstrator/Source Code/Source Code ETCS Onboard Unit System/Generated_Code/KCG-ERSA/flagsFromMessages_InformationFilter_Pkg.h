/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */
#ifndef _flagsFromMessages_InformationFilter_Pkg_H_
#define _flagsFromMessages_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "Read_P041_TM.h"
#include "Read_P012_TM.h"
#include "Read_P015_TM.h"
#include "Read_P021_TM.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  filterRelatedEvents_T_Common_Types_Pkg /* InformationFilter_Pkg::flagsFromMessages::outFilterEvents */ outFilterEvents;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* InformationFilter_Pkg::flagsFromMessages::IF_toML */ IF_toML;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* InformationFilter_Pkg::flagsFromMessages::NTC_transitionPending */ NTC_transitionPending;
  kcg_bool /* InformationFilter_Pkg::flagsFromMessages::p27valid */ p27valid;
  kcg_bool /* InformationFilter_Pkg::flagsFromMessages::p21valid */ p21valid;
  kcg_bool /* InformationFilter_Pkg::flagsFromMessages::p15valid */ p15valid;
  kcg_bool /* InformationFilter_Pkg::flagsFromMessages::p12valid */ p12valid;
  kcg_bool /* InformationFilter_Pkg::flagsFromMessages::L1_transitionPending */ L1_transitionPending;
  kcg_bool /* InformationFilter_Pkg::flagsFromMessages::L2L3_transitionPending */ L2L3_transitionPending;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_flagsFromMessages_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::flagsFromMessages */
extern void flagsFromMessages_InformationFilter_Pkg(
  /* InformationFilter_Pkg::flagsFromMessages::doReset */ kcg_bool doReset,
  /* InformationFilter_Pkg::flagsFromMessages::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* InformationFilter_Pkg::flagsFromMessages::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_flagsFromMessages_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void flagsFromMessages_reset_InformationFilter_Pkg(
  outC_flagsFromMessages_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void flagsFromMessages_init_InformationFilter_Pkg(
  outC_flagsFromMessages_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _flagsFromMessages_InformationFilter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** flagsFromMessages_InformationFilter_Pkg.h
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

