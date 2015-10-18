/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDMI_output_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcDMI_output */
void CalcDMI_output_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDMI_output::in_sdmCmd */ SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcDMI_output::limit_locations */ SDM_Locations_T_SDM_Types_Pkg *limit_locations,
  /* SDM_Commands_Pkg::CalcDMI_output::sdmToDMI */ speedSupervisionForDMI_T_DMI_Types_Pkg *sdmToDMI)
{
  /* SDM_Commands_Pkg::CalcDMI_output */
  static V_odometry_Type_Obu_BasicTypes_Pkg tmp;
  
  (*sdmToDMI).valid = (*in_sdmCmd).supervisionStatus !=
    Undefined_Supervision_SDM_Types_Pkg;
  (*sdmToDMI).locationBrakeTarget = (*in_sdmCmd).targetDistance;
  (*sdmToDMI).location_brake_curve_starting_point =
    (*limit_locations).EBD_preindication_location;
  (*sdmToDMI).distanceIndicationPoint = (*limit_locations).d_I_of_V_est;
  /* 1 */ if ((*in_sdmCmd).valid_v_mrdt) {
    tmp = (*in_sdmCmd).mrdtSpeed;
  }
  else {
    tmp = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  (*sdmToDMI).targetSpeed = /* 1 */ TransformV_odoToV_int_SDM_Types_Pkg(tmp);
  /* 2 */ if ((*in_sdmCmd).valid_v_permitted) {
    tmp = (*in_sdmCmd).permittedSpeed;
  }
  else {
    tmp = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  (*sdmToDMI).permittedSpeed = /* 2 */ TransformV_odoToV_int_SDM_Types_Pkg(tmp);
  /* 3 */ if ((*in_sdmCmd).valid_v_release) {
    tmp = (*in_sdmCmd).releaseSpeed;
  }
  else {
    tmp = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  (*sdmToDMI).releaseSpeed = /* 3 */ TransformV_odoToV_int_SDM_Types_Pkg(tmp);
  /* 4 */ if ((*in_sdmCmd).valid_v_sbi) {
    tmp = (*in_sdmCmd).sbiSpeed;
  }
  else {
    tmp = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  (*sdmToDMI).interventionSpeed = /* 4 */
    TransformV_odoToV_int_SDM_Types_Pkg(tmp);
  switch ((*in_sdmCmd).sdmType) {
    case CSM_SDM_Types_Pkg :
      (*sdmToDMI).sup_status = CSM_DMI_Types_Pkg;
      break;
    case RSM_SDM_Types_Pkg :
      (*sdmToDMI).sup_status = RSM_DMI_Types_Pkg;
      break;
    case TSM_SDM_Types_Pkg :
      (*sdmToDMI).sup_status = TSM_DMI_Types_Pkg;
      break;
    
    default :
      (*sdmToDMI).sup_status = supervision_status_unknown_DMI_Types_Pkg;
  }
  switch ((*in_sdmCmd).supervisionStatus) {
    case Normal_Supervision_SDM_Types_Pkg :
      (*sdmToDMI).supervisionDisplay = supDis_normal_DMI_Types_Pkg;
      break;
    case Indication_Supervision_SDM_Types_Pkg :
      (*sdmToDMI).supervisionDisplay = supDis_indication_DMI_Types_Pkg;
      break;
    case Overspeed_Supervision_SDM_Types_Pkg :
      (*sdmToDMI).supervisionDisplay = supDis_overspeed_DMI_Types_Pkg;
      break;
    case Warning_Supervision_SDM_Types_Pkg :
      (*sdmToDMI).supervisionDisplay = supDis_warning_DMI_Types_Pkg;
      break;
    case Intervention_Supervision_SDM_Types_Pkg :
      (*sdmToDMI).supervisionDisplay = supDis_intervention_DMI_Types_Pkg;
      break;
    
    default :
      (*sdmToDMI).supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcDMI_output_SDM_Commands_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

