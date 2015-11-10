/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Track.h"

void Track_reset(outC_Track *outC)
{
  /* 1 */ Read_M157_reset_TM_radio_messages_trackside(&outC->_2_Context_1);
  /* 1 */ SendRBC_reset(&outC->_1_Context_1);
  /* 1 */ SendBalises_reset(&outC->Context_1);
}

/* Track */
void Track(
  /* Track::TrainTrackMessageIn */M_TrainTrack_Message_T_TM_radio_messages *TrainTrackMessageIn,
  outC_Track *outC)
{
  P044_TM_TrainToTrack noname;
  M_VERSION _1_noname;
  T_TRAIN _2_noname;
  
  outC->_L25 = 242.0;
  outC->_L24 = 1;
  outC->_L23 = kcg_false;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L22,
    (CompressedPackets_T_Common_Types_Pkg *) &no_packets);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L21,
    (M_TrackTrain_Radio_T_TM_radio_messages *) &no_message);
  /* 1 */ SendBalises(outC->_L25, &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L18,
    &outC->Context_1.BaliseMessage);
  kcg_copy_CompressedBaliseMessage_TM(&outC->BaliseMessage, &outC->_L18);
  /* 1 */
  SendRBC(
    &outC->_L21,
    &outC->_L22,
    outC->_L24,
    outC->_L23,
    &outC->_1_Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L16,
    &outC->_1_Context_1.Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L17,
    &outC->_1_Context_1.Packets_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->RadioPackets_out,
    &outC->_L17);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->RadioMessage_out,
    &outC->_L16);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L19,
    TrainTrackMessageIn);
  outC->_L15 = 1617;
  /* 1 */
  Read_M157_TM_radio_messages_trackside(
    outC->_L15,
    &outC->_L19,
    &outC->_2_Context_1);
  kcg_copy_M_157_T_TM_radio_messages(
    &outC->_L1,
    &outC->_2_Context_1.Message_157_out);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L2, &outC->_2_Context_1.P000);
  kcg_copy_P001_TM_TrainToTrack(&outC->_L3, &outC->_2_Context_1.P001);
  kcg_copy_P004_TM_TrainToTrack(&outC->_L4, &outC->_2_Context_1.P004);
  kcg_copy_P005_TM_TrainToTrack(&outC->_L5, &outC->_2_Context_1.P005);
  kcg_copy_P044_TM_TrainToTrack(&outC->_L6, &outC->_2_Context_1.P044);
  outC->_L7 = outC->_2_Context_1._10_m_version;
  outC->_L8 = outC->_2_Context_1.t_train_received;
  _2_noname = outC->_L8;
  _1_noname = outC->_L7;
  kcg_copy_P044_TM_TrainToTrack(&noname, &outC->_L6);
  kcg_copy_P005_TM_TrainToTrack(&outC->P005, &outC->_L5);
  kcg_copy_P004_TM_TrainToTrack(&outC->P004, &outC->_L4);
  kcg_copy_P001_TM_TrainToTrack(&outC->P001, &outC->_L3);
  kcg_copy_P000_TM_TrainToTrack(&outC->P000, &outC->_L2);
  kcg_copy_M_157_T_TM_radio_messages(&outC->Message_157_out, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Track.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

