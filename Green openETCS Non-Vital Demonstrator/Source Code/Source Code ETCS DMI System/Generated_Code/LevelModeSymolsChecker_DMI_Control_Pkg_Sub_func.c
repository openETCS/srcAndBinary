/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker */
kcg_bool LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::GroupIndex */kcg_int GroupIndex,
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::SymbolIndex */kcg_int SymbolIndex)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L21 */
  static kcg_bool _L21;
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::_L23 */
  static kcg_bool _L23;
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::CheckResult */
  static kcg_bool CheckResult;
  
  _L23 = kcg_false;
  for (i = 0; i < 5; i++) {
    tmp = _L23;
    /* 2 */
    CheckElem_iterator_DMI_Control_Pkg_Utils(
      tmp,
      ArrayOfIndex_YellowLevelSymbols_DMI_Control_Pkg[i],
      SymbolIndex,
      &_L21,
      &_L23);
    if (!_L21) {
      break;
    }
  }
  _L21 = kcg_false;
  for (i = 0; i < 8; i++) {
    tmp1 = _L21;
    /* 1 */
    CheckElem_iterator_DMI_Control_Pkg_Utils(
      tmp1,
      ArrayOfIndex_YellowModeSymbols_DMI_Control_Pkg[i],
      SymbolIndex,
      &tmp,
      &_L21);
    if (!tmp) {
      break;
    }
  }
  CheckResult = ((GroupIndex == cLevelSymbol_IconGroup_DMI_Control_Pkg) &
      _L23) | (_L21 & (GroupIndex == cModeSymbol_IconGroup_DMI_Control_Pkg));
  return CheckResult;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

