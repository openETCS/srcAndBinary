/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePosition_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePosition */
void brakePosition_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakePosition::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakePosition::T_brake_cm */ t_Brake_t_SDMModelPkg *T_brake_cm)
{
  /* SDMConversionModelPkg::brakePosition */
  static coeff_BrakeBasic_t_SDMConversionModelPkg tmp1;
  /* SDMConversionModelPkg::brakePosition */
  static coeff_BrakeBasic_t_SDMConversionModelPkg tmp;
  /* SDMConversionModelPkg::brakePosition::_L17 */
  static kcg_real _L17;
  /* SDMConversionModelPkg::brakePosition::_L27 */
  static kcg_bool _L27;
  /* SDMConversionModelPkg::brakePosition::_L36 */
  static T_internal_real_Type_SDM_Types_Pkg _L36;
  /* SDMConversionModelPkg::brakePosition::_L51 */
  static L_internal_real_Type_SDM_Types_Pkg _L51;
  
  _L51 = /* 1 */ TransformL_intToL_real_SDM_Types_Pkg((*trainData).trainLength);
  _L27 = _L51 <= cBrakePositionLengthShort_SDMConversionModelPkg;
  /* 2 */ if (_L27) {
    switch ((*trainData).trainCategory) {
      case NC_TRAIN_Freight_train_braked_in_G_position :
        kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
          &tmp1,
          (coeff_BrakeBasic_t_SDMConversionModelPkg *)
            &cBrakePositionGECoeff_SDMConversionModelPkg);
        break;
      
      default :
        kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
          &tmp1,
          (coeff_BrakeBasic_t_SDMConversionModelPkg *)
            &cBrakePositionPECoeff_SDMConversionModelPkg);
    }
    switch ((*trainData).trainCategory) {
      case NC_TRAIN_Passenger_train :
        kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
          &tmp,
          (coeff_BrakeBasic_t_SDMConversionModelPkg *)
            &cBrakePositionPassengerSCoeff_SDMConversionModelPkg);
        break;
      
      default :
        kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
          &tmp,
          (coeff_BrakeBasic_t_SDMConversionModelPkg *)
            &cBrakePositionFreightShortSCoeff_SDMConversionModelPkg);
    }
  }
  else {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
      &tmp1,
      (coeff_BrakeBasic_t_SDMConversionModelPkg *)
        &cBrakePositionFreightLongECoeff_SDMConversionModelPkg);
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
      &tmp,
      (coeff_BrakeBasic_t_SDMConversionModelPkg *)
        &cBrakePositionFreightLongSCoeff_SDMConversionModelPkg);
  }
  _L36 = /* 1 */ T_BrakeBasic_SDMConversionModelPkg(&tmp1, _L51);
  (*T_brake_cm).emergency[0] = _L36;
  switch ((*trainData).trainCategory) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      _L17 = cBrakePositionGCt_SDMConversionModelPkg + 1.0;
      break;
    
    default :
      _L17 = cBrakePositionPCt_SDMConversionModelPkg + 1.0;
  }
  (*T_brake_cm).emergency[1] = _L36 * _L17;
  _L36 = /* 3 */ T_BrakeBasic_SDMConversionModelPkg(&tmp, _L51);
  (*T_brake_cm).service[0] = _L36;
  (*T_brake_cm).service[1] = _L36 * _L17;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakePosition_SDMConversionModelPkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

