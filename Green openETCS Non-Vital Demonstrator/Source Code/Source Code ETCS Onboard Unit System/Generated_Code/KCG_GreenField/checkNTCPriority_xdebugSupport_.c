/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkNTCPriority_xdebugSupport_.h"

/* xdebugSupport_Pkg::checkNTCPriority */
kcg_bool checkNTCPriority_xdebugSupport_(
  /* xdebugSupport_Pkg::checkNTCPriority::p41 */ P41_LevelTransistionOrders_T_Pa *p41)
{
  /* xdebugSupport_Pkg::checkNTCPriority::isNTC */
  static kcg_bool isNTC;
  
  isNTC = (*p41)[0].m_leveltr == M_LEVELTR_Level_NTC_specified_b;
  return isNTC;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkNTCPriority_xdebugSupport_.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

