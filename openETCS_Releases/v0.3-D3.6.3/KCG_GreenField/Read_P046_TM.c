/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P046_TM.h"

/* TM::Read_P046 */
void Read_P046_TM(
  /* TM::Read_P046::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P046::received */ kcg_bool *received,
  /* TM::Read_P046::P046_OBU_out */ P046_OBU_T_TM *P046_OBU_out)
{
  /* TM::Read_P046::_L30 */
  static MetadataElement_T_Common_Types_ _L30;
  /* TM::Read_P046::_L5 */
  static CompressedPacketData_T_Common_T _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_interna(
    Message_IN,
    46032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P046_compr_onboard_TM_convers(&_L5, &_L30, P046_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P046_TM.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

