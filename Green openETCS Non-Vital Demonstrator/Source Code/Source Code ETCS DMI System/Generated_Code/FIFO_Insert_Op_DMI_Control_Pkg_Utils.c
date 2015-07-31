/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_Insert_Op_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::FIFO_Insert_Op */
void FIFO_Insert_Op_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FIFO_Insert_Op::Pos */kcg_int Pos,
  /* DMI_Control_Pkg::Utils::FIFO_Insert_Op::Messaggio */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *Messaggio,
  /* DMI_Control_Pkg::Utils::FIFO_Insert_Op::queue */array__15402 *queue)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* DMI_Control_Pkg::Utils::FIFO_Insert_Op::_L3 */
  static kcg_int _L3;
  
  for (i = 0; i < 5; i++) {
    /* 1 */
    InsertStructMSGFIFO_iterator_DMI_Control_Pkg_Utils(
      i,
      Pos,
      Messaggio,
      &tmp,
      &(*queue)[i]);
    _L3 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L3; i < 5; i++) {
    kcg_copy_MsgStructure(
      &(*queue)[i],
      (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_Insert_Op_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

