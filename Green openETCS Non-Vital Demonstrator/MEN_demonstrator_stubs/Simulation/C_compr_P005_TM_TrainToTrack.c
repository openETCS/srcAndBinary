/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P005_TM_TrainToTrack.h"

void C_compr_P005_reset_TM_TrainToTrack(outC_C_compr_P005_TM_TrainToTrack *outC)
{
  /* 1 */ CAST_Int_to_NID_OPERATIONAL_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ Filter_Variable_reset_TM_TrainToTrack(&outC->_1_Context_1);
  /* 2 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_2);
  /* 3 */ Filter_Variable_reset_TM_TrainToTrack(&outC->Context_3);
  /* 1 */ Decode_NID_PACKET_reset_TM_TrainToTrack(&outC->Context_1);
}

/* TM_TrainToTrack::C_compr_P005 */
void C_compr_P005_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P005::P005_in */P005_TrainTrack_int_TM_TrainToTrack *P005_in,
  outC_C_compr_P005_TM_TrainToTrack *outC)
{
  kcg_bool _3_noname_1;
  kcg_bool _2_noname_1;
  kcg_bool _1_noname_1;
  kcg_bool noname_1;
  
  kcg_copy_P005_TrainTrack_int_TM_TrainToTrack(&outC->_L1, P005_in);
  outC->_L4 = outC->_L1[2];
  outC->_L3 = outC->_L1[1];
  outC->_L2 = outC->_L1[0];
  /* 1 */ Decode_NID_PACKET_TM_TrainToTrack(outC->_L2, 9, &outC->Context_1);
  outC->_L73 = outC->Context_1.Valid;
  /* 3 */
  Filter_Variable_TM_TrainToTrack(outC->_L73, outC->_L4, &outC->Context_3);
  outC->_L76 = outC->Context_3.int_out;
  /* 2 */
  Filter_Variable_TM_TrainToTrack(outC->_L73, outC->_L3, &outC->Context_2);
  outC->_L75 = outC->Context_2.int_out;
  /* 1 */
  Filter_Variable_TM_TrainToTrack(outC->_L73, outC->_L2, &outC->_1_Context_1);
  outC->_L74 = outC->_1_Context_1.int_out;
  outC->nid_packet_int_1 = outC->_L74;
  outC->_L1_1 = outC->nid_packet_int_1;
  outC->nid_packet_1 = outC->_L1_1;
  outC->_L69 = outC->nid_packet_1;
  outC->l_packet_int_1 = outC->_L75;
  outC->_L1_13 = outC->l_packet_int_1;
  outC->l_packet_1 = outC->_L1_13;
  outC->_L70 = outC->l_packet_1;
  /* 1 */
  CAST_Int_to_NID_OPERATIONAL_TM_conversions(outC->_L76, &outC->_2_Context_1);
  outC->_L71 = outC->_2_Context_1.nid_operational;
  outC->_L72.valid = outC->_L73;
  outC->_L72.nid_packet = outC->_L69;
  outC->_L72.l_packet = outC->_L70;
  outC->_L72.nid_opeartional = outC->_L71;
  kcg_copy_P005_TM_TrainToTrack(&outC->P005_out, &outC->_L72);
  outC->_L5_1 = 0;
  outC->_L4_1 = outC->_L1_1 < outC->_L5_1;
  outC->_L3_1 = 256;
  outC->_L2_1 = outC->_L1_1 > outC->_L3_1;
  noname_1 = outC->_L2_1;
  _1_noname_1 = outC->_L4_1;
  outC->_L13_1 = 8191;
  outC->_L12_1 = 0;
  outC->_L9_1 = outC->_L1_13 > outC->_L13_1;
  outC->_L8_1 = outC->_L1_13 < outC->_L12_1;
  _2_noname_1 = outC->_L8_1;
  _3_noname_1 = outC->_L9_1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P005_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

