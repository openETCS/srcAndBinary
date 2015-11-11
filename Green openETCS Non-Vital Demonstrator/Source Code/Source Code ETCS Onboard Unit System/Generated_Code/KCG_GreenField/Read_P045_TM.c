/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P045_TM.h"

/* TM::Read_P045 */
void Read_P045_TM(
  /* TM::Read_P045::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P045::received */ kcg_bool *received,
  /* TM::Read_P045::P045_OBU_out */ P45_RadioNetworkRegistration_T_ *P045_OBU_out)
{
  /* TM::Read_P045::_L30 */
  static MetadataElement_T_Common_Types_ _L30;
  /* TM::Read_P045::_L5 */
  static CompressedPacketData_T_Common_T _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_interna(
    Message_IN,
    45032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P045_compr_onboard_TM_convers(&_L5, &_L30, P045_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P045_TM.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

