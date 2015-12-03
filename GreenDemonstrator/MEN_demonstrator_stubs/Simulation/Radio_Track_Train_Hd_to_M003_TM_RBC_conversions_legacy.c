/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.h"

void Radio_Track_Train_Hd_to_M003_reset_TM_RBC_conversions_legacy(
  outC_Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy *outC)
{
}

/* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003 */
void Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy(
  /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::RadioHeaderUniversalIn */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioHeaderUniversalIn,
  outC_Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy *outC)
{
  kcg_int noname;
  T_internal_Type_Obu_BasicTypes_Pkg _1_noname;
  T_TRAIN _2_noname;
  NID_EM _3_noname;
  D_SR _4_noname;
  Q_SCALE _5_noname;
  T_TRAIN _6_noname;
  D_REF _7_noname;
  D_EMERGENCYSTOP _8_noname;
  Q_DIR _9_noname;
  M_VERSION _10_noname;
  
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L1,
    RadioHeaderUniversalIn);
  outC->_L16 = outC->_L1._1_m_version;
  outC->_L15 = outC->_L1.d_emergencystop;
  outC->_L14 = outC->_L1.q_dir;
  outC->_L13 = outC->_L1.d_ref;
  outC->_L12 = outC->_L1.t_sh_rqst;
  outC->_L11 = outC->_L1.d_sr;
  outC->_L10 = outC->_L1.q_scale;
  outC->_L9 = outC->_L1.nid_em;
  outC->_L8 = outC->_L1.t_train_reference;
  outC->_L7 = outC->_L1.nid_lrbg;
  outC->_L6 = outC->_L1.m_ack;
  outC->_L5 = outC->_L1.t_train;
  outC->_L4 = outC->_L1.nid_message;
  outC->_L3 = outC->_L1.receivedSystemTime;
  _10_noname = outC->_L16;
  _9_noname = outC->_L14;
  _8_noname = outC->_L15;
  _7_noname = outC->_L13;
  _6_noname = outC->_L12;
  _5_noname = outC->_L10;
  _4_noname = outC->_L11;
  _3_noname = outC->_L9;
  _2_noname = outC->_L8;
  outC->_L34 = 0;
  _1_noname = outC->_L3;
  outC->_L2 = outC->_L1.radioDevice;
  noname = outC->_L2;
  outC->_L33 = kcg_true;
  outC->_L32.valid = outC->_L33;
  outC->_L32.nid_message = outC->_L4;
  outC->_L32.l_message = outC->_L34;
  outC->_L32.t_train = outC->_L5;
  outC->_L32.m_ack = outC->_L6;
  outC->_L32.nid_lrbg = outC->_L7;
  kcg_copy_M_003_T_TM_radio_messages(&outC->M003_out, &outC->_L32);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.c
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

