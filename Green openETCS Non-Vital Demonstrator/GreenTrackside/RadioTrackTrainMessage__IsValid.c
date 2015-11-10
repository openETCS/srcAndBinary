/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessage__IsValid.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid */
kcg_bool RadioTrackTrainMessage__IsValid(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::inRadioTrackTrainMessage */ CompressedRadioMessage_TM *inRadioTrackTrainMessage)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid */
  static NID_MESSAGE tmp1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid */
  static _6_Radio_TrackTrain_Header_T_TM tmp;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::outIsValid */
  static kcg_bool outIsValid;
  
  /* 1 */ RadioTrackTrainMessage__GetHead(inRadioTrackTrainMessage, &tmp);
  tmp1 = /* 1 */ _100_RadioTrackTrainHeader__Get(&tmp);
  /* 1 */ if (tmp1 > 0) {
    outIsValid = kcg_true;
  }
  else {
    outIsValid = kcg_false;
  }
  return outIsValid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessage__IsValid.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

