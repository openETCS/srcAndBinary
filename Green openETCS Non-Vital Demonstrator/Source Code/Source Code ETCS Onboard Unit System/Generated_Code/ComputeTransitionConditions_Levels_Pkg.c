/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeTransitionConditions_Levels_Pkg.h"

/* Levels_Pkg::ComputeTransitionConditions */
void ComputeTransitionConditions_Levels_Pkg(
  /* Levels_Pkg::ComputeTransitionConditions::current_level */M_LEVEL current_level,
  /* Levels_Pkg::ComputeTransitionConditions::received_L2_L3_MA */kcg_bool received_L2_L3_MA,
  /* Levels_Pkg::ComputeTransitionConditions::TransitionIsSet */kcg_bool TransitionIsSet,
  /* Levels_Pkg::ComputeTransitionConditions::next_level */M_LEVEL next_level,
  /* Levels_Pkg::ComputeTransitionConditions::received_L1_MA */kcg_bool received_L1_MA,
  /* Levels_Pkg::ComputeTransitionConditions::received_target_speed */kcg_bool received_target_speed,
  /* Levels_Pkg::ComputeTransitionConditions::position_reached */kcg_bool position_reached,
  /* Levels_Pkg::ComputeTransitionConditions::ackPending */kcg_bool ackPending,
  /* Levels_Pkg::ComputeTransitionConditions::output_conditions */T_TransitionConditions_Level_And_Mode_Types_Pkg *output_conditions,
  /* Levels_Pkg::ComputeTransitionConditions::TrainTrip */kcg_bool *TrainTrip)
{
  static array_bool_20 tmp;
  static kcg_int i;
  /* Levels_Pkg::ComputeTransitionConditions::L3_To_L1 */
  static kcg_bool L3_To_L1;
  /* Levels_Pkg::ComputeTransitionConditions::L3_To_L0 */
  static kcg_bool L3_To_L0;
  /* Levels_Pkg::ComputeTransitionConditions::_L54 */
  static kcg_bool _L54;
  /* Levels_Pkg::ComputeTransitionConditions::_L94 */
  static kcg_bool _L94;
  /* Levels_Pkg::ComputeTransitionConditions::_L160 */
  static kcg_bool _L160;
  
  tmp[14] = (current_level == M_LEVEL_Level_3) & (next_level ==
      M_LEVEL_Level_2);
  tmp[16] = (current_level == M_LEVEL_Level_NTC_specified_by_NID_NTC) &
    (next_level == M_LEVEL_Level_0);
  tmp[18] = (current_level == M_LEVEL_Level_NTC_specified_by_NID_NTC) &
    (next_level == M_LEVEL_Level_2) & received_L2_L3_MA;
  tmp[19] = (current_level == M_LEVEL_Level_NTC_specified_by_NID_NTC) &
    (next_level == M_LEVEL_Level_3) & received_L2_L3_MA;
  _L160 = received_L1_MA | received_target_speed;
  L3_To_L1 = ((current_level == M_LEVEL_Level_2) | (current_level ==
        M_LEVEL_Level_3)) & (next_level == M_LEVEL_Level_1) & _L160;
  tmp[13] = L3_To_L1;
  _L54 = (current_level == M_LEVEL_Level_0) & (next_level == M_LEVEL_Level_1);
  L3_To_L0 = ((current_level == M_LEVEL_Level_2) | (current_level ==
        M_LEVEL_Level_3)) & (next_level == M_LEVEL_Level_0) & _L160;
  tmp[12] = L3_To_L0;
  _L94 = (current_level == M_LEVEL_Level_NTC_specified_by_NID_NTC) &
    (next_level == M_LEVEL_Level_1);
  tmp[17] = _L94 & _L160;
  tmp[11] = ((current_level == M_LEVEL_Level_2) | (current_level ==
        M_LEVEL_Level_3)) & (next_level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC) & _L160;
  tmp[15] = tmp[11];
  tmp[0] = _L54 & received_L1_MA;
  tmp[1] = (current_level == M_LEVEL_Level_0) & (next_level ==
      M_LEVEL_Level_2) & received_L2_L3_MA;
  tmp[2] = (current_level == M_LEVEL_Level_0) & (next_level ==
      M_LEVEL_Level_3) & received_L2_L3_MA;
  tmp[3] = (current_level == M_LEVEL_Level_0) & (next_level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC);
  tmp[4] = (current_level == M_LEVEL_Level_1) & (next_level ==
      M_LEVEL_Level_0) & _L160;
  tmp[5] = (current_level == M_LEVEL_Level_1) & (next_level == M_LEVEL_Level_2);
  tmp[6] = (current_level == M_LEVEL_Level_1) & (next_level == M_LEVEL_Level_3);
  tmp[7] = (current_level == M_LEVEL_Level_1) & (next_level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC) & _L160;
  tmp[8] = L3_To_L0;
  tmp[9] = L3_To_L1;
  tmp[10] = (current_level == M_LEVEL_Level_2) & (next_level ==
      M_LEVEL_Level_3);
  _L160 = position_reached & TransitionIsSet & !ackPending;
  for (i = 0; i < 20; i++) {
    (*output_conditions)[i] = tmp[i] & _L160;
  }
  *TrainTrip = ((current_level == M_LEVEL_Level_0) & ((next_level ==
          M_LEVEL_Level_2) | (next_level == M_LEVEL_Level_3)) &
      !received_L2_L3_MA) | (_L54 & !received_L1_MA) | ((current_level ==
        M_LEVEL_Level_NTC_specified_by_NID_NTC) & ((next_level ==
          M_LEVEL_Level_2) | (next_level == M_LEVEL_Level_3)) &
      !received_L2_L3_MA) | (_L94 & !received_L1_MA);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ComputeTransitionConditions_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

