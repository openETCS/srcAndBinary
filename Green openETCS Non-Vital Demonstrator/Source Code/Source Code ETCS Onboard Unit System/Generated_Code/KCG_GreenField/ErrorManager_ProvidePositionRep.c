/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ErrorManager_ProvidePositionRep.h"

/* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager */
void ErrorManager_ProvidePositionRep(
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::BG_LinkingConsistencyError */ kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::LinkedBG_MessageConsistencyError */ kcg_bool LinkedBG_MessageConsistencyErro,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::UnlinkedBG_MessageConsistencyError */ kcg_bool UnlinkedBG_MessageConsistencyEr,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioMessageConsistencyError */ kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioSequenceError */ kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioSafeRadioConnectionError */ kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::SafetyCriticalFailure */ kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::DoubleLinkingError */ kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::DoubleRepositioningError */ kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::errorVector */ array_102250 *errorVector)
{
  (*errorVector)[0].present = BG_LinkingConsistencyError;
  (*errorVector)[0].errorType = M_ERROR_Balise_group_linking_co;
  (*errorVector)[1].present = LinkedBG_MessageConsistencyErro;
  (*errorVector)[1].errorType = M_ERROR_Linked_balise_group_mes;
  (*errorVector)[2].present = UnlinkedBG_MessageConsistencyEr;
  (*errorVector)[2].errorType = M_ERROR_Unlinked_balise_group_m;
  (*errorVector)[3].present = RadioMessageConsistencyError;
  (*errorVector)[3].errorType = M_ERROR_Radio_message_consisten;
  (*errorVector)[4].present = RadioSequenceError;
  (*errorVector)[4].errorType = M_ERROR_Radio_sequence_error;
  (*errorVector)[5].present = RadioSafeRadioConnectionError;
  (*errorVector)[5].errorType = M_ERROR_Radio_safe_radio_connec;
  (*errorVector)[6].present = SafetyCriticalFailure;
  (*errorVector)[6].errorType = M_ERROR_Safety_critical_failure;
  (*errorVector)[7].present = DoubleLinkingError;
  (*errorVector)[7].errorType = M_ERROR_Double_linking_error;
  (*errorVector)[8].present = DoubleRepositioningError;
  (*errorVector)[8].errorType = M_ERROR_Double_repositioning_er;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ErrorManager_ProvidePositionRep.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

