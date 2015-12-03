/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_M157_TM_radio_messages_trackside.h"

void Read_M157_reset_TM_radio_messages_trackside(
  outC_Read_M157_TM_radio_messages_trackside *outC)
{
  /* 1 */ C_header_to_M157_reset_TM_RBC_conversions(&outC->_4_Context_1);
  /* 1 */ C_compr_P001_reset_TM_TrainToTrack(&outC->_3_Context_1);
  /* 2 */ C_compr_P000_reset_TM_TrainToTrack(&outC->Context_2);
  /* 1 */ C_compr_P004_reset_TM_TrainToTrack(&outC->_2_Context_1);
  /* 1 */ C_compr_P005_reset_TM_TrainToTrack(&outC->_1_Context_1);
  /* 1 */ C_compr_P044_reset_TM_TrainToTrack(&outC->Context_1);
}

/* TM_radio_messages_trackside::Read_M157 */
void Read_M157_TM_radio_messages_trackside(
  /* TM_radio_messages_trackside::Read_M157::t_train_global */T_TRAIN t_train_global,
  /* TM_radio_messages_trackside::Read_M157::MessageIn */M_TrainTrack_Message_T_TM_radio_messages *MessageIn,
  outC_Read_M157_TM_radio_messages_trackside *outC)
{
  /* TM_radio_messages_trackside::Read_M157::P000 */ P000_TM_TrainToTrack P0002;
  /* TM_radio_messages_trackside::Read_M157::P001 */ P001_TM_TrainToTrack P0011;
  /* TM_radio_messages_trackside::Read_M157::P000 */ P000_TM_TrainToTrack P000;
  /* TM_radio_messages_trackside::Read_M157::P001 */ P001_TM_TrainToTrack P001;
  /* TM_radio_messages_trackside::Read_M157::P000 */ P000_TM_TrainToTrack P0003;
  /* TM_radio_messages_trackside::Read_M157::P001 */ P001_TM_TrainToTrack P0014;
  /* TM_radio_messages_trackside::Read_M157::P000 */ P000_TM_TrainToTrack P0005;
  /* TM_radio_messages_trackside::Read_M157::P001 */ P001_TM_TrainToTrack P0016;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L98, MessageIn);
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &outC->_L100,
    &outC->_L98.OptionalPackets);
  kcg_copy_array_int_25(&outC->p44local, (array_int_25 *) &outC->_L100[23]);
  /* 1 */ C_compr_P044_TM_TrainToTrack(&outC->p44local, &outC->Context_1);
  kcg_copy_P044_TM_TrainToTrack(&outC->_L119, &outC->Context_1.P044_out);
  kcg_copy_P044_TM_TrainToTrack(&outC->P044, &outC->_L119);
  kcg_copy_array_int_3(&outC->p5local, (array_int_3 *) &outC->_L100[20]);
  /* 1 */ C_compr_P005_TM_TrainToTrack(&outC->p5local, &outC->_1_Context_1);
  kcg_copy_P005_TM_TrainToTrack(&outC->_L116, &outC->_1_Context_1.P005_out);
  kcg_copy_P005_TM_TrainToTrack(&outC->P005, &outC->_L116);
  kcg_copy_array_int_3(&outC->p4local, (array_int_3 *) &outC->_L100[17]);
  outC->_L113 = ENUM_M_VERSION_Version_1_1_TM_conversions;
  outC->_L111 = t_train_global;
  outC->t_train_received = outC->_L111;
  outC->_10_m_version = outC->_L113;
  /* 1 */ C_compr_P004_TM_TrainToTrack(&outC->p4local, &outC->_2_Context_1);
  kcg_copy_P004_TM_TrainToTrack(&outC->_L109, &outC->_2_Context_1.P004_out);
  kcg_copy_array_int_17(&outC->_L104, (array_int_17 *) &outC->_L100[0]);
  outC->_L105 = outC->_L104[0];
  outC->nid_packet = outC->_L105;
  outC->Det_if_P0_or_P1_clock = outC->nid_packet ==
    nid_meta_p000_TM_radio_messages;
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->P0_or_P1, &outC->_L104);
  if (outC->Det_if_P0_or_P1_clock) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
      &outC->_L2_Det_if_P0_or_P1,
      &outC->P0_or_P1);
    /* 2 */
    C_compr_P000_TM_TrainToTrack(&outC->_L2_Det_if_P0_or_P1, &outC->Context_2);
    kcg_copy_P000_TM_TrainToTrack(
      &outC->_L3_Det_if_P0_or_P1,
      &outC->Context_2.P000_out);
    kcg_copy_P001_TM_TrainToTrack(
      &outC->_L1_Det_if_P0_or_P1,
      (P001_TM_TrainToTrack *) &DEFAULT_P001_TM_radio_messages_trackside);
    kcg_copy_P001_TM_TrainToTrack(&P0011, &outC->_L1_Det_if_P0_or_P1);
    kcg_copy_P000_TM_TrainToTrack(&P0002, &outC->_L3_Det_if_P0_or_P1);
    kcg_copy_P000_TM_TrainToTrack(&outC->P000, &P0002);
    kcg_copy_P001_TM_TrainToTrack(&outC->P001, &P0011);
  }
  else {
    outC->else_clock_Det_if_P0_or_P1 = outC->nid_packet ==
      nid_meta_p001_TM_radio_messages;
    if (outC->else_clock_Det_if_P0_or_P1) {
      kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
        &outC->_L26_Det_if_P0_or_P1,
        &outC->P0_or_P1);
      /* 1 */
      C_compr_P001_TM_TrainToTrack(
        &outC->_L26_Det_if_P0_or_P1,
        &outC->_3_Context_1);
      kcg_copy_P001_TM_TrainToTrack(
        &outC->_L35_Det_if_P0_or_P1,
        &outC->_3_Context_1.P001_out);
      kcg_copy_P000_TM_TrainToTrack(
        &outC->_L17_Det_if_P0_or_P1,
        (P000_TM_TrainToTrack *) &DEFAULT_P000_TM_radio_messages_trackside);
      kcg_copy_P000_TM_TrainToTrack(&P0005, &outC->_L17_Det_if_P0_or_P1);
      kcg_copy_P001_TM_TrainToTrack(&P0016, &outC->_L35_Det_if_P0_or_P1);
      kcg_copy_P001_TM_TrainToTrack(&P001, &P0016);
      kcg_copy_P000_TM_TrainToTrack(&P000, &P0005);
    }
    else {
      kcg_copy_P001_TM_TrainToTrack(
        &outC->_L28_Det_if_P0_or_P1,
        (P001_TM_TrainToTrack *) &DEFAULT_P001_TM_radio_messages_trackside);
      kcg_copy_P000_TM_TrainToTrack(
        &outC->_L19_Det_if_P0_or_P1,
        (P000_TM_TrainToTrack *) &DEFAULT_P000_TM_radio_messages_trackside);
      kcg_copy_P000_TM_TrainToTrack(&P0003, &outC->_L19_Det_if_P0_or_P1);
      kcg_copy_P001_TM_TrainToTrack(&P0014, &outC->_L28_Det_if_P0_or_P1);
      kcg_copy_P001_TM_TrainToTrack(&P001, &P0014);
      kcg_copy_P000_TM_TrainToTrack(&P000, &P0003);
    }
    kcg_copy_P000_TM_TrainToTrack(&outC->P000, &P000);
    kcg_copy_P001_TM_TrainToTrack(&outC->P001, &P001);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L99,
    &outC->_L98.Message);
  /* 1 */ C_header_to_M157_TM_RBC_conversions(&outC->_L99, &outC->_4_Context_1);
  kcg_copy_M_157_T_TM_radio_messages(
    &outC->_L103,
    &outC->_4_Context_1.message_out);
  kcg_copy_P004_TM_TrainToTrack(&outC->P004, &outC->_L109);
  kcg_copy_M_157_T_TM_radio_messages(&outC->Message_157_out, &outC->_L103);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_M157_TM_radio_messages_trackside.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

