/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "m_s_To_km_h_Toolbox_Converters.h"

/* Toolbox::Converters::m_s_To_km_h */
kcg_real m_s_To_km_h_Toolbox_Converters(
  /* Toolbox::Converters::m_s_To_km_h::m_s */ kcg_real m_s)
{
  /* Toolbox::Converters::m_s_To_km_h::km_h */
  static kcg_real km_h;
  
  km_h = m_s * 3.6;
  return km_h;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** m_s_To_km_h_Toolbox_Converters.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

