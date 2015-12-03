/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intVectorMerger_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intVectorMerger */
void Kv_intVectorMerger_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intVectorMerger::indices_in */ array_int_2 *indices_in,
  /* SDMConversionModelPkg::Kv_intVectorMerger::Kv */ mv_Map_t_SDMConversionModelPkg *Kv,
  /* SDMConversionModelPkg::Kv_intVectorMerger::Abrake */ av_Map_t_SDMConversionModelPkg *Abrake,
  /* SDMConversionModelPkg::Kv_intVectorMerger::indices_out */ array_int_2 *indices_out,
  /* SDMConversionModelPkg::Kv_intVectorMerger::a */ A_internal_Type_Obu_BasicTypes_Pkg *a,
  /* SDMConversionModelPkg::Kv_intVectorMerger::v */ V_internal_Type_Obu_BasicTypes_Pkg *v)
{
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L23 */
  static kcg_int _L23;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L18 */
  static kcg_int _L18;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L24 */
  static kcg_int _L24;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L26 */
  static kcg_int _L26;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L45 */
  static kcg_int _L45;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L44 */
  static kcg_int _L44;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L56 */
  static kcg_bool _L56;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L59 */
  static kcg_bool _L59;
  
  if ((0 <= (*indices_in)[0]) & ((*indices_in)[0] < 7)) {
    _L18 = (*Kv).m[(*indices_in)[0]];
    _L45 = (*Kv).v[(*indices_in)[0]];
  }
  else {
    _L18 = 1;
    _L45 = 0;
  }
  if ((0 <= (*indices_in)[1]) & ((*indices_in)[1] < 6)) {
    _L26 = (*Abrake).a[(*indices_in)[1]];
    _L44 = (*Abrake).v[(*indices_in)[1]];
  }
  else {
    _L26 = 0;
    _L44 = 0;
  }
  *a = _L18 * _L26 / 100;
  _L26 = 1 + (*indices_in)[1];
  if ((0 <= _L26) & (_L26 < 6)) {
    _L18 = (*Abrake).v[_L26];
  }
  else {
    _L18 = 0;
  }
  _L24 = 1 + (*indices_in)[0];
  if ((0 <= _L24) & (_L24 < 7)) {
    _L23 = (*Kv).v[_L24];
  }
  else {
    _L23 = 0;
  }
  _L56 = _L23 > 0;
  _L59 = _L18 > 0;
  /* 1 */ if (_L56 & ((_L23 <= _L18) | !_L59)) {
    (*indices_out)[0] = _L24;
  }
  else {
    (*indices_out)[0] = (*indices_in)[0];
  }
  /* 2 */ if (_L59 & (!_L56 | (_L23 >= _L18))) {
    (*indices_out)[1] = _L26;
  }
  else {
    (*indices_out)[1] = (*indices_in)[1];
  }
  /* 2 */ if (_L45 >= _L44) {
    *v = _L45;
  }
  else {
    *v = _L44;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intVectorMerger_SDMConversionModelPkg.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

