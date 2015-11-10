/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0003_Bijlmer_AmsterdamUt.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer */
void Balises0003_Bijlmer_AmsterdamUt(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer */
  static CompressedBaliseMessage_TM tmp1;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer */
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_Inf(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_354_AmsterdamUtrec(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG354_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_351_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG351_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_355_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG355_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_356_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG356_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_357_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG357_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_358_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG358_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_359_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG359_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_360_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG360_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_361_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG361_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_362_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG362_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_363_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG363_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_364_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG364_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_365_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG365_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_366_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG366_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_367_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG367_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_368_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG368_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_369_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG369_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_341_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG341_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_370_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG370_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0003_Bijlmer_AmsterdamUt.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

