/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_ModeRelated_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_ModeRelated */
void SP_ModeRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ModeRelated::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_ModeRelated::SP_available */ kcg_bool SP_available,
  /* TA_SpeedProfiles::SP_ModeRelated::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeDataIn */ T_Mode_Level_Level_And_Mode_Typ *ModeDataIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeRelated */ SSP_cat_t_TA_MRSP *ModeRelated)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    ModeRelated,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_ModeRelated_TA_SpeedProfiles.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

