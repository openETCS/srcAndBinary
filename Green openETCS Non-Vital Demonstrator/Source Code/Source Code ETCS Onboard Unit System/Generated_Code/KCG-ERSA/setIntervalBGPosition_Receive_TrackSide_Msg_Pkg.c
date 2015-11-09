/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition */
void setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::inOldPosition */centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::outUpdateBGPosition */centerOfBalisePosition_T_BG_Types_Pkg *outUpdateBGPosition)
{
  if ((*inOldPosition).odometerOfBaliseDetection.valid) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outUpdateBGPosition,
      inOldPosition);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outUpdateBGPosition,
      incenterOfBalisePosition);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

