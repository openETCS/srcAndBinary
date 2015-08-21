/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "decP42_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::decP42 */
void decP42_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::decP42::inMessage */genMessage_T_MoRC_Pck *inMessage,
  /* MoRC_Pck::Coder_Pkg::decP42::onboardEquipmentIsSleeping */kcg_bool onboardEquipmentIsSleeping,
  /* MoRC_Pck::Coder_Pkg::decP42::p42_EstablishOrTerminate */p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *p42_EstablishOrTerminate)
{
  /* MoRC_Pck::Coder_Pkg::decP42::_L26 */
  static kcg_bool _L26;
  /* MoRC_Pck::Coder_Pkg::decP42::_L29 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L29;
  /* MoRC_Pck::Coder_Pkg::decP42::_L65 */
  static kcg_bool _L65;
  
  (*p42_EstablishOrTerminate).establishOrderDoesNotRequestToContactAnAcceptingRBC =
    kcg_true;
  (*p42_EstablishOrTerminate).source = (*inMessage).source;
  /* 1 */ Read_P042_TM(&(*inMessage).packets, &_L65, &_L29);
  (*p42_EstablishOrTerminate).contactLastKnownRBC =
    cNID_RBC_contactLastKnownRBC_MoRC_Pck_Coder_Pkg == _L29.nid_rbc;
  (*p42_EstablishOrTerminate).useTheShortNumberStoredOnboard =
    cNID_RADIO_useTheShortNumberStoredOnboard_MoRC_Pck_Coder_Pkg ==
    _L29.nid_radio;
  (*p42_EstablishOrTerminate).q_dir = _L29.q_dir;
  (*p42_EstablishOrTerminate).q_rbc = _L29.q_rbc;
  (*p42_EstablishOrTerminate).nid_c = _L29.nid_c;
  (*p42_EstablishOrTerminate).nid_rbc = _L29.nid_rbc;
  (*p42_EstablishOrTerminate).nid_radio = _L29.nid_radio;
  _L26 = (*inMessage).valid & _L65 & _L29.valid;
  _L65 = ((_L29.q_sleepsession ==
        Q_SLEEPSESSION_Execute_session_establishment_order) &
      onboardEquipmentIsSleeping) | !onboardEquipmentIsSleeping;
  (*p42_EstablishOrTerminate).establish =
    (Q_RBC_Establish_communication_session == _L29.q_rbc) & _L26 & _L65;
  (*p42_EstablishOrTerminate).terminate =
    (Q_RBC_Terminate_communication_session == _L29.q_rbc) & _L26 & _L65;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** decP42_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

