/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_train_id_to_int_DATA_V.h"

/* DATA::Variables::CAST_DMI_train_id_to_int */
DMI_train_id_INT_T_DATA CAST_DMI_train_id_to_int_DATA_V(
  /* DATA::Variables::CAST_DMI_train_id_to_int::dmi_train_id_ct */ DMI_train_id_T_DMI_Types_Pkg *dmi_train_id_ct)
{
  /* DATA::Variables::CAST_DMI_train_id_to_int::_L23 */
  static kcg_int _L23;
  /* DATA::Variables::CAST_DMI_train_id_to_int::_L26 */
  static kcg_bool _L26;
  /* DATA::Variables::CAST_DMI_train_id_to_int::_L25 */
  static kcg_int _L25;
  /* DATA::Variables::CAST_DMI_train_id_to_int::_L28 */
  static kcg_int _L28;
  /* DATA::Variables::CAST_DMI_train_id_to_int::_L30 */
  static kcg_int _L30;
  /* DATA::Variables::CAST_DMI_train_id_to_int::_L32 */
  static kcg_int _L32;
  /* DATA::Variables::CAST_DMI_train_id_to_int::dmi_train_id_int */
  static DMI_train_id_INT_T_DATA dmi_train_id_int;
  
  /* 1 */ BCD_to_Int_Utilities((*dmi_train_id_ct).dig1, &_L23, &_L26);
  /* 2 */ BCD_to_Int_Utilities((*dmi_train_id_ct).dig2, &_L25, &_L26);
  /* 3 */ BCD_to_Int_Utilities((*dmi_train_id_ct).dig3, &_L28, &_L26);
  /* 4 */ BCD_to_Int_Utilities((*dmi_train_id_ct).dig4, &_L30, &_L26);
  /* 5 */ BCD_to_Int_Utilities((*dmi_train_id_ct).dig5, &_L32, &_L26);
  dmi_train_id_int = (*dmi_train_id_ct).number + _L23 * 10 + _L25 * 100 + _L28 *
    1000 + _L30 * 10000 + _L32 * 100000;
  return dmi_train_id_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_train_id_to_int_DATA_V.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

