/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0010_Breukelen_Maarssen_.h"

/* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen */
void Balises0010_Breukelen_Maarssen_(
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen */
  static CompressedBaliseMessage_TM tmp1;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen */
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_Inf(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_420_AmsterdamUtrec(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG420_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_421_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG421_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_422_AmsterdamUtrec(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG422_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_423_AmsterdamUtrec(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG423_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0010_Breukelen_Maarssen_.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

