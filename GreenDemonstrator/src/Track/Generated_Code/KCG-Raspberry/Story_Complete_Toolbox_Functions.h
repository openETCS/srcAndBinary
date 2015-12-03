/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:08
*************************************************************$ */
#ifndef _Story_Complete_Toolbox_Functions_H_
#define _Story_Complete_Toolbox_Functions_H_

#include "kcg_types.h"
#include "Amsterdam_Utrecht_RBC_Integration_US_Integration_June.h"
#include "Amsterdam_Utrecht_Balises_Integration_US_Integration_June.h"

/* =====================  no input structure  ====================== */


/* Toolbox::Functions::Story_Complete */
extern void Story_Complete_Toolbox_Functions(
  /* Toolbox::Functions::Story_Complete::TrainPos */kcg_real TrainPos,
  /* Toolbox::Functions::Story_Complete::Trigger_in */kcg_int Trigger_in,
  /* Toolbox::Functions::Story_Complete::Balise_Packets */CompressedPackets_T_Common_Types_Pkg *Balise_Packets,
  /* Toolbox::Functions::Story_Complete::Balise_Header */TelegramHeader_T_BG_Types_Pkg *Balise_Header,
  /* Toolbox::Functions::Story_Complete::RadioTrackTrainHeader_out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* Toolbox::Functions::Story_Complete::Compressed_Packets_out */CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* Toolbox::Functions::Story_Complete::Compressed_Radio_Message_out */CompressedRadioMessage_TM *Compressed_Radio_Message_out,
  /* Toolbox::Functions::Story_Complete::Compressed_Balise_Message_Out */CompressedBaliseMessage_TM *Compressed_Balise_Message_Out);

#endif /* _Story_Complete_Toolbox_Functions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Story_Complete_Toolbox_Functions.h
** Generation date: 2015-11-10T18:22:08
*************************************************************$ */

