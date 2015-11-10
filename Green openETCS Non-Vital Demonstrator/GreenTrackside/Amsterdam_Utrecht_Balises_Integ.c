/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Balises_Integ.h"

/* US_Integration_June::Amsterdam_Utrecht_Balises_Integration */
void Amsterdam_Utrecht_Balises_Integ(
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::TrainPos */ kcg_real TrainPos,
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::Header */ TelegramHeader_T_BG_Types_Pkg *Header,
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::CompressedBaliseMessage */ CompressedBaliseMessage_TM *CompressedBaliseMessage)
{
  /* 1 */ Amsterdam_Utrecht_Lijn1_balises(TrainPos, CompressedBaliseMessage);
  kcg_copy_CompressedPackets_T_Co(
    Packets,
    &(*CompressedBaliseMessage).Messages);
  /* 1 */
  CASTLIB_BaliseHeaders_TM_conver(&(*CompressedBaliseMessage).Header, Header);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_Balises_Integ.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

