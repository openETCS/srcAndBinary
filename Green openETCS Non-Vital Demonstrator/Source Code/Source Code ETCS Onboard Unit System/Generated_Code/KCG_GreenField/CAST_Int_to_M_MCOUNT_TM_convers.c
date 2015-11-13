/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_MCOUNT_TM_convers.h"

/* TM_conversions::CAST_Int_to_M_MCOUNT */
M_MCOUNT CAST_Int_to_M_MCOUNT_TM_convers(
  /* TM_conversions::CAST_Int_to_M_MCOUNT::m_mcount_int */ kcg_int m_mcount_int)
{
  /* TM_conversions::CAST_Int_to_M_MCOUNT::m_mcount */
  static M_MCOUNT m_mcount;
  
  m_mcount = m_mcount_int;
  return m_mcount;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_MCOUNT_TM_convers.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

