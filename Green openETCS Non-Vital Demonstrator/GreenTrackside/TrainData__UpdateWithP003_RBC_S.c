/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__UpdateWithP003_RBC_S.h"

/* RBC_Session_Pkg::TrainData__UpdateWithP003 */
void TrainData__UpdateWithP003_RBC_S(
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::inRadioTraintrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTraintrackMessage,
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__UpdateWithP003 */
  static outPackets_T_Common_Types_Pkg tmp3;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003 */
  static TrainData_T tmp2;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003 */
  static kcg_int tmp1;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003 */
  static aNID_RADIO_T_Packet_TrainTypes_ tmp;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::_L5 */
  static PT3_OnboardTelephoneNumbers_T_P _L5;
  
  /* 1 */ RadioTrainTrackMessage__GetPack(inRadioTraintrackMessage, &tmp3);
  /* 1 */ _152_RadioTrainTrackPackets__Ge(&tmp3, &_L5);
  tmp1 = /* 1 */ RadioTrainTrackPacket003__Count(&_L5);
  /* 1 */ TrainData__SetNumberOfOnboardPh(inTrainData, tmp1, &tmp2);
  /* 1 */ RadioTrainTrackPacket003__GetOn(&_L5, &tmp);
  /* 1 */ TrainData__SetOnboardPhoneNumbe(&tmp2, &tmp, outTrainData);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__UpdateWithP003_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

