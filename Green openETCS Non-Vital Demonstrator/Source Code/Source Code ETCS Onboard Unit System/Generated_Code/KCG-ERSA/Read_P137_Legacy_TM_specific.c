/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P137_Legacy_TM_specific.h"

/* TM_specific::Read_P137_Legacy */
void Read_P137_Legacy_TM_specific(
  /* TM_specific::Read_P137_Legacy::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P137_Legacy::P137_legacy_out */ P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P137_legacy_out)
{
  /* TM_specific::Read_P137_Legacy::_L1 */ kcg_bool _L1;
  
  /* 1 */ Read_P137_TM(Message_IN, &_L1, P137_legacy_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P137_Legacy_TM_specific.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

