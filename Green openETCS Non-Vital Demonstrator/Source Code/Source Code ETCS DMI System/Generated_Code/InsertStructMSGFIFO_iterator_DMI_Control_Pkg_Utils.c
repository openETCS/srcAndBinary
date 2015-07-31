/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InsertStructMSGFIFO_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::InsertStructMSGFIFO_iterator */
void InsertStructMSGFIFO_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::InsertStructMSGFIFO_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Utils::InsertStructMSGFIFO_iterator::counterValue */kcg_int counterValue,
  /* DMI_Control_Pkg::Utils::InsertStructMSGFIFO_iterator::newMsg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *newMsg,
  /* DMI_Control_Pkg::Utils::InsertStructMSGFIFO_iterator::condition */kcg_bool *condition,
  /* DMI_Control_Pkg::Utils::InsertStructMSGFIFO_iterator::entryValue */MsgStructure *entryValue)
{
  (*entryValue).present = kcg_true;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &(*entryValue).dmi_msg,
    newMsg);
  *condition = !(index == counterValue);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InsertStructMSGFIFO_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

