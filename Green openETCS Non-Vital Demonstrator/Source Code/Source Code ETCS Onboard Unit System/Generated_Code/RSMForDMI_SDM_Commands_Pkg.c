/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RSMForDMI_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::RSMForDMI */
void RSMForDMI_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::RSMForDMI::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::RSMForDMI::target */TargetType_T_TargetManagement_types target,
  /* SDM_Commands_Pkg::RSMForDMI::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::RSMForDMI::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::RSMForDMI::v_mrdt */V_internal_real_Type_SDM_Types_Pkg *v_mrdt,
  /* SDM_Commands_Pkg::RSMForDMI::targetDistance */L_internal_real_Type_SDM_Types_Pkg *targetDistance)
{
  *targetDistance = /* 2 */
    TargetDistance_SDM_Types_Pkg(
      (*locations).d_P_of_V_target,
      (*trainLocations).d_maxSafeFrontEndPos,
      (*trainLocations).d_est_frontendPos,
      (*locations).d_svl,
      (*locations).d_eoa,
      target);
  *v_mrdt = (*speeds).v_p_mrdt;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RSMForDMI_SDM_Commands_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

