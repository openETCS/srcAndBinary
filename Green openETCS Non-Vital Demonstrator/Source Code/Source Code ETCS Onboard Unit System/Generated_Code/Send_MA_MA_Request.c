/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_MA_MA_Request.h"

/* MA_Request::Send_MA */
void Send_MA_MA_Request(
  /* MA_Request::Send_MA::msg132 */ Radio_TrainTrack_Message_T_TM_transitional *msg132,
  /* MA_Request::Send_MA::message_out */ Radio_TrainTrack_Message_T_TM_transitional *message_out)
{
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(message_out, msg132);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_MA_MA_Request.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

