/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P057_TM.h"

/* TM::Read_P057 */
void Read_P057_TM(
  /* TM::Read_P057::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P057::received */ kcg_bool *received,
  /* TM::Read_P057::P057_OBU_out */ P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *P057_OBU_out)
{
  /* TM::Read_P057::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM::Read_P057::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    57032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P057_compr_onboard_TM_conversions(&_L5, &_L30, P057_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P057_TM.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

