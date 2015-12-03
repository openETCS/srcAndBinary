/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg */
void RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg::o_RadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *o_RadioTrainTrackMessage)
{
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    o_RadioTrainTrackMessage,
    (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
      &RADIO_TRAIN_TRACK_MESSAGE_DEFAULT);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

