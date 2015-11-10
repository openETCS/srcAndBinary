/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_balises1.h"

/* Amsterdam_Utrecht_Lijn1_balises1 */
void Amsterdam_Utrecht_Lijn1_balises1(
  /* Amsterdam_Utrecht_Lijn1_balises1::TrainPosSim_in */kcg_real TrainPosSim_in,
  /* Amsterdam_Utrecht_Lijn1_balises1::BaliseMessage */CompressedBaliseMessage_TM *BaliseMessage)
{
  TrackSectionData_T_InfraLib tmp1;
  TrackSectionData_T_InfraLib tmp;
  
  /* 1 */ TrackInit_InfraLib(TrainPosSim_in, 0, &tmp1);
  /* 1 */ TrackDiscontinuity_InfraLib(&tmp1, 104775, 105650, &tmp);
  /* 1 */
  Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &tmp,
    &tmp1);
  /* 1 */ TrackClose_InfraLib(&tmp1, BaliseMessage);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Lijn1_balises1.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

