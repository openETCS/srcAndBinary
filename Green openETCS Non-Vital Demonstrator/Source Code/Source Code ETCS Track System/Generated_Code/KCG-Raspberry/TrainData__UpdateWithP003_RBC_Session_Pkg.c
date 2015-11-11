/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__UpdateWithP003_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__UpdateWithP003 */
void TrainData__UpdateWithP003_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::inTrainData */TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::inRadioTraintrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTraintrackMessage,
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::outTrainData */TrainData_T *outTrainData)
{
  outPackets_T_Common_Types_Pkg tmp3;
  TrainData_T tmp2;
  kcg_int tmp1;
  aNID_RADIO_T_Packet_TrainTypes_Pkg tmp;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::_L5 */ PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L5;
  
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTraintrackMessage,
    &tmp3);
  /* 1 */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &tmp3,
    &_L5);
  tmp1 = /* 1 */
    RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
      &_L5);
  /* 1 */
  TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg(
    inTrainData,
    tmp1,
    &tmp2);
  /* 1 */
  RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &_L5,
    &tmp);
  /* 1 */
  TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg(&tmp2, &tmp, outTrainData);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainData__UpdateWithP003_RBC_Session_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

