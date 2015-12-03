/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P000_train_compr_TM_TrainToTrack.h"

void C_P000_train_compr_reset_TM_TrainToTrack(
  outC_C_P000_train_compr_TM_TrainToTrack *outC)
{
  /* 1 */ CAST_NID_NTC_to_int_reset_TM_conversions(&outC->_15_Context_1);
  /* 1 */ CAST_M_LEVEL_to_int_reset_TM_conversions(&outC->_14_Context_1);
  /* 1 */ CAST_M_MODE_to_int_reset_TM_conversions(&outC->_13_Context_1);
  /* 1 */ CAST_Q_DIRTRAIN_to_int_reset_TM_conversions(&outC->_12_Context_1);
  /* 1 */ CAST_V_TRAIN_to_int_reset_TM_conversions(&outC->_11_Context_1);
  /* 1 */ CAST_L_TRAININT_to_int_reset_TM_conversions(&outC->_10_Context_1);
  /* 1 */ CAST_Q_LENGTH_to_int_reset_TM_conversions(&outC->_9_Context_1);
  /* 1 */ CAST_L_DOUBTUNDER_to_int_reset_TM_conversions(&outC->_8_Context_1);
  /* 2 */ CAST_L_DOUBTOVER_to_int_reset_TM_conversions(&outC->_7_Context_2);
  /* 2 */ CAST_Q_DRLRBG_to_int_reset_TM_conversions(&outC->_6_Context_2);
  /* 1 */ CAST_Q_DIRLRBG_to_int_reset_TM_conversions(&outC->_5_Context_1);
  /* 1 */ CAST_NID_LRBG_to_int_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_Q_SCALE_to_int_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_L_PACKET_to_int_reset_TM_conversions(&outC->_2_Context_1);
  /* 2 */ Encode_NID_PACKET_reset_TM_TrainToTrack(&outC->Context_2);
  /* 1 */ CAST_NID_PACKET_to_int_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_D_LRBG_to_int_reset_TM_conversions(&outC->Context_1);
}

/* TM_TrainToTrack::C_P000_train_compr */
void C_P000_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P000_train_compr::P000_in */P000_TM_TrainToTrack *P000_in,
  outC_C_P000_train_compr_TM_TrainToTrack *outC)
{
  kcg_copy_P000_TM_TrainToTrack(&outC->_L1, P000_in);
  outC->_L73 = outC->_L1.nid_ntc;
  outC->_L16 = outC->_L1.m_level;
  outC->_L15 = outC->_L1.m_mode;
  outC->_L14 = outC->_L1.q_dirtrain;
  outC->_L13 = outC->_L1.v_train;
  outC->_L12 = outC->_L1.l_trainint;
  outC->_L11 = outC->_L1.q_length;
  outC->_L10 = outC->_L1.l_doubtunder;
  outC->_L9 = outC->_L1.l_doubtover;
  outC->_L8 = outC->_L1.q_dlrbg;
  outC->_L7 = outC->_L1.q_dirlrbg;
  outC->_L92 = outC->_L1.d_lrbg;
  outC->_L6 = outC->_L1.nid_lrbg;
  outC->_L5 = outC->_L1.q_scale;
  outC->_L4 = outC->_L1.l_packet;
  outC->_L3 = outC->_L1.nid_packet;
  outC->_L94 = 0;
  /* 1 */ CAST_D_LRBG_to_int_TM_conversions(outC->_L92, &outC->Context_1);
  outC->_L93 = outC->Context_1.d_lrbg_int;
  outC->_L2 = outC->_L1.valid;
  /* 1 */ CAST_NID_PACKET_to_int_TM_conversions(outC->_L3, &outC->_1_Context_1);
  outC->_L69 = outC->_1_Context_1.nid_packet_int;
  /* 2 */
  Encode_NID_PACKET_TM_TrainToTrack(outC->_L2, outC->_L69, &outC->Context_2);
  outC->_L91 = outC->Context_2.meta;
  /* 1 */ CAST_L_PACKET_to_int_TM_conversions(outC->_L4, &outC->_2_Context_1);
  outC->_L70 = outC->_2_Context_1.l_packet_int;
  /* 1 */ CAST_Q_SCALE_to_int_TM_conversions(outC->_L5, &outC->_3_Context_1);
  outC->_L71 = outC->_3_Context_1.d;
  /* 1 */ CAST_NID_LRBG_to_int_TM_conversions(outC->_L6, &outC->_4_Context_1);
  outC->_L72 = outC->_4_Context_1.nid_lrbg_int;
  /* 1 */ CAST_Q_DIRLRBG_to_int_TM_conversions(outC->_L7, &outC->_5_Context_1);
  outC->_L74 = outC->_5_Context_1.q_dirlrbg_int;
  /* 2 */ CAST_Q_DRLRBG_to_int_TM_conversions(outC->_L8, &outC->_6_Context_2);
  outC->_L75 = outC->_6_Context_2.q_drlrbg_int;
  /* 2 */
  CAST_L_DOUBTOVER_to_int_TM_conversions(outC->_L9, &outC->_7_Context_2);
  outC->_L77 = outC->_7_Context_2.l_doubtiver_int;
  /* 1 */
  CAST_L_DOUBTUNDER_to_int_TM_conversions(outC->_L10, &outC->_8_Context_1);
  outC->_L78 = outC->_8_Context_1.l_doubtunder_int;
  /* 1 */ CAST_Q_LENGTH_to_int_TM_conversions(outC->_L11, &outC->_9_Context_1);
  outC->_L79 = outC->_9_Context_1.q_length_int;
  /* 1 */
  CAST_L_TRAININT_to_int_TM_conversions(outC->_L12, &outC->_10_Context_1);
  outC->_L80 = outC->_10_Context_1.l_trainint_int;
  /* 1 */ CAST_V_TRAIN_to_int_TM_conversions(outC->_L13, &outC->_11_Context_1);
  outC->_L81 = outC->_11_Context_1.v_train_int;
  /* 1 */
  CAST_Q_DIRTRAIN_to_int_TM_conversions(outC->_L14, &outC->_12_Context_1);
  outC->_L82 = outC->_12_Context_1.q_dirltrain_int;
  /* 1 */ CAST_M_MODE_to_int_TM_conversions(outC->_L15, &outC->_13_Context_1);
  outC->_L83 = outC->_13_Context_1.m_mode_int;
  /* 1 */ CAST_M_LEVEL_to_int_TM_conversions(outC->_L16, &outC->_14_Context_1);
  outC->_L84 = outC->_14_Context_1.m_level_int;
  /* 1 */ CAST_NID_NTC_to_int_TM_conversions(outC->_L73, &outC->_15_Context_1);
  outC->_L85 = outC->_15_Context_1.nid_ntc_int;
  outC->_L68[0] = outC->_L91;
  outC->_L68[1] = outC->_L70;
  outC->_L68[2] = outC->_L71;
  outC->_L68[3] = outC->_L72;
  outC->_L68[4] = outC->_L93;
  outC->_L68[5] = outC->_L74;
  outC->_L68[6] = outC->_L75;
  outC->_L68[7] = outC->_L77;
  outC->_L68[8] = outC->_L78;
  outC->_L68[9] = outC->_L79;
  outC->_L68[10] = outC->_L80;
  outC->_L68[11] = outC->_L81;
  outC->_L68[12] = outC->_L82;
  outC->_L68[13] = outC->_L83;
  outC->_L68[14] = outC->_L84;
  outC->_L68[15] = outC->_L85;
  outC->_L68[16] = outC->_L94;
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->P000_int, &outC->_L68);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P000_train_compr_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

