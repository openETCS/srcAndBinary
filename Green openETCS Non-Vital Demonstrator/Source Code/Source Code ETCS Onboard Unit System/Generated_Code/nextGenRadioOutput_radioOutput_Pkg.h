/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */
#ifndef _nextGenRadioOutput_radioOutput_Pkg_H_
#define _nextGenRadioOutput_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "mapToRTM_radioOutput_Pkg.h"
#include "patchMsgFlow_RadioSupport_Pkg.h"
#include "BufferOutput_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* radioOutput_Pkg::nextGenRadioOutput::toRBC */ toRBC;
  RadioManagement_T_API_RadioCommunication_Pkg /* radioOutput_Pkg::nextGenRadioOutput::API_RTM_management */ API_RTM_management;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* radioOutput_Pkg::nextGenRadioOutput::RTMisActive */ RTMisActive;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferOutput_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_nextGenRadioOutput_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::nextGenRadioOutput */
extern void nextGenRadioOutput_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGenRadioOutput::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* radioOutput_Pkg::nextGenRadioOutput::cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::nextGenRadioOutput::insafeSessionEstablished */ kcg_bool insafeSessionEstablished,
  /* radioOutput_Pkg::nextGenRadioOutput::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* radioOutput_Pkg::nextGenRadioOutput::mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatus,
  /* radioOutput_Pkg::nextGenRadioOutput::inVersion */ M_VERSION inVersion,
  /* radioOutput_Pkg::nextGenRadioOutput::inT_TRAIN */ T_TRAIN inT_TRAIN,
  outC_nextGenRadioOutput_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void nextGenRadioOutput_reset_radioOutput_Pkg(
  outC_nextGenRadioOutput_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void nextGenRadioOutput_init_radioOutput_Pkg(
  outC_nextGenRadioOutput_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _nextGenRadioOutput_radioOutput_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** nextGenRadioOutput_radioOutput_Pkg.h
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

