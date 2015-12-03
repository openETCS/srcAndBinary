/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P015_TM.h"

/* TM::Read_P015 */
void Read_P015_TM(
  /* TM::Read_P015::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P015::received */ kcg_bool *received,
  /* TM::Read_P015::P015_OBU_out */ P015_OBU_T_TM *P015_OBU_out)
{
  /* TM::Read_P015::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM::Read_P015::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    15032000,
    kcg_true,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P015_compr_onboard_TM_conversions(&_L5, &_L30, P015_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P015_TM.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

