/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages.h"

void MSGQueueController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* 1 */ Counter_reset_pwlinear_int(&outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController */
void MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController::insert */kcg_bool insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController::isFull */kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController::countCommand */kcg_int countCommand,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueueController::num_last */kcg_int num_last,
  outC_MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_int tmp;
  
  if (isFull & insert) {
    tmp = 0;
  }
  else {
    tmp = countCommand;
  }
  /* 1 */
  Counter_pwlinear_int(
    tmp,
    (kcg_bool) ((num_last <= 0) | (num_last > cDIM_MSGQueue_DMI_Control_Pkg)),
    &outC->Context_1);
  outC->NumElem = outC->Context_1.Count;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MSGQueueController_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

