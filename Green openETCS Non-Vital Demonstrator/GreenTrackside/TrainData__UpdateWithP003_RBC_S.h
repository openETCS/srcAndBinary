/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _TrainData__UpdateWithP003_RBC_
#define _TrainData__UpdateWithP003_RBC_

#include "kcg_types.h"
#include "TrainData__SetOnboardPhoneNumbe.h"
#include "TrainData__SetNumberOfOnboardPh.h"
#include "_152_RadioTrainTrackPackets__Ge.h"
#include "RadioTrainTrackMessage__GetPack.h"
#include "RadioTrainTrackPacket003__GetOn.h"
#include "RadioTrainTrackPacket003__Count.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* RBC_Session_Pkg::TrainData__UpdateWithP003 */
extern void TrainData__UpdateWithP003_RBC_S(
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::inRadioTraintrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTraintrackMessage,
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::outTrainData */ TrainData_T *outTrainData);

#endif /* _TrainData__UpdateWithP003_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__UpdateWithP003_RBC_S.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

