/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "vIntern2Extern_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::vIntern2Extern */
V_TRAIN vIntern2Extern_RadioSupport_Pkg(
  /* RadioSupport_Pkg::vIntern2Extern::v_intern */ V_internal_Type_Obu_BasicTypes_Pkg v_intern)
{
  /* RadioSupport_Pkg::vIntern2Extern::v_SRS */ V_TRAIN v_SRS;
  
  v_SRS = v_intern * 36 / 200;
  return v_SRS;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** vIntern2Extern_RadioSupport_Pkg.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

