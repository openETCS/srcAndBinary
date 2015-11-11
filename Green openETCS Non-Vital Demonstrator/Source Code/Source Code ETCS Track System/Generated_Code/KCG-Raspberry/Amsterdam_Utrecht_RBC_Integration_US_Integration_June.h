/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:08
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_RBC_Integration_US_Integration_June_H_
#define _Amsterdam_Utrecht_RBC_Integration_US_Integration_June_H_

#include "kcg_types.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"
#include "compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"

/* =====================  no input structure  ====================== */


/* US_Integration_June::Amsterdam_Utrecht_RBC_Integration */
extern void Amsterdam_Utrecht_RBC_Integration_US_Integration_June(
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Trigger_in */kcg_int Trigger_in,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::RadioTrackTrainHeader_out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Compressed_Packets_out */CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Compressed_Radio_Message_out */CompressedRadioMessage_TM *Compressed_Radio_Message_out);

#endif /* _Amsterdam_Utrecht_RBC_Integration_US_Integration_June_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_RBC_Integration_US_Integration_June.h
** Generation date: 2015-11-10T18:22:08
*************************************************************$ */

