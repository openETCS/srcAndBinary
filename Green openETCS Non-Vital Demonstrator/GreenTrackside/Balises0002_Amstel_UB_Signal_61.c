/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0002_Amstel_UB_Signal_61.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617 */
void Balises0002_Amstel_UB_Signal_61(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  kcg_copy_TrackSectionData_T_Inf(SectionData_out, SectionData_in);
  /* 2 */
  Balise_Group_353_AmsterdamUtrec(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG353_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0002_Amstel_UB_Signal_61.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

