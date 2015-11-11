/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "overlapOf_2_Locations_BasicLoca.h"

/* BasicLocationFunctions_Pkg::overlapOf_2_Locations */
void overlapOf_2_Locations_BasicLoca(
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc_2 */ LocWithInAcc_T_Obu_BasicTypes_P *loc_2,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc_1 */ LocWithInAcc_T_Obu_BasicTypes_P *loc_1,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc */ LocWithInAcc_T_Obu_BasicTypes_P *loc,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::overlap */ kcg_bool *overlap)
{
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L10 */
  static kcg_int _L10;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L19 */
  static kcg_int _L19;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L17 */
  static kcg_int _L17;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L11 */
  static kcg_int _L11;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L24 */
  static kcg_int _L24;
  
  _L24 = (*loc_1).d_max + (*loc_1).nominal;
  _L19 = (*loc_2).d_max + (*loc_2).nominal;
  _L11 = (*loc_1).d_min + (*loc_1).nominal;
  _L17 = (*loc_2).d_min + (*loc_2).nominal;
  /* 1 */ if (_L24 <= _L19) {
    _L10 = _L24;
  }
  else {
    _L10 = _L19;
  }
  /* 2 */ if (_L11 >= _L17) {
    _L19 = _L11;
  }
  else {
    _L19 = _L17;
  }
  *overlap = _L10 >= _L19;
  _L24 = (_L10 - _L19) / 2 + _L19;
  (*loc).nominal = _L24;
  (*loc).d_min = _L19 - _L24;
  (*loc).d_max = _L10 - _L24;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** overlapOf_2_Locations_BasicLoca.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

