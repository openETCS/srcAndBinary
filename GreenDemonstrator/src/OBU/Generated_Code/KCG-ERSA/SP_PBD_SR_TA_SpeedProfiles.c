/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_PBD_SR_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_PBD_SR */
void SP_PBD_SR_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_PBD_SR::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_PBD_SR::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_PBD_SR::PBD_SR */ SSP_cat_t_TA_MRSP *PBD_SR)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    PBD_SR,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_PBD_SR_TA_SpeedProfiles.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */
