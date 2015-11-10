/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NationalParams__Get_T_NVCONTACT.h"

/* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT */
T_NVCONTACT NationalParams__Get_T_NVCONTACT(
  /* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT::inNationalParams */ NationalParams_T *inNationalParams)
{
  /* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT::out_T_NVCONTACT */
  static T_NVCONTACT out_T_NVCONTACT;
  
  out_T_NVCONTACT = (*inNationalParams).t_nvcontact;
  return out_T_NVCONTACT;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NationalParams__Get_T_NVCONTACT.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

