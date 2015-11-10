/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Square_mathext_V_internal_real_.h"

/* mathext::Square */
kcg_real Square_mathext_V_internal_real_(
  /* mathext::Square::Square_In */ kcg_real Square_In)
{
  /* mathext::Square::Square_Out */
  static kcg_real Square_Out;
  
  Square_Out = Square_In * Square_In;
  return Square_Out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Square_mathext_V_internal_real_.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

