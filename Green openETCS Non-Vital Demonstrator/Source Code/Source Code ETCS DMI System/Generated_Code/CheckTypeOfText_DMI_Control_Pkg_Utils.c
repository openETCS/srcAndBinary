/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckTypeOfText_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::CheckTypeOfText */
void CheckTypeOfText_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::CheckTypeOfText::Queue */array__15402 *Queue,
  /* DMI_Control_Pkg::Utils::CheckTypeOfText::Output1 */kcg_bool *Output1,
  /* DMI_Control_Pkg::Utils::CheckTypeOfText::Output2 */kcg_bool *Output2)
{
  /* DMI_Control_Pkg::Utils::CheckTypeOfText::_L7 */
  static kcg_bool _L7;
  
  _L7 = (*Queue)[0].dmi_msg.l_text == 0;
  *Output2 = (*Queue)[0].present & (*Queue)[0].dmi_msg.valid & !_L7;
  *Output1 = (*Queue)[0].present & (*Queue)[0].dmi_msg.valid & _L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckTypeOfText_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

