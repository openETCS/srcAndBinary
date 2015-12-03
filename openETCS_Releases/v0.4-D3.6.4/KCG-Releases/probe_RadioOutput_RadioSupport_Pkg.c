/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "probe_RadioOutput_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::probe_RadioOutput */
void probe_RadioOutput_RadioSupport_Pkg(
  /* RadioSupport_Pkg::probe_RadioOutput::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* RadioSupport_Pkg::probe_RadioOutput::msg1 */ NID_MESSAGE *msg1,
  /* RadioSupport_Pkg::probe_RadioOutput::msg2 */ NID_MESSAGE *msg2,
  /* RadioSupport_Pkg::probe_RadioOutput::msg3 */ NID_MESSAGE *msg3,
  /* RadioSupport_Pkg::probe_RadioOutput::msg4 */ NID_MESSAGE *msg4,
  /* RadioSupport_Pkg::probe_RadioOutput::msg5 */ NID_MESSAGE *msg5)
{
  *msg1 = (*MessageBus)[0].Message.nid_message;
  *msg2 = (*MessageBus)[1].Message.nid_message;
  *msg3 = (*MessageBus)[2].Message.nid_message;
  *msg4 = (*MessageBus)[3].Message.nid_message;
  *msg5 = (*MessageBus)[4].Message.nid_message;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** probe_RadioOutput_RadioSupport_Pkg.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

