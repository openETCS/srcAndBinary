/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _flagsForLevelChange_Informatio
#define _flagsForLevelChange_Informatio

#include "kcg_types.h"
#include "flagsFromMessages_InformationFi.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  filterRelatedEvents_T_Common_Ty /* InformationFilter_Pkg::flagsForLevelChange::outFilterEvents */ outFilterEvents;
  T_Data_From_Track_MASSPGradient /* InformationFilter_Pkg::flagsForLevelChange::IF_toML */ IF_toML;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_flagsFromMessages_Informat /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_flagsForLevelChange_Inform;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::flagsForLevelChange */
extern void flagsForLevelChange_Information(
  /* InformationFilter_Pkg::flagsForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Typ *ModeLevel,
  /* InformationFilter_Pkg::flagsForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage,
  /* InformationFilter_Pkg::flagsForLevelChange::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  outC_flagsForLevelChange_Inform *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void flagsForLevelChange_reset_Infor(
  outC_flagsForLevelChange_Inform *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void flagsForLevelChange_init_Inform(
  outC_flagsForLevelChange_Inform *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _flagsForLevelChange_Informatio */
/* $**************** KCG Version 6.4 (build i21) ****************
** flagsForLevelChange_Information.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */

