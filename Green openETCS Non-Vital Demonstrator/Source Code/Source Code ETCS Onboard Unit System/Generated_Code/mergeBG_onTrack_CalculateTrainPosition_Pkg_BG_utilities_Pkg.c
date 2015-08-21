/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
void mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::overrun */kcg_bool *overrun)
{
  static positionedBGs_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L2 */
  static kcg_bool _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L1 */
  static kcg_int _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L5 */
  static kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L4 */
  static kcg_int _L4;
  
  /* 2 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BG,
    BGs_in,
    (*BG).valid,
    &_L1,
    &_L2,
    &_L3);
  /* 1 */
  indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BG,
    BGs_in,
    (*BG).valid,
    &_L4,
    &_L5,
    &_L6);
  /* 1 */
  deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BGs_in,
    _L1,
    (kcg_bool) ((_L1 != _L4) & _L2 & _L3 & _L6),
    &tmp);
  /* 1 */
  insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BG,
    &tmp,
    _L4,
    (kcg_bool) ((*BG).valid & _L6),
    BGs_out,
    overrun);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

