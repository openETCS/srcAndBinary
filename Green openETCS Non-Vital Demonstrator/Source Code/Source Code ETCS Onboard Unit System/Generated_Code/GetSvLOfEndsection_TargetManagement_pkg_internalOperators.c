/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetSvLOfEndsection_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::GetSvLOfEndsection */
void GetSvLOfEndsection_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::GetSvLOfEndsection::MA_section */MA_section_real_T_TargetManagement_types *MA_section,
  /* TargetManagement_pkg::internalOperators::GetSvLOfEndsection::EOA_Target */Target_real_T_TargetManagement_types *EOA_Target,
  /* TargetManagement_pkg::internalOperators::GetSvLOfEndsection::SvL_Target */Target_real_T_TargetManagement_types *SvL_Target)
{
  (*SvL_Target).targetType = SvL_TargetManagement_types;
  (*SvL_Target).speed = (*MA_section).EOA.TargetSpeed;
  (*EOA_Target).targetType = EoA_TargetManagement_types;
  (*EOA_Target).distance = (*MA_section).EOA.Location;
  (*EOA_Target).speed = (*MA_section).EOA.TargetSpeed;
  if ((*MA_section).OL_valid) {
    (*SvL_Target).distance = (*MA_section).Overlap;
  }
  else if ((*MA_section).DP_valid) {
    (*SvL_Target).distance = (*MA_section).DangerPoint;
  }
  else {
    (*SvL_Target).distance = (*MA_section).EOA.Location;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GetSvLOfEndsection_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

