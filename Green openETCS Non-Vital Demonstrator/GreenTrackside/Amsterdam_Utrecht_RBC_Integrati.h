/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_RBC_Integrat
#define _Amsterdam_Utrecht_RBC_Integrat

#include "kcg_types.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_Ams.h"
#include "C_TrackTrainMessage_to_Int_TM_c.h"
#include "compressed_to_Radio_Track_Train.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* US_Integration_June::Amsterdam_Utrecht_RBC_Integration */
extern void Amsterdam_Utrecht_RBC_Integrati(
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Trigger_in */ kcg_int Trigger_in,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::RadioTrackTrainHeader_out */ _1_Radio_TrackTrain_Header_T_Ra *RadioTrackTrainHeader_out,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Compressed_Packets_out */ CompressedPackets_T_Common_Type *Compressed_Packets_out,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out);

#endif /* _Amsterdam_Utrecht_RBC_Integrat */
/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_RBC_Integrati.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

