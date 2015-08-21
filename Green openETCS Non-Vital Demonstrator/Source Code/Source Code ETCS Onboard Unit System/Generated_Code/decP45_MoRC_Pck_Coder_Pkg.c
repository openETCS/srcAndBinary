/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "decP45_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::decP45 */
void decP45_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::decP45::inMessage */genMessage_T_MoRC_Pck *inMessage,
  /* MoRC_Pck::Coder_Pkg::decP45::p45_radioNetworkRegistration */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *p45_radioNetworkRegistration)
{
  /* MoRC_Pck::Coder_Pkg::decP45::_L69 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L69;
  /* MoRC_Pck::Coder_Pkg::decP45::_L68 */
  static kcg_bool _L68;
  
  /* 1 */ Read_P045_TM(&(*inMessage).packets, &_L68, &_L69);
  (*p45_radioNetworkRegistration).valid = (*inMessage).valid & _L68 &
    _L69.valid;
  (*p45_radioNetworkRegistration).q_dir = _L69.q_dir;
  (*p45_radioNetworkRegistration).nid_mn = _L69.nid_mn;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** decP45_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

