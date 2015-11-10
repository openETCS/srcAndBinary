/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0009_Breukelen_Amsterdam.h"

/* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen */
void Balises0009_Breukelen_Amsterdam(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen */
  static CompressedBaliseMessage_TM tmp1;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen */
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_Inf(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_410_AmsterdamUtrec(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG410_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_476_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG476_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_411_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG411_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_412_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG412_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_413_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG413_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_414_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG414_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_415_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG415_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_416_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG416_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_417_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG417_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_418_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG418_Balises426,
    &tmp1);
  /* 2 */
  Balise_Group_419_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG419_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0009_Breukelen_Amsterdam.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

