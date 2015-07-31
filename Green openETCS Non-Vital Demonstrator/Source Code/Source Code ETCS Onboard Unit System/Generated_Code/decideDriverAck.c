/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "decideDriverAck.h"

/* decideDriverAck */
kcg_bool decideDriverAck(
  /* decideDriverAck::newLevel */M_LEVEL newLevel,
  /* decideDriverAck::oldLevel */M_LEVEL oldLevel)
{
  /* decideDriverAck::toL1 */
  static kcg_bool toL1;
  /* decideDriverAck::_L12 */
  static kcg_bool _L12;
  /* decideDriverAck::_L13 */
  static kcg_bool _L13;
  /* decideDriverAck::_L14 */
  static kcg_bool _L14;
  /* decideDriverAck::_L90 */
  static kcg_bool _L90;
  /* decideDriverAck::driverAck */
  static kcg_bool driverAck;
  
  _L13 = oldLevel == M_LEVEL_Level_2;
  _L14 = oldLevel == M_LEVEL_Level_3;
  _L12 = oldLevel == M_LEVEL_Level_1;
  _L90 = M_LEVEL_Level_NTC_specified_by_NID_NTC == oldLevel;
  toL1 = _L90 & ((newLevel == M_LEVEL_Level_1) | (newLevel == M_LEVEL_Level_2) |
      (newLevel == M_LEVEL_Level_3));
  driverAck = ((M_LEVEL_Level_0 == newLevel) & (_L12 | _L13 | _L14 |
        (oldLevel == M_LEVEL_Level_NTC_specified_by_NID_NTC))) | toL1 | toL1 |
    toL1 | ((M_LEVEL_Level_NTC_specified_by_NID_NTC == newLevel) & (_L90 |
        _L12 | _L13 | _L14 | (oldLevel == M_LEVEL_Level_0)));
  return driverAck;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** decideDriverAck.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

