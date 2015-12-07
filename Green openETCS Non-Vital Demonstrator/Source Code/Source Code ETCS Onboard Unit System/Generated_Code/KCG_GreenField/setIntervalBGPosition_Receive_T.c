/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
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
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

