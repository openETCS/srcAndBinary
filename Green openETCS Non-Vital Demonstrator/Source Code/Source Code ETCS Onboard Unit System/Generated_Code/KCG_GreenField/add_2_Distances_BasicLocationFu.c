/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_2_Distances_BasicLocationFu.h"

/* BasicLocationFunctions_Pkg::add_2_Distances */
void add_2_Distances_BasicLocationFu(
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_2 */ LocWithInAcc_T_Obu_BasicTypes_P *dist_2,
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_1 */ LocWithInAcc_T_Obu_BasicTypes_P *dist_1,
  /* BasicLocationFunctions_Pkg::add_2_Distances::distance */ LocWithInAcc_T_Obu_BasicTypes_P *distance)
{
  (*distance).nominal = (*dist_2).nominal + (*dist_1).nominal;
  (*distance).d_min = (*dist_2).d_min + (*dist_1).d_min;
  (*distance).d_max = (*dist_2).d_max + (*dist_1).d_max;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** add_2_Distances_BasicLocationFu.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

