/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_MsgHdr136_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_MsgHdr136 */
void nextGen_MsgHdr136_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_MsgHdr136::inCommonHeader */_9_Radio_TrainTrack_Header_T_Radio_Types_Pkg *inCommonHeader,
  /* radioOutput_Pkg::nextGen_MsgHdr136::outnextGenHeader */M_136_T_TM_radio_messages *outnextGenHeader)
{
  (*outnextGenHeader).valid = (*inCommonHeader).present;
  (*outnextGenHeader).nid_message = (*inCommonHeader).nid_message;
  (*outnextGenHeader).l_message = 0;
  (*outnextGenHeader).t_train = (*inCommonHeader).t_train;
  (*outnextGenHeader).nid_engine = (*inCommonHeader).nid_engine;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** nextGen_MsgHdr136_radioOutput_Pkg.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

