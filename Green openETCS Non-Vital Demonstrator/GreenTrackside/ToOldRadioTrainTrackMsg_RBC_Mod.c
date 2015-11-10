/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToOldRadioTrainTrackMsg_RBC_Mod.h"

#ifndef KCG_USER_DEFINED_INIT
void ToOldRadioTrainTrackMsg_init_RB(outC_ToOldRadioTrainTrackMsg_RB *outC)
{
  static kcg_int i;
  
  outC->outOld.present = kcg_true;
  outC->outOld.header.present = kcg_true;
  outC->outOld.header.nid_message = 0;
  outC->outOld.header.t_train = 0;
  outC->outOld.header.nid_engine = 0;
  outC->outOld.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_b;
  outC->outOld.header.xT_TRAIN = 0;
  outC->outOld.header.xNID_EM = 0;
  outC->outOld.header.xQ_EMERGENCYSTOP = _7_Q_EMERGENCYSTOP_Conditional_;
  outC->outOld.header.xNID_TEXTMESSAGE = 0;
  outC->outOld.packets.p0.valid = kcg_true;
  outC->outOld.packets.p0.packet0.NID_PACKET = 0;
  outC->outOld.packets.p0.packet0.L_PACKET = 0;
  outC->outOld.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outOld.packets.p0.packet0.NID_LRBG = 0;
  outC->outOld.packets.p0.packet0.D_LRBG = 0;
  outC->outOld.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outOld.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outOld.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->outOld.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->outOld.packets.p0.packet0.length = Q_LENGTH_No_train_integrity_inf;
  outC->outOld.packets.p0.packet0.L_TRAININT = 0;
  outC->outOld.packets.p0.packet0.V_TRAIN = 0;
  outC->outOld.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outOld.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->outOld.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outOld.packets.p0.packet0.NID_NTC = 0;
  outC->outOld.packets.p1.valid = kcg_true;
  outC->outOld.packets.p1.packet1.NID_PACKET = 0;
  outC->outOld.packets.p1.packet1.L_PACKET = 0;
  outC->outOld.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outOld.packets.p1.packet1.NID_LRBG = 0;
  outC->outOld.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->outOld.packets.p1.packet1.D_LRBG = 0;
  outC->outOld.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outOld.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outOld.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->outOld.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->outOld.packets.p1.packet1.length = Q_LENGTH_No_train_integrity_inf;
  outC->outOld.packets.p1.packet1.L_TRAININT = 0;
  outC->outOld.packets.p1.packet1.V_TRAIN = 0;
  outC->outOld.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outOld.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->outOld.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outOld.packets.p1.packet1.NID_NTC = 0;
  outC->outOld.packets.p3.valid = kcg_true;
  outC->outOld.packets.p3.number = 0;
  outC->outOld.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->outOld.packets.p3.aNID_RADIO[0].telephoneNumber[i] = 0;
  }
  outC->outOld.packets.p4.valid = kcg_true;
  outC->outOld.packets.p4.m_error = M_ERROR_Balise_group_linking_co;
  outC->outOld.packets.p5.valid = kcg_true;
  outC->outOld.packets.p5.TrainRunningNumber = 0;
  outC->outOld.packets.p9.valid = kcg_true;
  outC->outOld.packets.p9.transitionInformation = 0;
  outC->outOld.packets.p11.valid = kcg_true;
  outC->outOld.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->outOld.packets.p11.nc_train = NC_TRAIN_Train_does_not_belong_;
  outC->outOld.packets.p11.l_train = 0;
  outC->outOld.packets.p11.v_maxtrain = 0;
  outC->outOld.packets.p11.m_loadinggoage = M_LOADINGGAUGE_The_train_does_n;
  outC->outOld.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outOld.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outOld.packets.p11.n_axle = 0;
  outC->outOld.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->outOld.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->outOld.packets.p11.tractionIdentity[i].nid_ctraction = 0;
  }
  outC->outOld.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->outOld.packets.p11.nid_ntc[i] = 0;
  }
  /* 1 */ ConvertPackets_init_RBC_Model_P(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToOldRadioTrainTrackMsg_reset_R(outC_ToOldRadioTrainTrackMsg_RB *outC)
{
  /* 1 */ ConvertPackets_reset_RBC_Model_(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg */
void ToOldRadioTrainTrackMsg_RBC_Mod(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::inNew */ M_TrainTrack_Message_T_TM_radio *inNew,
  outC_ToOldRadioTrainTrackMsg_RB *outC)
{
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::_L8 */
  static Radio_TrainTrack_Header_T_Radio _L8;
  
  /* 1 */
  ConvertHeader_RBC_Model_Pkg_Tra(
    &(*inNew).Message,
    &outC->outOld.present,
    &_L8);
  kcg_copy_Radio_TrainTrack_Heade(&outC->outOld.header, &_L8);
  /* 1 */
  ConvertPackets_RBC_Model_Pkg_Tr(
    (*inNew).Message.nid_message,
    &(*inNew).OptionalPackets,
    &outC->Context_1);
  kcg_copy_outPackets_T_Common_Ty(
    &outC->outOld.packets,
    &outC->Context_1.oldPackets);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToOldRadioTrainTrackMsg_RBC_Mod.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

