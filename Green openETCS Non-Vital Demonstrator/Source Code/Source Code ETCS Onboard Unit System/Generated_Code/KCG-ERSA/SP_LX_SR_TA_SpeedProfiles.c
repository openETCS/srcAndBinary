/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_LX_SR_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_LX_SR */
void SP_LX_SR_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_LX_SR::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_LX_SR::PacketsIn */ ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  /* TA_SpeedProfiles::SP_LX_SR::LX_SR */ SSP_cat_t_TA_MRSP *LX_SR)
{
  kcg_copy_SSP_cat_t_TA_MRSP(LX_SR, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_LX_SR_TA_SpeedProfiles.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

