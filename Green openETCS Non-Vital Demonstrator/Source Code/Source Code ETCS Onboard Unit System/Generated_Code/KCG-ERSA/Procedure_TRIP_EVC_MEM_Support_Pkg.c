/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_TRIP_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::Procedure_TRIP */
kcg_bool Procedure_TRIP_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::Procedure_TRIP::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* EVC_MEM_Support_Pkg::Procedure_TRIP::inEBFromML */ kcg_bool inEBFromML)
{
  /* EVC_MEM_Support_Pkg::Procedure_TRIP::outEB */ kcg_bool outEB;
  
  outEB = ((*inModeAndLevel).Mode == M_MODE_Trip) | inEBFromML;
  return outEB;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_TRIP_EVC_MEM_Support_Pkg.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

