/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setProbesBalises_xdebugSupport_.h"

#ifndef KCG_USER_DEFINED_INIT
void setProbesBalises_init_xdebugSup(outC_setProbesBalises_xdebugSup *outC)
{
  outC->init = kcg_true;
  outC->bgID = 0;
  outC->baliseInformation.isChanged = kcg_true;
  outC->baliseInformation.bg_id = 0;
  outC->baliseInformation.nid_c = 0;
  outC->baliseInformation.errors.linkedBGError = kcg_true;
  outC->baliseInformation.errors.unlinkedBGError = kcg_true;
  outC->baliseInformation.errors.BG_versionIncompatible = kcg_true;
  outC->baliseInformation.errors.radioSequenceError = kcg_true;
  outC->baliseInformation.errors.tNvContactError = kcg_true;
  outC->baliseInformation.errors.otherTimingError = kcg_true;
  outC->baliseInformation.errors.radioMessageConsistencyError = kcg_true;
  outC->baliseInformation.errors.nid_c = 0;
  outC->baliseInformation.errors.nid_errorbg = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setProbesBalises_reset_xdebugSu(outC_setProbesBalises_xdebugSup *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::setProbesBalises */
void setProbesBalises_xdebugSupport_(
  /* xdebugSupport_Pkg::setProbesBalises::inMsg */ ReceivedMessage_T_Common_Types_ *inMsg,
  /* xdebugSupport_Pkg::setProbesBalises::inErrors */ MSG_Errors_T_Common_Types_Pkg *inErrors,
  outC_setProbesBalises_xdebugSup *outC)
{
  /* xdebugSupport_Pkg::setProbesBalises::changedBG */
  static kcg_bool changedBG;
  /* xdebugSupport_Pkg::setProbesBalises::_L51 */
  static NID_BG _L51;
  
  /* last_init_ck_bgID */ if (outC->init) {
    _L51 = 0;
  }
  else {
    _L51 = outC->bgID;
  }
  /* 1 */ if ((*inMsg).valid & ((*inMsg).source ==
      msrc_Eurobalise_Common_Types_Pk)) {
    changedBG = (*inMsg).BG_Common_Header.nid_bg != _L51;
  }
  else {
    changedBG = kcg_false;
  }
  /* ck_changedBG */ if (changedBG) {
    outC->baliseInformation.isChanged = kcg_true;
    outC->baliseInformation.bg_id = (*inMsg).BG_Common_Header.nid_bg;
    outC->baliseInformation.nid_c = (*inMsg).BG_Common_Header.nid_c;
    kcg_copy_MSG_Errors_T_Common_Ty(&outC->baliseInformation.errors, inErrors);
    outC->bgID = (*inMsg).BG_Common_Header.nid_bg;
  }
  else {
    /* last_init_ck_baliseInfo */ if (outC->init) {
      kcg_copy_probesBalises_T_xdebug(
        &outC->baliseInformation,
        (probesBalises_T_xdebugSupport_P *) &cNoPro_xdebugSupport_Pkg);
    }
    outC->baliseInformation.isChanged = kcg_false;
    outC->bgID = _L51;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setProbesBalises_xdebugSupport_.c
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

