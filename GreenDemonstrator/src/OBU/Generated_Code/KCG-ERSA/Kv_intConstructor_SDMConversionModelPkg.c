/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intConstructor_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intConstructor */
void Kv_intConstructor_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intConstructor::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::Kv_intConstructor::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::Kv_intConstructor::A_ebmax */ A_internal_Type_Obu_BasicTypes_Pkg A_ebmax,
  /* SDMConversionModelPkg::Kv_intConstructor::A_brake_em */ av_Map_t_SDMConversionModelPkg *A_brake_em,
  /* SDMConversionModelPkg::Kv_intConstructor::A_brake_safe */ av_MergedMap_t_SDMConversionModelPkg *A_brake_safe)
{
  /* SDMConversionModelPkg::Kv_intConstructor */ mv_Map_t_SDMConversionModelPkg mk_struct;
  /* SDMConversionModelPkg::Kv_intConstructor */ kcg_bool cond_iterw;
  kcg_int i;
  /* SDMConversionModelPkg::Kv_intConstructor::_L12 */ kcg_bool _L12;
  /* SDMConversionModelPkg::Kv_intConstructor::_L14 */ nvkvintset_T_Packet_Types_Pkg _L14;
  /* SDMConversionModelPkg::Kv_intConstructor::_L38 */ array_int_7 _L38;
  /* SDMConversionModelPkg::Kv_intConstructor::_L39 */ kcg_int _L39;
  /* SDMConversionModelPkg::Kv_intConstructor::_L41 */ array_int_7 _L41;
  /* SDMConversionModelPkg::Kv_intConstructor::_L51 */ kcg_bool _L51;
  /* SDMConversionModelPkg::Kv_intConstructor::_L57 */ A_internal_Type_Obu_BasicTypes_Pkg _L57;
  /* SDMConversionModelPkg::Kv_intConstructor::_L58 */ A_internal_Type_Obu_BasicTypes_Pkg _L58;
  
  _L12 = kcg_false;
  /* 1 */ if (Q_NVKINT_Integrated_correction_factors_follow ==
    (*NationalValues).q_nvkint) {
    /* 1 */ for (i = 0; i < 7; i++) {
      cond_iterw = _L12;
      /* 1 */
      Kv_intSetIterator_SDMConversionModelPkg(
        cond_iterw,
        &(*NationalValues).nvkvintsetArray[i],
        (*trainData).trainCategory,
        &_L51,
        &_L12);
      _L39 = i + 1;
      /* 1 */ if (!_L51) {
        break;
      }
    }
  }
  else {
    _L39 = 0;
  }
  if ((0 <= _L39 - 1) & (_L39 - 1 < 7)) {
    kcg_copy_nvkvintset_T_Packet_Types_Pkg(
      &_L14,
      &(*NationalValues).nvkvintsetArray[_L39 - 1]);
  }
  else {
    kcg_copy_nvkvintset_T_Packet_Types_Pkg(
      &_L14,
      (nvkvintset_T_Packet_Types_Pkg *) &cEmptyKvIntSet_SDMConversionModelPkg);
  }
  _L57 = /* 1 */ TransformA_realToA_int_SDM_Types_Pkg(_L14.a_nvp12);
  _L58 = /* 2 */ TransformA_realToA_int_SDM_Types_Pkg(_L14.a_nvp23);
  _L51 = _L14.q_nvkvintset == Q_NVKVINTSET_Conventional_passenger_trains;
  /* 2 */ if (_L14.valid) {
    /* 2 */ for (i = 0; i < 7; i++) {
      /* 1 */
      Kv_intIterator_SDMConversionModelPkg(
        &_L14.nvkintArray[i],
        A_ebmax,
        _L57,
        _L58,
        _L51,
        &cond_iterw,
        &_L41[i],
        &_L38[i]);
      _L39 = i + 1;
      /* 2 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L39 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 2 */ for (i = _L39; i < 7; i++) {
    _L41[i] = 100;
    _L38[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_array_int_7(&mk_struct.m, &_L41);
  kcg_copy_array_int_7(&mk_struct.v, &_L38);
  /* 1 */
  Kv_intVectorMapper_SDMConversionModelPkg(
    &mk_struct,
    A_brake_em,
    A_brake_safe);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intConstructor_SDMConversionModelPkg.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

