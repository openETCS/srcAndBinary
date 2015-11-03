/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentToABrake_SDMConvers.h"

/* SDMConversionModelPkg::brakePercentToABrake */
void brakePercentToABrake_SDMConvers(
  /* SDMConversionModelPkg::brakePercentToABrake::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakePercentToABrake::aBrake */ a_Brake_t_SDMConversionModelPkg *aBrake)
{
  /* SDMConversionModelPkg::brakePercentToABrake::_L1 */
  static av_Map_t_SDMConversionModelPkg _L1;
  /* SDMConversionModelPkg::brakePercentToABrake::_L5 */
  static kcg_bool _L5;
  
  /* 1 */ brakePercentLookUp_SDMConversio((*trainData).brakePerctage, &_L1);
  kcg_copy_av_Map_t_SDMConversion(&(*aBrake).emergency, &_L1);
  _L5 = (*trainData).brakePerctage > cBrakePercentServiceMax_SDMConv;
  /* ck__L5 */ if (_L5) {
    /* 2 */
    brakePercentLookUp_SDMConversio(
      cBrakePercentServiceMax_SDMConv,
      &(*aBrake).service);
  }
  else {
    kcg_copy_av_Map_t_SDMConversion(&(*aBrake).service, &_L1);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakePercentToABrake_SDMConvers.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

