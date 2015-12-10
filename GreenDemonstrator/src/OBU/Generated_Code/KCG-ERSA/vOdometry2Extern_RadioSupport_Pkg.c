/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "vOdometry2Extern_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::vOdometry2Extern */
V_TRAIN vOdometry2Extern_RadioSupport_Pkg(
  /* RadioSupport_Pkg::vOdometry2Extern::v_odometry */ V_internal_Type_Obu_BasicTypes_Pkg v_odometry)
{
  /* RadioSupport_Pkg::vOdometry2Extern::v_SRS */ V_TRAIN v_SRS;
  
  v_SRS = v_odometry * 36 / 1000;
  return v_SRS;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** vOdometry2Extern_RadioSupport_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

