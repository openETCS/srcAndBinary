/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Story_Complete_Toolbox_Function.h"

/* Toolbox::Functions::Story_Complete */
void Story_Complete_Toolbox_Function(
  /* Toolbox::Functions::Story_Complete::TrainPos */ kcg_real TrainPos,
  /* Toolbox::Functions::Story_Complete::Trigger_in */ kcg_int Trigger_in,
  /* Toolbox::Functions::Story_Complete::Balise_Packets */ CompressedPackets_T_Common_Type *Balise_Packets,
  /* Toolbox::Functions::Story_Complete::Balise_Header */ TelegramHeader_T_BG_Types_Pkg *Balise_Header,
  /* Toolbox::Functions::Story_Complete::RadioTrackTrainHeader_out */ _1_Radio_TrackTrain_Header_T_Ra *RadioTrackTrainHeader_out,
  /* Toolbox::Functions::Story_Complete::Compressed_Packets_out */ CompressedPackets_T_Common_Type *Compressed_Packets_out,
  /* Toolbox::Functions::Story_Complete::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out,
  /* Toolbox::Functions::Story_Complete::Compressed_Balise_Message_Out */ CompressedBaliseMessage_TM *Compressed_Balise_Message_Out)
{
  /* 1 */
  Amsterdam_Utrecht_RBC_Integrati(
    Trigger_in,
    RadioTrackTrainHeader_out,
    Compressed_Packets_out,
    Compressed_Radio_Message_out);
  /* 2 */
  Amsterdam_Utrecht_Balises_Integ(
    TrainPos,
    Balise_Packets,
    Balise_Header,
    Compressed_Balise_Message_Out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Story_Complete_Toolbox_Function.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

