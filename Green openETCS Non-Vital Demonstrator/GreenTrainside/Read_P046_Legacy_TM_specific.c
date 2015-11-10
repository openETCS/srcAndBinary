/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P046_Legacy_TM_specific.h"

/* TM_specific::Read_P046_Legacy */
void Read_P046_Legacy_TM_specific(
  /* TM_specific::Read_P046_Legacy::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_specific::Read_P046_Legacy::P046_legacy_out */ _8_P46_ConditionalLevelTransiti *P046_legacy_out)
{
  /* TM_specific::Read_P046_Legacy::_L2 */
  static P046_OBU_T_TM _L2;
  /* TM_specific::Read_P046_Legacy::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ Read_P046_TM(Message_IN, &_L1, &_L2);
  /* ck__L1 */ if (_L1) {
    /* 1 */ C_P046_to_legacy_t_TM_conversio(&_L2, P046_legacy_out);
  }
  else {
    kcg_copy__8_P46_ConditionalLeve(
      P046_legacy_out,
      (_8_P46_ConditionalLevelTransiti *) &DEFAULT_P046_legacy_TM_specific);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P046_Legacy_TM_specific.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

