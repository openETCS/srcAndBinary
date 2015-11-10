/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RadioTrackTrainMsgQueue_RBC_Me
#define _RadioTrackTrainMsgQueue_RBC_Me

#include "kcg_types.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"
#include "RadioTrackTrainFactory__CreateD.h"
#include "_103_RadioTrackTrainHeader__Set.h"
#include "RadioTrackTrainMessage__GetHead.h"
#include "RadioTrackTrainMessage__SetHead.h"
#include "_76_RadioTrackTrainMessageQueue.h"
#include "_72_RadioTrackTrainMessageQueue.h"
#include "_70_RadioTrackTrainMessageQueue.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue */
extern void RadioTrackTrainMsgQueue_RBC_Mes(
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outDataBus */ RBC_Data_T_RBC_DataBus_Pkg *outDataBus,
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *outRadioTrackTrainMessage);

#endif /* _RadioTrackTrainMsgQueue_RBC_Me */
/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMsgQueue_RBC_Mes.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

