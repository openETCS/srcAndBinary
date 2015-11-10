/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_train_compr_TM_TrainToTrack.h"

void C_P005_train_compr_reset_TM_TrainToTrack(
  outC_C_P005_train_compr_TM_TrainToTrack *outC)
{
  /* 1 */ CAST_L_PACKET_to_int_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_NID_OPERATIONAL_to_int_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ Encode_NID_PACKET_reset_TM_TrainToTrack(&outC->_1_Context_1);
  /* 1 */ CAST_NID_PACKET_to_int_reset_TM_conversions(&outC->Context_1);
}

/* TM_TrainToTrack::C_P005_train_compr */
void C_P005_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P005_train_compr::P005_in */P005_TM_TrainToTrack *P005_in,
  outC_C_P005_train_compr_TM_TrainToTrack *outC)
{
  kcg_copy_P005_TM_TrainToTrack(&outC->_L1, P005_in);
  outC->_L5 = outC->_L1.nid_opeartional;
  outC->_L4 = outC->_L1.l_packet;
  outC->_L3 = outC->_L1.nid_packet;
  outC->_L2 = outC->_L1.valid;
  /* 1 */ CAST_NID_PACKET_to_int_TM_conversions(outC->_L3, &outC->Context_1);
  outC->_L69 = outC->Context_1.nid_packet_int;
  /* 1 */
  Encode_NID_PACKET_TM_TrainToTrack(outC->_L2, outC->_L69, &outC->_1_Context_1);
  outC->_L89 = outC->_1_Context_1.meta;
  /* 1 */
  CAST_NID_OPERATIONAL_to_int_TM_conversions(outC->_L5, &outC->_2_Context_1);
  outC->_L71 = outC->_2_Context_1.nid_operational_int;
  /* 1 */ CAST_L_PACKET_to_int_TM_conversions(outC->_L4, &outC->_3_Context_1);
  outC->_L70 = outC->_3_Context_1.l_packet_int;
  outC->_L68[0] = outC->_L89;
  outC->_L68[1] = outC->_L70;
  outC->_L68[2] = outC->_L71;
  kcg_copy_P005_TrainTrack_int_TM_TrainToTrack(&outC->P005_int, &outC->_L68);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_train_compr_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

