/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sessionCmd_2_p42_v2_MoRC_Pck_Su.h"

/* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2 */
void sessionCmd_2_p42_v2_MoRC_Pck_Su(
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::sessionCmd */ sessionCmd_T_RCM_Session_Types_ *sessionCmd,
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::valid */ kcg_bool *valid,
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_Msg *p42_SessionManagement)
{
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2 */
  static Q_DIR tmp1;
  /* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2 */
  static Q_SLEEPSESSION tmp;
  
  (*p42_SessionManagement).q_rbc = (*sessionCmd).q_rbc;
  (*p42_SessionManagement).nid_c = (*sessionCmd).nid_c;
  (*p42_SessionManagement).nid_RBC = (*sessionCmd).nid_rbc;
  (*p42_SessionManagement).nid_radio = (*sessionCmd).nid_radio;
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*p42_SessionManagement).origin,
    &(*sessionCmd).origin);
  *valid = (*sessionCmd).valid;
  (*p42_SessionManagement).valid = *valid;
  /* 1 */ if ((*sessionCmd).p42.valid) {
    (*p42_SessionManagement).msgSrc = (*sessionCmd).p42.msgSrc;
    tmp1 = (*sessionCmd).p42.q_dir;
    tmp = (*sessionCmd).p42.q_sleepsession;
  }
  else {
    (*p42_SessionManagement).msgSrc = msrc_OBU_Common_Types_Pkg;
    tmp1 = Q_DIR_Both_directions;
    tmp = Q_SLEEPSESSION_Execute_session_;
  }
  (*p42_SessionManagement).q_dir = tmp1;
  (*p42_SessionManagement).q_sleepsession = tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sessionCmd_2_p42_v2_MoRC_Pck_Su.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

