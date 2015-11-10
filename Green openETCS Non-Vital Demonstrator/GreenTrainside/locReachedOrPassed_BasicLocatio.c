/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "locReachedOrPassed_BasicLocatio.h"

#ifndef KCG_USER_DEFINED_INIT
void locReachedOrPassed_init_BasicLo(outC_locReachedOrPassed_BasicLo *outC)
{
  outC->hit = kcg_true;
  /* 1 */ RisingEdge_init_digital(&outC->_1_Context_1);
  /* 2 */ signChanged_init_BasicLocationF(&outC->Context_2);
  /* 1 */ signChanged_init_BasicLocationF(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void locReachedOrPassed_reset_BasicL(outC_locReachedOrPassed_BasicLo *outC)
{
  /* 1 */ RisingEdge_reset_digital(&outC->_1_Context_1);
  /* 2 */ signChanged_reset_BasicLocation(&outC->Context_2);
  /* 1 */ signChanged_reset_BasicLocation(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* BasicLocationFunctions_Pkg::locReachedOrPassed */
void locReachedOrPassed_BasicLocatio(
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_2 */ LocWithInAcc_T_Obu_BasicTypes_P *loc_2,
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_1 */ LocWithInAcc_T_Obu_BasicTypes_P *loc_1,
  outC_locReachedOrPassed_BasicLo *outC)
{
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L35 */
  static kcg_bool _L35;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L40 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L40;
  
  /* 1 */ overlapOf_2_Locations_BasicLoca(loc_2, loc_1, &_L40, &_L35);
  /* 1 */ sub_2_distances_BasicLocationFu(loc_2, loc_1, &_L40);
  /* 1 */
  signChanged_BasicLocationFuncti(_L40.nominal + _L40.d_min, &outC->Context_1);
  /* 2 */
  signChanged_BasicLocationFuncti(_L40.nominal + _L40.d_max, &outC->Context_2);
  /* 1 */
  RisingEdge_digital(
    (kcg_bool) (_L35 | (outC->Context_1.change & outC->Context_2.change)),
    &outC->_1_Context_1);
  outC->hit = outC->_1_Context_1.RE_Output;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** locReachedOrPassed_BasicLocatio.c
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

