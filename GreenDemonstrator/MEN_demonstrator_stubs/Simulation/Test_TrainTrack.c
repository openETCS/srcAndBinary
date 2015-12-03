/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Test_TrainTrack.h"

void Test_TrainTrack_reset(outC_Test_TrainTrack *outC)
{
  /* 1 */ Track_reset(&outC->_1_Context_1);
  /* 1 */ Train_reset(&outC->Context_1);
}

/* Test_TrainTrack */
void Test_TrainTrack(outC_Test_TrainTrack *outC)
{
  P003V1_OBU_T_TM_baseline2 noname;
  P027V1_OBU_T_TM_baseline2 _1_noname;
  BaliseTelegramHeader_int_T_TM _2_noname;
  M_003_T_TM_radio_messages _3_noname;
  P005_OBU_T_TM _4_noname;
  P015_OBU_T_TM _5_noname;
  kcg_bool _6_noname;
  P021_OBU_T_TM _7_noname;
  P041_OBU_T_TM _8_noname;
  M_TrackTrain_Radio_T_TM_radio_messages _9_noname;
  CompressedPackets_T_Common_Types_Pkg _10_noname;
  CompressedBaliseMessage_TM _11_noname;
  
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L21,
    (CompressedBaliseMessage_TM *) &no_balise_message);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L20,
    (CompressedPackets_T_Common_Types_Pkg *) &no_packets);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L19,
    (M_TrackTrain_Radio_T_TM_radio_messages *) &no_message);
  /* 1 */ Train(&outC->_L19, &outC->_L20, &outC->_L21, &outC->Context_1);
  kcg_copy_M_003_T_TM_radio_messages(&outC->_L1, &outC->Context_1.M003_out);
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L2,
    &outC->Context_1.P003V1_OBU_out);
  outC->_L3 = outC->Context_1.received;
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L4, &outC->Context_1.P027V1_out);
  kcg_copy_P005_OBU_T_TM(&outC->_L5, &outC->Context_1.P005_OBU_out);
  kcg_copy_P015_OBU_T_TM(&outC->_L6, &outC->Context_1.P015_OBU_out);
  kcg_copy_P021_OBU_T_TM(&outC->_L7, &outC->Context_1.P021_OBU_out);
  kcg_copy_P041_OBU_T_TM(&outC->_L8, &outC->Context_1.P041_OBU_out);
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->_L9,
    &outC->Context_1.BaliseTelegram);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L10,
    &outC->Context_1.MessageOut);
  /* 1 */ Track(&outC->_L10, &outC->_1_Context_1);
  kcg_copy_M_157_T_TM_radio_messages(
    &outC->_L11,
    &outC->_1_Context_1.Message_157_out);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L12, &outC->_1_Context_1.P000);
  kcg_copy_P001_TM_TrainToTrack(&outC->_L13, &outC->_1_Context_1.P001);
  kcg_copy_P004_TM_TrainToTrack(&outC->_L14, &outC->_1_Context_1.P004);
  kcg_copy_P005_TM_TrainToTrack(&outC->_L15, &outC->_1_Context_1.P005);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L16,
    &outC->_1_Context_1.RadioMessage_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L17,
    &outC->_1_Context_1.RadioPackets_out);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L18,
    &outC->_1_Context_1.BaliseMessage);
  kcg_copy_P005_TM_TrainToTrack(&outC->P005, &outC->_L15);
  kcg_copy_P004_TM_TrainToTrack(&outC->P004, &outC->_L14);
  kcg_copy_P001_TM_TrainToTrack(&outC->P001, &outC->_L13);
  kcg_copy_P000_TM_TrainToTrack(&outC->P000, &outC->_L12);
  kcg_copy_M_157_T_TM_radio_messages(&outC->Message_157_out, &outC->_L11);
  kcg_copy_CompressedBaliseMessage_TM(&_11_noname, &outC->_L18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_10_noname, &outC->_L17);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_9_noname, &outC->_L16);
  kcg_copy_P041_OBU_T_TM(&_8_noname, &outC->_L8);
  kcg_copy_P021_OBU_T_TM(&_7_noname, &outC->_L7);
  _6_noname = outC->_L3;
  kcg_copy_P015_OBU_T_TM(&_5_noname, &outC->_L6);
  kcg_copy_P005_OBU_T_TM(&_4_noname, &outC->_L5);
  kcg_copy_M_003_T_TM_radio_messages(&_3_noname, &outC->_L1);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_2_noname, &outC->_L9);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&_1_noname, &outC->_L4);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&noname, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Test_TrainTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

