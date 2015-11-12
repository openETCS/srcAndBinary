/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal */
void SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::acc */array_real_5 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::TimeQueue */array_real_5 *TimeQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::numArray */array_int_5 *numArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::num */kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal::outTimeArray */array_real_5 *outTimeArray)
{
  kcg_int tmp3;
  kcg_int tmp2;
  kcg_real tmp1;
  kcg_int tmp;
  
  if ((0 <= index - 1) & (index - 1 < 5)) {
    tmp3 = (*numArray)[index - 1];
  }
  else {
    tmp3 = - 1;
  }
  if ((0 <= index) & (index < 5)) {
    tmp2 = (*numArray)[index];
  }
  else {
    tmp2 = 0;
  }
  if (tmp3 == tmp2) {
    kcg_copy_array_real_5(outTimeArray, acc);
  }
  else {
    kcg_copy_array_real_5(outTimeArray, acc);
    if ((0 <= cDIM_MSGQueue_DMI_Control_Pkg - num + index) &
      (cDIM_MSGQueue_DMI_Control_Pkg - num + index < 5)) {
      tmp1 = (*TimeQueue)[cDIM_MSGQueue_DMI_Control_Pkg - num + index];
    }
    else {
      tmp1 = c_hh_DMI_Control_Pkg;
    }
    if ((0 <= index - 1) & (index - 1 < 5)) {
      tmp = (*numArray)[index - 1];
    }
    else {
      tmp = 0;
    }
    if ((0 <= tmp) & (tmp < 5)) {
      (*outTimeArray)[tmp] = tmp1;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

