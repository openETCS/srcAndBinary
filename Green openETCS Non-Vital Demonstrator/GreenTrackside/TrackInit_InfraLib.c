/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackInit_InfraLib.h"

/* InfraLib::TrackInit */
void TrackInit_InfraLib(
  /* InfraLib::TrackInit::TrainPosIn */ kcg_real TrainPosIn,
  /* InfraLib::TrackInit::InitialOffset */ kcg_int InitialOffset,
  /* InfraLib::TrackInit::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  (*SectionData_out).TrainPosRaw.TrainPos_in = TrainPosIn;
  (*SectionData_out).TrainPosRaw.OffsetTotal = InitialOffset;
  (*SectionData_out).TrainPosRaw.TrainPosCalibrated = 0.0;
  kcg_copy_CompressedBaliseMessag(
    &(*SectionData_out).BG_Message,
    (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackInit_InfraLib.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

