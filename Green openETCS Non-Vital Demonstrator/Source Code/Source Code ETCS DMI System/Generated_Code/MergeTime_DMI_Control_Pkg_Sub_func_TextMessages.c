/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime */
void MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::num */kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::AuxTimeiArray */array_real_5 *AuxTimeiArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::impTimeArray */array_real_5 *impTimeArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::OutQueue */array_real_5 *OutQueue)
{
  array_real_5 tmp;
  kcg_int i;
  
  kcg_copy_array_real_5(OutQueue, AuxTimeiArray);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_real_5(&tmp, OutQueue);
    /* 1 */
    MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp,
      impTimeArray,
      num,
      AuxTimeiArray,
      OutQueue);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

