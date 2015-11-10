/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0008_BreukelenKeerspoor_.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor */
void Balises0008_BreukelenKeerspoor_(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor */
  static CompressedBaliseMessage_TM tmp1;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor */
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_Inf(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_397_AmsterdamUtrec(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG397_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_398_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG398_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_399_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG399_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_400_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG400_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_401_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG401_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_402_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG402_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_403_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG403_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_404_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG404_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_405_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG405_Balises426,
    &tmp);
  /* 2 */
  Balise_Group_406_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG406_Balises426,
    &tmp1);
  /* 2 */
  Balise_Group_407_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG407_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_408_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG408_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_409_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG409_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0008_BreukelenKeerspoor_.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

