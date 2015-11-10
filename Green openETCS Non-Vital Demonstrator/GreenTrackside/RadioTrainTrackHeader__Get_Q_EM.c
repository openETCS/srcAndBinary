/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackHeader__Get_Q_EM.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP */
Q_EMERGENCYSTOP RadioTrainTrackHeader__Get_Q_EM(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP::inRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP::out_Q_EMERGENCYSTOP */
  static Q_EMERGENCYSTOP out_Q_EMERGENCYSTOP;
  
  out_Q_EMERGENCYSTOP = (*inRadioTrainTrackHeader).xQ_EMERGENCYSTOP;
  return out_Q_EMERGENCYSTOP;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackHeader__Get_Q_EM.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

