/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BoolVect2Int_digital_30.h"

/* digital::BoolVect2Int */
kcg_int BoolVect2Int_digital_30(
  /* digital::BoolVect2Int::BV */ array_bool_30 *BV)
{
  static kcg_int i;
  /* digital::BoolVect2Int::Out */
  static kcg_int Out;
  
  Out = 0;
  for (i = 0; i < 30; i++) {
    /* 2 */ if ((*BV)[i]) {
      Out = 1 + Out * 2;
    }
    else {
      Out = 0 + Out * 2;
    }
  }
  return Out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BoolVect2Int_digital_30.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

