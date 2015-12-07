/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_p45_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_p45 */
void dec_p45_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_p45::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_p45::p45_radioNetworkRegistration */ p45_radioNetworkRegistration_T_ *p45_radioNetworkRegistration)
{
  /* RCM_Utils_Pkg::decoders::dec_p45::_L69 */
  static P45_RadioNetworkRegistration_T_ _L69;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L68 */
  static kcg_bool _L68;
  
  (*p45_radioNetworkRegistration).msgSrc = (*msg_in).source;
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*p45_radioNetworkRegistration).origin,
    &(*msg_in).sendingRBC);
  /* 1 */ Read_P045_TM(&(*msg_in).packets, &_L68, &_L69);
  (*p45_radioNetworkRegistration).valid = (*msg_in).valid & _L68 & _L69.valid;
  (*p45_radioNetworkRegistration).q_dir = _L69.q_dir;
  (*p45_radioNetworkRegistration).nid_mn = _L69.nid_mn;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dec_p45_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

