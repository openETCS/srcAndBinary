/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__Creat.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create */
void RadioTrackTrainPacket058__Creat(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_Q_DIR */ Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_Q_SCALE */ Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_T_CYCLOC */ T_CYCLOC in_T_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_D_CYCLOC */ D_CYCLOC in_D_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_M_LOC */ M_LOC in_M_LOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::inNumberOfIncrementalDistancesAndQualifiers */ N_ITER inNumberOfIncrementalDistancesA,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::inIncrementalDistancesAndQualifiers */ array_44858 *inIncrementalDistancesAndQualif,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::outRadioTrackTrainPacket */ P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create */
  static P058_trackside_int_T_TM tmp1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create */
  static P058_trackside_int_T_TM tmp;
  
  /* 1 */
  RadioTrackTrainPacket058__SetVa(
    (P058_trackside_int_T_TM *) &P058_DEFAULT,
    kcg_true,
    &tmp);
  /* 1 */ _88_RadioTrackTrainPacket058__S(&tmp, 58, &tmp1);
  /* 1 */
  RadioTrackTrainPacket058__Set_L(
    &tmp1,
    P58_L_PACKET_STATIC_PART_RBC_Me + P58_L_PACKET_D_LOC_Q_LGTLOC_RBC *
    inNumberOfIncrementalDistancesA,
    &tmp);
  /* 1 */ _94_RadioTrackTrainPacket058__S(&tmp, in_Q_DIR, &tmp1);
  /* 1 */ _93_RadioTrackTrainPacket058__S(&tmp1, in_Q_SCALE, &tmp);
  /* 1 */ _89_RadioTrackTrainPacket058__S(&tmp, in_T_CYCLOC, &tmp1);
  /* 1 */ _92_RadioTrackTrainPacket058__S(&tmp1, in_D_CYCLOC, &tmp);
  /* 1 */ _91_RadioTrackTrainPacket058__S(&tmp, in_M_LOC, &tmp1);
  /* 1 */
  RadioTrackTrainPacket058__SetNu(&tmp1, inNumberOfIncrementalDistancesA, &tmp);
  /* 1 */
  _90_RadioTrackTrainPacket058__S(
    &tmp,
    inIncrementalDistancesAndQualif,
    outRadioTrackTrainPacket);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket058__Creat.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

