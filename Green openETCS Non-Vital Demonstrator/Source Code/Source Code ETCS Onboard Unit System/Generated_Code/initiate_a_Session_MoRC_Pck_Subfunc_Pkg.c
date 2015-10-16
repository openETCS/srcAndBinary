/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiate_a_Session_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void initiate_a_Session_init_MoRC_Pck_Subfunc_Pkg(
  outC_initiate_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->initiate_a_communicationSession_Request = kcg_true;
  outC->communicationSessionInitiatedByOBU_ = kcg_true;
  outC->communicationSessionInitiatedFromTrackside_ = kcg_true;
  outC->init = kcg_true;
  outC->rem_mode = M_MODE_Full_Supervision;
}
#endif /* KCG_USER_DEFINED_INIT */


void initiate_a_Session_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiate_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::initiate_a_Session */
void initiate_a_Session_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::initiateRequest_fromOnboardEquipment */ kcg_bool initiateRequest_fromOnboardEquipment,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::initiateRequest_fromRBC */ kcg_bool initiateRequest_fromRBC,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::initiateRequest_fromRadio_InfillUnit */ kcg_bool initiateRequest_fromRadio_InfillUnit,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::m38_initiationOfACommunicationSession */ kcg_bool m38_initiationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::level */ M_LEVEL level,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::atStartOfMission */ kcg_bool atStartOfMission,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::establishSessionOrderedFromTrackside */ kcg_bool establishSessionOrderedFromTrackside,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::modeChangeHasToBeReportedToRBC */ kcg_bool modeChangeHasToBeReportedToRBC,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::driverHasManuallyChangedLevel */ kcg_bool driverHasManuallyChangedLevel,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::trainFrontReachesEndOfAnnouncedRadioHole */ kcg_bool trainFrontReachesEndOfAnnouncedRadioHole,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::prevSessionTerminatedDueToLossOfSafeRadioConnection */ kcg_bool prevSessionTerminatedDueToLossOfSafeRadioConnection,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::startOfMissionProcedureCompleted */ kcg_bool startOfMissionProcedureCompleted,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::NoCommunicationSessionEstablished */ kcg_bool NoCommunicationSessionEstablished,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::initiateEstablishingNewSessionRequest */ kcg_bool initiateEstablishingNewSessionRequest,
  outC_initiate_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session */
  static kcg_bool tmp1;
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session */
  static M_MODE tmp;
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::_L11 */
  static kcg_bool _L11;
  
  _L11 = (level == M_LEVEL_Level_3) | (level == M_LEVEL_Level_2);
  switch (mode) {
    case M_MODE_Full_Supervision :
      tmp1 = kcg_true;
      break;
    case M_MODE_On_Sight :
      tmp1 = kcg_true;
      break;
    case M_MODE_Staff_Responsible :
      tmp1 = kcg_true;
      break;
    case M_MODE_Shunting :
      tmp1 = kcg_true;
      break;
    case M_MODE_Trip :
      tmp1 = kcg_true;
      break;
    case M_MODE_Limited_Supervision :
      tmp1 = kcg_true;
      break;
    case M_MODE_National_System :
      tmp1 = kcg_true;
      break;
    case M_MODE_Reversing :
      tmp1 = kcg_true;
      break;
    
    default :
      tmp1 = kcg_false;
  }
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    tmp = M_MODE_System_Failure;
  }
  else {
    tmp = outC->rem_mode;
  }
  outC->initiate_a_communicationSession_Request =
    m38_initiationOfACommunicationSession |
    initiateRequest_fromOnboardEquipment | initiateRequest_fromRBC |
    ((atStartOfMission & _L11) | establishSessionOrderedFromTrackside | (_L11 &
        tmp1 & (mode != tmp) & modeChangeHasToBeReportedToRBC) | (_L11 &
        driverHasManuallyChangedLevel) |
      trainFrontReachesEndOfAnnouncedRadioHole |
      prevSessionTerminatedDueToLossOfSafeRadioConnection | (_L11 &
        startOfMissionProcedureCompleted & NoCommunicationSessionEstablished) |
      initiateEstablishingNewSessionRequest);
  outC->communicationSessionInitiatedByOBU_ =
    (trainFrontReachesEndOfAnnouncedRadioHole |
      initiateRequest_fromOnboardEquipment) &
    outC->initiate_a_communicationSession_Request;
  outC->communicationSessionInitiatedFromTrackside_ =
    outC->initiate_a_communicationSession_Request & (initiateRequest_fromRBC |
      initiateRequest_fromRadio_InfillUnit |
      establishSessionOrderedFromTrackside |
      m38_initiationOfACommunicationSession);
  outC->rem_mode = mode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** initiate_a_Session_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

