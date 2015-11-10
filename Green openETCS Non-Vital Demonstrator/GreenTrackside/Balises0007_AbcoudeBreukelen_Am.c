/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0007_AbcoudeBreukelen_Am.h"

/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen */
void Balises0007_AbcoudeBreukelen_Am(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen */
  static CompressedBaliseMessage_TM tmp1;
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen */
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_Inf(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_389_AmsterdamUtrec(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG389_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_390_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG390_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_391_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG391_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_392_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG392_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_393_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG393_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_394_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG394_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_395_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG395_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_396_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG396_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0007_AbcoudeBreukelen_Am.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

