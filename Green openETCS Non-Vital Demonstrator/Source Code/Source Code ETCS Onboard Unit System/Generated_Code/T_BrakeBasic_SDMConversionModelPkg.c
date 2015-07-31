/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_BrakeBasic_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::T_BrakeBasic */
T_internal_real_Type_SDM_Types_Pkg T_BrakeBasic_SDMConversionModelPkg(
  /* SDMConversionModelPkg::T_BrakeBasic::coeff */coeff_BrakeBasic_t_SDMConversionModelPkg *coeff,
  /* SDMConversionModelPkg::T_BrakeBasic::trainLength */L_internal_real_Type_SDM_Types_Pkg trainLength)
{
  static L_internal_real_Type_SDM_Types_Pkg tmp;
  /* SDMConversionModelPkg::T_BrakeBasic::_L13 */
  static kcg_real _L13;
  /* SDMConversionModelPkg::T_BrakeBasic::T_BB */
  static T_internal_real_Type_SDM_Types_Pkg T_BB;
  
  if (trainLength < cBrakePositionLengthMin_SDMConversionModelPkg) {
    tmp = cBrakePositionLengthMin_SDMConversionModelPkg;
  }
  else {
    tmp = trainLength;
  }
  _L13 = tmp / 100.0;
  T_BB = (*coeff)[0] + _L13 * (*coeff)[1] + _L13 * _L13 * (*coeff)[2];
  return T_BB;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_BrakeBasic_SDMConversionModelPkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

