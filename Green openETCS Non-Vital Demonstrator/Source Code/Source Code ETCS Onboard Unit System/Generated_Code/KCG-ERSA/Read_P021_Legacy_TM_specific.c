/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P021_Legacy_TM_specific.h"

/* TM_specific::Read_P021_Legacy */
void Read_P021_Legacy_TM_specific(
  /* TM_specific::Read_P021_Legacy::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P021_Legacy::P015_legacy_out */ P21_GradientProfiles_T_Packet_Types_Pkg *P015_legacy_out)
{
  /* TM_specific::Read_P021_Legacy::_L2 */ P021_OBU_T_TM _L2;
  /* TM_specific::Read_P021_Legacy::_L1 */ kcg_bool _L1;
  
  /* 1 */ Read_P021_TM(Message_IN, &_L1, &_L2);
  /* ck__L1 */ if (_L1) {
    /* 1 */ C_P021_to_legacy_t_TM_conversions(&_L2, P015_legacy_out);
  }
  else {
    kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
      P015_legacy_out,
      (P21_GradientProfiles_T_Packet_Types_Pkg *)
        &DEFAULT_P021_legacy_TM_specific);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P021_Legacy_TM_specific.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

