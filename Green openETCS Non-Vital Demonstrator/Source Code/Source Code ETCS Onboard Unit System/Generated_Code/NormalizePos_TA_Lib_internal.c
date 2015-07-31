/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalizePos_TA_Lib_internal.h"

/* TA_Lib_internal::NormalizePos */
kcg_int NormalizePos_TA_Lib_internal(
  /* TA_Lib_internal::NormalizePos::In */kcg_int In,
  /* TA_Lib_internal::NormalizePos::Value */kcg_int Value)
{
  /* TA_Lib_internal::NormalizePos::Out */
  static kcg_int Out;
  
  if (In < Value) {
    Out = Value;
  }
  else {
    Out = In;
  }
  return Out;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NormalizePos_TA_Lib_internal.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

