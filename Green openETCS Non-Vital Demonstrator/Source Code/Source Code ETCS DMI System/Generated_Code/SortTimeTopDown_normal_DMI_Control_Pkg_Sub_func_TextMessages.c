/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal */
void SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::acc */array_real_10 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::TimeQueue */array_real_10 *TimeQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::num */kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::outTimeArray */array_real_10 *outTimeArray)
{
  kcg_real tmp1;
  kcg_real tmp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::_L69 */ kcg_real _L69;
  
  _L69 = - 1.0;
  if ((0 <= index) & (index < 10)) {
    tmp1 = (*acc)[index];
  }
  else {
    tmp1 = _L69;
  }
  if (tmp1 != _L69) {
    kcg_copy_array_real_10(outTimeArray, acc);
  }
  else {
    kcg_copy_array_real_10(outTimeArray, acc);
    if ((0 <= cDIM_MSGQueueMax_DMI_Control_Pkg - num + index) &
      (cDIM_MSGQueueMax_DMI_Control_Pkg - num + index < 10)) {
      tmp = (*TimeQueue)[cDIM_MSGQueueMax_DMI_Control_Pkg - num + index];
    }
    else {
      tmp = c_hh_DMI_Control_Pkg;
    }
    if ((0 <= index) & (index < 10)) {
      (*outTimeArray)[index] = tmp;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

