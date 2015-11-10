/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackInputHandler_RBC.h"

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackInputHandler_ini(outC_RadioTrainTrackInputHandle *outC)
{
  static kcg_int i;
  
  outC->outRadioTrainTrack.present = kcg_true;
  outC->outRadioTrainTrack.header.present = kcg_true;
  outC->outRadioTrainTrack.header.nid_message = 0;
  outC->outRadioTrainTrack.header.t_train = 0;
  outC->outRadioTrainTrack.header.nid_engine = 0;
  outC->outRadioTrainTrack.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_b;
  outC->outRadioTrainTrack.header.xT_TRAIN = 0;
  outC->outRadioTrainTrack.header.xNID_EM = 0;
  outC->outRadioTrainTrack.header.xQ_EMERGENCYSTOP =
    _7_Q_EMERGENCYSTOP_Conditional_;
  outC->outRadioTrainTrack.header.xNID_TEXTMESSAGE = 0;
  outC->outRadioTrainTrack.packets.p0.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p0.packet0.NID_PACKET = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.L_PACKET = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrack.packets.p0.packet0.NID_LRBG = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.D_LRBG = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_inf;
  outC->outRadioTrainTrack.packets.p0.packet0.L_TRAININT = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.V_TRAIN = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrack.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->outRadioTrainTrack.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrack.packets.p0.packet0.NID_NTC = 0;
  outC->outRadioTrainTrack.packets.p1.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_PACKET = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.L_PACKET = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_LRBG = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.D_LRBG = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_inf;
  outC->outRadioTrainTrack.packets.p1.packet1.L_TRAININT = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.V_TRAIN = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrack.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->outRadioTrainTrack.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_NTC = 0;
  outC->outRadioTrainTrack.packets.p3.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p3.number = 0;
  outC->outRadioTrainTrack.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->outRadioTrainTrack.packets.p3.aNID_RADIO[0].telephoneNumber[i] = 0;
  }
  outC->outRadioTrainTrack.packets.p4.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p4.m_error = M_ERROR_Balise_group_linking_co;
  outC->outRadioTrainTrack.packets.p5.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p5.TrainRunningNumber = 0;
  outC->outRadioTrainTrack.packets.p9.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p9.transitionInformation = 0;
  outC->outRadioTrainTrack.packets.p11.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->outRadioTrainTrack.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_;
  outC->outRadioTrainTrack.packets.p11.l_train = 0;
  outC->outRadioTrainTrack.packets.p11.v_maxtrain = 0;
  outC->outRadioTrainTrack.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_n;
  outC->outRadioTrainTrack.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrack.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrack.packets.p11.n_axle = 0;
  outC->outRadioTrainTrack.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->outRadioTrainTrack.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->outRadioTrainTrack.packets.p11.tractionIdentity[i].nid_ctraction = 0;
  }
  outC->outRadioTrainTrack.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->outRadioTrainTrack.packets.p11.nid_ntc[i] = 0;
  }
  /* 1 */ RadioTrainTrackMessageCon_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackInputHandler_res(outC_RadioTrainTrackInputHandle *outC)
{
  /* 1 */ RadioTrainTrackMessageCon_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Messaging_Pkg::RadioTrainTrackInputHandler */
void RadioTrainTrackInputHandler_RBC(
  /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::inRadioTrainTrack */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrack,
  outC_RadioTrainTrackInputHandle *outC)
{
  /* 1 */ RadioTrainTrackMessageCon_RBC_M(inRadioTrainTrack, &outC->Context_1);
  /* 1 */ if (outC->Context_1.outIsConsistent) {
    kcg_copy_Radio_TrainTrack_Messa(
      &outC->outRadioTrainTrack,
      inRadioTrainTrack);
  }
  else {
    /* 1 */ RadioTrainTrackFactory__CreateD(&outC->outRadioTrainTrack);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackInputHandler_RBC.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

