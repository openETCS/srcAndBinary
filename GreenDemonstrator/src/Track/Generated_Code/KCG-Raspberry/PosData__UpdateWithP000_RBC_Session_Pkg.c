/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__UpdateWithP000_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__UpdateWithP000 */
void PosData__UpdateWithP000_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__UpdateWithP000::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__UpdateWithP000::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::PosData__UpdateWithP000::outPosData */PosData_T *outPosData)
{
  outPackets_T_Common_Types_Pkg tmp10;
  PosData_T tmp9;
  PosData_T tmp8;
  Q_SCALE tmp7;
  D_LRBG tmp6;
  Q_DIRLRBG tmp5;
  Q_DLRBG tmp4;
  Q_LENGTH tmp3;
  Q_DIRTRAIN tmp2;
  M_MODE tmp1;
  M_LEVEL tmp;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L4 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg _L4;
  
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackMessage,
    &tmp10);
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &tmp10,
    &_L4);
  tmp7 = /* 1 */
    RadioTrainTrackPacket000__Get_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_Q_SCALE_RBC_Session_Pkg(inPosData, tmp7, &tmp8);
  tmp6 = /* 1 */
    RadioTrainTrackPacket000__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_NID_LRBG_RBC_Session_Pkg(&tmp8, tmp6, &tmp9);
  tmp6 = /* 1 */
    RadioTrainTrackPacket000__Get_D_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_D_LRBG_RBC_Session_Pkg(&tmp9, tmp6, &tmp8);
  tmp5 = /* 1 */
    RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_Q_DIRLRBG_RBC_Session_Pkg(&tmp8, tmp5, &tmp9);
  tmp4 = /* 1 */
    RadioTrainTrackPacket000__Get_Q_DLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_Q_DLRBG_RBC_Session_Pkg(&tmp9, tmp4, &tmp8);
  tmp6 = /* 1 */
    RadioTrainTrackPacket000__Get_L_DOUBTOVER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_L_DOUBTOVER_RBC_Session_Pkg(&tmp8, tmp6, &tmp9);
  tmp6 = /* 1 */
    RadioTrainTrackPacket000__Get_L_DOUBTUNDER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_L_DOUBTUNDER_RBC_Session_Pkg(&tmp9, tmp6, &tmp8);
  tmp3 = /* 1 */
    RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_Q_LENGTH_RBC_Session_Pkg(&tmp8, tmp3, &tmp9);
  tmp6 = /* 1 */
    RadioTrainTrackPacket000__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_L_TRAININT_RBC_Session_Pkg(&tmp9, tmp6, &tmp8);
  tmp6 = /* 1 */
    RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_V_TRAIN_RBC_Session_Pkg(&tmp8, tmp6, &tmp9);
  tmp2 = /* 1 */
    RadioTrainTrackPacket000__Get_Q_DIRTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg(&tmp9, tmp2, &tmp8);
  tmp1 = /* 1 */
    RadioTrainTrackPacket000__Get_M_MODE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_M_MODE_RBC_Session_Pkg(&tmp8, tmp1, &tmp9);
  tmp = /* 1 */
    RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_M_LEVEL_RBC_Session_Pkg(&tmp9, tmp, &tmp8);
  tmp6 = /* 1 */
    RadioTrainTrackPacket000__Get_NID_NTC_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
      &_L4);
  /* 1 */ PosData__Set_NID_NTC_RBC_Session_Pkg(&tmp8, tmp6, outPosData);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__UpdateWithP000_RBC_Session_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

