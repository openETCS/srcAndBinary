/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Track.h"

void Track_reset(outC_Track *outC)
{
}

/* Track */
void Track(inC_Track *inC, outC_Track *outC)
{
  /* Track::_L8 */ T_TRAIN _L8;
  /* Track::_L7 */ M_VERSION _L7;
  /* Track::_L6 */ P044_TM_TrainToTrack _L6;
  
  /* 1 */ Amsterdam_Utrecht_Lijn1_balises1(242.0, &outC->BaliseMessage);
  /* 1 */
  Amsterdam_Utrecht_Sheet06_Biljmer_integration(
    (M_TrackTrain_Radio_T_TM_radio_messages *) &no_message,
    (CompressedPackets_T_Common_Types_Pkg *) &no_packets,
    1,
    kcg_false,
    &outC->RadioMessage_out,
    &outC->RadioPackets_out);
  /* 1 */
  Read_M157_TM_radio_messages_trackside(
    1617,
    &inC->TrainTrackMessageIn,
    &outC->Message_157_out,
    &outC->P000,
    &outC->P001,
    &outC->P004,
    &outC->P005,
    &_L6,
    &_L7,
    &_L8);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Track.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

