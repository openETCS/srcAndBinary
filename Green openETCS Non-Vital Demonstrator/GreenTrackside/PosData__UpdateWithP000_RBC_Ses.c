/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__UpdateWithP000_RBC_Ses.h"

/* RBC_Session_Pkg::PosData__UpdateWithP000 */
void PosData__UpdateWithP000_RBC_Ses(
  /* RBC_Session_Pkg::PosData__UpdateWithP000::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__UpdateWithP000::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::PosData__UpdateWithP000::outPosData */ PosData_T *outPosData)
{
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static outPackets_T_Common_Types_Pkg tmp16;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static PosData_T tmp15;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static PosData_T tmp14;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static Q_SCALE tmp13;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static NID_LRBG tmp12;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static D_LRBG tmp11;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static Q_DIRLRBG tmp10;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static Q_DLRBG tmp9;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static L_DOUBTOVER tmp8;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static L_DOUBTUNDER tmp7;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static Q_LENGTH tmp6;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static L_TRAININT tmp5;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static V_TRAIN tmp4;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static Q_DIRTRAIN tmp3;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static M_MODE tmp2;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static M_LEVEL tmp1;
  /* RBC_Session_Pkg::PosData__UpdateWithP000 */
  static NID_NTC tmp;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L4 */
  static PT0_PositionReport_T_Packet_Tra _L4;
  
  /* 1 */ RadioTrainTrackMessage__GetPack(inRadioTrainTrackMessage, &tmp16);
  /* 1 */ _149_RadioTrainTrackPackets__Ge(&tmp16, &_L4);
  tmp13 = /* 1 */ _130_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_Q_SCALE_RBC_Sessio(inPosData, tmp13, &tmp14);
  tmp12 = /* 1 */ _131_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_NID_LRBG_RBC_Sessi(&tmp14, tmp12, &tmp15);
  tmp11 = /* 1 */ _129_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_D_LRBG_RBC_Session(&tmp15, tmp11, &tmp14);
  tmp10 = /* 1 */ _128_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_Q_DIRLRBG_RBC_Sess(&tmp14, tmp10, &tmp15);
  tmp9 = /* 1 */ _127_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_Q_DLRBG_RBC_Sessio(&tmp15, tmp9, &tmp14);
  tmp8 = /* 1 */ _126_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_L_DOUBTOVER_RBC_Se(&tmp14, tmp8, &tmp15);
  tmp7 = /* 1 */ _125_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_L_DOUBTUNDER_RBC_S(&tmp15, tmp7, &tmp14);
  tmp6 = /* 1 */ _124_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_Q_LENGTH_RBC_Sessi(&tmp14, tmp6, &tmp15);
  tmp5 = /* 1 */ _123_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_L_TRAININT_RBC_Ses(&tmp15, tmp5, &tmp14);
  tmp4 = /* 1 */ _121_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_V_TRAIN_RBC_Sessio(&tmp14, tmp4, &tmp15);
  tmp3 = /* 1 */ _122_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_Q_DIRTRAIN_RBC_Ses(&tmp15, tmp3, &tmp14);
  tmp2 = /* 1 */ _120_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_M_MODE_RBC_Session(&tmp14, tmp2, &tmp15);
  tmp1 = /* 1 */ _119_RadioTrainTrackPacket000__(&_L4);
  /* 1 */ PosData__Set_M_LEVEL_RBC_Sessio(&tmp15, tmp1, &tmp14);
  tmp = /* 1 */ RadioTrainTrackPacket000__Get_N(&_L4);
  /* 1 */ PosData__Set_NID_NTC_RBC_Sessio(&tmp14, tmp, outPosData);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__UpdateWithP000_RBC_Ses.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

