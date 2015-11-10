/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__UpdateWithP011_RBC_S.h"

/* RBC_Session_Pkg::TrainData__UpdateWithP011 */
void TrainData__UpdateWithP011_RBC_S(
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static outPackets_T_Common_Types_Pkg tmp12;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static TrainData_T tmp11;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static TrainData_T tmp10;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static NC_CDTRAIN tmp9;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static NC_TRAIN tmp8;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static L_TRAIN tmp7;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static V_MAXTRAIN tmp6;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static M_LOADINGGAUGE tmp5;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static M_AXLELOADCAT tmp4;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static M_AIRTIGHT tmp3;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static N_AXLE tmp2;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static aTractionIdentity_T_Packet_Trai tmp1;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011 */
  static aNID_NTC_T_Packet_TrainTypes_Pk tmp;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L6 */
  static PT11_ValidatedTrainData_T_Packe _L6;
  
  /* 1 */ RadioTrainTrackMessage__GetPack(inRadioTrainTrackMessage, &tmp12);
  /* 1 */ RadioTrainTrackPackets__GetP011(&tmp12, &_L6);
  tmp9 = /* 1 */ _115_RadioTrainTrackPacket011__(&_L6);
  /* 1 */ TrainData__Set_NC_CDTRAIN_RBC_S(inTrainData, tmp9, &tmp10);
  tmp8 = /* 1 */ _113_RadioTrainTrackPacket011__(&_L6);
  /* 1 */ TrainData__Set_NC_TRAIN_RBC_Ses(&tmp10, tmp8, &tmp11);
  tmp7 = /* 1 */ RadioTrainTrackPacket011__Get_L(&_L6);
  /* 1 */ TrainData__Set_L_TRAIN_RBC_Sess(&tmp11, tmp7, &tmp10);
  tmp6 = /* 1 */ _116_RadioTrainTrackPacket011__(&_L6);
  /* 1 */ TrainData__Set_V_MAXTRAIN_RBC_S(&tmp10, tmp6, &tmp11);
  tmp5 = /* 1 */ _117_RadioTrainTrackPacket011__(&_L6);
  /* 1 */ TrainData__Set_M_LOADINGGAUGE_R(&tmp11, tmp5, &tmp10);
  tmp4 = /* 1 */ _114_RadioTrainTrackPacket011__(&_L6);
  /* 1 */ TrainData__Set_M_AXLELOADCAT_RB(&tmp10, tmp4, &tmp11);
  tmp3 = /* 1 */ _118_RadioTrainTrackPacket011__(&_L6);
  /* 1 */ TrainData__Set_M_AIRTIGHT_RBC_S(&tmp11, tmp3, &tmp10);
  tmp2 = /* 1 */ _112_RadioTrainTrackPacket011__(&_L6);
  /* 1 */ TrainData__Set_N_AXLE_RBC_Sessi(&tmp10, tmp2, &tmp11);
  /* 1 */ RadioTrainTrackPacket011__GetTr(&_L6, &tmp1);
  /* 1 */ TrainData__SetTractionIdentitie(&tmp11, &tmp1, &tmp10);
  /* 1 */ RadioTrainTrackPacket011__GetNa(&_L6, &tmp);
  /* 1 */ TrainData__SetNationalSystemIde(&tmp10, &tmp, outTrainData);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__UpdateWithP011_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

