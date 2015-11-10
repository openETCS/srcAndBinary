/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_109_RadioTrackTrainFactory__Cr.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2 */
void _109_RadioTrackTrainFactory__Cr(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2::in_T_TRAIN */ T_TRAIN in_T_TRAIN,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2::in_M_ACK */ M_ACK in_M_ACK,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2::in_NID_LRBG */ NID_LRBG in_NID_LRBG,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2::inPacket003 */ P003V1_trackside_int_T_TM_basel *inPacket003,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2::inPacket005 */ P005_trackside_int_T_TM *inPacket005,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2::inPacket042 */ P042_trackside_int_T_TM *inPacket042,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2::inPacket057 */ P057_trackside_int_T_TM *inPacket057,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2::inPacket058 */ P058_trackside_int_T_TM *inPacket058,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2 */
  static _6_Radio_TrackTrain_Header_T_TM tmp;
  
  /* 1 */
  RadioTrackTrainHeader__Create_R(
    24,
    in_T_TRAIN,
    in_M_ACK,
    in_NID_LRBG,
    T_TRAIN_DEFAULT,
    NID_EM_DEFAULT,
    Q_SCALE_DEFAULT,
    T_TRAIN_DEFAULT,
    D_REF_DEFAULT,
    Q_DIR_DEFAULT,
    D_EMERGENCYSTOP_DEFAULT,
    M_VERSION_DEFAULT,
    &tmp);
  /* 2 */
  SEND_MergeRadioPackets_RBC_Send(
    &tmp,
    inPacket003,
    inPacket005,
    (P015_trackside_int_T_TM *) &P015_DEFAULT,
    (P021_trackside_int_T_TM *) &P021_DEFAULT,
    (P027V1_trackside_int_T_TM_basel *) &P027_DEFAULT,
    inPacket042,
    inPacket057,
    inPacket058,
    outRadioTrackTrainMessage);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _109_RadioTrackTrainFactory__Cr.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

