/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */
#ifndef _MSGQueue_DMI_Control_Pkg_Utils_H_
#define _MSGQueue_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "FIFO_Delete_Op_DMI_Control_Pkg_Utils.h"
#include "FIFO_Insert_Op_DMI_Control_Pkg_Utils.h"
#include "QueueController_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array__15402 /* DMI_Control_Pkg::Utils::MSGQueue::queue */ queue;
  kcg_bool /* DMI_Control_Pkg::Utils::MSGQueue::isEmpty */ isEmpty;
  kcg_bool /* DMI_Control_Pkg::Utils::MSGQueue::isFull */ isFull;
  kcg_int /* DMI_Control_Pkg::Utils::MSGQueue::N */ N;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_QueueController_DMI_Control_Pkg_Utils /* QueueController */ Context_QueueController;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MSGQueue_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::MSGQueue */
extern void MSGQueue_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::MSGQueue::msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Utils::MSGQueue::insert */kcg_bool insert,
  /* DMI_Control_Pkg::Utils::MSGQueue::delete */kcg_bool delete,
  /* DMI_Control_Pkg::Utils::MSGQueue::pos */kcg_int pos,
  outC_MSGQueue_DMI_Control_Pkg_Utils *outC);

extern void MSGQueue_reset_DMI_Control_Pkg_Utils(
  outC_MSGQueue_DMI_Control_Pkg_Utils *outC);

#endif /* _MSGQueue_DMI_Control_Pkg_Utils_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MSGQueue_DMI_Control_Pkg_Utils.h
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

