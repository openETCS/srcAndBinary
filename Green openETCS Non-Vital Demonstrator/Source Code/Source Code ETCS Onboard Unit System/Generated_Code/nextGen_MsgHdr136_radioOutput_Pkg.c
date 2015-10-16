/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_MsgHdr136_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_MsgHdr136 */
void nextGen_MsgHdr136_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_MsgHdr136::inCommonHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *inCommonHeader,
  /* radioOutput_Pkg::nextGen_MsgHdr136::outnextGenHeader */ M_136_T_TM_radio_messages *outnextGenHeader)
{
  (*outnextGenHeader).valid = (*inCommonHeader).present;
  (*outnextGenHeader).nid_message = (*inCommonHeader).nid_message;
  (*outnextGenHeader).l_message = 0;
  (*outnextGenHeader).t_train = (*inCommonHeader).t_train;
  (*outnextGenHeader).nid_engine = (*inCommonHeader).nid_engine;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGen_MsgHdr136_radioOutput_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

