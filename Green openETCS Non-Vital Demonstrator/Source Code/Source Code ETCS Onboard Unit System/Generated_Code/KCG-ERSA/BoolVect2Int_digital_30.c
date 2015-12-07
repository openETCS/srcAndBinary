/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BoolVect2Int_digital_30.h"

/* digital::BoolVect2Int */
kcg_int BoolVect2Int_digital_30(
  /* digital::BoolVect2Int::BV */ DMI_Available_Menu_int_T_DATA *BV)
{
  kcg_int i;
  /* digital::BoolVect2Int::Out */ kcg_int Out;
  
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
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */

