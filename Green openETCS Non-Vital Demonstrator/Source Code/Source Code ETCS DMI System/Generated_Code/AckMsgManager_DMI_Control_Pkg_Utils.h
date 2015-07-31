/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */
#ifndef _AckMsgManager_DMI_Control_Pkg_Utils_H_
#define _AckMsgManager_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Utils.h"
#include "CheckTypeOfText_DMI_Control_Pkg_Utils.h"
#include "FlashingOperator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int_5 /* DMI_Control_Pkg::Utils::AckMsgManager::IndexFixedMsg */ IndexFixedMsg;
  array_char_30_5 /* DMI_Control_Pkg::Utils::AckMsgManager::ArrayPlainText */ ArrayPlainText;
  array_real_5 /* DMI_Control_Pkg::Utils::AckMsgManager::Array_hh */ Array_hh;
  array_real_5 /* DMI_Control_Pkg::Utils::AckMsgManager::Array_mm */ Array_mm;
  kcg_bool /* DMI_Control_Pkg::Utils::AckMsgManager::FlashingBorderMsg */ FlashingBorderMsg;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FlashingOperator_DMI_Control_Pkg_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_AckMsgManager_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::AckMsgManager */
extern void AckMsgManager_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::AckMsgManager::Queue */array__15402 *Queue,
  /* DMI_Control_Pkg::Utils::AckMsgManager::SystemTime */kcg_int SystemTime,
  outC_AckMsgManager_DMI_Control_Pkg_Utils *outC);

extern void AckMsgManager_reset_DMI_Control_Pkg_Utils(
  outC_AckMsgManager_DMI_Control_Pkg_Utils *outC);

#endif /* _AckMsgManager_DMI_Control_Pkg_Utils_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** AckMsgManager_DMI_Control_Pkg_Utils.h
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

