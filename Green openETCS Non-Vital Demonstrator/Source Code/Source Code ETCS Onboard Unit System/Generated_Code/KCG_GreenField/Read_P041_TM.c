/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P041_TM.h"

/* TM::Read_P041 */
void Read_P041_TM(
  /* TM::Read_P041::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P041::received */ kcg_bool *received,
  /* TM::Read_P041::P041_OBU_out */ P041_OBU_T_TM *P041_OBU_out)
{
  /* TM::Read_P041::_L30 */
  static MetadataElement_T_Common_Types_ _L30;
  /* TM::Read_P041::_L5 */
  static CompressedPacketData_T_Common_T _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_interna(
    Message_IN,
    41032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P041_compr_onboard_TM_convers(&_L5, &_L30, P041_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P041_TM.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

