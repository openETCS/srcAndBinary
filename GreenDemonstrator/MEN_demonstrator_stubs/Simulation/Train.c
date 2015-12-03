/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Train.h"

void Train_reset(outC_Train *outC)
{
  /* 1 */ Read_P003V1_reset_TM_baseline2(&outC->_7_Context_1);
  /* 1 */ Read_P027V1_reset_TM_baseline2(&outC->_6_Context_1);
  /* 1 */ Read_P005_reset_TM(&outC->_5_Context_1);
  /* 1 */ Read_P015_reset_TM(&outC->_4_Context_1);
  /* 1 */ Read_P021_reset_TM(&outC->_3_Context_1);
  /* 1 */ Read_P041_reset_TM(&outC->_2_Context_1);
  /* 1 */ Read_M003_reset_TM_radio_messages(&outC->_1_Context_1);
  /* 2 */ Send_M157_reset_TM_radio_messages(&outC->Context_2);
  /* 1 */
  compressed_to_Radio_Track_reset_TM_RBC_conversions_legacy(&outC->Context_1);
}

/* Train */
void Train(
  /* Train::RadioMessage_in */M_TrackTrain_Radio_T_TM_radio_messages *RadioMessage_in,
  /* Train::RadioPackets_in */CompressedPackets_T_Common_Types_Pkg *RadioPackets_in,
  /* Train::BaliseMessage_in */CompressedBaliseMessage_TM *BaliseMessage_in,
  outC_Train *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  kcg_bool _2_noname;
  kcg_bool _3_noname;
  kcg_bool _4_noname;
  kcg_bool _5_noname;
  CompressedPackets_T_Common_Types_Pkg _6_noname;
  
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L17, BaliseMessage_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L19,
    &outC->_L17.Messages);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L22, RadioMessage_in);
  /* 1 */
  compressed_to_Radio_Track_TM_RBC_conversions_legacy(
    &outC->_L22,
    &outC->Context_1);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L35,
    &outC->Context_1.Header_Out);
  kcg_copy_M_157_T_TM_radio_messages(
    &outC->_L34,
    (M_157_T_TM_radio_messages *) &m157);
  kcg_copy_P044_TM_TrainToTrack(&outC->_L33, (P044_TM_TrainToTrack *) &p44);
  kcg_copy_P005_TM_TrainToTrack(&outC->_L32, (P005_TM_TrainToTrack *) &p05);
  kcg_copy_P004_TM_TrainToTrack(&outC->_L31, (P004_TM_TrainToTrack *) &p04);
  kcg_copy_P001_TM_TrainToTrack(&outC->_L30, (P001_TM_TrainToTrack *) &p01);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L29, (P000_TM_TrainToTrack *) &p00);
  outC->_L28 = m_version;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L27,
    (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *) &no_bus);
  outC->_L25 = 3555;
  /* 2 */
  Send_M157_TM_radio_messages(
    outC->_L25,
    &outC->_L27,
    outC->_L28,
    &outC->_L29,
    &outC->_L30,
    &outC->_L31,
    &outC->_L32,
    &outC->_L33,
    &outC->_L34,
    &outC->Context_2);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L24,
    &outC->Context_2.MessageBus_out);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L26,
    &outC->_L24[0]);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->MessageOut,
    &outC->_L26);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L23, RadioPackets_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L18, &outC->_L17.Header);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->BaliseTelegram, &outC->_L18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_6_noname, &outC->_L19);
  /* 1 */ Read_M003_TM_radio_messages(&outC->_L35, &outC->_1_Context_1);
  outC->_L2 = outC->_1_Context_1.received;
  kcg_copy_M_003_T_TM_radio_messages(&outC->_L3, &outC->_1_Context_1.M003_out);
  outC->received = outC->_L2;
  kcg_copy_M_003_T_TM_radio_messages(&outC->M003_out, &outC->_L3);
  /* 1 */ Read_P041_TM(&outC->_L23, &outC->_2_Context_1);
  outC->_L8 = outC->_2_Context_1.received;
  kcg_copy_P041_OBU_T_TM(&outC->_L9, &outC->_2_Context_1.P041_OBU_out);
  kcg_copy_P041_OBU_T_TM(&outC->P041_OBU_out, &outC->_L9);
  /* 1 */ Read_P021_TM(&outC->_L23, &outC->_3_Context_1);
  outC->_L6 = outC->_3_Context_1.received;
  kcg_copy_P021_OBU_T_TM(&outC->_L7, &outC->_3_Context_1.P021_OBU_out);
  kcg_copy_P021_OBU_T_TM(&outC->P021_OBU_out, &outC->_L7);
  /* 1 */ Read_P015_TM(&outC->_L23, &outC->_4_Context_1);
  outC->_L4 = outC->_4_Context_1.received;
  kcg_copy_P015_OBU_T_TM(&outC->_L5, &outC->_4_Context_1.P015_OBU_out);
  kcg_copy_P015_OBU_T_TM(&outC->P015_OBU_out, &outC->_L5);
  /* 1 */ Read_P005_TM(&outC->_L23, &outC->_5_Context_1);
  outC->_L10 = outC->_5_Context_1.received;
  kcg_copy_P005_OBU_T_TM(&outC->_L11, &outC->_5_Context_1.P005_OBU_out);
  kcg_copy_P005_OBU_T_TM(&outC->P005_OBU_out, &outC->_L11);
  /* 1 */ Read_P027V1_TM_baseline2(&outC->_L23, &outC->_6_Context_1);
  outC->_L12 = outC->_6_Context_1.received;
  kcg_copy_P027V1_OBU_T_TM_baseline2(
    &outC->_L13,
    &outC->_6_Context_1.P027V1_out);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->P027V1_out, &outC->_L13);
  /* 1 */ Read_P003V1_TM_baseline2(&outC->_L23, &outC->_7_Context_1);
  outC->_L14 = outC->_7_Context_1.received;
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L15,
    &outC->_7_Context_1.P003V1_OBU_out);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->P003V1_OBU_out, &outC->_L15);
  _5_noname = outC->_L14;
  _4_noname = outC->_L12;
  _3_noname = outC->_L10;
  _2_noname = outC->_L8;
  _1_noname = outC->_L6;
  noname = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Train.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

