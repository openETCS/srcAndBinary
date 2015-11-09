/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkInit_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::checkInit */
void checkInit_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkInit::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkInit::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  /* Receive_TrackSide_Msg_Pkg::checkInit::isDefined */
  static kcg_bool isDefined;
  
  isDefined = (*inCollector).totalTelegrams > 0;
  if (isDefined) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(outCollector, inCollector);
  }
  else {
    /* 1 */
    initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      newTelegram,
      outCollector);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkInit_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

