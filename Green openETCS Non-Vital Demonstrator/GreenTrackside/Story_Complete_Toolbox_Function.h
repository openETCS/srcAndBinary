/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _Story_Complete_Toolbox_Functio
#define _Story_Complete_Toolbox_Functio

#include "kcg_types.h"
#include "Amsterdam_Utrecht_RBC_Integrati.h"
#include "Amsterdam_Utrecht_Balises_Integ.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Toolbox::Functions::Story_Complete */
extern void Story_Complete_Toolbox_Function(
  /* Toolbox::Functions::Story_Complete::TrainPos */ kcg_real TrainPos,
  /* Toolbox::Functions::Story_Complete::Trigger_in */ kcg_int Trigger_in,
  /* Toolbox::Functions::Story_Complete::Balise_Packets */ CompressedPackets_T_Common_Type *Balise_Packets,
  /* Toolbox::Functions::Story_Complete::Balise_Header */ TelegramHeader_T_BG_Types_Pkg *Balise_Header,
  /* Toolbox::Functions::Story_Complete::RadioTrackTrainHeader_out */ _1_Radio_TrackTrain_Header_T_Ra *RadioTrackTrainHeader_out,
  /* Toolbox::Functions::Story_Complete::Compressed_Packets_out */ CompressedPackets_T_Common_Type *Compressed_Packets_out,
  /* Toolbox::Functions::Story_Complete::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out,
  /* Toolbox::Functions::Story_Complete::Compressed_Balise_Message_Out */ CompressedBaliseMessage_TM *Compressed_Balise_Message_Out);

#endif /* _Story_Complete_Toolbox_Functio */
/* $**************** KCG Version 6.4 (build i21) ****************
** Story_Complete_Toolbox_Function.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

