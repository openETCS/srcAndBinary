/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_Delete_Op_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::FIFO_Delete_Op */
void FIFO_Delete_Op_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FIFO_Delete_Op::DeletePos */kcg_int DeletePos,
  /* DMI_Control_Pkg::Utils::FIFO_Delete_Op::queueIn */array__15402 *queueIn,
  /* DMI_Control_Pkg::Utils::FIFO_Delete_Op::Queue */array__15402 *Queue)
{
  static array__15402 tmp;
  static kcg_int i;
  
  kcg_copy_array__15839(&tmp[0], (array__15839 *) &(*queueIn)[1]);
  kcg_copy_MsgStructure(
    &(&tmp[4])[0],
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  for (i = 0; i < 5; i++) {
    /* 1 */
    DeleteMSGFIFO_iterator_DMI_Control_Pkg_Utils(
      i,
      &(*queueIn)[i],
      &tmp[i],
      DeletePos,
      &(*Queue)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_Delete_Op_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

