/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers */
void PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers::inPositionReportParameters */PosRepParams_T *inPositionReportParameters,
  /* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers::outIncrementalDistancesAndQualifiers */array__128290 *outIncrementalDistancesAndQualifiers)
{
  kcg_copy_array__128290(
    outIncrementalDistancesAndQualifiers,
    &(*inPositionReportParameters).m_IncrementalDistancesAndQualifiers);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg.c
** Generation date: 2015-11-23T09:24:24
*************************************************************$ */

