/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P138_TM.h"

/* TM::Read_P138 */
void Read_P138_TM(
  /* TM::Read_P138::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P138::received */ kcg_bool *received,
  /* TM::Read_P138::P138_OBU_out */ P138_OBU_T_TM *P138_OBU_out)
{
  /* TM::Read_P138::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM::Read_P138::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    138032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P138_compr_onboard_TM_conversions(&_L5, &_L30, P138_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P138_TM.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

