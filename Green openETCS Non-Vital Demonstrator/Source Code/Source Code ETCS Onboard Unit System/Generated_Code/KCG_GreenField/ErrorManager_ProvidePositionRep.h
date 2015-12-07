/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _ErrorManager_ProvidePositionRe
#define _ErrorManager_ProvidePositionRe

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager */
extern void ErrorManager_ProvidePositionRep(
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::BG_LinkingConsistencyError */ kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::LinkedBG_MessageConsistencyError */ kcg_bool LinkedBG_MessageConsistencyErro,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::UnlinkedBG_MessageConsistencyError */ kcg_bool UnlinkedBG_MessageConsistencyEr,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioMessageConsistencyError */ kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioSequenceError */ kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioSafeRadioConnectionError */ kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::SafetyCriticalFailure */ kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::DoubleLinkingError */ kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::DoubleRepositioningError */ kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::errorVector */ array_100337 *errorVector);

#endif /* _ErrorManager_ProvidePositionRe */
/* $**************** KCG Version 6.4 (build i21) ****************
** ErrorManager_ProvidePositionRep.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

