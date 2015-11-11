/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_STM_SystemSpeed_TA_SpeedProf.h"

/* TA_SpeedProfiles::SP_STM_SystemSpeed */
void SP_STM_SystemSpeed_TA_SpeedProf(
  /* TA_SpeedProfiles::SP_STM_SystemSpeed::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_STM_SystemSpeed::PacketsIn */ ReceivedMessage_T_Common_Types_ *PacketsIn,
  /* TA_SpeedProfiles::SP_STM_SystemSpeed::STM_SystemSpeed */ SSP_cat_t_TA_MRSP *STM_SystemSpeed)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    STM_SystemSpeed,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_STM_SystemSpeed_TA_SpeedProf.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

