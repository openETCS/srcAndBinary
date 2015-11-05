/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */
#ifndef _addGradient_SDMModelPkg_H_
#define _addGradient_SDMModelPkg_H_

#include "kcg_types.h"
#include "collectGradientLocations_SDMModelPkg.h"
#include "iterateASafeData_SDMModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDMModelPkg::addGradient */
extern void addGradient_SDMModelPkg(
  /* SDMModelPkg::addGradient::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::addGradient::aGradient */ A_gradient_t_SDM_GradientAcceleration_types *aGradient,
  /* SDMModelPkg::addGradient::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe);

#endif /* _addGradient_SDMModelPkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** addGradient_SDMModelPkg.h
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */

