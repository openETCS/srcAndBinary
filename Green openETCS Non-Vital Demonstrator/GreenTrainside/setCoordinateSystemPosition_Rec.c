/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setCoordinateSystemPosition_Rec.h"

/* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition */
void setCoordinateSystemPosition_Rec(
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::inOldPosition */ centerOfBalisePosition_T_BG_Typ *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Typ *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::outUpdateBGPosition */ centerOfBalisePosition_T_BG_Typ *outUpdateBGPosition)
{
  /* 1 */ if ((((*newTelegram).telegramheader.m_dup != M_DUP_No_duplicates) &
      (N_PIG_I_am_the_2nd == (*newTelegram).telegramheader.n_pig) &
      !(*inOldPosition).odometerOfBaliseDetection.valid) |
    ((*newTelegram).telegramheader.n_pig == N_PIG_I_am_the_1st)) {
    kcg_copy_centerOfBalisePosition(
      outUpdateBGPosition,
      incenterOfBalisePosition);
  }
  else {
    kcg_copy_centerOfBalisePosition(outUpdateBGPosition, inOldPosition);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setCoordinateSystemPosition_Rec.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

