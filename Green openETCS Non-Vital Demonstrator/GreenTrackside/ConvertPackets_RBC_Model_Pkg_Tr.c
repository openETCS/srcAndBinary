/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertPackets_RBC_Model_Pkg_Tr.h"

#ifndef KCG_USER_DEFINED_INIT
void ConvertPackets_init_RBC_Model_P(outC_ConvertPackets_RBC_Model_P *outC)
{
  static kcg_int i;
  
  outC->oldPackets.p0.valid = kcg_true;
  outC->oldPackets.p0.packet0.NID_PACKET = 0;
  outC->oldPackets.p0.packet0.L_PACKET = 0;
  outC->oldPackets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->oldPackets.p0.packet0.NID_LRBG = 0;
  outC->oldPackets.p0.packet0.D_LRBG = 0;
  outC->oldPackets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->oldPackets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->oldPackets.p0.packet0.L_DOUBTOVER = 0;
  outC->oldPackets.p0.packet0.L_DOUBTUNDER = 0;
  outC->oldPackets.p0.packet0.length = Q_LENGTH_No_train_integrity_inf;
  outC->oldPackets.p0.packet0.L_TRAININT = 0;
  outC->oldPackets.p0.packet0.V_TRAIN = 0;
  outC->oldPackets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->oldPackets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->oldPackets.p0.packet0.level = M_LEVEL_Level_0;
  outC->oldPackets.p0.packet0.NID_NTC = 0;
  outC->oldPackets.p1.valid = kcg_true;
  outC->oldPackets.p1.packet1.NID_PACKET = 0;
  outC->oldPackets.p1.packet1.L_PACKET = 0;
  outC->oldPackets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->oldPackets.p1.packet1.NID_LRBG = 0;
  outC->oldPackets.p1.packet1.NID_PRVLRBG = 0;
  outC->oldPackets.p1.packet1.D_LRBG = 0;
  outC->oldPackets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->oldPackets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->oldPackets.p1.packet1.L_DOUBTOVER = 0;
  outC->oldPackets.p1.packet1.L_DOUBTUNDER = 0;
  outC->oldPackets.p1.packet1.length = Q_LENGTH_No_train_integrity_inf;
  outC->oldPackets.p1.packet1.L_TRAININT = 0;
  outC->oldPackets.p1.packet1.V_TRAIN = 0;
  outC->oldPackets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->oldPackets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->oldPackets.p1.packet1.level = M_LEVEL_Level_0;
  outC->oldPackets.p1.packet1.NID_NTC = 0;
  outC->oldPackets.p3.valid = kcg_true;
  outC->oldPackets.p3.number = 0;
  outC->oldPackets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->oldPackets.p3.aNID_RADIO[0].telephoneNumber[i] = 0;
  }
  outC->oldPackets.p4.valid = kcg_true;
  outC->oldPackets.p4.m_error = M_ERROR_Balise_group_linking_co;
  outC->oldPackets.p5.valid = kcg_true;
  outC->oldPackets.p5.TrainRunningNumber = 0;
  outC->oldPackets.p9.valid = kcg_true;
  outC->oldPackets.p9.transitionInformation = 0;
  outC->oldPackets.p11.valid = kcg_true;
  outC->oldPackets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->oldPackets.p11.nc_train = NC_TRAIN_Train_does_not_belong_;
  outC->oldPackets.p11.l_train = 0;
  outC->oldPackets.p11.v_maxtrain = 0;
  outC->oldPackets.p11.m_loadinggoage = M_LOADINGGAUGE_The_train_does_n;
  outC->oldPackets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->oldPackets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->oldPackets.p11.n_axle = 0;
  outC->oldPackets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->oldPackets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->oldPackets.p11.tractionIdentity[i].nid_ctraction = 0;
  }
  outC->oldPackets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->oldPackets.p11.nid_ntc[i] = 0;
  }
  /* 2 */ C_compr_P003_init_TM_TrainToTra(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertPackets_reset_RBC_Model_(outC_ConvertPackets_RBC_Model_P *outC)
{
  /* 2 */ C_compr_P003_reset_TM_TrainToTr(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
void ConvertPackets_RBC_Model_Pkg_Tr(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::nid_message */ kcg_int nid_message,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::newPackets */ M_TrainTrack_compressed_packets *newPackets,
  outC_ConvertPackets_RBC_Model_P *outC)
{
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
  static P000_TM_TrainToTrack tmp6;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
  static P001_TM_TrainToTrack tmp5;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
  static P003_TM_TrainToTrack tmp4;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
  static P004_TM_TrainToTrack tmp3;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
  static P005_TM_TrainToTrack tmp2;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
  static P009_TM_TrainToTrack tmp1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
  static P011_TM_TrainToTrack tmp;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1::else */
  static kcg_bool else_clock_Det_if_P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P003 */
  static kcg_bool Det_if_P003_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P004 */
  static kcg_bool Det_if_P004_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P009 */
  static kcg_bool Det_if_P009_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P011 */
  static kcg_bool Det_if_P011_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1 */
  static kcg_bool Det_if_P0_or_P1_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P0_or_P1 */
  static P000_TrainTrack_int_TM_TrainToT P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::hasPosReport */
  static kcg_bool hasPosReport;
  
  kcg_copy_P000_TrainTrack_int_TM(
    &P0_or_P1,
    (P000_TrainTrack_int_TM_TrainToT *) &(*newPackets)[0]);
  Det_if_P003_clock = nid_message == 159;
  hasPosReport = !((nid_message == 146) | (nid_message == 154) | (nid_message ==
        155) | (nid_message == 156) | Det_if_P003_clock);
  Det_if_P0_or_P1_clock = hasPosReport & (P0_or_P1[1] == 0);
  Det_if_P011_clock = nid_message == 129;
  Det_if_P004_clock = (nid_message == 136) | (nid_message == 157);
  Det_if_P009_clock = nid_message == 132;
  /* ck_Det_if_P0_or_P1 */ if (Det_if_P0_or_P1_clock) {
    /* 1 */ C_compr_P000_TM_TrainToTrack(&P0_or_P1, &tmp6);
    kcg_copy_P001_TM_TrainToTrack(
      &tmp5,
      (P001_TM_TrainToTrack *) &DEFAULT_P001_RBC_Model_Pkg_Trai);
  }
  else {
    else_clock_Det_if_P0_or_P1 = hasPosReport & (P0_or_P1[1] == 1);
    /* ck_anon_activ */ if (else_clock_Det_if_P0_or_P1) {
      kcg_copy_P000_TM_TrainToTrack(
        &tmp6,
        (P000_TM_TrainToTrack *) &DEFAULT_P000_RBC_Model_Pkg_Trai);
      /* 1 */ C_compr_P001_TM_TrainToTrack(&P0_or_P1, &tmp5);
    }
    else {
      kcg_copy_P000_TM_TrainToTrack(
        &tmp6,
        (P000_TM_TrainToTrack *) &DEFAULT_P000_RBC_Model_Pkg_Trai);
      kcg_copy_P001_TM_TrainToTrack(
        &tmp5,
        (P001_TM_TrainToTrack *) &DEFAULT_P001_RBC_Model_Pkg_Trai);
    }
  }
  /* 1 */ ConvertP000_RBC_Model_Pkg_Train(&tmp6, &outC->oldPackets.p0);
  /* 1 */ ConvertP001_RBC_Model_Pkg_Train(&tmp5, &outC->oldPackets.p1);
  /* ck_Det_if_P003 */ if (Det_if_P003_clock) {
    /* 2 */
    C_compr_P003_TM_TrainToTrack(
      (P003_TrainTrack_int_TM_TrainToT *) &(*newPackets)[0],
      &outC->Context_2);
    kcg_copy_P003_TM_TrainToTrack(&tmp4, &outC->Context_2.P003_out);
  }
  else {
    kcg_copy_P003_TM_TrainToTrack(
      &tmp4,
      (P003_TM_TrainToTrack *) &DEFAULT_P003_RBC_Model_Pkg_Trai);
  }
  /* 1 */ ConvertP003_RBC_Model_Pkg_Train(&tmp4, &outC->oldPackets.p3);
  /* ck_Det_if_P004 */ if (Det_if_P004_clock) {
    /* 2 */
    C_compr_P004_TM_TrainToTrack(
      (P004_TrainTrack_int_TM_TrainToT *) &(*newPackets)[17],
      &tmp3);
    /* 2 */
    C_compr_P005_TM_TrainToTrack(
      (P005_TrainTrack_int_TM_TrainToT *) &(*newPackets)[20],
      &tmp2);
  }
  else {
    kcg_copy_P004_TM_TrainToTrack(
      &tmp3,
      (P004_TM_TrainToTrack *) &DEFAULT_P004_RBC_Model_Pkg_Trai);
    kcg_copy_P005_TM_TrainToTrack(
      &tmp2,
      (P005_TM_TrainToTrack *) &DEFAULT_P005_RBC_Model_Pkg_Trai);
  }
  /* 1 */ ConvertP004_RBC_Model_Pkg_Train(&tmp3, &outC->oldPackets.p4);
  /* 1 */ ConvertP005_RBC_Model_Pkg_Train(&tmp2, &outC->oldPackets.p5);
  /* ck_Det_if_P009 */ if (Det_if_P009_clock) {
    /* 2 */
    C_compr_P009_TM_TrainToTrack(
      (P009_TrainTrack_int_TM_TrainToT *) &(*newPackets)[17],
      &tmp1);
  }
  else {
    kcg_copy_P009_TM_TrainToTrack(
      &tmp1,
      (P009_TM_TrainToTrack *) &DEFAULT_P009_RBC_Model_Pkg_Trai);
  }
  /* 1 */ ConvertP009_RBC_Model_Pkg_Train(&tmp1, &outC->oldPackets.p9);
  /* ck_Det_if_P011 */ if (Det_if_P011_clock) {
    /* 4 */
    C_compr_P011_TM_TrainToTrack(
      (P011_TrainTrack_int_TM_TrainToT *) &(*newPackets)[17],
      &tmp);
  }
  else {
    kcg_copy_P011_TM_TrainToTrack(
      &tmp,
      (P011_TM_TrainToTrack *) &DEFAULT_P011_RBC_Model_Pkg_Trai);
  }
  /* 1 */ ConvertP011_RBC_Model_Pkg_Train(&tmp, &outC->oldPackets.p11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertPackets_RBC_Model_Pkg_Tr.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

