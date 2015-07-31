/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckDeskStatus_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::CheckDeskStatus */
void CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::TIU_trainStatus */TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::Output1 */kcg_bool *Output1,
  /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::Output2 */kcg_bool *Output2)
{
  *Output2 = (*TIU_trainStatus).valid & !(*TIU_trainStatus).deskOpen;
  *Output1 = (*TIU_trainStatus).valid & (*TIU_trainStatus).deskOpen;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckDeskStatus_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

