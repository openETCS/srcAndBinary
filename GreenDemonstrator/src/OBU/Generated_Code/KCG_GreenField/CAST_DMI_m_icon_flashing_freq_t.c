/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_m_icon_flashing_freq_t.h"

/* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int */
DMI_m_icon_flashing_freq_INT_T_ CAST_DMI_m_icon_flashing_freq_t(
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::dmi_m_icon_flashing_freq_ct */ kcg_real dmi_m_icon_flashing_freq_ct)
{
  /* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int::dmi_m_icon_flashing_freq_int */
  static DMI_m_icon_flashing_freq_INT_T_ dmi_m_icon_flashing_freq_int;
  
  dmi_m_icon_flashing_freq_int = /* 1 */
    Real_to_Int_Utilities(dmi_m_icon_flashing_freq_ct, 0.1, 1.0, 22, 0);
  return dmi_m_icon_flashing_freq_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_m_icon_flashing_freq_t.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

