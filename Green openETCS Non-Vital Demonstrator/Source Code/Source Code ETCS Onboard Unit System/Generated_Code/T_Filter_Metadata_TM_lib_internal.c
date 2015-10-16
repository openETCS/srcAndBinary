/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Filter_Metadata_TM_lib_internal.h"

/* TM_lib_internal::T_Filter_Metadata */
kcg_bool T_Filter_Metadata_TM_lib_internal(
  /* TM_lib_internal::T_Filter_Metadata::Metadata_from_track */ kcg_int Metadata_from_track,
  /* TM_lib_internal::T_Filter_Metadata::Metadata_looked_for */ kcg_int Metadata_looked_for,
  /* TM_lib_internal::T_Filter_Metadata::F_version */ kcg_bool F_version,
  /* TM_lib_internal::T_Filter_Metadata::F_id */ kcg_bool F_id)
{
  /* TM_lib_internal::T_Filter_Metadata::_L6 */
  static kcg_int _L6;
  /* TM_lib_internal::T_Filter_Metadata::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::T_Filter_Metadata::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::T_Filter_Metadata::_L10 */
  static kcg_int _L10;
  /* TM_lib_internal::T_Filter_Metadata::_L8 */
  static kcg_int _L8;
  /* TM_lib_internal::T_Filter_Metadata::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::T_Filter_Metadata::data_match */
  static kcg_bool data_match;
  
  /* 1 */
  T_Decode_metadata_new_TM_lib_internal(Metadata_from_track, &_L3, &_L4, &_L6);
  /* 2 */
  T_Decode_metadata_new_TM_lib_internal(Metadata_looked_for, &_L7, &_L8, &_L10);
  data_match = (_L3 == _L7) & /* 1 */
    T_Filter_Metadata_Element_TM_lib_internal(_L4, _L8, F_id) & /* 3 */
    T_Filter_Metadata_Element_TM_lib_internal(_L6, _L10, F_version);
  return data_match;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Filter_Metadata_TM_lib_internal.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

