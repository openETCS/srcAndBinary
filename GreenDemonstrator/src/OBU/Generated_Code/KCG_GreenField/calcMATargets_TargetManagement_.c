/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcMATargets_TargetManagement_.h"

/* TargetManagement_pkg::internalOperators::calcMATargets */
void calcMATargets_TargetManagement_(
  /* TargetManagement_pkg::internalOperators::calcMATargets::MA_section */ MA_section_real_T_TargetManagem *MA_section,
  /* TargetManagement_pkg::internalOperators::calcMATargets::EOA_Target */ Target_real_T_TargetManagement_ *EOA_Target,
  /* TargetManagement_pkg::internalOperators::calcMATargets::SvL_LoA_Target */ Target_real_T_TargetManagement_ *SvL_LoA_Target)
{
  /* TargetManagement_pkg::internalOperators::calcMATargets */
  static L_internal_real_Type_SDM_Types_ tmp;
  /* TargetManagement_pkg::internalOperators::calcMATargets::_L62 */
  static kcg_bool _L62;
  
  _L62 = (*MA_section).EOA.TargetSpeed > 0.0;
  /* 5 */ if (_L62) {
    (*SvL_LoA_Target).distance = (*MA_section).EOA.Location;
    (*SvL_LoA_Target).speed = (*MA_section).EOA.TargetSpeed;
    /* 8 */ if ((*MA_section).valid) {
      (*SvL_LoA_Target).targetType = LoA_TargetManagement_types;
    }
    else {
      (*SvL_LoA_Target).targetType = invalid_TargetManagement_types;
    }
    kcg_copy_Target_real_T_TargetMa(
      EOA_Target,
      (Target_real_T_TargetManagement_ *) &emptyTarget_TargetManagement_pk);
  }
  else {
    (*EOA_Target).distance = (*MA_section).EOA.Location;
    (*EOA_Target).speed = (*MA_section).EOA.TargetSpeed;
    (*SvL_LoA_Target).speed = (*MA_section).EOA.TargetSpeed;
    /* 7 */ if ((*MA_section).OL_valid) {
      tmp = (*MA_section).Overlap;
    }
    else /* 6 */ if ((*MA_section).DP_valid) {
      tmp = (*MA_section).DangerPoint;
    }
    else {
      tmp = 0.0;
    }
    /* 9 */ if ((*MA_section).valid) {
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

/* $**************** KCG Version 6.4 (build i21) ****************
** calcMATargets_TargetManagement_.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

