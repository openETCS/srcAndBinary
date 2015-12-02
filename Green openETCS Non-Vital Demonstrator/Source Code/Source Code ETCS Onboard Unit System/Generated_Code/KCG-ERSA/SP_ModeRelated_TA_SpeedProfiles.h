/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:26
*************************************************************$ */
#ifndef _SP_ModeRelated_TA_SpeedProfiles_H_
#define _SP_ModeRelated_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_SpeedProfiles::SP_ModeRelated */
extern void SP_ModeRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ModeRelated::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_ModeRelated::SP_available */ kcg_bool SP_available,
  /* TA_SpeedProfiles::SP_ModeRelated::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeDataIn */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeDataIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeRelated */ SSP_cat_t_TA_MRSP *ModeRelated);

#endif /* _SP_ModeRelated_TA_SpeedProfiles_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SP_ModeRelated_TA_SpeedProfiles.h
** Generation date: 2015-12-02T15:32:26
*************************************************************$ */

