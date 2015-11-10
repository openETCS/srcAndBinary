/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _TrainData__UpdateWithP011_RBC_
#define _TrainData__UpdateWithP011_RBC_

#include "kcg_types.h"
#include "TrainData__SetTractionIdentitie.h"
#include "TrainData__Set_M_AIRTIGHT_RBC_S.h"
#include "TrainData__Set_M_LOADINGGAUGE_R.h"
#include "TrainData__Set_NC_CDTRAIN_RBC_S.h"
#include "TrainData__Set_NC_TRAIN_RBC_Ses.h"
#include "TrainData__Set_V_MAXTRAIN_RBC_S.h"
#include "TrainData__SetNationalSystemIde.h"
#include "TrainData__Set_M_AXLELOADCAT_RB.h"
#include "TrainData__Set_L_TRAIN_RBC_Sess.h"
#include "TrainData__Set_N_AXLE_RBC_Sessi.h"
#include "RadioTrainTrackMessage__GetPack.h"
#include "RadioTrainTrackPackets__GetP011.h"
#include "_118_RadioTrainTrackPacket011__.h"
#include "_117_RadioTrainTrackPacket011__.h"
#include "RadioTrainTrackPacket011__GetTr.h"
#include "RadioTrainTrackPacket011__GetNa.h"
#include "_116_RadioTrainTrackPacket011__.h"
#include "_115_RadioTrainTrackPacket011__.h"
#include "_114_RadioTrainTrackPacket011__.h"
#include "_113_RadioTrainTrackPacket011__.h"
#include "_112_RadioTrainTrackPacket011__.h"
#include "RadioTrainTrackPacket011__Get_L.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* RBC_Session_Pkg::TrainData__UpdateWithP011 */
extern void TrainData__UpdateWithP011_RBC_S(
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::outTrainData */ TrainData_T *outTrainData);

#endif /* _TrainData__UpdateWithP011_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__UpdateWithP011_RBC_S.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

