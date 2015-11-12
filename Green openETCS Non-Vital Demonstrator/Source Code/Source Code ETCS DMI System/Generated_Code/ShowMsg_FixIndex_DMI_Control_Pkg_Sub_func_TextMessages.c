/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShowMsg_FixIndex_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndex */
void ShowMsg_FixIndex_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndex::numMsg1 */kcg_int numMsg1,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndex::numMsg2 */kcg_int numMsg2,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndex::numMsg3 */kcg_int numMsg3,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndex::numMsg4 */kcg_int numMsg4,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndex::numMsg5 */kcg_int numMsg5,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndex::localIndexarray */array_int_5 *localIndexarray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndex::FixIndexArray */array_int_5 *FixIndexArray)
{
  array_int_5 tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndex::_L222 */ array_int_5 _L222;
  
  _L222[0] = numMsg1;
  _L222[1] = numMsg2;
  _L222[2] = numMsg3;
  _L222[3] = numMsg4;
  _L222[4] = numMsg5;
  kcg_copy_array_int_5(
    FixIndexArray,
    (array_int_5 *) &cArrayOfIndex_DMI_Control_Pkg);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_int_5(&tmp, FixIndexArray);
    /* 1 */
    IndexMsg_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp,
      localIndexarray,
      &_L222,
      FixIndexArray);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ShowMsg_FixIndex_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

