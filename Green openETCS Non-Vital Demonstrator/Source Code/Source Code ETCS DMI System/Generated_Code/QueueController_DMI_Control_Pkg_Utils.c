/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "QueueController_DMI_Control_Pkg_Utils.h"

void QueueController_reset_DMI_Control_Pkg_Utils(
  outC_QueueController_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
  /* 3 */ Counter_reset_pwlinear_int(&outC->Context_3);
}

/* DMI_Control_Pkg::Utils::QueueController */
void QueueController_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::QueueController::CountCommand */kcg_int CountCommand,
  /* DMI_Control_Pkg::Utils::QueueController::delete */kcg_bool delete,
  /* DMI_Control_Pkg::Utils::QueueController::isEmpty */kcg_bool isEmpty,
  /* DMI_Control_Pkg::Utils::QueueController::insert */kcg_bool insert,
  /* DMI_Control_Pkg::Utils::QueueController::isFull */kcg_bool isFull,
  outC_QueueController_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int tmp;
  /* DMI_Control_Pkg::Utils::QueueController::_L15 */
  static kcg_int _L15;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L15 = 0;
  }
  else {
    _L15 = outC->NumElem;
  }
  if ((isFull & insert) | (isEmpty & delete)) {
    tmp = 0;
  }
  else {
    tmp = CountCommand;
  }
  /* 3 */
  Counter_pwlinear_int(
    tmp,
    (kcg_bool) ((_L15 <= 0) | (_L15 >= cDIM_MSGQueue_DMI_Control_Pkg)),
    &outC->Context_3);
  outC->NumElem = outC->Context_3.Count;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** QueueController_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

