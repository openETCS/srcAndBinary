/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0005_Abcoude_AmsterdamUt.h"

/* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude */
void Balises0005_Abcoude_AmsterdamUt(
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude */
  static CompressedBaliseMessage_TM tmp1;
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude */
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_Inf(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_374_AmsterdamUtrec(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG374_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_375_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG375_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_376_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG376_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_377_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG377_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0005_Abcoude_AmsterdamUt.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

