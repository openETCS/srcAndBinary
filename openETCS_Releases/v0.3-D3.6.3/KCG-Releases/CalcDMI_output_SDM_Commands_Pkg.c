/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDMI_output_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcDMI_output */
void CalcDMI_output_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDMI_output::in_sdmCmd */ SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcDMI_output::limit_locations */ SDM_Locations_T_SDM_Types_Pkg *limit_locations,
  /* SDM_Commands_Pkg::CalcDMI_output::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcDMI_output::sdmToDMI */ speedSupervisionForDMI_T_DMI_Types_Pkg *sdmToDMI)
{
  (*sdmToDMI).valid = (*in_sdmCmd).supervisionStatus !=
    Undefined_Supervision_SDM_Types_Pkg;
  (*sdmToDMI).locationBrakeTarget = (*in_sdmCmd).targetDistance;
  (*sdmToDMI).location_brake_curve_starting_point =
    (*limit_locations).EBD_preindication_location;
  (*sdmToDMI).distanceIndicationPoint = (*limit_locations).d_I_of_V_est -
    (*trainLocations).maxSafeFrontEndPostion;
  /* 1 */ if ((*in_sdmCmd).valid_v_mrdt) {
    (*sdmToDMI).targetSpeed = (*in_sdmCmd).mrdtSpeed;
  }
  else {
    (*sdmToDMI).targetSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  /* 2 */ if ((*in_sdmCmd).valid_v_permitted) {
    (*sdmToDMI).permittedSpeed = (*in_sdmCmd).permittedSpeed;
  }
  else {
    (*sdmToDMI).permittedSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  /* 3 */ if ((*in_sdmCmd).valid_v_release) {
    (*sdmToDMI).releaseSpeed = (*in_sdmCmd).releaseSpeed;
  }
  else {
    (*sdmToDMI).releaseSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  /* 4 */ if ((*in_sdmCmd).valid_v_sbi) {
    (*sdmToDMI).interventionSpeed = (*in_sdmCmd).sbiSpeed;
  }
  else {
    (*sdmToDMI).interventionSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  switch ((*in_sdmCmd).sdmType) {
    case CSM_SDM_Types_Pkg :
      (*sdmToDMI).sup_status = CSM_DMI_Types_Pkg;
      break;
    case RSM_SDM_Types_Pkg :
      (*sdmToDMI).sup_status = RSM_DMI_Types_Pkg;
      break;
    case TSM_SDM_Types_Pkg :
      /* 5 */ if ((*trainLocations).maxSafeFrontEndPostion <=
        (*limit_locations).d_I_of_V_MRSP) {
        (*sdmToDMI).sup_status = PIM_DMI_Types_Pkg;
      }
      else {
        (*sdmToDMI).sup_status = TSM_DMI_Types_Pkg;
      }
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
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

