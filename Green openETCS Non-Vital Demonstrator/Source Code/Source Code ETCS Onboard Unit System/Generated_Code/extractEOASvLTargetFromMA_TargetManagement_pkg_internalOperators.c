/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractEOASvLTargetFromMA_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA */
void extractEOASvLTargetFromMA_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::MA */MA_section_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::EOA_Target */Target_real_T_TargetManagement_types *EOA_Target,
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::SvL_Target */Target_real_T_TargetManagement_types *SvL_Target)
{
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::_L25 */
  static Target_real_T_TargetManagement_types _L25;
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::_L40 */
  static Target_real_T_TargetManagement_types _L40;
  
  /* 1 */
  GetSvLOfEndsection_TargetManagement_pkg_internalOperators(MA, &_L25, &_L40);
  if ((*MA).valid) {
    kcg_copy_Target_real_T_TargetManagement_types(SvL_Target, &_L40);
    kcg_copy_Target_real_T_TargetManagement_types(EOA_Target, &_L25);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(
      SvL_Target,
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
    kcg_copy_Target_real_T_TargetManagement_types(
      EOA_Target,
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** extractEOASvLTargetFromMA_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

