/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P058_Legacy_TM_specific.h"

/* TM_specific::Read_P058_Legacy */
void Read_P058_Legacy_TM_specific(
  /* TM_specific::Read_P058_Legacy::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_specific::Read_P058_Legacy::P058_legacy_out */ P58_PositionReportParameters_T_ *P058_legacy_out)
{
  /* TM_specific::Read_P058_Legacy::_L2 */
  static P058_OBU_T_TM _L2;
  /* TM_specific::Read_P058_Legacy::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ Read_P058_TM(Message_IN, &_L1, &_L2);
  /* ck__L1 */ if (_L1) {
    /* 1 */ C_P058_to_legacy_t_TM_conversio(&_L2, P058_legacy_out);
  }
  else {
    kcg_copy_P58_PositionReportPara(
      P058_legacy_out,
      (P58_PositionReportParameters_T_ *) &DEFAULT_P058_legacy_TM_specific);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P058_Legacy_TM_specific.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

