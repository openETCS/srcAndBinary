/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _PosData__Update_RBC_Session_Pk
#define _PosData__Update_RBC_Session_Pk

#include "kcg_types.h"
#include "PosData__UpdateWithP001_RBC_Ses.h"
#include "PosData__UpdateWithP000_RBC_Ses.h"
#include "RadioTrainTrackMessage__GetPack.h"
#include "_150_RadioTrainTrackPackets__Ge.h"
#include "_149_RadioTrainTrackPackets__Ge.h"
#include "RadioTrainTrackPacket001__IsVal.h"
#include "RadioTrainTrackPacket000__IsVal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* RBC_Session_Pkg::PosData__Update */
extern void PosData__Update_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Update::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Update::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::PosData__Update::outPosData */ PosData_T *outPosData);

#endif /* _PosData__Update_RBC_Session_Pk */
/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Update_RBC_Session_Pkg.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

