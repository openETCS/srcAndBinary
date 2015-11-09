/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcMATargets_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::calcMATargets */
void calcMATargets_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::calcMATargets::MA_section */MA_section_real_T_TargetManagement_types *MA_section,
  /* TargetManagement_pkg::internalOperators::calcMATargets::EOA_Target */Target_real_T_TargetManagement_types *EOA_Target,
  /* TargetManagement_pkg::internalOperators::calcMATargets::SvL_LoA_Target */Target_real_T_TargetManagement_types *SvL_LoA_Target)
{
  static L_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L62 */
  static kcg_bool _L62;
  
  _L62 = (*MA_section).EOA.TargetSpeed > 0.0;
  if (_L62) {
    (*SvL_LoA_Target).distance = (*MA_section).EOA.Location;
    (*SvL_LoA_Target).speed = (*MA_section).EOA.TargetSpeed;
    if ((*MA_section).valid) {
      (*SvL_LoA_Target).targetType = LoA_TargetManagement_types;
    }
    else {
      (*SvL_LoA_Target).targetType = invalid_TargetManagement_types;
    }
    kcg_copy_Target_real_T_TargetManagement_types(
      EOA_Target,
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
  }
  else {
    (*EOA_Target).distance = (*MA_section).EOA.Location;
    (*EOA_Target).speed = (*MA_section).EOA.TargetSpeed;
    (*SvL_LoA_Target).speed = (*MA_section).EOA.TargetSpeed;
    if ((*MA_section).OL_valid) {
      tmp = (*MA_section).Overlap;
    }
    else if ((*MA_section).DP_valid) {
      tmp = (*MA_section).DangerPoint;
    }
    else {
      tmp = 0.0;
    }
    if ((*MA_section).valid) {
      (*SvL_LoA_Target).targetType = SvL_TargetManagement_types;
      (*EOA_Target).targetType = EoA_TargetManagement_types;
    }
    else {
      (*SvL_LoA_Target).targetType = invalid_TargetManagement_types;
      (*EOA_Target).targetType = invalid_TargetManagement_types;
    }
    (*SvL_LoA_Target).distance = (*MA_section).EOA.Location + tmp;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calcMATargets_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

