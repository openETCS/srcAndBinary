/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_balises.h"

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises */
void Amsterdam_Utrecht_Lijn1_balises(
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::TrainPosSim_in */ kcg_real TrainPosSim_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::BaliseMessage */ CompressedBaliseMessage_TM *BaliseMessage)
{
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises */
  static TrackSectionData_T_InfraLib tmp1;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises */
  static TrackSectionData_T_InfraLib tmp;
  
  /* 1 */ TrackInit_InfraLib(TrainPosSim_in, 0, &tmp);
  /* 1 */ TrackDiscontinuity_InfraLib(&tmp, 104775, 105650, &tmp1);
  /* 1 */ Balises0001_Amstel_UB_Signal_61(&tmp1, &tmp);
  /* 2 */ TrackDiscontinuity_InfraLib(&tmp, 1659 - 400, 32962, &tmp1);
  /* 1 */ Balises0002_Amstel_UB_Signal_61(&tmp1, &tmp);
  /* 1 */ Balises0003_Bijlmer_AmsterdamUt(&tmp, &tmp1);
  /* 1 */ Balises0004_BijlmerAbcoude_Amst(&tmp1, &tmp);
  /* 1 */ Balises0005_Abcoude_AmsterdamUt(&tmp, &tmp1);
  /* 1 */ Balises0006_Abcoude_AmsterdamUt(&tmp1, &tmp);
  /* 1 */ Balises0007_AbcoudeBreukelen_Am(&tmp, &tmp1);
  /* 1 */ Balises0008_BreukelenKeerspoor_(&tmp1, &tmp);
  /* 1 */ Balises0009_Breukelen_Amsterdam(&tmp, &tmp1);
  /* 1 */ Balises0010_Breukelen_Maarssen_(&tmp1, &tmp);
  /* 1 */ Balises0011_Maarssen_AmsterdamU(&tmp, &tmp1);
  /* 1 */ Balises0012_MaarssenUtrechtCS_A(&tmp1, &tmp);
  /* 1 */ TrackClose_InfraLib(&tmp, BaliseMessage);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_Lijn1_balises.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

