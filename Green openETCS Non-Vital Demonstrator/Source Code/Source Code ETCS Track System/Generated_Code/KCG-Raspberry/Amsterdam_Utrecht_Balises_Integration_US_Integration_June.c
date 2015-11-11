/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Balises_Integration_US_Integration_June.h"

/* US_Integration_June::Amsterdam_Utrecht_Balises_Integration */
void Amsterdam_Utrecht_Balises_Integration_US_Integration_June(
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::TrainPos */kcg_real TrainPos,
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::Header */TelegramHeader_T_BG_Types_Pkg *Header,
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::CompressedBaliseMessage */CompressedBaliseMessage_TM *CompressedBaliseMessage)
{
  /* 1 */
  Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    TrainPos,
    CompressedBaliseMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    Packets,
    &(*CompressedBaliseMessage).Messages);
  /* 1 */
  CASTLIB_BaliseHeaders_TM_conversions(
    &(*CompressedBaliseMessage).Header,
    Header);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Balises_Integration_US_Integration_June.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

