/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__GetIncrementalDis.h"

/* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers */
void PosRepParams__GetIncrementalDis(
  /* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers::inPositionReportParameters */ PosRepParams_T *inPositionReportParameters,
  /* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers::outIncrementalDistancesAndQualifiers */ array_44858 *outIncrementalDistancesAndQuali)
{
  kcg_copy_array_44858(
    outIncrementalDistancesAndQuali,
    &(*inPositionReportParameters).m_IncrementalDistancesAndQualif);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__GetIncrementalDis.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

