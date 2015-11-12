/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_doLocInacc_Toolbox_Function.h"

/* Toolbox::Functions::ODO_doLocInacc */
void ODO_doLocInacc_Toolbox_Function(
  /* Toolbox::Functions::ODO_doLocInacc::d_min */ L_internal_Type_Obu_BasicTypes_ d_min,
  /* Toolbox::Functions::ODO_doLocInacc::d_Max */ L_internal_Type_Obu_BasicTypes_ d_Max,
  /* Toolbox::Functions::ODO_doLocInacc::locInAcc */ LocWithInAcc_T_Obu_BasicTypes_P *locInAcc)
{
  (*locInAcc).nominal = 0;
  (*locInAcc).d_min = d_min;
  (*locInAcc).d_max = d_Max;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_doLocInacc_Toolbox_Function.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

