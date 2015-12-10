/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDriverOutput_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcDriverOutput */
void CalcDriverOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDriverOutput::sdmType */ SDM_Types_T_SDM_Types_Pkg sdmType,
  /* SDM_Commands_Pkg::CalcDriverOutput::supVisStatus */ SupervisionStatus_T_SDM_Types_Pkg supVisStatus,
  /* SDM_Commands_Pkg::CalcDriverOutput::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcDriverOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_est */ V_odometry_Type_Obu_BasicTypes_Pkg *v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_est */ kcg_bool *valid_v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_permitted */ V_odometry_Type_Obu_BasicTypes_Pkg *v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_permitted */ kcg_bool *valid_v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_release */ V_odometry_Type_Obu_BasicTypes_Pkg *v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_release */ kcg_bool *valid_v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_mrdt */ V_odometry_Type_Obu_BasicTypes_Pkg *v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_mrdt */ kcg_bool *valid_v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_floi */ V_odometry_Type_Obu_BasicTypes_Pkg *v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_floi */ kcg_bool *valid_v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::targetDistance */ L_internal_Type_Obu_BasicTypes_Pkg *targetDistance,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_targetDistance */ kcg_bool *valid_targetDistance)
{
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L3 */ kcg_bool _L3_WhenBlock1_TSM;
  
  /* ck_sdmType */ switch (sdmType) {
    case No_SDM_Type_SDM_Types_Pkg :
      *valid_v_mrdt = kcg_false;
      *valid_v_release = kcg_false;
      *valid_v_permitted = kcg_false;
      *valid_v_est = kcg_false;
      *v_mrdt = 0;
      break;
    case RSM_SDM_Types_Pkg :
      *valid_v_release = (Indication_Supervision_SDM_Types_Pkg ==
          supVisStatus) | (supVisStatus ==
          Intervention_Supervision_SDM_Types_Pkg);
      *valid_v_mrdt = *valid_v_release;
      *valid_v_permitted = kcg_false;
      *valid_v_est = *valid_v_release;
      *v_mrdt = (*speeds).v_p_mrdt;
      break;
    case TSM_SDM_Types_Pkg :
      _L3_WhenBlock1_TSM = Undefined_Supervision_SDM_Types_Pkg != supVisStatus;
      *valid_v_mrdt = _L3_WhenBlock1_TSM;
      *valid_v_est = _L3_WhenBlock1_TSM;
      *valid_v_permitted = _L3_WhenBlock1_TSM;
      *valid_v_release = _L3_WhenBlock1_TSM & ((SvL_TargetManagement_types ==
            (*mrdt).targetType) | ((*mrdt).targetType ==
            EoA_TargetManagement_types));
      *v_mrdt = (*speeds).V_target;
      break;
    case CSM_SDM_Types_Pkg :
      *valid_v_mrdt = kcg_false;
      *valid_v_release = kcg_false;
      *valid_v_permitted = kcg_true;
      *valid_v_est = kcg_true;
      *v_mrdt = 0;
      break;
    
  }
  *valid_targetDistance = *valid_v_mrdt;
  *valid_v_floi = (Overspeed_Supervision_SDM_Types_Pkg == supVisStatus) |
    (supVisStatus == Warning_Supervision_SDM_Types_Pkg) | (supVisStatus ==
      Intervention_Supervision_SDM_Types_Pkg);
  *v_est = (*speeds).V_est;
  *v_release = (*speeds).V_release;
  *v_permitted = (*speeds).v_p_dmi;
  *v_floi = (*speeds).v_FLOI_dmi;
  *targetDistance = (*locations).d_target;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcDriverOutput_SDM_Commands_Pkg.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

