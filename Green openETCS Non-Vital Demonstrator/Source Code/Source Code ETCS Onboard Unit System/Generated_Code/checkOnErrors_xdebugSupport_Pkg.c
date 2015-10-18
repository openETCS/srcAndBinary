/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkOnErrors_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::checkOnErrors */
void checkOnErrors_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::checkOnErrors::errors */ MSG_Errors_T_Common_Types_Pkg *errors,
  /* xdebugSupport_Pkg::checkOnErrors::radioMsgError */ kcg_bool *radioMsgError,
  /* xdebugSupport_Pkg::checkOnErrors::baliseError */ kcg_bool *baliseError)
{
  *radioMsgError = (*errors).otherTimingError |
    (*errors).radioMessageConsistencyError | (*errors).tNvContactError |
    (*errors).radioSequenceError;
  *baliseError = (*errors).BG_versionIncompatible | (*errors).linkedBGError |
    (*errors).unlinkedBGError;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkOnErrors_xdebugSupport_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

