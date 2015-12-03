/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_PBD_SR_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_PBD_SR */
void SP_PBD_SR_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_PBD_SR::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_PBD_SR::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_SpeedProfiles::SP_PBD_SR::PBD_SR */ SSP_cat_t_TA_MRSP *PBD_SR)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    PBD_SR,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_PBD_SR_TA_SpeedProfiles.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

