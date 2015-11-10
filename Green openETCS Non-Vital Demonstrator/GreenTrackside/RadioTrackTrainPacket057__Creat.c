/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket057__Creat.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create */
void RadioTrackTrainPacket057__Creat(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_Q_DIR */ Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_T_MAR */ T_MAR in_T_MAR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_T_TIMEOUTRQST */ T_TIMEOUTRQST in_T_TIMEOUTRQST,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_T_CYCRQST */ T_CYCRQST in_T_CYCRQST,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::outRadioTrackTrainPacket */ P057_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create */
  static P057_trackside_int_T_TM tmp1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create */
  static P057_trackside_int_T_TM tmp;
  
  /* 1 */
  RadioTrackTrainPacket057__SetVa(
    (P057_trackside_int_T_TM *) &P057_DEFAULT,
    kcg_true,
    &tmp);
  /* 1 */ _95_RadioTrackTrainPacket057__S(&tmp, 57, &tmp1);
  /* 1 */
  RadioTrackTrainPacket057__Set_L(&tmp1, P57_L_PACKET_RBC_Messaging_Pkg, &tmp);
  /* 1 */ _96_RadioTrackTrainPacket057__S(&tmp, in_Q_DIR, &tmp1);
  /* 1 */ _99_RadioTrackTrainPacket057__S(&tmp1, in_T_MAR, &tmp);
  /* 1 */ _98_RadioTrackTrainPacket057__S(&tmp, in_T_TIMEOUTRQST, &tmp1);
  /* 1 */
  _97_RadioTrackTrainPacket057__S(
    &tmp1,
    in_T_CYCRQST,
    outRadioTrackTrainPacket);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket057__Creat.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

