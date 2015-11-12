/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePosition_SDMConversionMode.h"

/* SDMConversionModelPkg::brakePosition */
void brakePosition_SDMConversionMode(
  /* SDMConversionModelPkg::brakePosition::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakePosition::T_brake_cm */ t_Brake_t_SDMModelPkg *T_brake_cm)
{
  /* SDMConversionModelPkg::brakePosition */
  static coeff_BrakeBasic_t_SDMConversio tmp3;
  /* SDMConversionModelPkg::brakePosition */
  static L_internal_real_Type_SDM_Types_ tmp2;
  /* SDMConversionModelPkg::brakePosition */
  static coeff_BrakeBasic_t_SDMConversio tmp1;
  /* SDMConversionModelPkg::brakePosition */
  static L_internal_real_Type_SDM_Types_ tmp;
  /* SDMConversionModelPkg::brakePosition::_L17 */
  static kcg_real _L17;
  /* SDMConversionModelPkg::brakePosition::_L27 */
  static kcg_bool _L27;
  /* SDMConversionModelPkg::brakePosition::_L36 */
  static T_internal_real_Type_SDM_Types_ _L36;
  /* SDMConversionModelPkg::brakePosition::_L51 */
  static L_internal_real_Type_SDM_Types_ _L51;
  /* SDMConversionModelPkg::brakePosition::_L59 */
  static L_internal_real_Type_SDM_Types_ _L59;
  
  _L51 = /* 1 */ TransformL_intToL_real_SDM_Type((*trainData).trainLength);
  _L27 = _L51 <= cBrakePositionLengthShort_SDMCo;
  /* 2 */ if (cBrakePositionLengthMin_SDMConv >= _L51) {
    _L59 = cBrakePositionLengthMin_SDMConv;
  }
  else {
    _L59 = _L51;
  }
  /* 2 */ if (_L27) {
    switch ((*trainData).trainCategory) {
      case NC_TRAIN_Freight_train_braked_i :
        kcg_copy_coeff_BrakeBasic_t_SDM(
          &tmp3,
          (coeff_BrakeBasic_t_SDMConversio *) &cBrakePositionGECoeff_SDMConver);
        break;
      
      default :
        kcg_copy_coeff_BrakeBasic_t_SDM(
          &tmp3,
          (coeff_BrakeBasic_t_SDMConversio *) &cBrakePositionPECoeff_SDMConver);
    }
    switch ((*trainData).trainCategory) {
      case NC_TRAIN_Passenger_train :
        kcg_copy_coeff_BrakeBasic_t_SDM(
          &tmp1,
          (coeff_BrakeBasic_t_SDMConversio *) &cBrakePositionPassengerSCoeff_S);
        break;
      
      default :
        kcg_copy_coeff_BrakeBasic_t_SDM(
          &tmp1,
          (coeff_BrakeBasic_t_SDMConversio *) &cBrakePositionFreightShortSCoef);
    }
  }
  else {
    kcg_copy_coeff_BrakeBasic_t_SDM(
      &tmp3,
      (coeff_BrakeBasic_t_SDMConversio *) &cBrakePositionFreightLongECoeff);
    kcg_copy_coeff_BrakeBasic_t_SDM(
      &tmp1,
      (coeff_BrakeBasic_t_SDMConversio *) &cBrakePositionFreightLongSCoeff);
  }
  switch ((*trainData).trainCategory) {
    case NC_TRAIN_Freight_train_braked_i :
      tmp2 = _L51;
      _L17 = cBrakePositionGCt_SDMConversion + 1.0;
      tmp = _L59;
      break;
    
    default :
      tmp2 = _L59;
      _L17 = cBrakePositionPCt_SDMConversion + 1.0;
      tmp = _L51;
  }
  _L36 = /* 1 */ T_BrakeBasic_SDMConversionModel(&tmp3, tmp2);
  (*T_brake_cm).emergency[0] = _L36;
  (*T_brake_cm).emergency[1] = _L36 * _L17;
  _L36 = /* 3 */ T_BrakeBasic_SDMConversionModel(&tmp1, tmp);
  (*T_brake_cm).service[0] = _L36;
  (*T_brake_cm).service[1] = _L36 * _L17;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakePosition_SDMConversionMode.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

