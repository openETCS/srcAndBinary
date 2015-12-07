/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateCollectorSingleBB_Receive.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB */
void updateCollectorSingleBB_Receive(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::inSingleBadBalise */ kcg_bool inSingleBadBalise,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::inCollector */ BGCollector_T_Receive_TrackSide *inCollector,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB::outCollector */ BGCollector_T_Receive_TrackSide *outCollector)
{
  (*outCollector).BGMessageSent = (*inCollector).BGMessageSent;
  (*outCollector).C_ID = (*inCollector).C_ID;
  (*outCollector).BG_ID = (*inCollector).BG_ID;
  kcg_copy_centerOfBalisePosition(
    &(*outCollector).balisePosition,
    &(*inCollector).balisePosition);
  kcg_copy_centerOfBalisePosition(
    &(*outCollector).positionFirstContact,
    &(*inCollector).positionFirstContact);
  (*outCollector).collectedTelegrams = (*inCollector).collectedTelegrams;
  (*outCollector).totalTelegrams = (*inCollector).totalTelegrams;
  /* 1 */ if (inSingleBadBalise) {
    (*outCollector).badBaliseFlag = kcg_false;
  }
  else {
    (*outCollector).badBaliseFlag = (*inCollector).badBaliseFlag;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** updateCollectorSingleBB_Receive.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

