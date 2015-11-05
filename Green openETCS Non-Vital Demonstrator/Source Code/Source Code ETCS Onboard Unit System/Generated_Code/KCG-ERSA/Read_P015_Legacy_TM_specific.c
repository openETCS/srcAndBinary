/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P015_Legacy_TM_specific.h"

/* TM_specific::Read_P015_Legacy */
void Read_P015_Legacy_TM_specific(
  /* TM_specific::Read_P015_Legacy::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P015_Legacy::P015_legacy_out */ P15_Level23MovementAuthorities_T_Packet_Types_Pkg *P015_legacy_out)
{
  /* TM_specific::Read_P015_Legacy::_L2 */
  static P015_OBU_T_TM _L2;
  /* TM_specific::Read_P015_Legacy::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ Read_P015_TM(Message_IN, &_L1, &_L2);
  /* ck__L1 */ if (_L1) {
    /* 1 */ C_P015_to_legacy_t_TM_conversions(&_L2, P015_legacy_out);
  }
  else {
    kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
      P015_legacy_out,
      (P15_Level23MovementAuthorities_T_Packet_Types_Pkg *)
        &DEFAULT_P015_legacy_TM_specific);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P015_Legacy_TM_specific.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

