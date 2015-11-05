/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intVectorMapper_SDMConversio.h"

/* SDMConversionModelPkg::Kv_intVectorMapper */
void Kv_intVectorMapper_SDMConversio(
  /* SDMConversionModelPkg::Kv_intVectorMapper::Kv_int */ mv_Map_t_SDMConversionModelPkg *Kv_int,
  /* SDMConversionModelPkg::Kv_intVectorMapper::A_brake_em */ av_Map_t_SDMConversionModelPkg *A_brake_em,
  /* SDMConversionModelPkg::Kv_intVectorMapper::A_brake_safe */ av_MergedMap_t_SDMConversionMod *A_brake_safe)
{
  /* SDMConversionModelPkg::Kv_intVectorMapper */
  static array_int_2 acc;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L19 */
  static array_int_13 _L19;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L12 */
  static array_int_2 _L12;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L13 */
  static array_int_13 _L13;
  static kcg_int i;
  
  for (i = 0; i < 2; i++) {
    _L12[i] = 0;
  }
  /* 1 */ for (i = 0; i < 13; i++) {
    kcg_copy_array_int_2(&acc, &_L12);
    /* 1 */
    Kv_intVectorMerger_SDMConversio(
      &acc,
      Kv_int,
      A_brake_em,
      &_L12,
      &_L19[i],
      &_L13[i]);
  }
  kcg_copy_a_MergedSteps_t_SDMCon(&(*A_brake_safe).a, &_L19);
  kcg_copy_v_MergedSteps_t_SDMCon(&(*A_brake_safe).v, &_L13);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intVectorMapper_SDMConversio.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

