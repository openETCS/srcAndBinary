/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition */
void setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::inOldPosition */ centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition::outUpdateBGPosition */ centerOfBalisePosition_T_BG_Types_Pkg *outUpdateBGPosition)
{
  /* 1 */ if ((*inOldPosition).odometerOfBaliseDetection.valid) {
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

/* $**************** KCG Version 6.4 (build i21) ****************
** setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

