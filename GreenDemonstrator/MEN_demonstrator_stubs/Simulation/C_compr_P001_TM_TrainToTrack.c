/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P001_TM_TrainToTrack.h"

void C_compr_P001_reset_TM_TrainToTrack(outC_C_compr_P001_TM_TrainToTrack *outC)
{
  /* 1 */ CAST_Int_to_NID_NTC_reset_TM_conversions(&outC->_15_Context_1);
  /* 1 */ CAST_Int_to_M_LEVEL_reset_TM_conversions(&outC->_14_Context_1);
  /* 1 */ CAST_Int_to_M_MODE_reset_TM_conversions(&outC->_13_Context_1);
  /* 1 */ CAST_Int_to_Q_DIRTRAIN_reset_TM_conversions(&outC->_12_Context_1);
  /* 1 */ CAST_Int_to_V_TRAIN_reset_TM_conversions(&outC->_11_Context_1);
  /* 1 */ CAST_Int_to_L_TRAININT_reset_TM_conversions(&outC->_10_Context_1);
  /* 1 */ CAST_Int_to_Q_LENGTH_reset_TM_conversions(&outC->_9_Context_1);
  /* 1 */ CAST_Int_to_L_DOUBTUNDER_reset_TM_conversions(&outC->_8_Context_1);
  /* 1 */ CAST_Int_to_L_DOUBTOVER_reset_TM_conversions(&outC->_7_Context_1);
  /* 1 */ CAST_Int_to_Q_DRLRBG_reset_TM_conversions(&outC->_6_Context_1);
  /* 1 */ CAST_Int_to_Q_DIRLRBG_reset_TM_conversions(&outC->_5_Context_1);
  /* 1 */ CAST_Int_to_NID_LRBG_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ Filter_Variable_reset_TM_TrainToTrack(&outC->_3_Context_1);
  /* 2 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_2);
  /* 3 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_3);
  /* 4 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_4);
  /* 5 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_5);
  /* 6 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_6);
  /* 7 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_7);
  /* 8 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_8);
  /* 9 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_9);
  /* 10 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_10);
  /* 11 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_11);
  /* 12 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_12);
  /* 13 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_13);
  /* 14 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_14);
  /* 15 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_15);
  /* 1 */ CAST_Int_to_D_LRBG_reset_TM_conversions(&outC->_2_Context_1);
  /* 16 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_16);
  /* 1 */ CAST_Int_to_NID_PRVLRBG_reset_TM_conversions(&outC->_1_Context_1);
  /* 17 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_17);
  /* 1 */ Decode_NID_PACKET_reset_TM_TrainToTrack(&outC->Context_1);
}

/* TM_TrainToTrack::C_compr_P001 */
void C_compr_P001_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P001::P001_in */P001_TrainTrack_int_TM_TrainToTrack *P001_in,
  outC_C_compr_P001_TM_TrainToTrack *outC)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _14_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _13_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _12_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _11_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _10_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _9_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _8_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _7_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _6_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _5_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool error_1;
  kcg_bool _4_noname_1;
  kcg_bool _3_noname_1;
  kcg_bool _2_noname_1;
  kcg_bool _1_noname_1;
  kcg_bool noname_1;
  
  kcg_copy_P001_TrainTrack_int_TM_TrainToTrack(&outC->_L1, P001_in);
  outC->_L108 = outC->_L1[16];
  outC->_L105 = outC->_L1[15];
  outC->_L16 = outC->_L1[14];
  outC->_L15 = outC->_L1[13];
  outC->_L14 = outC->_L1[12];
  outC->_L13 = outC->_L1[11];
  outC->_L12 = outC->_L1[10];
  outC->_L11 = outC->_L1[9];
  outC->_L10 = outC->_L1[8];
  outC->_L9 = outC->_L1[7];
  outC->_L8 = outC->_L1[6];
  outC->_L7 = outC->_L1[5];
  outC->_L6 = outC->_L1[4];
  outC->_L5 = outC->_L1[3];
  outC->_L4 = outC->_L1[2];
  outC->_L3 = outC->_L1[1];
  outC->_L2 = outC->_L1[0];
  /* 1 */ Decode_NID_PACKET_TM_TrainToTrack(outC->_L2, 1, &outC->Context_1);
  outC->_L88 = outC->Context_1.Valid;
  /* 17 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L6, &outC->Context_17);
  outC->_L109 = outC->Context_17.int_out;
  /* 1 */
  CAST_Int_to_NID_PRVLRBG_TM_conversions(outC->_L109, &outC->_1_Context_1);
  outC->_L110 = outC->_1_Context_1.nid_prvlgb;
  /* 16 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L7, &outC->Context_16);
  outC->_L106 = outC->Context_16.int_out;
  /* 1 */ CAST_Int_to_D_LRBG_TM_conversions(outC->_L106, &outC->_2_Context_1);
  outC->_L107 = outC->_2_Context_1.d_lrbg;
  /* 15 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L108, &outC->Context_15);
  outC->_L104 = outC->Context_15.int_out;
  /* 14 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L16, &outC->Context_14);
  outC->_L103 = outC->Context_14.int_out;
  /* 13 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L105, &outC->Context_13);
  outC->_L102 = outC->Context_13.int_out;
  /* 12 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L15, &outC->Context_12);
  outC->_L101 = outC->Context_12.int_out;
  /* 11 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L14, &outC->Context_11);
  outC->_L100 = outC->Context_11.int_out;
  /* 10 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L13, &outC->Context_10);
  outC->_L99 = outC->Context_10.int_out;
  /* 9 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L12, &outC->Context_9);
  outC->_L98 = outC->Context_9.int_out;
  /* 8 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L11, &outC->Context_8);
  outC->_L97 = outC->Context_8.int_out;
  /* 7 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L10, &outC->Context_7);
  outC->_L96 = outC->Context_7.int_out;
  /* 6 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L8, &outC->Context_6);
  outC->_L95 = outC->Context_6.int_out;
  /* 5 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L9, &outC->Context_5);
  outC->_L94 = outC->Context_5.int_out;
  /* 4 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L5, &outC->Context_4);
  outC->_L93 = outC->Context_4.int_out;
  /* 3 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L4, &outC->Context_3);
  outC->_L92 = outC->Context_3.int_out;
  /* 2 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L3, &outC->Context_2);
  outC->_L91 = outC->Context_2.int_out;
  /* 1 */
  Filter_Variable_TM_TrainToTrack(outC->_L88, outC->_L2, &outC->_3_Context_1);
  outC->_L90 = outC->_3_Context_1.int_out;
  outC->nid_packet_int_1 = outC->_L90;
  outC->_L1_1 = outC->nid_packet_int_1;
  outC->nid_packet_1 = outC->_L1_1;
  outC->_L69 = outC->nid_packet_1;
  outC->l_packet_int_1 = outC->_L91;
  outC->_L1_116 = outC->l_packet_int_1;
  outC->l_packet_1 = outC->_L1_116;
  outC->_L70 = outC->l_packet_1;
  outC->q_scale_int_1 = outC->_L92;
  outC->_L2_118 = outC->q_scale_int_1;
  outC->q_scale_in_1 = outC->_L2_118;
  outC->IfBlock1_clock_1 = outC->q_scale_in_1 ==
    INT_Q_SCALE_10cm_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L2_122_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _14_q_scale_1 = outC->_L2_122_IfBlock1;
    outC->q_scale_1 = _14_q_scale_1;
  }
  else {
    outC->_21_else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (outC->_21_else_clock_1_IfBlock1) {
      outC->_L1_1_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = outC->_L1_1_IfBlock1;
      _12_q_scale_1 = q_scale_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L1_120_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _9_q_scale_1 = outC->_L1_120_IfBlock1;
        _6_q_scale_1 = _9_q_scale_1;
      }
      else {
        outC->_L1_119_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _7_q_scale_1 = outC->_L1_119_IfBlock1;
        _6_q_scale_1 = _7_q_scale_1;
      }
      _12_q_scale_1 = _6_q_scale_1;
    }
    outC->q_scale_1 = _12_q_scale_1;
  }
  outC->_L71 = outC->q_scale_1;
  /* 1 */ CAST_Int_to_NID_LRBG_TM_conversions(outC->_L93, &outC->_4_Context_1);
  outC->_L72 = outC->_4_Context_1.NID_LRBG_out;
  /* 1 */ CAST_Int_to_Q_DIRLRBG_TM_conversions(outC->_L95, &outC->_5_Context_1);
  outC->_L74 = outC->_5_Context_1.q_dirlrbg;
  /* 1 */ CAST_Int_to_Q_DRLRBG_TM_conversions(outC->_L94, &outC->_6_Context_1);
  outC->_L75 = outC->_6_Context_1.q_dlrbg;
  /* 1 */
  CAST_Int_to_L_DOUBTOVER_TM_conversions(outC->_L96, &outC->_7_Context_1);
  outC->_L77 = outC->_7_Context_1.l_doubtover;
  /* 1 */
  CAST_Int_to_L_DOUBTUNDER_TM_conversions(outC->_L97, &outC->_8_Context_1);
  outC->_L78 = outC->_8_Context_1.l_doubtunder;
  /* 1 */ CAST_Int_to_Q_LENGTH_TM_conversions(outC->_L98, &outC->_9_Context_1);
  outC->_L79 = outC->_9_Context_1.q_length;
  /* 1 */
  CAST_Int_to_L_TRAININT_TM_conversions(outC->_L99, &outC->_10_Context_1);
  outC->_L80 = outC->_10_Context_1.l_trainint;
  /* 1 */ CAST_Int_to_V_TRAIN_TM_conversions(outC->_L100, &outC->_11_Context_1);
  outC->_L81 = outC->_11_Context_1.v_train;
  /* 1 */
  CAST_Int_to_Q_DIRTRAIN_TM_conversions(outC->_L101, &outC->_12_Context_1);
  outC->_L82 = outC->_12_Context_1.q_dirtrain;
  /* 1 */ CAST_Int_to_M_MODE_TM_conversions(outC->_L103, &outC->_13_Context_1);
  outC->_L83 = outC->_13_Context_1.m_mode;
  /* 1 */ CAST_Int_to_M_LEVEL_TM_conversions(outC->_L102, &outC->_14_Context_1);
  outC->_L84 = outC->_14_Context_1.m_level;
  /* 1 */ CAST_Int_to_NID_NTC_TM_conversions(outC->_L104, &outC->_15_Context_1);
  outC->_L85 = outC->_15_Context_1.nid_ntc;
  outC->_L86.valid = outC->_L88;
  outC->_L86.nid_packet = outC->_L69;
  outC->_L86.l_packet = outC->_L70;
  outC->_L86.q_scale = outC->_L71;
  outC->_L86.nid_lrbg = outC->_L72;
  outC->_L86.nid_prvlrbg = outC->_L110;
  outC->_L86.d_lrbg = outC->_L107;
  outC->_L86.q_dirlrbg = outC->_L74;
  outC->_L86.q_dlrbg = outC->_L75;
  outC->_L86.l_doubtover = outC->_L77;
  outC->_L86.l_doubtunder = outC->_L78;
  outC->_L86.q_length = outC->_L79;
  outC->_L86.l_trainint = outC->_L80;
  outC->_L86.v_train = outC->_L81;
  outC->_L86.q_dirtrain = outC->_L82;
  outC->_L86.m_mode = outC->_L83;
  outC->_L86.m_level = outC->_L84;
  outC->_L86.nid_ntc = outC->_L85;
  kcg_copy_P001_TM_TrainToTrack(&outC->P001_out, &outC->_L86);
  outC->_L5_1 = 0;
  outC->_L4_1 = outC->_L1_1 < outC->_L5_1;
  outC->_L3_1 = 256;
  outC->_L2_1 = outC->_L1_1 > outC->_L3_1;
  noname_1 = outC->_L2_1;
  _1_noname_1 = outC->_L4_1;
  outC->_L13_1 = 8191;
  outC->_L12_1 = 0;
  outC->_L9_1 = outC->_L1_116 > outC->_L13_1;
  outC->_L8_1 = outC->_L1_116 < outC->_L12_1;
  _2_noname_1 = outC->_L8_1;
  _3_noname_1 = outC->_L9_1;
  if (outC->IfBlock1_clock_1) {
    outC->_L3_123_IfBlock1 = kcg_false;
    _13_error_1 = outC->_L3_123_IfBlock1;
    outC->error_1 = _13_error_1;
  }
  else {
    if (outC->_21_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = kcg_false;
      error_1 = outC->_L3_1_IfBlock1;
      _11_error_1 = error_1;
    }
    else {
      if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _10_error_1 = outC->_L4_1_IfBlock1;
        _5_error_1 = _10_error_1;
      }
      else {
        outC->_L2_1_IfBlock1 = kcg_true;
        _8_error_1 = outC->_L2_1_IfBlock1;
        _5_error_1 = _8_error_1;
      }
      _11_error_1 = _5_error_1;
    }
    outC->error_1 = _11_error_1;
  }
  outC->_L4_117 = outC->error_1;
  _4_noname_1 = outC->_L4_117;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P001_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

