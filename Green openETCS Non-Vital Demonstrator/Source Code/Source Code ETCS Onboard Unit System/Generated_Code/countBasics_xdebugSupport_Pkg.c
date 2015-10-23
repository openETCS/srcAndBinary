/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBasics_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::countBasics */
void countBasics_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countBasics::accu */ kcg_int accu,
  /* xdebugSupport_Pkg::countBasics::element */ MetadataElement_T_Common_Types_Pkg *element,
  /* xdebugSupport_Pkg::countBasics::continue */ kcg_bool *_1_continue,
  /* xdebugSupport_Pkg::countBasics::count */ kcg_int *count)
{
  /* xdebugSupport_Pkg::countBasics */
  static kcg_int tmp;
  
  /* 1 */ if ((*element).valid) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  *count = accu + tmp;
  *_1_continue = (*element).nid_packet > 0;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countBasics_xdebugSupport_Pkg.c
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

