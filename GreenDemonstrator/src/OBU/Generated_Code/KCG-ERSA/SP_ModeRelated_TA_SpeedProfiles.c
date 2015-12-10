/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_ModeRelated_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_ModeRelated */
void SP_ModeRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ModeRelated::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_ModeRelated::SP_available */ kcg_bool SP_available,
  /* TA_SpeedProfiles::SP_ModeRelated::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeDataIn */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeDataIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeRelated */ SSP_cat_t_TA_MRSP *ModeRelated)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    ModeRelated,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_ModeRelated_TA_SpeedProfiles.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

