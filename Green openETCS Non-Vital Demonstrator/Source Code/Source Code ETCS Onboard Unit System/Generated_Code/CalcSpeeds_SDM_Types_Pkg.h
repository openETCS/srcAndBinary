/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */
#ifndef _CalcSpeeds_SDM_Types_Pkg_H_
#define _CalcSpeeds_SDM_Types_Pkg_H_

#include "kcg_types.h"
#include "FloiSpeed_SDM_Types_Pkg.h"
#include "dV_sbi_for_V_SDM_Types_Pkg.h"
#include "dV_ebi_for_V_SDM_Types_Pkg.h"
#include "P_SpeedRelatedToMRDT_SDM_Types_Pkg.h"
#include "dV_warning_for_V_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */


/* SDM_Types_Pkg::CalcSpeeds */
extern void CalcSpeeds_SDM_Types_Pkg(
  /* SDM_Types_Pkg::CalcSpeeds::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* SDM_Types_Pkg::CalcSpeeds::v_MRSP */V_internal_real_Type_SDM_Types_Pkg v_MRSP,
  /* SDM_Types_Pkg::CalcSpeeds::v_release */V_internal_real_Type_SDM_Types_Pkg v_release,
  /* SDM_Types_Pkg::CalcSpeeds::v_target */V_internal_real_Type_SDM_Types_Pkg v_target,
  /* SDM_Types_Pkg::CalcSpeeds::mrdt */Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Types_Pkg::CalcSpeeds::v_p_ebd */V_internal_real_Type_SDM_Types_Pkg v_p_ebd,
  /* SDM_Types_Pkg::CalcSpeeds::v_p_sbd */V_internal_real_Type_SDM_Types_Pkg v_p_sbd,
  /* SDM_Types_Pkg::CalcSpeeds::v_p_ebd_valid */kcg_bool v_p_ebd_valid,
  /* SDM_Types_Pkg::CalcSpeeds::v_sbi_mrdt */V_internal_real_Type_SDM_Types_Pkg v_sbi_mrdt,
  /* SDM_Types_Pkg::CalcSpeeds::speeds */Speeds_T_SDM_Types_Pkg *speeds);

#endif /* _CalcSpeeds_SDM_Types_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcSpeeds_SDM_Types_Pkg.h
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */

