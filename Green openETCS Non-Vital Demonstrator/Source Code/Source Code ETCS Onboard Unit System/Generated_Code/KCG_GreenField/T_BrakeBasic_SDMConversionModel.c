/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_BrakeBasic_SDMConversionModel.h"

/* SDMConversionModelPkg::T_BrakeBasic */
T_internal_real_Type_SDM_Types_ T_BrakeBasic_SDMConversionModel(
  /* SDMConversionModelPkg::T_BrakeBasic::coeff */ coeff_BrakeBasic_t_SDMConversio *coeff,
  /* SDMConversionModelPkg::T_BrakeBasic::trainLength */ L_internal_real_Type_SDM_Types_ trainLength)
{
  /* SDMConversionModelPkg::T_BrakeBasic::_L13 */
  static kcg_real _L13;
  /* SDMConversionModelPkg::T_BrakeBasic::T_BB */
  static T_internal_real_Type_SDM_Types_ T_BB;
  
  _L13 = trainLength / 100.0;
  T_BB = (*coeff)[0] + _L13 * (*coeff)[1] + _L13 * _L13 * (*coeff)[2];
  return T_BB;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_BrakeBasic_SDMConversionModel.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

