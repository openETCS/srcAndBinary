/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int2BoolVect_digital_30.h"

/* digital::Int2BoolVect */
void Int2BoolVect_digital_30(
  /* digital::Int2BoolVect::In */ kcg_int In,
  /* digital::Int2BoolVect::BV */ DMI_Available_Menu_int_T_DATA *BV)
{
  /* digital::Int2BoolVect */ kcg_int acc;
  kcg_int i;
  /* digital::Int2BoolVect::_L4 */ DMI_Available_Menu_int_T_DATA _L4;
  /* digital::Int2BoolVect::Acc */ kcg_int Acc;
  
  Acc = In;
  for (i = 0; i < 30; i++) {
    acc = Acc;
    /* 1 */ Int2BoolVectElt_digital(acc, &Acc, &_L4[i]);
  }
  for (i = 0; i < 30; i++) {
    (*BV)[i] = _L4[29 - i];
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Int2BoolVect_digital_30.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

