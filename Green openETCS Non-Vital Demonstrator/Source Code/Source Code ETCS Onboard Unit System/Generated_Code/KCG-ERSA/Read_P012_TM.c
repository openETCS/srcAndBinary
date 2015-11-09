/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P012_TM.h"

/* TM::Read_P012 */
void Read_P012_TM(
  /* TM::Read_P012::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P012::received */kcg_bool *received,
  /* TM::Read_P012::P012_OBU_out */P012_OBU_T_TM *P012_OBU_out)
{
  /* TM::Read_P012::_L5 */
  static array_int_500 _L5;
  /* TM::Read_P012::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    12032000,
    kcg_true,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P012_compr_onboard_TM_conversions(&_L5, &_L30, P012_OBU_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P012_TM.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

