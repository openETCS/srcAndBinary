/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_103_RadioTrackTrainHeader__Set.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN */
void _103_RadioTrackTrainHeader__Set(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN::inRadioTrackTrainHeader */ _6_Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN::in_T_TRAIN */ T_TRAIN in_T_TRAIN,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN::outRadioTrackTrainHeader */ _6_Radio_TrackTrain_Header_T_TM *outRadioTrackTrainHeader)
{
  kcg_copy__6_Radio_TrackTrain_He(
    outRadioTrackTrainHeader,
    inRadioTrackTrainHeader);
  (*outRadioTrackTrainHeader).t_train = /* 1 */
    CAST_T_TRAIN_to_int_TM_conversi(in_T_TRAIN);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _103_RadioTrackTrainHeader__Set.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

