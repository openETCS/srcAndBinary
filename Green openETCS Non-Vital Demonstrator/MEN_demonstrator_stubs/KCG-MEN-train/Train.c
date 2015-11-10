/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Train.h"

void Train_reset(outC_Train *outC)
{
  /* 2 */ Send_M157_reset_TM_radio_messages(&outC->Context_2);
}

/* Train */
void Train(inC_Train *inC, outC_Train *outC)
{
  Radio_TrackTrain_Header_T_Radio_Types_Pkg tmp;
  /* Train::_L12 */ kcg_bool _L12;
  
  /* 2 */
  Send_M157_TM_radio_messages(
    3555,
    (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *) &no_bus,
    m_version,
    (P000_TM_TrainToTrack *) &p00,
    (P001_TM_TrainToTrack *) &p01,
    (P004_TM_TrainToTrack *) &p04,
    (P005_TM_TrainToTrack *) &p05,
    (P044_TM_TrainToTrack *) &p44,
    (M_157_T_TM_radio_messages *) &m157,
    &outC->Context_2);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->MessageOut,
    &outC->Context_2.MessageBus_out[0]);
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->BaliseTelegram,
    &inC->BaliseMessage_in.Header);
  /* 1 */
  Read_P003V1_TM_baseline2(&inC->RadioPackets_in, &_L12, &outC->P003V1_OBU_out);
  /* 1 */
  Read_P027V1_TM_baseline2(&inC->RadioPackets_in, &_L12, &outC->P027V1_out);
  /* 1 */ Read_P005_TM(&inC->RadioPackets_in, &_L12, &outC->P005_OBU_out);
  /* 1 */ Read_P041_TM(&inC->RadioPackets_in, &_L12, &outC->P041_OBU_out);
  /* 1 */ Read_P021_TM(&inC->RadioPackets_in, &_L12, &outC->P021_OBU_out);
  /* 1 */ Read_P015_TM(&inC->RadioPackets_in, &_L12, &outC->P015_OBU_out);
  /* 1 */
  compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
    &inC->RadioMessage_in,
    &tmp);
  /* 1 */ Read_M003_TM_radio_messages(&tmp, &outC->received, &outC->M003_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Train.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

