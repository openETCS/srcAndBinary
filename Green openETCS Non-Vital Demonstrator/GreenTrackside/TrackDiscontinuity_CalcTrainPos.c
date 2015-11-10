/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackDiscontinuity_CalcTrainPos.h"

/* InfraLib::TrackDiscontinuity_CalcTrainPos */
kcg_real TrackDiscontinuity_CalcTrainPos(
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::DeltaIn */ kcg_int DeltaIn,
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::StartSection */ kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::SectionDataIn */ TrackSectionData_T_InfraLib *SectionDataIn)
{
  /* InfraLib::TrackDiscontinuity_CalcTrainPos */
  static kcg_real tmp;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::TrainPosCalibrated */
  static kcg_real TrainPosCalibrated;
  
  /* 2 */ if (DeltaIn >= 0) {
    tmp = (kcg_real) 1;
  }
  else {
    tmp = (kcg_real) - 1;
  }
  TrainPosCalibrated = ((*SectionDataIn).TrainPosRaw.TrainPos_in - (kcg_real)
        (*SectionDataIn).TrainPosRaw.OffsetTotal) * tmp + (kcg_real)
      StartSection;
  return TrainPosCalibrated;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackDiscontinuity_CalcTrainPos.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

