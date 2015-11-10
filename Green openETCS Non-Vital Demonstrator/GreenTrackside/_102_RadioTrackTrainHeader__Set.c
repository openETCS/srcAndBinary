/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_102_RadioTrackTrainHeader__Set.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_LRBG */
void _102_RadioTrackTrainHeader__Set(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_LRBG::inRadioTrackTrainHeader */ _6_Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_LRBG::in_NID_LRBG */ kcg_int in_NID_LRBG,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_LRBG::outRadioTrackTrainHeader */ _6_Radio_TrackTrain_Header_T_TM *outRadioTrackTrainHeader)
{
  kcg_copy__6_Radio_TrackTrain_He(
    outRadioTrackTrainHeader,
    inRadioTrackTrainHeader);
  (*outRadioTrackTrainHeader).nid_lrbg = in_NID_LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _102_RadioTrackTrainHeader__Set.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

