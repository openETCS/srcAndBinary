/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDMI_output_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void CalcDMI_output_init_SDM_Command(outC_CalcDMI_output_SDM_Command *outC)
{
  outC->sdmToDMI.valid = kcg_true;
  outC->sdmToDMI.targetSpeed = 0;
  outC->sdmToDMI.permittedSpeed = 0;
  outC->sdmToDMI.releaseSpeed = 0;
  outC->sdmToDMI.locationBrakeTarget = 0;
  outC->sdmToDMI.location_brake_curve_starting_p = 0;
  outC->sdmToDMI.interventionSpeed = 0;
  outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMI.distanceIndicationPoint = 0;
  /* 2 */ LowerOrHold_init_SDM_Commands_P(&outC->Context_2);
  /* 3 */ LowerOrHold_init_SDM_Commands_P(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcDMI_output_reset_SDM_Comman(outC_CalcDMI_output_SDM_Command *outC)
{
  /* 2 */ LowerOrHold_reset_SDM_Commands_(&outC->Context_2);
  /* 3 */ LowerOrHold_reset_SDM_Commands_(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::CalcDMI_output */
void CalcDMI_output_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDMI_output::in_sdmCmd */ SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcDMI_output::limit_locations */ SDM_Locations_T_SDM_Types_Pkg *limit_locations,
  /* SDM_Commands_Pkg::CalcDMI_output::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CalcDMI_output::mrdt */ Target_T_TargetManagement_types *mrdt,
  outC_CalcDMI_output_SDM_Command *outC)
{
  outC->sdmToDMI.valid = (*in_sdmCmd).supervisionStatus !=
    Undefined_Supervision_SDM_Types;
  outC->sdmToDMI.locationBrakeTarget = (*in_sdmCmd).targetDistance;
  /* 3 */
  LowerOrHold_SDM_Commands_Pkg(
    (*in_sdmCmd).permittedSpeed,
    mrdt,
    &outC->Context_3);
  /* 2 */
  LowerOrHold_SDM_Commands_Pkg((*in_sdmCmd).sbiSpeed, mrdt, &outC->Context_2);
  /* 1 */ if ((*in_sdmCmd).valid_v_mrdt) {
    outC->sdmToDMI.targetSpeed = (*in_sdmCmd).mrdtSpeed;
  }
  else {
    outC->sdmToDMI.targetSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  /* 2 */ if ((*in_sdmCmd).valid_v_permitted) {
    outC->sdmToDMI.permittedSpeed = outC->Context_3.vo;
  }
  else {
    outC->sdmToDMI.permittedSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  /* 3 */ if ((*in_sdmCmd).valid_v_release) {
    outC->sdmToDMI.releaseSpeed = (*in_sdmCmd).releaseSpeed;
  }
  else {
    outC->sdmToDMI.releaseSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  /* 7 */ if ((*limit_locations).Preindication_EBD_location_vali) {
    outC->sdmToDMI.location_brake_curve_starting_p =
      (*limit_locations).EBD_preindication_location;
  }
  else {
    outC->sdmToDMI.location_brake_curve_starting_p =
      cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  /* 4 */ if ((*in_sdmCmd).valid_v_sbi) {
    outC->sdmToDMI.interventionSpeed = outC->Context_2.vo;
  }
  else {
    outC->sdmToDMI.interventionSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  switch ((*in_sdmCmd).sdmType) {
    case CSM_SDM_Types_Pkg :
      outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
      break;
    case RSM_SDM_Types_Pkg :
      outC->sdmToDMI.sup_status = RSM_DMI_Types_Pkg;
      break;
    case TSM_SDM_Types_Pkg :
      /* 5 */ if ((*trainLocations).maxSafeFrontEndPostion <=
        (*limit_locations).d_I_of_V_MRSP) {
        outC->sdmToDMI.sup_status = PIM_DMI_Types_Pkg;
      }
      else {
        outC->sdmToDMI.sup_status = TSM_DMI_Types_Pkg;
      }
      break;
    
    default :
      outC->sdmToDMI.sup_status = supervision_status_unknown_DMI_;
  }
  switch ((*in_sdmCmd).supervisionStatus) {
    case Normal_Supervision_SDM_Types_Pk :
      outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
      break;
    case Indication_Supervision_SDM_Type :
      outC->sdmToDMI.supervisionDisplay = supDis_indication_DMI_Types_Pkg;
      break;
    case Overspeed_Supervision_SDM_Types :
      outC->sdmToDMI.supervisionDisplay = supDis_overspeed_DMI_Types_Pkg;
      break;
    case Warning_Supervision_SDM_Types_P :
      outC->sdmToDMI.supervisionDisplay = supDis_warning_DMI_Types_Pkg;
      break;
    case Intervention_Supervision_SDM_Ty :
      outC->sdmToDMI.supervisionDisplay = supDis_intervention_DMI_Types_P;
      break;
    
    default :
      outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  }
  /* 6 */ if ((*limit_locations).Preindication_EBD_location_vali &
    ((*in_sdmCmd).sdmType == CSM_SDM_Types_Pkg)) {
    outC->sdmToDMI.distanceIndicationPoint = (*limit_locations).d_I_of_V_MRSP -
      (*trainLocations).maxSafeFrontEndPostion;
  }
  else {
    outC->sdmToDMI.distanceIndicationPoint = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcDMI_output_SDM_Commands_Pkg.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

