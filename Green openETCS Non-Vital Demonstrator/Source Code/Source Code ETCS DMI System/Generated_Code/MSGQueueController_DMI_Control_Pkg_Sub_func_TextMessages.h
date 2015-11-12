/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */
#ifndef _MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController::NumElem */ NumElem;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController */
extern void MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController::insert */kcg_bool insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController::isFull */kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController::countCommand */kcg_int countCommand,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController::num_last */kcg_int num_last,
  outC_MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MSGQueueController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

