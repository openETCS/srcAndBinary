/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RbcTransitionEffective_InformationFilter_Pkg.h"

void RbcTransitionEffective_reset_InformationFilter_Pkg(
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
}

/* InformationFilter_Pkg::RbcTransitionEffective */
void RbcTransitionEffective_InformationFilter_Pkg(
  /* InformationFilter_Pkg::RbcTransitionEffective::inSupervisingDevice */kcg_int inSupervisingDevice,
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC)
{
  static kcg_int tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = 0;
  }
  else {
    tmp = outC->rem_inSupervisingDevice;
  }
  outC->outRbcTransition = !(inSupervisingDevice == tmp);
  outC->rem_inSupervisingDevice = inSupervisingDevice;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RbcTransitionEffective_InformationFilter_Pkg.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

