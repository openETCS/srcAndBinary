/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackClose_InfraLib.h"

/* InfraLib::TrackClose */
void TrackClose_InfraLib(
  /* InfraLib::TrackClose::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackClose::BaliseMessage */ CompressedBaliseMessage_TM *BaliseMessage)
{
  kcg_copy_CompressedBaliseMessag(BaliseMessage, &(*SectionData_in).BG_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackClose_InfraLib.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

