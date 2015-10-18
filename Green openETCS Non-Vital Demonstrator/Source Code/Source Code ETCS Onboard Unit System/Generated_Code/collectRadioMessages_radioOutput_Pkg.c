/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectRadioMessages_radioOutput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void collectRadioMessages_init_radioOutput_Pkg(
  outC_collectRadioMessages_radioOutput_Pkg *outC)
{
  static kcg_int i;
  
  outC->MSG3_ID = 0;
  outC->MSG2_ID = 0;
  outC->MSG1_ID = 0;
  outC->outRadioToAPI.firstOutput.present = kcg_true;
  outC->outRadioToAPI.firstOutput.header.present = kcg_true;
  outC->outRadioToAPI.firstOutput.header.nid_message = 0;
  outC->outRadioToAPI.firstOutput.header.t_train = 0;
  outC->outRadioToAPI.firstOutput.header.nid_engine = 0;
  outC->outRadioToAPI.firstOutput.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->outRadioToAPI.firstOutput.header.xT_TRAIN = 0;
  outC->outRadioToAPI.firstOutput.header.xNID_EM = 0;
  outC->outRadioToAPI.firstOutput.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outRadioToAPI.firstOutput.header.xNID_TEXTMESSAGE = 0;
  outC->outRadioToAPI.firstOutput.packets.p0.valid = kcg_true;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.NID_PACKET = 0;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.L_PACKET = 0;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.NID_LRBG = 0;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.D_LRBG = 0;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.L_TRAININT = 0;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.V_TRAIN = 0;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioToAPI.firstOutput.packets.p0.packet0.NID_NTC = 0;
  outC->outRadioToAPI.firstOutput.packets.p1.valid = kcg_true;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.NID_PACKET = 0;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.L_PACKET = 0;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.NID_LRBG = 0;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.D_LRBG = 0;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.L_TRAININT = 0;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.V_TRAIN = 0;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioToAPI.firstOutput.packets.p1.packet1.NID_NTC = 0;
  outC->outRadioToAPI.firstOutput.packets.p3.valid = kcg_true;
  outC->outRadioToAPI.firstOutput.packets.p3.number = 0;
  outC->outRadioToAPI.firstOutput.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->outRadioToAPI.firstOutput.packets.p3.aNID_RADIO[0].telephoneNumber[i] =
      0;
  }
  outC->outRadioToAPI.firstOutput.packets.p4.valid = kcg_true;
  outC->outRadioToAPI.firstOutput.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioToAPI.firstOutput.packets.p5.valid = kcg_true;
  outC->outRadioToAPI.firstOutput.packets.p5.TrainRunningNumber = 0;
  outC->outRadioToAPI.firstOutput.packets.p9.valid = kcg_true;
  outC->outRadioToAPI.firstOutput.packets.p9.transitionInformation = 0;
  outC->outRadioToAPI.firstOutput.packets.p11.valid = kcg_true;
  outC->outRadioToAPI.firstOutput.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioToAPI.firstOutput.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioToAPI.firstOutput.packets.p11.l_train = 0;
  outC->outRadioToAPI.firstOutput.packets.p11.v_maxtrain = 0;
  outC->outRadioToAPI.firstOutput.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioToAPI.firstOutput.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioToAPI.firstOutput.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->outRadioToAPI.firstOutput.packets.p11.n_axle = 0;
  outC->outRadioToAPI.firstOutput.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->outRadioToAPI.firstOutput.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioToAPI.firstOutput.packets.p11.tractionIdentity[i].nid_ctraction =
      0;
  }
  outC->outRadioToAPI.firstOutput.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->outRadioToAPI.firstOutput.packets.p11.nid_ntc[i] = 0;
  }
  outC->outRadioToAPI.secondOutput.present = kcg_true;
  outC->outRadioToAPI.secondOutput.header.present = kcg_true;
  outC->outRadioToAPI.secondOutput.header.nid_message = 0;
  outC->outRadioToAPI.secondOutput.header.t_train = 0;
  outC->outRadioToAPI.secondOutput.header.nid_engine = 0;
  outC->outRadioToAPI.secondOutput.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->outRadioToAPI.secondOutput.header.xT_TRAIN = 0;
  outC->outRadioToAPI.secondOutput.header.xNID_EM = 0;
  outC->outRadioToAPI.secondOutput.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outRadioToAPI.secondOutput.header.xNID_TEXTMESSAGE = 0;
  outC->outRadioToAPI.secondOutput.packets.p0.valid = kcg_true;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.NID_PACKET = 0;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.L_PACKET = 0;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.NID_LRBG = 0;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.D_LRBG = 0;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.L_TRAININT = 0;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.V_TRAIN = 0;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioToAPI.secondOutput.packets.p0.packet0.NID_NTC = 0;
  outC->outRadioToAPI.secondOutput.packets.p1.valid = kcg_true;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.NID_PACKET = 0;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.L_PACKET = 0;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.NID_LRBG = 0;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.D_LRBG = 0;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.L_TRAININT = 0;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.V_TRAIN = 0;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioToAPI.secondOutput.packets.p1.packet1.NID_NTC = 0;
  outC->outRadioToAPI.secondOutput.packets.p3.valid = kcg_true;
  outC->outRadioToAPI.secondOutput.packets.p3.number = 0;
  outC->outRadioToAPI.secondOutput.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->outRadioToAPI.secondOutput.packets.p3.aNID_RADIO[0].telephoneNumber[i] =
      0;
  }
  outC->outRadioToAPI.secondOutput.packets.p4.valid = kcg_true;
  outC->outRadioToAPI.secondOutput.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioToAPI.secondOutput.packets.p5.valid = kcg_true;
  outC->outRadioToAPI.secondOutput.packets.p5.TrainRunningNumber = 0;
  outC->outRadioToAPI.secondOutput.packets.p9.valid = kcg_true;
  outC->outRadioToAPI.secondOutput.packets.p9.transitionInformation = 0;
  outC->outRadioToAPI.secondOutput.packets.p11.valid = kcg_true;
  outC->outRadioToAPI.secondOutput.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioToAPI.secondOutput.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioToAPI.secondOutput.packets.p11.l_train = 0;
  outC->outRadioToAPI.secondOutput.packets.p11.v_maxtrain = 0;
  outC->outRadioToAPI.secondOutput.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioToAPI.secondOutput.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioToAPI.secondOutput.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->outRadioToAPI.secondOutput.packets.p11.n_axle = 0;
  outC->outRadioToAPI.secondOutput.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->outRadioToAPI.secondOutput.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioToAPI.secondOutput.packets.p11.tractionIdentity[i].nid_ctraction =
      0;
  }
  outC->outRadioToAPI.secondOutput.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->outRadioToAPI.secondOutput.packets.p11.nid_ntc[i] = 0;
  }
  outC->outRadioToAPI.thirdOutput.present = kcg_true;
  outC->outRadioToAPI.thirdOutput.header.present = kcg_true;
  outC->outRadioToAPI.thirdOutput.header.nid_message = 0;
  outC->outRadioToAPI.thirdOutput.header.t_train = 0;
  outC->outRadioToAPI.thirdOutput.header.nid_engine = 0;
  outC->outRadioToAPI.thirdOutput.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->outRadioToAPI.thirdOutput.header.xT_TRAIN = 0;
  outC->outRadioToAPI.thirdOutput.header.xNID_EM = 0;
  outC->outRadioToAPI.thirdOutput.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outRadioToAPI.thirdOutput.header.xNID_TEXTMESSAGE = 0;
  outC->outRadioToAPI.thirdOutput.packets.p0.valid = kcg_true;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.NID_PACKET = 0;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.L_PACKET = 0;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.NID_LRBG = 0;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.D_LRBG = 0;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.L_TRAININT = 0;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.V_TRAIN = 0;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioToAPI.thirdOutput.packets.p0.packet0.NID_NTC = 0;
  outC->outRadioToAPI.thirdOutput.packets.p1.valid = kcg_true;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.NID_PACKET = 0;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.L_PACKET = 0;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.NID_LRBG = 0;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.D_LRBG = 0;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.L_TRAININT = 0;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.V_TRAIN = 0;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioToAPI.thirdOutput.packets.p1.packet1.NID_NTC = 0;
  outC->outRadioToAPI.thirdOutput.packets.p3.valid = kcg_true;
  outC->outRadioToAPI.thirdOutput.packets.p3.number = 0;
  outC->outRadioToAPI.thirdOutput.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->outRadioToAPI.thirdOutput.packets.p3.aNID_RADIO[0].telephoneNumber[i] =
      0;
  }
  outC->outRadioToAPI.thirdOutput.packets.p4.valid = kcg_true;
  outC->outRadioToAPI.thirdOutput.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioToAPI.thirdOutput.packets.p5.valid = kcg_true;
  outC->outRadioToAPI.thirdOutput.packets.p5.TrainRunningNumber = 0;
  outC->outRadioToAPI.thirdOutput.packets.p9.valid = kcg_true;
  outC->outRadioToAPI.thirdOutput.packets.p9.transitionInformation = 0;
  outC->outRadioToAPI.thirdOutput.packets.p11.valid = kcg_true;
  outC->outRadioToAPI.thirdOutput.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioToAPI.thirdOutput.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioToAPI.thirdOutput.packets.p11.l_train = 0;
  outC->outRadioToAPI.thirdOutput.packets.p11.v_maxtrain = 0;
  outC->outRadioToAPI.thirdOutput.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioToAPI.thirdOutput.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioToAPI.thirdOutput.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->outRadioToAPI.thirdOutput.packets.p11.n_axle = 0;
  outC->outRadioToAPI.thirdOutput.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->outRadioToAPI.thirdOutput.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioToAPI.thirdOutput.packets.p11.tractionIdentity[i].nid_ctraction =
      0;
  }
  outC->outRadioToAPI.thirdOutput.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->outRadioToAPI.thirdOutput.packets.p11.nid_ntc[i] = 0;
  }
  outC->outRadioToAPI.radioEVCtoUnit.valid = kcg_true;
  outC->outRadioToAPI.radioEVCtoUnit.cmd =
    cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->outRadioToAPI.radioEVCtoUnit.networkID = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void collectRadioMessages_reset_radioOutput_Pkg(
  outC_collectRadioMessages_radioOutput_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::collectRadioMessages */
void collectRadioMessages_radioOutput_Pkg(
  /* radioOutput_Pkg::collectRadioMessages::inFromPositionReport */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* radioOutput_Pkg::collectRadioMessages::inFromRadioSM */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromRadioSM,
  /* radioOutput_Pkg::collectRadioMessages::inFromTrainData */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromTrainData,
  /* radioOutput_Pkg::collectRadioMessages::cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::collectRadioMessages::inFromMA */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromMA,
  /* radioOutput_Pkg::collectRadioMessages::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* radioOutput_Pkg::collectRadioMessages::insafeSessionEstablished */ kcg_bool insafeSessionEstablished,
  outC_collectRadioMessages_radioOutput_Pkg *outC)
{
  /* radioOutput_Pkg::collectRadioMessages */
  static kcg_int tmp3;
  /* radioOutput_Pkg::collectRadioMessages */
  static kcg_int tmp2;
  /* radioOutput_Pkg::collectRadioMessages */
  static kcg_int tmp1;
  /* radioOutput_Pkg::collectRadioMessages */
  static kcg_int tmp;
  /* radioOutput_Pkg::collectRadioMessages::sendMA */
  static kcg_bool sendMA;
  /* radioOutput_Pkg::collectRadioMessages::msgCount */
  static kcg_int msgCount;
  /* radioOutput_Pkg::collectRadioMessages::_L8 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L8;
  /* radioOutput_Pkg::collectRadioMessages::_L43 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L43;
  /* radioOutput_Pkg::collectRadioMessages::_L90 */
  static kcg_bool _L90;
  
  _L90 = insafeSessionEstablished & (*inFromPositionReport).present;
  sendMA = (*inFromMA).present & insafeSessionEstablished & ((M_LEVEL_Level_3 ==
        (*inModeAndLevel).level) | ((*inModeAndLevel).level ==
        M_LEVEL_Level_2));
  /* 8 */ if (_L90) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &_L8,
      inFromPositionReport);
    tmp2 = 1;
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &_L8,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
        &cInitOutputToRadioAPI_API_RadioCommunication_Pkg);
    tmp2 = 0;
  }
  /* 7 */ if (sendMA) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&_L43, inFromMA);
    tmp3 = 1;
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&_L43, &_L8);
    tmp3 = 0;
  }
  /* 10 */ if ((*inFromTrainData).present) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  /* 1 */ if ((*inFromRadioSM).present) {
    tmp1 = 1;
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->outRadioToAPI.firstOutput,
      inFromRadioSM);
  }
  else {
    tmp1 = 0;
    /* 5 */ if ((*inFromTrainData).present) {
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->outRadioToAPI.firstOutput,
        inFromTrainData);
    }
    else {
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->outRadioToAPI.firstOutput,
        &_L43);
    }
  }
  msgCount = tmp3 + tmp2 + tmp1 + tmp;
  _L90 = (*inFromRadioSM).present & (*inFromTrainData).present;
  /* 3 */ if (msgCount <= 1) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->outRadioToAPI.secondOutput,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
        &cInitOutputToRadioAPI_API_RadioCommunication_Pkg);
  }
  else /* 11 */ if (_L90) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->outRadioToAPI.secondOutput,
      inFromTrainData);
  }
  else /* 13 */ if ((*inFromRadioSM).present | (*inFromTrainData).present) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->outRadioToAPI.secondOutput,
      &_L43);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->outRadioToAPI.secondOutput,
      &_L8);
  }
  /* 4 */ if (msgCount <= 2) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->outRadioToAPI.thirdOutput,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
        &cInitOutputToRadioAPI_API_RadioCommunication_Pkg);
  }
  else /* 12 */ if (_L90 & sendMA) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->outRadioToAPI.thirdOutput,
      inFromMA);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->outRadioToAPI.thirdOutput,
      &_L8);
  }
  /* 1 */
  mapToRTM_radioOutput_Pkg(cmdsToMobile, &outC->outRadioToAPI.radioEVCtoUnit);
  outC->MSG1_ID = outC->outRadioToAPI.firstOutput.header.nid_message;
  outC->MSG2_ID = outC->outRadioToAPI.secondOutput.header.nid_message;
  outC->MSG3_ID = outC->outRadioToAPI.thirdOutput.header.nid_message;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** collectRadioMessages_radioOutput_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

