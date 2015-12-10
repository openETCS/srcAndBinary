/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void maintainingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->_L133.valid = kcg_true;
  outC->_L133.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L133.nid_c = 0;
  outC->_L133.nid_rbc = 0;
  outC->_L133.nid_radio = 0;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


void maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2 */
void maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::prevSessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_maintaining_RCM_Session_Types_Pkg;
  /* 1 */ if ((*prevSessionStatus).valid) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L133,
      prevSessionStatus);
  }
  else /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L133,
      prevSessionStatus);
  }
  outC->init = kcg_false;
  outC->sessionStatus.nid_c = outC->_L133.nid_c;
  outC->sessionStatus.nid_rbc = outC->_L133.nid_rbc;
  outC->sessionStatus.nid_radio = outC->_L133.nid_radio;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

