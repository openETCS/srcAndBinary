/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */
#ifndef _QueueController_DMI_Control_Pkg_Utils_H_
#define _QueueController_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Utils::QueueController::NumElem */ NumElem;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_QueueController_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::QueueController */
extern void QueueController_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::QueueController::CountCommand */kcg_int CountCommand,
  /* DMI_Control_Pkg::Utils::QueueController::delete */kcg_bool delete,
  /* DMI_Control_Pkg::Utils::QueueController::isEmpty */kcg_bool isEmpty,
  /* DMI_Control_Pkg::Utils::QueueController::insert */kcg_bool insert,
  /* DMI_Control_Pkg::Utils::QueueController::isFull */kcg_bool isFull,
  outC_QueueController_DMI_Control_Pkg_Utils *outC);

extern void QueueController_reset_DMI_Control_Pkg_Utils(
  outC_QueueController_DMI_Control_Pkg_Utils *outC);

#endif /* _QueueController_DMI_Control_Pkg_Utils_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** QueueController_DMI_Control_Pkg_Utils.h
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

