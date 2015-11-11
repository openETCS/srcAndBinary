/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_ASP_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_ASP */
void SP_ASP_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ASP::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_ASP::PacketsIn */ ReceivedMessage_T_Common_Types_ *PacketsIn,
  /* TA_SpeedProfiles::SP_ASP::ASP */ SSP_cat_t_TA_MRSP *ASP)
{
  kcg_copy_SSP_cat_t_TA_MRSP(ASP, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_ASP_TA_SpeedProfiles.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

