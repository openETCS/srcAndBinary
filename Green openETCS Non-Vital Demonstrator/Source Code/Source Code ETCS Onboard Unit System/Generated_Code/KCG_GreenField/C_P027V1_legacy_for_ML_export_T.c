/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_legacy_for_ML_export_T.h"

/* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export */
void C_P027V1_legacy_for_ML_export_T(
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::P027_in */ P027V1_OBU_T_TM_baseline2 *P027_in,
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::P027_legacy_out */ P27_InternationalStaticSpeedPro *P027_legacy_out)
{
  kcg_copy_P27_InternationalStati(
    P027_legacy_out,
    (P27_InternationalStaticSpeedPro *) &DEFAULT_P027V1_legacy_TM_baseli);
  (*P027_legacy_out).valid = (*P027_in).valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_legacy_for_ML_export_T.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

