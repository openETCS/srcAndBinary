/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_airtightSystem_to_int_.h"

/* DATA::Variables::CAST_DMI_airtightSystem_to_int */
DMI_airtightSystem_INT_T_DATA CAST_DMI_airtightSystem_to_int_(
  /* DATA::Variables::CAST_DMI_airtightSystem_to_int::dmi_airtightSystem_ct */ DMI_airtightSystem_T_DMI_Types_ *dmi_airtightSystem_ct)
{
  /* DATA::Variables::CAST_DMI_airtightSystem_to_int::_L23 */
  static kcg_int _L23;
  /* DATA::Variables::CAST_DMI_airtightSystem_to_int::_L26 */
  static kcg_bool _L26;
  /* DATA::Variables::CAST_DMI_airtightSystem_to_int::_L25 */
  static kcg_int _L25;
  /* DATA::Variables::CAST_DMI_airtightSystem_to_int::_L28 */
  static kcg_int _L28;
  /* DATA::Variables::CAST_DMI_airtightSystem_to_int::dmi_airtightSystem_int */
  static DMI_airtightSystem_INT_T_DATA dmi_airtightSystem_int;
  
  /* 1 */ BCD_to_Int_Utilities((*dmi_airtightSystem_ct).dig1, &_L23, &_L26);
  /* 2 */ BCD_to_Int_Utilities((*dmi_airtightSystem_ct).dig2, &_L25, &_L26);
  /* 3 */ BCD_to_Int_Utilities((*dmi_airtightSystem_ct).dig3, &_L28, &_L26);
  dmi_airtightSystem_int = (*dmi_airtightSystem_ct).number + _L23 * 10 + _L25 *
    100 + _L28 * 1000;
  return dmi_airtightSystem_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_airtightSystem_to_int_.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

