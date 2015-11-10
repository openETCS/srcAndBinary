/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Get_NID_.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM */
NID_EM RadioTrackTrainHeader__Get_NID_(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM::inRadioTrackTrainHeader */ _6_Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM::out_NID_EM */
  static NID_EM out_NID_EM;
  
  out_NID_EM = (*inRadioTrackTrainHeader).nid_em;
  return out_NID_EM;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainHeader__Get_NID_.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

