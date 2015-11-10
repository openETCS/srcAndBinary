/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__UpdateWithP001_RBC_Ses.h"

/* RBC_Session_Pkg::PosData__UpdateWithP001 */
void PosData__UpdateWithP001_RBC_Ses(
  /* RBC_Session_Pkg::PosData__UpdateWithP001::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__UpdateWithP001::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::PosData__UpdateWithP001::outPosData */ PosData_T *outPosData)
{
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static outPackets_T_Common_Types_Pkg tmp17;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static PosData_T tmp16;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static PosData_T tmp15;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static Q_SCALE tmp14;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static NID_LRBG tmp13;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static NID_PRVLRBG tmp12;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static D_LRBG tmp11;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static Q_DIRLRBG tmp10;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static Q_DLRBG tmp9;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static L_DOUBTOVER tmp8;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static L_DOUBTUNDER tmp7;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static Q_LENGTH tmp6;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static L_TRAININT tmp5;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static V_TRAIN tmp4;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static Q_DIRTRAIN tmp3;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static M_MODE tmp2;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static M_LEVEL tmp1;
  /* RBC_Session_Pkg::PosData__UpdateWithP001 */
  static NID_NTC tmp;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L5 */
  static PT1_PositionReport_2BG_T_Packet _L5;
  
  /* 1 */ RadioTrainTrackMessage__GetPack(inRadioTrainTrackMessage, &tmp17);
  /* 1 */ _150_RadioTrainTrackPackets__Ge(&tmp17, &_L5);
  tmp14 = /* 1 */ _133_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_Q_SCALE_RBC_Sessio(inPosData, tmp14, &tmp15);
  tmp13 = /* 1 */ _136_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_NID_LRBG_RBC_Sessi(&tmp15, tmp13, &tmp16);
  tmp12 = /* 1 */ RadioTrainTrackPacket001__Get_N(&_L5);
  /* 1 */ PosData__Set_NID_PRVLRBG_RBC_Se(&tmp16, tmp12, &tmp15);
  tmp11 = /* 1 */ _142_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_D_LRBG_RBC_Session(&tmp15, tmp11, &tmp16);
  tmp10 = /* 1 */ _139_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_Q_DIRLRBG_RBC_Sess(&tmp16, tmp10, &tmp15);
  tmp9 = /* 1 */ _138_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_Q_DLRBG_RBC_Sessio(&tmp15, tmp9, &tmp16);
  tmp8 = /* 1 */ _135_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_L_DOUBTOVER_RBC_Se(&tmp16, tmp8, &tmp15);
  tmp7 = /* 1 */ _145_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_L_DOUBTUNDER_RBC_S(&tmp15, tmp7, &tmp16);
  tmp6 = /* 1 */ _134_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_Q_LENGTH_RBC_Sessi(&tmp16, tmp6, &tmp15);
  tmp5 = /* 1 */ _144_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_L_TRAININT_RBC_Ses(&tmp15, tmp5, &tmp16);
  tmp4 = /* 1 */ _141_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_V_TRAIN_RBC_Sessio(&tmp16, tmp4, &tmp15);
  tmp3 = /* 1 */ _132_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_Q_DIRTRAIN_RBC_Ses(&tmp15, tmp3, &tmp16);
  tmp2 = /* 1 */ _140_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_M_MODE_RBC_Session(&tmp16, tmp2, &tmp15);
  tmp1 = /* 1 */ _137_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_M_LEVEL_RBC_Sessio(&tmp15, tmp1, &tmp16);
  tmp = /* 1 */ _143_RadioTrainTrackPacket001__(&_L5);
  /* 1 */ PosData__Set_NID_NTC_RBC_Sessio(&tmp16, tmp, outPosData);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__UpdateWithP001_RBC_Ses.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

