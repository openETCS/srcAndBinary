/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_STM_MaxSpeed_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_STM_MaxSpeed */
void SP_STM_MaxSpeed_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::PacketsIn */ ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::STM_MaxSpeed */ SSP_cat_t_TA_MRSP *STM_MaxSpeed)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    STM_MaxSpeed,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_STM_MaxSpeed_TA_SpeedProfiles.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

