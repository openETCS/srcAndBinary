/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _Output_To_DMI_OutputManagement
#define _Output_To_DMI_OutputManagement

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_AnnouncedLevel_Level_And_Mode /* OutputManagement::Output_To_DMI::announcedLevel */ announcedLevel;
  T_AcknoledgementRequest_Level_A /* OutputManagement::Output_To_DMI::Data_To_DMI_Ack */ Data_To_DMI_Ack;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* OutputManagement::Output_To_DMI::needsAckFromDriver */ rem_needsAckFromDriver;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Output_To_DMI_OutputManage;

/* ===========  node initialization and cycle functions  =========== */
/* OutputManagement::Output_To_DMI */
extern void Output_To_DMI_OutputManagement(
  /* OutputManagement::Output_To_DMI::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_To_DMI::needsAckFromDriver */ kcg_bool needsAckFromDriver,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_From_Mode */ T_Data_To_DMI_Level_And_Mode_Ty *Data_To_DMI_From_Mode,
  /* OutputManagement::Output_To_DMI::announcedLevelTransition */ T_LevelTransition_Level_And_Mod *announcedLevelTransition,
  /* OutputManagement::Output_To_DMI::isAvailableForUse */ kcg_bool isAvailableForUse,
  outC_Output_To_DMI_OutputManage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Output_To_DMI_reset_OutputManag(
  outC_Output_To_DMI_OutputManage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Output_To_DMI_init_OutputManage(
  outC_Output_To_DMI_OutputManage *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Output_To_DMI_OutputManagement */
/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_DMI_OutputManagement.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

