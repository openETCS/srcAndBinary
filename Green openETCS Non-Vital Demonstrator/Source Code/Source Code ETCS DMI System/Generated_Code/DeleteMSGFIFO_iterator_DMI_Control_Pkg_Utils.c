/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeleteMSGFIFO_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::DeleteMSGFIFO_iterator */
void DeleteMSGFIFO_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::DeleteMSGFIFO_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Utils::DeleteMSGFIFO_iterator::QueueElemIn */MsgStructure *QueueElemIn,
  /* DMI_Control_Pkg::Utils::DeleteMSGFIFO_iterator::QueueElemShifted */MsgStructure *QueueElemShifted,
  /* DMI_Control_Pkg::Utils::DeleteMSGFIFO_iterator::Pos */kcg_int Pos,
  /* DMI_Control_Pkg::Utils::DeleteMSGFIFO_iterator::QueueElemOut */MsgStructure *QueueElemOut)
{
  if (index < Pos) {
    kcg_copy_MsgStructure(QueueElemOut, QueueElemIn);
  }
  else {
    kcg_copy_MsgStructure(QueueElemOut, QueueElemShifted);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DeleteMSGFIFO_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

