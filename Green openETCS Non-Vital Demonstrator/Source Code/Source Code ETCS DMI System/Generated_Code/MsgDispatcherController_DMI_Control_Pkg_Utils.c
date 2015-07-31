/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MsgDispatcherController_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::MsgDispatcherController */
void MsgDispatcherController_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::MsgDispatcherController::DMI_text_message */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_text_message,
  /* DMI_Control_Pkg::Utils::MsgDispatcherController::Output1 */kcg_bool *Output1,
  /* DMI_Control_Pkg::Utils::MsgDispatcherController::Output2 */kcg_bool *Output2,
  /* DMI_Control_Pkg::Utils::MsgDispatcherController::Output3 */kcg_bool *Output3)
{
  /* DMI_Control_Pkg::Utils::MsgDispatcherController::_L10 */
  static kcg_bool _L10;
  
  *Output1 = (*DMI_text_message).valid & ((*DMI_text_message).q_textConfirm ==
      Q_TEXTCONFIRM_Confirmation_required);
  _L10 = (*DMI_text_message).q_textConfirm ==
    Q_TEXTCONFIRM_No_confirmation_required;
  *Output2 = (*DMI_text_message).valid & _L10 &
    ((*DMI_text_message).q_textClass == Q_TEXTCLASS_Auxiliary_Information);
  *Output3 = (*DMI_text_message).valid & _L10 &
    ((*DMI_text_message).q_textClass == Q_TEXTCLASS_Important_Information);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MsgDispatcherController_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

