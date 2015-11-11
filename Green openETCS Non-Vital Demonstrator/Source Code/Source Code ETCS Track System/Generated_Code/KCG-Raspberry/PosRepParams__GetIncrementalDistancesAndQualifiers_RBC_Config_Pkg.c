/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers */
void PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers::inPositionReportParameters */PosRepParams_T *inPositionReportParameters,
  /* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers::outIncrementalDistancesAndQualifiers */array__47228 *outIncrementalDistancesAndQualifiers)
{
  kcg_copy_array__47228(
    outIncrementalDistancesAndQualifiers,
    &(*inPositionReportParameters).m_IncrementalDistancesAndQualifiers);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

