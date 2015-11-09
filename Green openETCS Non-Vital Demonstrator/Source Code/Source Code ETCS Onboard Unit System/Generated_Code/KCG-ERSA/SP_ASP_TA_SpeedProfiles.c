/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_ASP_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_ASP */
void SP_ASP_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ASP::reset */kcg_bool reset,
  /* TA_SpeedProfiles::SP_ASP::PacketsIn */ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  /* TA_SpeedProfiles::SP_ASP::ASP */SSP_cat_t_TA_MRSP *ASP)
{
  kcg_copy_SSP_cat_t_TA_MRSP(ASP, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_ASP_TA_SpeedProfiles.c
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

