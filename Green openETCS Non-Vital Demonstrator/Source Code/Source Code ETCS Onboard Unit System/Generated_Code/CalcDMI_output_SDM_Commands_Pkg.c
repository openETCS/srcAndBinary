/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
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
  /* SDM_Commands_Pkg::CalcDMI_output::IfBlock2::else */
  static kcg_bool _3_else_clock_IfBlock2;
  /* SDM_Commands_Pkg::CalcDMI_output::IfBlock2::else::else::else */
  static kcg_bool _1_else_clock_IfBlock2;
  /* SDM_Commands_Pkg::CalcDMI_output::IfBlock2::else::else::else::else */
  static kcg_bool else_clock_IfBlock2;
  /* SDM_Commands_Pkg::CalcDMI_output::IfBlock2::else::else */
  static kcg_bool _2_else_clock_IfBlock2;
  /* SDM_Commands_Pkg::CalcDMI_output::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  
  (*sdmToDMI).valid = (*in_sdmCmd).supervisionStatus !=
    Undefined_Supervision_SDM_Types_Pkg;
  (*sdmToDMI).locationBrakeTarget = (*in_sdmCmd).targetDistance;
  _2_else_clock_IfBlock2 = (*in_sdmCmd).sdmType == CSM_SDM_Types_Pkg;
  IfBlock2_clock = (*in_sdmCmd).supervisionStatus ==
    Normal_Supervision_SDM_Types_Pkg;
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
  (*sdmToDMI).location_brake_curve_starting_point = /* 1 */
    TransformV_realToV_int_SDM_Types_Pkg(
      (*limit_locations).EBD_preindication_location);
  /* 4 */ if ((*in_sdmCmd).valid_v_sbi) {
    (*sdmToDMI).interventionSpeed = (*in_sdmCmd).sbiSpeed;
  }
  else {
    (*sdmToDMI).interventionSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  /* ck_IfBlock1 */ if (_2_else_clock_IfBlock2) {
    (*sdmToDMI).sup_status = CSM_DMI_Types_Pkg;
  }
  else {
    _1_else_clock_IfBlock2 = (*in_sdmCmd).sdmType == RSM_SDM_Types_Pkg;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock2) {
      (*sdmToDMI).sup_status = RSM_DMI_Types_Pkg;
    }
    else {
      else_clock_IfBlock2 = (*in_sdmCmd).sdmType == TSM_SDM_Types_Pkg;
      /* ck_anon_activ */ if (else_clock_IfBlock2) {
        (*sdmToDMI).sup_status = TSM_DMI_Types_Pkg;
      }
      else {
        (*sdmToDMI).sup_status = supervision_status_unknown_DMI_Types_Pkg;
      }
    }
  }
  /* ck_IfBlock2 */ if (IfBlock2_clock) {
    (*sdmToDMI).supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  }
  else {
    _3_else_clock_IfBlock2 = (*in_sdmCmd).supervisionStatus ==
      Indication_Supervision_SDM_Types_Pkg;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock2) {
      (*sdmToDMI).supervisionDisplay = supDis_indication_DMI_Types_Pkg;
    }
    else {
      _2_else_clock_IfBlock2 = (*in_sdmCmd).supervisionStatus ==
        Overspeed_Supervision_SDM_Types_Pkg;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock2) {
        (*sdmToDMI).supervisionDisplay = supDis_overspeed_DMI_Types_Pkg;
      }
      else {
        _1_else_clock_IfBlock2 = (*in_sdmCmd).supervisionStatus ==
          Warning_Supervision_SDM_Types_Pkg;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock2) {
          (*sdmToDMI).supervisionDisplay = supDis_warning_DMI_Types_Pkg;
        }
        else {
          else_clock_IfBlock2 = (*in_sdmCmd).supervisionStatus ==
            Intervention_Supervision_SDM_Types_Pkg;
          /* ck_anon_activ */ if (else_clock_IfBlock2) {
            (*sdmToDMI).supervisionDisplay = supDis_intervention_DMI_Types_Pkg;
          }
          else {
            (*sdmToDMI).supervisionDisplay = supDis_normal_DMI_Types_Pkg;
          }
        }
      }
    }
  }
  (*sdmToDMI).distanceIndicationPoint = /* 2 */
    TransformV_realToV_int_SDM_Types_Pkg((*limit_locations).d_I_of_V_est);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcDMI_output_SDM_Commands_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

