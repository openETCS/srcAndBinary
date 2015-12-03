/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */
#ifndef _flagsForLevelChange_InformationFilter_Pkg_H_
#define _flagsForLevelChange_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "flagsFromMessages_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  filterRelatedEvents_T_Common_Types_Pkg /* InformationFilter_Pkg::flagsForLevelChange::outFilterEvents */ outFilterEvents;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* InformationFilter_Pkg::flagsForLevelChange::IF_toML */ IF_toML;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_flagsFromMessages_InformationFilter_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_flagsForLevelChange_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::flagsForLevelChange */
extern void flagsForLevelChange_InformationFilter_Pkg(
  /* InformationFilter_Pkg::flagsForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* InformationFilter_Pkg::flagsForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* InformationFilter_Pkg::flagsForLevelChange::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_flagsForLevelChange_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void flagsForLevelChange_reset_InformationFilter_Pkg(
  outC_flagsForLevelChange_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void flagsForLevelChange_init_InformationFilter_Pkg(
  outC_flagsForLevelChange_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _flagsForLevelChange_InformationFilter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** flagsForLevelChange_InformationFilter_Pkg.h
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */

