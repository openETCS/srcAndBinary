/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P139_TM.h"

/* TM::Read_P139 */
void Read_P139_TM(
  /* TM::Read_P139::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P139::received */ kcg_bool *received,
  /* TM::Read_P139::P139_OBU_out */ P139_OBU_T_TM *P139_OBU_out)
{
  /* TM::Read_P139::_L30 */
  static MetadataElement_T_Common_Types_ _L30;
  /* TM::Read_P139::_L5 */
  static CompressedPacketData_T_Common_T _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_interna(
    Message_IN,
    139032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P139_compr_onboard_TM_convers(&_L5, &_L30, P139_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P139_TM.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

