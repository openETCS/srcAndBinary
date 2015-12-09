/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Get_Position_of_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Get_Position_of_LRBG */
L_internal_Type_Obu_BasicTypes_Pkg Get_Position_of_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Get_Position_of_LRBG::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Lib_internal::Get_Position_of_LRBG::balisegroups */ positionedBGs_T_TrainPosition_Types_Pck *balisegroups)
{
  /* TA_Lib_internal::Get_Position_of_LRBG */ positionedBG_T_TrainPosition_Types_Pck mk_struct;
  /* TA_Lib_internal::Get_Position_of_LRBG */ positionedBG_T_TrainPosition_Types_Pck tmp;
  /* TA_Lib_internal::Get_Position_of_LRBG::_L3 */ kcg_bool _L3;
  /* TA_Lib_internal::Get_Position_of_LRBG::_L2 */ kcg_bool _L2;
  /* TA_Lib_internal::Get_Position_of_LRBG::_L1 */ kcg_int _L1;
  /* TA_Lib_internal::Get_Position_of_LRBG::_L5 */ kcg_int _L5;
  /* TA_Lib_internal::Get_Position_of_LRBG::_L6 */ kcg_int _L6;
  /* TA_Lib_internal::Get_Position_of_LRBG::_L9 */ kcg_bool _L9;
  /* TA_Lib_internal::Get_Position_of_LRBG::Position */ L_internal_Type_Obu_BasicTypes_Pkg Position;
  
  /* 1 */ Eval_LRBG_TA_Lib_internal(MessageIn, &_L9, &_L6, &_L5);
  mk_struct.valid = _L9;
  mk_struct.nid_c = _L6;
  mk_struct.nid_bg = _L5;
  mk_struct.q_link = DEFAULT_q_link_TA_Lib_internal;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &mk_struct.location,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &DEFAULT_location_TA_Lib_internal);
  mk_struct.seqNoOnTrack = 0;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &mk_struct.infoFromLinking,
    (infoFromLinking_T_TrainPosition_Types_Pck *)
      &DEFAULT_InfoFromLinking_TA_Lib_internal);
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &mk_struct.infoFromPassing,
    (passedBG_T_BG_Types_Pkg *) &DEFAULT_InfoFromPassing_TA_Lib_internal);
  mk_struct.missed = kcg_false;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &mk_struct,
    balisegroups,
    kcg_true,
    &_L1,
    &_L2,
    &_L3);
  if ((0 <= _L1) & (_L1 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &(*balisegroups)[_L1]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &DEFAULT_positioned_BG_TA_Lib_internal);
  }
  Position = tmp.location.nominal;
  return Position;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Get_Position_of_LRBG_TA_Lib_internal.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

