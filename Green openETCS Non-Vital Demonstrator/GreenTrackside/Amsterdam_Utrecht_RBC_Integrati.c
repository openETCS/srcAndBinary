/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_RBC_Integrati.h"

/* US_Integration_June::Amsterdam_Utrecht_RBC_Integration */
void Amsterdam_Utrecht_RBC_Integrati(
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Trigger_in */ kcg_int Trigger_in,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::RadioTrackTrainHeader_out */ _1_Radio_TrackTrain_Header_T_Ra *RadioTrackTrainHeader_out,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Compressed_Packets_out */ CompressedPackets_T_Common_Type *Compressed_Packets_out,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out)
{
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_m _L1;
  
  /* 1 */
  Amsterdam_Utrecht_Lijn1_RBC_Ams(
    (M_TrackTrain_Radio_T_TM_radio_m *) &no_message_US_Integration_June,
    (CompressedPackets_T_Common_Type *) &no_packets_US_Integration_June,
    Trigger_in,
    kcg_false,
    &_L1,
    Compressed_Packets_out);
  kcg_copy_CompressedPackets_T_Co(
    &(*Compressed_Radio_Message_out).Messages,
    Compressed_Packets_out);
  /* 1 */ compressed_to_Radio_Track_Train(&_L1, RadioTrackTrainHeader_out);
  /* 1 */
  C_TrackTrainMessage_to_Int_TM_c(
    RadioTrackTrainHeader_out,
    &(*Compressed_Radio_Message_out).Header);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_RBC_Integrati.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

