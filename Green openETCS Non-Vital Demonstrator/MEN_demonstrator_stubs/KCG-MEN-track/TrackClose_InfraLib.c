/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackClose_InfraLib.h"

/* InfraLib::TrackClose */
void TrackClose_InfraLib(
  /* InfraLib::TrackClose::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackClose::BaliseMessage */CompressedBaliseMessage_TM *BaliseMessage)
{
  kcg_copy_CompressedBaliseMessage_TM(
    BaliseMessage,
    &(*SectionData_in).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackClose_InfraLib.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

