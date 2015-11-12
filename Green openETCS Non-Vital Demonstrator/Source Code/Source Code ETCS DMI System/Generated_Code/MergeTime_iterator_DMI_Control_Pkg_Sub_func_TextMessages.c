/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator */
void MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::acc */array_real_5 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::ImpArray */array_real_5 *ImpArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::numAuxi */kcg_int numAuxi,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::AuxiArray */array_real_5 *AuxiArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::OutputTimeArray */array_real_5 *OutputTimeArray)
{
  kcg_real tmp1;
  kcg_real tmp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::_L34 */ kcg_real _L34;
  
  _L34 = - 1.0;
  if ((0 <= index) & (index < 5)) {
    tmp1 = (*AuxiArray)[index];
  }
  else {
    tmp1 = _L34;
  }
  if (tmp1 != _L34) {
    kcg_copy_array_real_5(OutputTimeArray, acc);
  }
  else {
    kcg_copy_array_real_5(OutputTimeArray, acc);
    if ((0 <= index - numAuxi) & (index - numAuxi < 5)) {
      tmp = (*ImpArray)[index - numAuxi];
    }
    else {
      tmp = c_hh_DMI_Control_Pkg;
    }
    if ((0 <= index) & (index < 5)) {
      (*OutputTimeArray)[index] = tmp;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

