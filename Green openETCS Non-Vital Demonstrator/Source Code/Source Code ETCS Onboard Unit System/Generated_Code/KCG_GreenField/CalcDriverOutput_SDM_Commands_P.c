/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDriverOutput_SDM_Commands_P.h"

/* SDM_Commands_Pkg::CalcDriverOutput */
void CalcDriverOutput_SDM_Commands_P(
  /* SDM_Commands_Pkg::CalcDriverOutput::sdmType */ SDM_Types_T_SDM_Types_Pkg sdmType,
  /* SDM_Commands_Pkg::CalcDriverOutput::supVisStatus */ SupervisionStatus_T_SDM_Types_P supVisStatus,
  /* SDM_Commands_Pkg::CalcDriverOutput::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcDriverOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_est */ V_odometry_Type_Obu_BasicTypes_ *v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_est */ kcg_bool *valid_v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_permitted */ V_odometry_Type_Obu_BasicTypes_ *v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_permitted */ kcg_bool *valid_v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_release */ V_odometry_Type_Obu_BasicTypes_ *v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_release */ kcg_bool *valid_v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_mrdt */ V_odometry_Type_Obu_BasicTypes_ *v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_mrdt */ kcg_bool *valid_v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_floi */ V_odometry_Type_Obu_BasicTypes_ *v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_floi */ kcg_bool *valid_v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::targetDistance */ L_internal_Type_Obu_BasicTypes_ *targetDistance,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_targetDistance */ kcg_bool *valid_targetDistance)
{
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::RSM::_L5 */
  static kcg_bool _L5_WhenBlock1_RSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::WhenBlock1::TSM::_L3 */
  static kcg_bool _L3_WhenBlock1_TSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::owi */
  static kcg_bool owi;
  
  /* ck_sdmType */ switch (sdmType) {
    case CSM_SDM_Types_Pkg :
      *valid_v_mrdt = kcg_false;
      break;
    case TSM_SDM_Types_Pkg :
      _L3_WhenBlock1_TSM = Undefined_Supervision_SDM_Types != supVisStatus;
      *valid_v_mrdt = _L3_WhenBlock1_TSM;
      break;
    case RSM_SDM_Types_Pkg :
      _L5_WhenBlock1_RSM = (Indication_Supervision_SDM_Type == supVisStatus) |
        (supVisStatus == Intervention_Supervision_SDM_Ty);
      *valid_v_mrdt = _L5_WhenBlock1_RSM;
      break;
    case No_SDM_Type_SDM_Types_Pkg :
      *valid_v_mrdt = kcg_false;
      break;
    
  }
  *valid_targetDistance = *valid_v_mrdt;
  owi = (Overspeed_Supervision_SDM_Types == supVisStatus) | (supVisStatus ==
      Warning_Supervision_SDM_Types_P) | (supVisStatus ==
      Intervention_Supervision_SDM_Ty);
  *v_est = (*speeds).V_est;
  *v_release = (*speeds).V_release;
  /* ck_sdmType */ switch (sdmType) {
    case CSM_SDM_Types_Pkg :
      *valid_v_release = kcg_false;
      *valid_v_permitted = kcg_true;
      *valid_v_est = kcg_true;
      *v_permitted = (*speeds).V_MRSP;
      *v_mrdt = 0;
      *v_floi = (*speeds).v_FLOI_dmi;
      *valid_v_floi = owi;
      *targetDistance = 0;
      break;
    case TSM_SDM_Types_Pkg :
      *valid_v_est = _L3_WhenBlock1_TSM;
      *v_permitted = (*speeds).v_p_dmi;
      *valid_v_permitted = _L3_WhenBlock1_TSM;
      *valid_v_release = _L3_WhenBlock1_TSM & ((SvL_TargetManagement_types ==
            (*mrdt).targetType) | ((*mrdt).targetType ==
            EoA_TargetManagement_types));
      *v_mrdt = (*speeds).V_target;
      *v_floi = (*speeds).v_FLOI_dmi;
      *valid_v_floi = owi;
      *targetDistance = (*locations).d_target;
      break;
    case RSM_SDM_Types_Pkg :
      *valid_v_floi = kcg_false;
      *valid_v_permitted = kcg_false;
      *valid_v_est = _L5_WhenBlock1_RSM;
      *v_permitted = 0;
      *valid_v_release = _L5_WhenBlock1_RSM;
      *v_mrdt = (*speeds).v_p_mrdt;
      *v_floi = 0;
      *targetDistance = (*locations).d_target;
      break;
    case No_SDM_Type_SDM_Types_Pkg :
      *valid_v_floi = kcg_false;
      *valid_v_release = kcg_false;
      *valid_v_permitted = kcg_false;
      *valid_v_est = kcg_false;
      *v_permitted = 0;
      *v_mrdt = 0;
      *v_floi = 0;
      *targetDistance = 0;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcDriverOutput_SDM_Commands_P.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

