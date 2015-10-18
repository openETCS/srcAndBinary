/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendValidTrainDataRBC_trainData_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sendValidTrainDataRBC_init_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->outMessageBus[i1].Message.valid = kcg_true;
    outC->outMessageBus[i1].Message.nid_message = 0;
    outC->outMessageBus[i1].Message.l_message = 0;
    outC->outMessageBus[i1].Message.t_train = 0;
    outC->outMessageBus[i1].Message.nid_engine = 0;
    outC->outMessageBus[i1].Message.field1 = 0;
    outC->outMessageBus[i1].Message.field2 = 0;
    outC->outMessageBus[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->outMessageBus[i1].OptionalPackets[i] = 0;
    }
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = 0;
  outC->trainDataToRBC.present = kcg_true;
  outC->trainDataToRBC.header.present = kcg_true;
  outC->trainDataToRBC.header.nid_message = 0;
  outC->trainDataToRBC.header.t_train = 0;
  outC->trainDataToRBC.header.nid_engine = 0;
  outC->trainDataToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->trainDataToRBC.header.xT_TRAIN = 0;
  outC->trainDataToRBC.header.xNID_EM = 0;
  outC->trainDataToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->trainDataToRBC.header.xNID_TEXTMESSAGE = 0;
  outC->trainDataToRBC.packets.p0.valid = kcg_true;
  outC->trainDataToRBC.packets.p0.packet0.NID_PACKET = 0;
  outC->trainDataToRBC.packets.p0.packet0.L_PACKET = 0;
  outC->trainDataToRBC.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->trainDataToRBC.packets.p0.packet0.NID_LRBG = 0;
  outC->trainDataToRBC.packets.p0.packet0.D_LRBG = 0;
  outC->trainDataToRBC.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->trainDataToRBC.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->trainDataToRBC.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->trainDataToRBC.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->trainDataToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->trainDataToRBC.packets.p0.packet0.L_TRAININT = 0;
  outC->trainDataToRBC.packets.p0.packet0.V_TRAIN = 0;
  outC->trainDataToRBC.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->trainDataToRBC.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->trainDataToRBC.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->trainDataToRBC.packets.p0.packet0.NID_NTC = 0;
  outC->trainDataToRBC.packets.p1.valid = kcg_true;
  outC->trainDataToRBC.packets.p1.packet1.NID_PACKET = 0;
  outC->trainDataToRBC.packets.p1.packet1.L_PACKET = 0;
  outC->trainDataToRBC.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->trainDataToRBC.packets.p1.packet1.NID_LRBG = 0;
  outC->trainDataToRBC.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->trainDataToRBC.packets.p1.packet1.D_LRBG = 0;
  outC->trainDataToRBC.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->trainDataToRBC.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->trainDataToRBC.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->trainDataToRBC.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->trainDataToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->trainDataToRBC.packets.p1.packet1.L_TRAININT = 0;
  outC->trainDataToRBC.packets.p1.packet1.V_TRAIN = 0;
  outC->trainDataToRBC.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->trainDataToRBC.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->trainDataToRBC.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->trainDataToRBC.packets.p1.packet1.NID_NTC = 0;
  outC->trainDataToRBC.packets.p3.valid = kcg_true;
  outC->trainDataToRBC.packets.p3.number = 0;
  outC->trainDataToRBC.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i1 = 0; i1 < 15; i1++) {
    outC->trainDataToRBC.packets.p3.aNID_RADIO[0].telephoneNumber[i1] = 0;
  }
  outC->trainDataToRBC.packets.p4.valid = kcg_true;
  outC->trainDataToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->trainDataToRBC.packets.p5.valid = kcg_true;
  outC->trainDataToRBC.packets.p5.TrainRunningNumber = 0;
  outC->trainDataToRBC.packets.p9.valid = kcg_true;
  outC->trainDataToRBC.packets.p9.transitionInformation = 0;
  outC->trainDataToRBC.packets.p11.valid = kcg_true;
  outC->trainDataToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->trainDataToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->trainDataToRBC.packets.p11.l_train = 0;
  outC->trainDataToRBC.packets.p11.v_maxtrain = 0;
  outC->trainDataToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->trainDataToRBC.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->trainDataToRBC.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->trainDataToRBC.packets.p11.n_axle = 0;
  outC->trainDataToRBC.packets.p11.nIter_tractionIdentity = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->trainDataToRBC.packets.p11.tractionIdentity[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->trainDataToRBC.packets.p11.tractionIdentity[i1].nid_ctraction = 0;
  }
  outC->trainDataToRBC.packets.p11.nIter_ntc = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->trainDataToRBC.packets.p11.nid_ntc[i1] = 0;
  }
  /* 1 */ Send_M129_init_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendValidTrainDataRBC_reset_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
{
  /* 1 */ Send_M129_reset_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::sendValidTrainDataRBC */
void sendValidTrainDataRBC_trainData_pkg(
  /* trainData_pkg::sendValidTrainDataRBC::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* trainData_pkg::sendValidTrainDataRBC::evc_t_train */ T_TRAIN evc_t_train,
  /* trainData_pkg::sendValidTrainDataRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendValidTrainDataRBC::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendValidTrainDataRBC::p0_positionReport */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::p1_positionReport */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* trainData_pkg::sendValidTrainDataRBC::inVersion */ M_VERSION inVersion,
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
{
  /* trainData_pkg::sendValidTrainDataRBC */
  static M_129_T_TM_radio_messages tmp3;
  /* trainData_pkg::sendValidTrainDataRBC */
  static P000_TM_TrainToTrack tmp2;
  /* trainData_pkg::sendValidTrainDataRBC */
  static P001_TM_TrainToTrack tmp1;
  /* trainData_pkg::sendValidTrainDataRBC */
  static P011_TM_TrainToTrack tmp;
  
  outC->trainDataToRBC.present = kcg_true;
  /* 1 */
  headerMsg129_trainData_pkg(
    nidEngine,
    evc_t_train,
    &outC->trainDataToRBC.header);
  /* 1 */
  packetsFor129_trainData_pkg(
    trainData,
    p0_positionReport,
    p1_positionReport,
    &outC->trainDataToRBC.packets);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->updatedStatus,
    actualStatus);
  outC->updatedStatus.timeStampValidateToRBC = evc_t_train;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = evc_t_train;
  /* 1 */ headerMsg129_ng_trainData_pkg(nidEngine, evc_t_train, &tmp3);
  /* 1 */ nextGen_P00_radioOutput_Pkg(p0_positionReport, &tmp2);
  /* 1 */ nextGen_P01_radioOutput_Pkg(p1_positionReport, &tmp1);
  /* 1 */ packet_11_trainData_pkg(trainData, &tmp);
  /* 1 */
  Send_M129_TM_radio_messages(
    evc_t_train,
    MessageBus,
    &tmp3,
    &tmp2,
    &tmp1,
    &tmp,
    inVersion,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->outMessageBus,
    &outC->Context_1.MessageBus_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendValidTrainDataRBC_trainData_pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

