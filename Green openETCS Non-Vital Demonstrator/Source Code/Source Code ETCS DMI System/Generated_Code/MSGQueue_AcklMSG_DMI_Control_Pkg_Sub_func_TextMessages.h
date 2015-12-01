/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */
#ifndef _MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array__31749 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::queue */ queue;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::NumE */ NumE;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisFull */ AckisFull;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisEmpty */ AckisEmpty;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::hh_array */ hh_array;
  array_real_5 /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::mm_array */ mm_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _1_Context_1;
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG */
extern void MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::last_num */kcg_int last_num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::localTime */array_real_4 *localTime,
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MSGQueue_AcklMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

