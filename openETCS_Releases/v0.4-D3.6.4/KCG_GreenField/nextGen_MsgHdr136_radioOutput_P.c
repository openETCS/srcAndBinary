/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_MsgHdr136_radioOutput_P.h"

/* radioOutput_Pkg::nextGen_MsgHdr136 */
void nextGen_MsgHdr136_radioOutput_P(
  /* radioOutput_Pkg::nextGen_MsgHdr136::inCommonHeader */ _10_Radio_TrainTrack_Header_T_R *inCommonHeader,
  /* radioOutput_Pkg::nextGen_MsgHdr136::outnextGenHeader */ M_136_T_TM_radio_messages *outnextGenHeader)
{
  (*outnextGenHeader).valid = (*inCommonHeader).present;
  (*outnextGenHeader).nid_message = (*inCommonHeader).nid_message;
  (*outnextGenHeader).l_message = 0;
  (*outnextGenHeader).t_train = (*inCommonHeader).t_train;
  (*outnextGenHeader).nid_engine = (*inCommonHeader).nid_engine;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGen_MsgHdr136_radioOutput_P.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

