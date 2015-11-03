/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P003V1_TM_baseline2.h"

/* TM_baseline2::Read_P003V1 */
void Read_P003V1_TM_baseline2(
  /* TM_baseline2::Read_P003V1::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_baseline2::Read_P003V1::received */ kcg_bool *received,
  /* TM_baseline2::Read_P003V1::P003V1_OBU_out */ P003V1_OBU_T_TM_baseline2 *P003V1_OBU_out)
{
  /* TM_baseline2::Read_P003V1::_L5 */
  static CompressedPacketData_T_Common_T _L5;
  /* TM_baseline2::Read_P003V1::_L30 */
  static MetadataElement_T_Common_Types_ _L30;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_interna(
    Message_IN,
    3016000,
    kcg_true,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P003V1_compr_onboard_TM_conve(&_L5, &_L30, P003V1_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P003V1_TM_baseline2.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

