/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg155ConsistencyChecker__HasCo.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader */
kcg_bool Msg155ConsistencyChecker__HasCo(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::inRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  outIsConsistent = (/* 1 */
      _151_RadioTrainTrackHeader__Get(inRadioTrainTrackHeader) == T_TRAIN_MIN) &
    (/* 1 */ RadioTrainTrackHeader__Get_Q_MA(inRadioTrainTrackHeader) ==
      Q_MARQSTREASON_DEFAULT);
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Msg155ConsistencyChecker__HasCo.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

