/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentToABrake_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePercentToABrake */
void brakePercentToABrake_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakePercentToABrake::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakePercentToABrake::aBrake */ a_Brake_t_SDMConversionModelPkg *aBrake)
{
  /* SDMConversionModelPkg::brakePercentToABrake::_L1 */
  static av_Map_t_SDMConversionModelPkg _L1;
  /* SDMConversionModelPkg::brakePercentToABrake::_L5 */
  static kcg_bool _L5;
  
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
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

