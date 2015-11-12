/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IndexMsg_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::IndexMsg_iterator */
void IndexMsg_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::IndexMsg_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::IndexMsg_iterator::acc */array_int_5 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::IndexMsg_iterator::IndexMsgQueue */array_int_5 *IndexMsgQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::IndexMsg_iterator::num */array_int_5 *num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::IndexMsg_iterator::indexArray */array_int_5 *indexArray)
{
  kcg_int tmp2;
  kcg_int tmp1;
  kcg_int tmp;
  
  if ((0 <= index) & (index < 5)) {
    tmp2 = (*IndexMsgQueue)[index];
  }
  else {
    tmp2 = 0;
  }
  if (tmp2 == 0) {
    kcg_copy_array_int_5(indexArray, acc);
  }
  else {
    kcg_copy_array_int_5(indexArray, acc);
    if ((0 <= index) & (index < 5)) {
      tmp1 = (*IndexMsgQueue)[index];
      tmp = (*num)[index];
    }
    else {
      tmp1 = 0;
      tmp = 0;
    }
    if ((0 <= tmp - 1) & (tmp - 1 < 5)) {
      (*indexArray)[tmp - 1] = tmp1;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IndexMsg_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

