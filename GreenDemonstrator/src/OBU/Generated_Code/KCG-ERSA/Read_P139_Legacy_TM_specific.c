/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P139_Legacy_TM_specific.h"

/* TM_specific::Read_P139_Legacy */
void Read_P139_Legacy_TM_specific(
  /* TM_specific::Read_P139_Legacy::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P139_Legacy::P139_legacy_out */ P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *P139_legacy_out)
{
  /* TM_specific::Read_P139_Legacy::_L2 */ P139_OBU_T_TM _L2;
  /* TM_specific::Read_P139_Legacy::_L1 */ kcg_bool _L1;
  
  /* 1 */ Read_P139_TM(Message_IN, &_L1, &_L2);
  /* ck__L1 */ if (_L1) {
    /* 1 */ C_P139_to_legacy_t_TM_conversions(&_L2, P139_legacy_out);
  }
  else {
    kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
      P139_legacy_out,
      (P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *)
        &DEFAULT_P139_legacy_TM);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P139_Legacy_TM_specific.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

