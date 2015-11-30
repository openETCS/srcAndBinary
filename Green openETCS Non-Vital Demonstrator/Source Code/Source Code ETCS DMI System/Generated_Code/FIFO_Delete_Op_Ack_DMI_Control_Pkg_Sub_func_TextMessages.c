/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-30T15:42:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_Delete_Op_Ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Ack */
void FIFO_Delete_Op_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Ack::DeletePos */kcg_int DeletePos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Ack::queueIn */array__31763 *queueIn,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Ack::Queue */array__31763 *Queue)
{
  array__31763 tmp;
  kcg_int i;
  
  kcg_copy_array__32700(&tmp[0], (array__32700 *) &(*queueIn)[1]);
  kcg_copy_MsgStructure(
    &(&tmp[4])[0],
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  for (i = 0; i < 5; i++) {
    /* 1 */
    DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &(*queueIn)[i],
      &tmp[i],
      DeletePos,
      &(*Queue)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_Delete_Op_Ack_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-30T15:42:57
*************************************************************$ */

