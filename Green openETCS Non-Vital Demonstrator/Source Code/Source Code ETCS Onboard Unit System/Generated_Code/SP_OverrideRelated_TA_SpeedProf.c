/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_OverrideRelated_TA_SpeedProf.h"

/* TA_SpeedProfiles::SP_OverrideRelated */
void SP_OverrideRelated_TA_SpeedProf(
  /* TA_SpeedProfiles::SP_OverrideRelated::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_OverrideRelated::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_SpeedProfiles::SP_OverrideRelated::OverrideRelated */ SSP_cat_t_TA_MRSP *OverrideRelated)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    OverrideRelated,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_OverrideRelated_TA_SpeedProf.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

