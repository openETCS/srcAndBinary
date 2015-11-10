/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _TrackDiscontinuity_InfraLib_H_
#define _TrackDiscontinuity_InfraLib_H_

#include "kcg_types.h"
#include "TrackDiscontinuity_CalcTrainPos.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InfraLib::TrackDiscontinuity */
extern void TrackDiscontinuity_InfraLib(
  /* InfraLib::TrackDiscontinuity::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackDiscontinuity::StartSection */ kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity::EndSection */ kcg_int EndSection,
  /* InfraLib::TrackDiscontinuity::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out);

#endif /* _TrackDiscontinuity_InfraLib_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TrackDiscontinuity_InfraLib.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

