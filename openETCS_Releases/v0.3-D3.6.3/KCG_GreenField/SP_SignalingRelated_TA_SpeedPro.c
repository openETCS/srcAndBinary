/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_SignalingRelated_TA_SpeedPro.h"

/* TA_SpeedProfiles::SP_SignalingRelated */
void SP_SignalingRelated_TA_SpeedPro(
  /* TA_SpeedProfiles::SP_SignalingRelated::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_SignalingRelated::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_SpeedProfiles::SP_SignalingRelated::SignalingRelated */ SSP_cat_t_TA_MRSP *SignalingRelated)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    SignalingRelated,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_SignalingRelated_TA_SpeedPro.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

