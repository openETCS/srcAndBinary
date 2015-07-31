/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */
#ifndef _TextMessagesDispatcher_DMI_Control_Pkg_Utils_H_
#define _TextMessagesDispatcher_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "MsgDispatcherController_DMI_Control_Pkg_Utils.h"
#include "MSGQueue_DMI_Control_Pkg_Utils.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array__15402 /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::AckMsgQueue */ AckMsgQueue;
  kcg_bool /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::AckMsgQ_isEmpty */ AckMsgQ_isEmpty;
  array__15402 /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::ImpMsgQueue */ ImpMsgQueue;
  kcg_bool /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::ImpMsgQ_isEmpty */ ImpMsgQ_isEmpty;
  array__15402 /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::InfMsgQueue */ InfMsgQueue;
  kcg_bool /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::InfMsgQ_isEmpty */ InfMsgQ_isEmpty;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ _1_Context_1;
  outC_MSGQueue_DMI_Control_Pkg_Utils /* 1 */ Context_1;
  outC_MSGQueue_DMI_Control_Pkg_Utils /* 2 */ Context_2;
  outC_MSGQueue_DMI_Control_Pkg_Utils /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TextMessagesDispatcher_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::TextMessagesDispatcher */
extern void TextMessagesDispatcher_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::dmi_txt_msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_txt_msg,
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::DeleteAckMsg */kcg_bool DeleteAckMsg,
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::SystemTime */kcg_int SystemTime,
  outC_TextMessagesDispatcher_DMI_Control_Pkg_Utils *outC);

extern void TextMessagesDispatcher_reset_DMI_Control_Pkg_Utils(
  outC_TextMessagesDispatcher_DMI_Control_Pkg_Utils *outC);

#endif /* _TextMessagesDispatcher_DMI_Control_Pkg_Utils_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TextMessagesDispatcher_DMI_Control_Pkg_Utils.h
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

