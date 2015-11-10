/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_SR_to_int_TM_conversions.h"

/* TM_conversions::CAST_D_SR_to_int */
kcg_int CAST_D_SR_to_int_TM_conversions(
  /* TM_conversions::CAST_D_SR_to_int::d_sr */ D_SR d_sr)
{
  /* TM_conversions::CAST_D_SR_to_int::d_sr_int */
  static kcg_int d_sr_int;
  
  d_sr_int = d_sr;
  return d_sr_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_D_SR_to_int_TM_conversions.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

