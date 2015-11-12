/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intIterator_SDMConversionMod.h"

/* SDMConversionModelPkg::Kv_intIterator */
void Kv_intIterator_SDMConversionMod(
  /* SDMConversionModelPkg::Kv_intIterator::Kv_int */ nvkvint_T_Packet_Types_Pkg *Kv_int,
  /* SDMConversionModelPkg::Kv_intIterator::a */ A_internal_Type_Obu_BasicTypes_ a,
  /* SDMConversionModelPkg::Kv_intIterator::a12 */ A_internal_Type_Obu_BasicTypes_ a12,
  /* SDMConversionModelPkg::Kv_intIterator::a23 */ A_internal_Type_Obu_BasicTypes_ a23,
  /* SDMConversionModelPkg::Kv_intIterator::P */ kcg_bool P,
  /* SDMConversionModelPkg::Kv_intIterator::goOn */ kcg_bool *goOn,
  /* SDMConversionModelPkg::Kv_intIterator::m */ kcg_int *m,
  /* SDMConversionModelPkg::Kv_intIterator::v */ V_internal_Type_Obu_BasicTypes_ *v)
{
  /* SDMConversionModelPkg::Kv_intIterator::_L17 */
  static A_internal_Type_Obu_BasicTypes_ _L17;
  
  _L17 = /* 1 */ TransformA_realToA_int_SDM_Type((*Kv_int).m_nvkvint12);
  /* 1 */ if (P) {
    *m = /* 2 */
      interpolateMfromA_SDMConversion(
        a,
        a12,
        a23,
        _L17,
        /* 2 */ TransformA_realToA_int_SDM_Type((*Kv_int).m_nvkvint23));
  }
  else {
    *m = _L17;
  }
  *v = (*Kv_int).v_nvkvint;
  *goOn = (*Kv_int).valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intIterator_SDMConversionMod.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

