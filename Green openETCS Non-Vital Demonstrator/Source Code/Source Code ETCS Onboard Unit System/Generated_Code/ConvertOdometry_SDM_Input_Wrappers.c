/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertOdometry_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertOdometry */
void ConvertOdometry_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertOdometry::odo_in */odometry_T_Obu_BasicTypes_Pkg *odo_in,
  /* SDM_Input_Wrappers::ConvertOdometry::odo_out */Odometry_real_T_SDM_Types_Pkg *odo_out)
{
  (*odo_out).valid = (*odo_in).valid;
  (*odo_out).motionState = (*odo_in).motionState;
  (*odo_out).motionDirection = (*odo_in).motionDirection;
  (*odo_out).timestamp = /* 1 */
    TransformT_intToT_real_SDM_Types_Pkg((*odo_in).timestamp);
  (*odo_out).odo.o_nominal = /* 2 */
    TransformL_intToL_real_SDM_Types_Pkg((*odo_in).odo.o_nominal);
  (*odo_out).odo.o_min = /* 3 */
    TransformL_intToL_real_SDM_Types_Pkg((*odo_in).odo.o_min);
  (*odo_out).odo.o_max = /* 1 */
    TransformL_intToL_real_SDM_Types_Pkg((*odo_in).odo.o_max);
  (*odo_out).speed.v_safeNominal = /* 4 */
    TransformV_intToV_real_SDM_Types_Pkg((*odo_in).speed.v_safeNominal);
  (*odo_out).speed.v_rawNominal = /* 1 */
    TransformV_intToV_real_SDM_Types_Pkg((*odo_in).speed.v_rawNominal);
  (*odo_out).speed.v_lower = /* 2 */
    TransformV_intToV_real_SDM_Types_Pkg((*odo_in).speed.v_lower);
  (*odo_out).speed.v_upper = /* 3 */
    TransformV_intToV_real_SDM_Types_Pkg((*odo_in).speed.v_upper);
  (*odo_out).acceleration = /* 1 */
    TransformA_intToA_real_SDM_Types_Pkg((*odo_in).acceleration);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertOdometry_SDM_Input_Wrappers.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

