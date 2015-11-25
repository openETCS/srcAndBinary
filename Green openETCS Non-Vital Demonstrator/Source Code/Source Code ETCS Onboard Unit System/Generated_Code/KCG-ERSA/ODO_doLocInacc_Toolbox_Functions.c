/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_doLocInacc_Toolbox_Functions.h"

/* Toolbox::Functions::ODO_doLocInacc */
void ODO_doLocInacc_Toolbox_Functions(
  /* Toolbox::Functions::ODO_doLocInacc::d_min */ L_internal_Type_Obu_BasicTypes_Pkg d_min,
  /* Toolbox::Functions::ODO_doLocInacc::d_Max */ L_internal_Type_Obu_BasicTypes_Pkg d_Max,
  /* Toolbox::Functions::ODO_doLocInacc::locInAcc */ LocWithInAcc_T_Obu_BasicTypes_Pkg *locInAcc)
{
  (*locInAcc).nominal = 0;
  (*locInAcc).d_min = d_min;
  (*locInAcc).d_max = d_Max;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_doLocInacc_Toolbox_Functions.c
** Generation date: 2015-11-25T14:46:15
*************************************************************$ */

