/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkInit_Receive_TrackSide_Msg.h"

/* Receive_TrackSide_Msg_Pkg::checkInit */
void checkInit_Receive_TrackSide_Msg(
  /* Receive_TrackSide_Msg_Pkg::checkInit::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkInit::inCollector */ BGCollector_T_Receive_TrackSide *inCollector,
  /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */ BGCollector_T_Receive_TrackSide *outCollector)
{
  /* Receive_TrackSide_Msg_Pkg::checkInit::isDefined */
  static kcg_bool isDefined;
  
  isDefined = (*inCollector).totalTelegrams > 0;
  /* ck_isDefined */ if (isDefined) {
    kcg_copy_BGCollector_T_Receive_(outCollector, inCollector);
  }
  else {
    /* 1 */ initCollector_Receive_TrackSide(newTelegram, outCollector);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkInit_Receive_TrackSide_Msg.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

