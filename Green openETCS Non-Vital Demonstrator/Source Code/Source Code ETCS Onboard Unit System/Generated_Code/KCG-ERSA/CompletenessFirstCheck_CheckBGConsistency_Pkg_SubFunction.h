/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */
#ifndef _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_
#define _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"
#include "CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
extern void CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::telegramarray_in */TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */Telegram_T_BG_Types_Pkg *lastTelegram,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::inDex */kcg_int *inDex);

#endif /* _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */

