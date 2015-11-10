/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Create_R.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create */
void RadioTrackTrainHeader__Create_R(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_NID_MESSAGE */ NID_MESSAGE in_NID_MESSAGE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_T_TRAIN */ T_TRAIN in_T_TRAIN,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_M_ACK */ M_ACK in_M_ACK,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_NID_LRBG */ NID_LRBG in_NID_LRBG,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_T_TRAIN_Ref */ T_TRAIN in_T_TRAIN_Ref,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_NID_EM */ NID_EM in_NID_EM,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_Q_SCALE */ Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_T_TRAIN_Sh */ T_TRAIN in_T_TRAIN_Sh,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_D_REF */ D_REF in_D_REF,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_Q_DIR */ Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_D_EMERGENCYSTOP */ D_EMERGENCYSTOP in_D_EMERGENCYSTOP,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_M_VERSION */ M_VERSION in_M_VERSION,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::outRadioTrackTrainHeader */ _6_Radio_TrackTrain_Header_T_TM *outRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create */
  static _6_Radio_TrackTrain_Header_T_TM tmp1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create */
  static _6_Radio_TrackTrain_Header_T_TM tmp;
  
  /* 1 */
  _104_RadioTrackTrainHeader__Set(
    (_6_Radio_TrackTrain_Header_T_TM *) &RADIO_TRACK_TRAIN_HEADER_DEFAUL,
    in_NID_MESSAGE,
    &tmp);
  /* 1 */ _103_RadioTrackTrainHeader__Set(&tmp, in_T_TRAIN, &tmp1);
  /* 1 */ RadioTrackTrainHeader__Set_M_AC(&tmp1, in_M_ACK, &tmp);
  /* 1 */ _102_RadioTrackTrainHeader__Set(&tmp, in_NID_LRBG, &tmp1);
  /* 1 */ _101_RadioTrackTrainHeader__Set(&tmp1, in_T_TRAIN_Ref, &tmp);
  /* 1 */ RadioTrackTrainHeader__Set_NID_(&tmp, in_NID_EM, &tmp1);
  /* 1 */ RadioTrackTrainHeader__Set_Q_SC(&tmp1, in_Q_SCALE, &tmp);
  /* 1 */ RadioTrackTrainHeader__Set_T_TR(&tmp, in_T_TRAIN_Sh, &tmp1);
  /* 1 */ RadioTrackTrainHeader__Set_D_RE(&tmp1, in_D_REF, &tmp);
  /* 1 */ RadioTrackTrainHeader__Set_Q_DI(&tmp, in_Q_DIR, &tmp1);
  /* 1 */ RadioTrackTrainHeader__Set_D_EM(&tmp1, in_D_EMERGENCYSTOP, &tmp);
  /* 1 */
  RadioTrackTrainHeader__Set_M_VE(&tmp, in_M_VERSION, outRadioTrackTrainHeader);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainHeader__Create_R.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

