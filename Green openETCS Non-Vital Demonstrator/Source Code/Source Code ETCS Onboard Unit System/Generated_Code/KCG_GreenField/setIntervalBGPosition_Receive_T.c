/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setIntervalBGPosition_Receive_T.h"

/* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition */
void setIntervalBGPosition_Receive_T(
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::inOldPosition */ centerOfBalisePosition_T_BG_Typ *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Typ *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::outUpdateBGPosition */ centerOfBalisePosition_T_BG_Typ *outUpdateBGPosition)
{
  /* 1 */ if ((*inOldPosition).odometerOfBaliseDetection.valid) {
    kcg_copy_centerOfBalisePosition(outUpdateBGPosition, inOldPosition);
  }
  else {
    kcg_copy_centerOfBalisePosition(
      outUpdateBGPosition,
      incenterOfBalisePosition);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setIntervalBGPosition_Receive_T.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

