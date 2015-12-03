/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "m_s_To_cm_s_Toolbox_Converters.h"

/* Toolbox::Converters::m_s_To_cm_s */
OdometrySpeed_T_Toolbox m_s_To_cm_s_Toolbox_Converters(
  /* Toolbox::Converters::m_s_To_cm_s::speedIn */ kcg_real speedIn)
{
  /* Toolbox::Converters::m_s_To_cm_s::speedOut */
  static OdometrySpeed_T_Toolbox speedOut;
  
  speedOut = (kcg_int) (speedIn * 100.0);
  return speedOut;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** m_s_To_cm_s_Toolbox_Converters.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

