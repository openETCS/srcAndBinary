/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _SDMLimitLocations_TargetLimits_Pkg_H_
#define _SDMLimitLocations_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"
#include "P_SpeedRelatedToEBD_SDM_Types_Pkg.h"
#include "P_SpeedRelatedToSBD_SDM_Types_Pkg.h"
#include "CalcSpeeds_SDM_Types_Pkg.h"
#include "d_limits_TargetLimits_Pkg.h"
#include "v_SBI1_TargetLimits_Pkg.h"
#include "v_SBI2_TargetLimits_Pkg.h"
#include "d_RSM_start_TargetLimits_Pkg.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"
#include "d_P_target_TargetLimits_Pkg.h"
#include "v_release_TargetLimits_Pkg.h"
#include "TargetSelector_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::SDMLimitLocations */
extern void SDMLimitLocations_TargetLimits_Pkg(
  /* TargetLimits_Pkg::SDMLimitLocations::MRSP_Profile */MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* TargetLimits_Pkg::SDMLimitLocations::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* TargetLimits_Pkg::SDMLimitLocations::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::SDMLimitLocations::targetCollection */TargetCollection_T_TargetManagement_types *targetCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::curveCollection */CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::MA */MA_section_real_T_TargetManagement_types *MA,
  /* TargetLimits_Pkg::SDMLimitLocations::T_b */t_Brake_t_SDMConversionModelPkg *T_b,
  /* TargetLimits_Pkg::SDMLimitLocations::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::SDMLimitLocations::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::SDMLimitLocations::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* TargetLimits_Pkg::SDMLimitLocations::MostRestrictiveTarget */Target_real_T_TargetManagement_types *MostRestrictiveTarget,
  /* TargetLimits_Pkg::SDMLimitLocations::FLOIisSBI1 */kcg_bool *FLOIisSBI1,
  /* TargetLimits_Pkg::SDMLimitLocations::speeds */Speeds_T_SDM_Types_Pkg *speeds);

#endif /* _SDMLimitLocations_TargetLimits_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SDMLimitLocations_TargetLimits_Pkg.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

