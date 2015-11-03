/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "locReachedOrPassed_BasicLocationFunctions_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void locReachedOrPassed_init_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  outC->hit = kcg_true;
  /* 1 */ RisingEdge_init_digital(&outC->_1_Context_1);
  /* 2 */ signChanged_init_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */ signChanged_init_BasicLocationFunctions_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void locReachedOrPassed_reset_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  /* 1 */ RisingEdge_reset_digital(&outC->_1_Context_1);
  /* 2 */ signChanged_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */ signChanged_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* BasicLocationFunctions_Pkg::locReachedOrPassed */
void locReachedOrPassed_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_2 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_1 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L35 */
  static kcg_bool _L35;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L40 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L40;
  
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(loc_2, loc_1, &_L40, &_L35);
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(loc_2, loc_1, &_L40);
  /* 1 */
  signChanged_BasicLocationFunctions_Pkg(
    _L40.nominal + _L40.d_min,
    &outC->Context_1);
  /* 2 */
  signChanged_BasicLocationFunctions_Pkg(
    _L40.nominal + _L40.d_max,
    &outC->Context_2);
  /* 1 */
  RisingEdge_digital(
    (kcg_bool) (_L35 | (outC->Context_1.change & outC->Context_2.change)),
    &outC->_1_Context_1);
  outC->hit = outC->_1_Context_1.RE_Output;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** locReachedOrPassed_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */

