/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "connectingToTheRBC_v2_MoRC_Pck_.h"

/* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2 */
void connectingToTheRBC_v2_MoRC_Pck_(
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::connectionCmd */ mobileConnectionCmd_T_RCM_Types *connectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::mobileConnectionContext */ mobileConnectionContext_T_RCM_T *mobileConnectionContext,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::mobileRegistrationStatus */ mobileRegistrationContext_T_RCM *mobileRegistrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::mobileConnectionCmd */ mobileConnectionCmd_T_RCM_Types *mobileConnectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::rejectOrderToContactRBC_or_RIU */ kcg_bool *rejectOrderToContactRBC_or_RIU)
{
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::connect */
  static kcg_bool connect;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::disconnect */
  static kcg_bool disconnect;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::enterHole */
  static kcg_bool enterHole;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::leaveHole */
  static kcg_bool leaveHole;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L358 */
  static kcg_bool _L358;
  /* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2::_L377 */
  static kcg_bool _L377;
  
  (*mobileConnectionCmd).mobileDeviceNo =
    (*mobileConnectionContext).mobileDeviceNo;
  (*mobileConnectionCmd).nid_radio = (*connectionCmd).nid_radio;
  kcg_copy_mobileConnectionContex(connectionStatus, mobileConnectionContext);
  _L358 = mrs_registered_RCM_Types_Pkg == (*mobileRegistrationStatus).status;
  _L377 = (*mobileRegistrationStatus).valid & (*mobileConnectionContext).valid &
    (*connectionCmd).valid;
  enterHole = _L358 & _L377;
  connect = enterHole & ((*connectionCmd).action == mca_connect_RCM_Types_Pkg);
  disconnect = enterHole & ((*connectionCmd).action ==
      mca_disconnect_RCM_Types_Pkg);
  enterHole = _L377 & ((*connectionCmd).action ==
      mca_expectRadioHole_RCM_Types_P);
  leaveHole = _L377 & ((*connectionCmd).action ==
      mca_unexpectRadioHole_RCM_Types);
  (*mobileConnectionCmd).valid = connect | disconnect | enterHole | leaveHole;
  *rejectOrderToContactRBC_or_RIU = !_L358 & (*mobileRegistrationStatus).valid &
    (*mobileConnectionContext).valid;
  /* ck_connect */ if (connect) {
    (*mobileConnectionCmd).action = mca_connect_RCM_Types_Pkg;
  }
  else /* ck_anon_activ */ if (disconnect) {
    (*mobileConnectionCmd).action = mca_disconnect_RCM_Types_Pkg;
  }
  else /* ck_anon_activ */ if (enterHole) {
    (*mobileConnectionCmd).action = mca_expectRadioHole_RCM_Types_P;
  }
  else /* ck_anon_activ */ if (leaveHole) {
    (*mobileConnectionCmd).action = mca_unexpectRadioHole_RCM_Types;
  }
  else {
    (*mobileConnectionCmd).action = mca_nop_RCM_Types_Pkg;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** connectingToTheRBC_v2_MoRC_Pck_.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

