/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0006_Abcoude_AmsterdamUt.h"

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude */
void Balises0006_Abcoude_AmsterdamUt(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude */
  static CompressedBaliseMessage_TM tmp1;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude */
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_Inf(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_378_AmsterdamUtrec(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG378_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_379_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG379_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_380_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG380_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_381_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG381_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_382_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG382_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_383_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG383_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_384_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG384_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_385_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG385_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_386_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG386_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_387_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG387_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_388_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG388_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0006_Abcoude_AmsterdamUt.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

