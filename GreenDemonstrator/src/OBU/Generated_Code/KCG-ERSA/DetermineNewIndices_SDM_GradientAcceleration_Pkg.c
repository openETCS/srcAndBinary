/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineNewIndices_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::DetermineNewIndices */
void DetermineNewIndices_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::IncFrontIdx */ kcg_bool IncFrontIdx,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::frontIndex */ kcg_int *frontIndex,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::rearIndex */ kcg_int *rearIndex)
{
  /* 3 */ if (IncFrontIdx) {
    *rearIndex = (*Accu).rearIndex;
    *frontIndex = (*Accu).frontIndex + 1;
  }
  else {
    *rearIndex = 1 + (*Accu).rearIndex;
    *frontIndex = (*Accu).frontIndex;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DetermineNewIndices_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

