/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0011_Maarssen_AmsterdamU.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen */
void Balises0011_Maarssen_AmsterdamU(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen */
  static CompressedBaliseMessage_TM tmp1;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen */
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_Inf(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_424_AmsterdamUtrec(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG424_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_425_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG425_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_426_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG426_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_427_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG427_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_428_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG428_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_429_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG429_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_477_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG477_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_430_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG430_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_431_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG431_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_432_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG432_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_433_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG433_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_434_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG434_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_435_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG435_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_436_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG436_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_437_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG437_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0011_Maarssen_AmsterdamU.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

