/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_74_RadioTrackTrainMessageQueue.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid */
kcg_bool _74_RadioTrackTrainMessageQueue(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntr *inRadioTrackTrainMessageQueueEn)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid::outIsValid */
  static kcg_bool outIsValid;
  
  outIsValid = (*inRadioTrackTrainMessageQueueEn).m_IsValid;
  return outIsValid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _74_RadioTrackTrainMessageQueue.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

