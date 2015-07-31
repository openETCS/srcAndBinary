/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "P42_Dec_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::P42_Dec */
void P42_Dec_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::P42_Dec::P42_in */p42_order_T_MoRC_Pck_Coder_Pkg *P42_in,
  /* MoRC_Pck::Coder_Pkg::P42_Dec::onboardEquipmentIsSleeping */kcg_bool onboardEquipmentIsSleeping,
  /* MoRC_Pck::Coder_Pkg::P42_Dec::P42_out */p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *P42_out)
{
  /* MoRC_Pck::Coder_Pkg::P42_Dec::_L21 */
  static kcg_bool _L21;
  /* MoRC_Pck::Coder_Pkg::P42_Dec::_L31 */
  static kcg_bool _L31;
  
  (*P42_out).useTheShortNumberStoredOnboard =
    cNID_RADIO_useTheShortNumberStoredOnboard_MoRC_Pck_Coder_Pkg ==
    (*P42_in).p42.nid_radio;
  (*P42_out).establishOrderDoesNotRequestToContactAnAcceptingRBC =
    (*P42_in).establishOrderDoesNotRequestToContactAnAcceptingRBC;
  (*P42_out).source = (*P42_in).source;
  (*P42_out).q_dir = (*P42_in).p42.q_dir;
  (*P42_out).q_rbc = (*P42_in).p42.q_rbc;
  (*P42_out).nid_c = (*P42_in).p42.nid_c;
  (*P42_out).nid_rbc = (*P42_in).p42.nid_rbc;
  (*P42_out).nid_radio = (*P42_in).p42.nid_radio;
  _L21 = ((*P42_in).p42.valid & ((*P42_in).p42.q_sleepsession ==
        Q_SLEEPSESSION_Execute_session_establishment_order) &
      onboardEquipmentIsSleeping) | ((*P42_in).p42.valid &
      !onboardEquipmentIsSleeping);
  (*P42_out).terminate = (Q_RBC_Terminate_communication_session ==
      (*P42_in).p42.q_rbc) & _L21;
  _L31 = ((*P42_in).p42.q_rbc == Q_RBC_Establish_communication_session) & _L21;
  (*P42_out).establish = _L31;
  (*P42_out).contactLastKnownRBC = _L31 & ((*P42_in).p42.nid_rbc ==
      cNID_RBC_contactLastKnownRBC_MoRC_Pck_Coder_Pkg);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** P42_Dec_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

