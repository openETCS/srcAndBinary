/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P041_Legacy_TM_specific.h"

/* TM_specific::Read_P041_Legacy */
void Read_P041_Legacy_TM_specific(
  /* TM_specific::Read_P041_Legacy::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P041_Legacy::P041_legacy_out */ P41_LevelTransistionOrders_T_Packet_Types_Pkg *P041_legacy_out)
{
  /* TM_specific::Read_P041_Legacy::_L2 */ P041_OBU_T_TM _L2;
  /* TM_specific::Read_P041_Legacy::_L1 */ kcg_bool _L1;
  
  /* 1 */ Read_P041_TM(Message_IN, &_L1, &_L2);
  /* ck__L1 */ if (_L1) {
    /* 1 */ C_P041_to_legacy_t_TM_conversions(&_L2, P041_legacy_out);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      P041_legacy_out,
      (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
        &DEFAULT_P041_legacy_TM_specific);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P041_Legacy_TM_specific.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

