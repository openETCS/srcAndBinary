/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__CountIncrementalD.h"

/* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers */
N_ITER PosRepParams__CountIncrementalD(
  /* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers::inPositionReportParameters */ PosRepParams_T *inPositionReportParameters)
{
  /* RBC_Config_Pkg::PosRepParams__CountIncrementalDistancesAndQualifiers::outNumberOfIncrementalDistancesAndQualifiers */
  static N_ITER outNumberOfIncrementalDistances;
  
  outNumberOfIncrementalDistances =
    (*inPositionReportParameters).m_NumberOfIncrementalDistancesA;
  return outNumberOfIncrementalDistances;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__CountIncrementalD.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

