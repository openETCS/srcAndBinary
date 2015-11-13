/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P042_TM.h"

/* TM::Read_P042 */
void Read_P042_TM(
  /* TM::Read_P042::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P042::received */ kcg_bool *received,
  /* TM::Read_P042::P042_OBU_out */ P42_SessionManagement_T_Packet_ *P042_OBU_out)
{
  /* TM::Read_P042::_L30 */
  static MetadataElement_T_Common_Types_ _L30;
  /* TM::Read_P042::_L5 */
  static CompressedPacketData_T_Common_T _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_interna(
    Message_IN,
    42032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 2 */ C_P042_compr_onboard_TM_convers(&_L5, &_L30, P042_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P042_TM.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

