/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_Balises_Inte
#define _Amsterdam_Utrecht_Balises_Inte

#include "kcg_types.h"
#include "Amsterdam_Utrecht_Lijn1_balises.h"
#include "CASTLIB_BaliseHeaders_TM_conver.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* US_Integration_June::Amsterdam_Utrecht_Balises_Integration */
extern void Amsterdam_Utrecht_Balises_Integ(
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::TrainPos */ kcg_real TrainPos,
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::Header */ TelegramHeader_T_BG_Types_Pkg *Header,
  /* US_Integration_June::Amsterdam_Utrecht_Balises_Integration::CompressedBaliseMessage */ CompressedBaliseMessage_TM *CompressedBaliseMessage);

#endif /* _Amsterdam_Utrecht_Balises_Inte */
/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_Balises_Integ.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

