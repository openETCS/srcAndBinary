/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0004_BijlmerAbcoude_Amst.h"

/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude */
void Balises0004_BijlmerAbcoude_Amst(
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude */
  static CompressedBaliseMessage_TM tmp1;
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude */
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_Inf(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_371_AmsterdamUtrec(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG371_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_372_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG372_Balises426,
    &tmp1);
  /* 2 */
  Balise_Group_373_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG373_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0004_BijlmerAbcoude_Amst.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

