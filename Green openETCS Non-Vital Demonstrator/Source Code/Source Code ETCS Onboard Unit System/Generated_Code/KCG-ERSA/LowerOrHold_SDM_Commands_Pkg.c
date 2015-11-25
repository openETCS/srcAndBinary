/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LowerOrHold_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void LowerOrHold_init_SDM_Commands_Pkg(outC_LowerOrHold_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_mrdt.targetType = EoA_TargetManagement_types;
  outC->rem_mrdt.distance = 0;
  outC->rem_mrdt.speed = 0;
  outC->rem_mrdt.valid = kcg_true;
  outC->vo = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LowerOrHold_reset_SDM_Commands_Pkg(outC_LowerOrHold_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::LowerOrHold */
void LowerOrHold_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::LowerOrHold::vi */ V_odometry_Type_Obu_BasicTypes_Pkg vi,
  /* SDM_Commands_Pkg::LowerOrHold::mrdt */ Target_T_TargetManagement_types *mrdt,
  outC_LowerOrHold_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::LowerOrHold::_L15 */ Target_T_TargetManagement_types _L15;
  /* SDM_Commands_Pkg::LowerOrHold::_L30 */ V_odometry_Type_Obu_BasicTypes_Pkg _L30;
  
  /* last_init_ck_mrdt */ if (outC->init) {
    outC->init = kcg_false;
    _L15.targetType = EoA_TargetManagement_types;
    _L15.distance = 0;
    _L15.speed = 0;
    _L15.valid = kcg_false;
    _L30 = - 1;
  }
  else {
    _L30 = outC->vo;
    kcg_copy_Target_T_TargetManagement_types(&_L15, &outC->rem_mrdt);
  }
  /* 1 */ if (((*mrdt).targetType == _L15.targetType) & ((*mrdt).distance ==
      _L15.distance) & ((*mrdt).speed == _L15.speed) & ((*mrdt).valid ==
      _L15.valid) & (_L30 > 0) & (_L30 < vi)) {
    outC->vo = _L30;
  }
  else {
    outC->vo = vi;
  }
  kcg_copy_Target_T_TargetManagement_types(&outC->rem_mrdt, mrdt);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LowerOrHold_SDM_Commands_Pkg.c
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

