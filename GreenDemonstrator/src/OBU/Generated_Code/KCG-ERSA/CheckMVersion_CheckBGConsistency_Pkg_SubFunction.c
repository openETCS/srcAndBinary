/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMVersion_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckMVersion */
void CheckMVersion_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::trackVersion */ M_VERSION trackVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::trainVersion */ M_VERSION trainVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::isSameVersion */ kcg_bool *isSameVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::compatibleVersion */ kcg_bool *compatibleVersion)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L4 */ kcg_int _L4;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L3 */ kcg_int _L3;
  
  _L3 = /* 1 */ CAST_M_VERSION_to_int_TM_conversions(trainVersion);
  _L4 = /* 2 */ CAST_M_VERSION_to_int_TM_conversions(trackVersion);
  *compatibleVersion = _L3 >= _L4;
  *isSameVersion = _L3 == _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckMVersion_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

