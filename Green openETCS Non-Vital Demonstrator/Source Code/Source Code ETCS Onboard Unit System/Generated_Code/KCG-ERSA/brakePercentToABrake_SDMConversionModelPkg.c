/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentToABrake_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePercentToABrake */
void brakePercentToABrake_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakePercentToABrake::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakePercentToABrake::aBrake */ a_Brake_t_SDMConversionModelPkg *aBrake)
{
  /* SDMConversionModelPkg::brakePercentToABrake::_L1 */ av_Map_t_SDMConversionModelPkg _L1;
  /* SDMConversionModelPkg::brakePercentToABrake::_L5 */ kcg_bool _L5;
  
  /* 1 */
  brakePercentLookUp_SDMConversionModelPkg((*trainData).brakePerctage, &_L1);
  kcg_copy_av_Map_t_SDMConversionModelPkg(&(*aBrake).emergency, &_L1);
  _L5 = (*trainData).brakePerctage >
    cBrakePercentServiceMax_SDMConversionModelPkg;
  /* ck__L5 */ if (_L5) {
    /* 2 */
    brakePercentLookUp_SDMConversionModelPkg(
      cBrakePercentServiceMax_SDMConversionModelPkg,
      &(*aBrake).service);
  }
  else {
    kcg_copy_av_Map_t_SDMConversionModelPkg(&(*aBrake).service, &_L1);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakePercentToABrake_SDMConversionModelPkg.c
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

