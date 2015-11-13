/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P021_TM.h"

/* TM::Read_P021 */
void Read_P021_TM(
  /* TM::Read_P021::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P021::received */ kcg_bool *received,
  /* TM::Read_P021::P021_OBU_out */ P021_OBU_T_TM *P021_OBU_out)
{
  /* TM::Read_P021::_L30 */
  static MetadataElement_T_Common_Types_ _L30;
  /* TM::Read_P021::_L5 */
  static CompressedPacketData_T_Common_T _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_interna(
    Message_IN,
    21032000,
    kcg_true,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P021_compr_onboard_TM_convers(&_L5, &_L30, P021_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P021_TM.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

