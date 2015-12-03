/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P138_Legacy_TM_specific.h"

/* TM_specific::Read_P138_Legacy */
void Read_P138_Legacy_TM_specific(
  /* TM_specific::Read_P138_Legacy::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P138_Legacy::P138_legacy_out */ P138_ReversingAreaInformation_T_Packet_Types_Pkg *P138_legacy_out)
{
  /* TM_specific::Read_P138_Legacy::_L2 */
  static P138_OBU_T_TM _L2;
  /* TM_specific::Read_P138_Legacy::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ Read_P138_TM(Message_IN, &_L1, &_L2);
  /* ck__L1 */ if (_L1) {
    /* 1 */ C_P138_to_legacy_t_TM_conversions(&_L2, P138_legacy_out);
  }
  else {
    kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
      P138_legacy_out,
      (P138_ReversingAreaInformation_T_Packet_Types_Pkg *)
        &DEFAULT_P138_legacy_TM);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P138_Legacy_TM_specific.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

