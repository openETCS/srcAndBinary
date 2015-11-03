/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _SP_ModeRelated_TA_SpeedProfile
#define _SP_ModeRelated_TA_SpeedProfile

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_SpeedProfiles::SP_ModeRelated */
extern void SP_ModeRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ModeRelated::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_ModeRelated::SP_available */ kcg_bool SP_available,
  /* TA_SpeedProfiles::SP_ModeRelated::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeDataIn */ T_Mode_Level_Level_And_Mode_Typ *ModeDataIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeRelated */ SSP_cat_t_TA_MRSP *ModeRelated);

#endif /* _SP_ModeRelated_TA_SpeedProfile */
/* $**************** KCG Version 6.4 (build i21) ****************
** SP_ModeRelated_TA_SpeedProfiles.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

