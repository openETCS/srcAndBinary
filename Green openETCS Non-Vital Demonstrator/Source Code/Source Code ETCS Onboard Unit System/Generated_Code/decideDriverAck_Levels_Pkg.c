/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "decideDriverAck_Levels_Pkg.h"

/* Levels_Pkg::decideDriverAck */
kcg_bool decideDriverAck_Levels_Pkg(
  /* Levels_Pkg::decideDriverAck::newLevel */M_LEVEL newLevel,
  /* Levels_Pkg::decideDriverAck::oldLevel */M_LEVEL oldLevel)
{
  /* Levels_Pkg::decideDriverAck::toL1 */
  static kcg_bool toL1;
  /* Levels_Pkg::decideDriverAck::_L12 */
  static kcg_bool _L12;
  /* Levels_Pkg::decideDriverAck::_L13 */
  static kcg_bool _L13;
  /* Levels_Pkg::decideDriverAck::_L14 */
  static kcg_bool _L14;
  /* Levels_Pkg::decideDriverAck::driverAck */
  static kcg_bool driverAck;
  
  _L13 = oldLevel == M_LEVEL_Level_2;
  _L14 = oldLevel == M_LEVEL_Level_3;
  _L12 = oldLevel == M_LEVEL_Level_1;
  toL1 = (M_LEVEL_Level_NTC_specified_by_NID_NTC == oldLevel) & ((newLevel ==
        M_LEVEL_Level_1) | (newLevel == M_LEVEL_Level_2) | (newLevel ==
        M_LEVEL_Level_3));
  driverAck = ((M_LEVEL_Level_0 == newLevel) & (_L12 | _L13 | _L14 |
        (oldLevel == M_LEVEL_Level_NTC_specified_by_NID_NTC))) | toL1 | toL1 |
    toL1 | ((M_LEVEL_Level_NTC_specified_by_NID_NTC == newLevel) & (_L12 |
        _L13 | _L14 | (oldLevel == M_LEVEL_Level_0)));
  return driverAck;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** decideDriverAck_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

