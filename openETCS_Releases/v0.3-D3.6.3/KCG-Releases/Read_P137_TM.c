/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P137_TM.h"

/* TM::Read_P137 */
void Read_P137_TM(
  /* TM::Read_P137::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P137::received */ kcg_bool *received,
  /* TM::Read_P137::P137_OBU_out */ P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P137_OBU_out)
{
  /* TM::Read_P137::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM::Read_P137::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    137032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P137_compr_onboard_TM_conversions(&_L5, &_L30, P137_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P137_TM.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

