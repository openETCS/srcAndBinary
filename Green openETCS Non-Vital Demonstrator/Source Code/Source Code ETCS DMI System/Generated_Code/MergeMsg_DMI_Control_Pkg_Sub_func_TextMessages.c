/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg */
void MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::num */kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::impQueue */array__31743 *impQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::AuxiQueue */array__31743 *AuxiQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::OutQueue */array__31743 *OutQueue)
{
  array__31743 tmp;
  kcg_int i;
  
  kcg_copy_array__31743(OutQueue, AuxiQueue);
  for (i = 0; i < 10; i++) {
    kcg_copy_array__31743(&tmp, OutQueue);
    /* 1 */
    MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp,
      impQueue,
      num,
      AuxiQueue,
      OutQueue);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

