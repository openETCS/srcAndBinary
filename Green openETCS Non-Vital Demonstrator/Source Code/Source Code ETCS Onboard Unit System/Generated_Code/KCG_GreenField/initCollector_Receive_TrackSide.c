/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initCollector_Receive_TrackSide.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector */
void initCollector_Receive_TrackSide(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::outCollector */ BGCollector_T_Receive_TrackSide *outCollector)
{
  (*outCollector).badBaliseFlag = kcg_false;
  (*outCollector).BGMessageSent = kcg_true;
  (*outCollector).C_ID = (*newTelegram).telegramheader.nid_c;
  (*outCollector).BG_ID = (*newTelegram).telegramheader.nid_bg;
  kcg_copy_centerOfBalisePosition(
    &(*outCollector).balisePosition,
    (centerOfBalisePosition_T_BG_Typ *) &cemptyPosition_BG_Types_Pkg);
  kcg_copy_centerOfBalisePosition(
    &(*outCollector).positionFirstContact,
    (centerOfBalisePosition_T_BG_Typ *) &cemptyPosition_BG_Types_Pkg);
  (*outCollector).collectedTelegrams = 0;
  (*outCollector).totalTelegrams = /* 1 */
    convNTotal_Receive_TrackSide_Ms((*newTelegram).telegramheader.n_total);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** initCollector_Receive_TrackSide.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

