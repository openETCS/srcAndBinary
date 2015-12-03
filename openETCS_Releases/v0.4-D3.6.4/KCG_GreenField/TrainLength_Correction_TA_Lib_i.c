/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainLength_Correction_TA_Lib_i.h"

/* TA_Lib_internal::TrainLength_Correction */
L_internal_Type_Obu_BasicTypes_ TrainLength_Correction_TA_Lib_i(
  /* TA_Lib_internal::TrainLength_Correction::Static_Speed_Profile */ StaticSpeedProfile_t_TrackAtlas *Static_Speed_Profile,
  /* TA_Lib_internal::TrainLength_Correction::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  /* TA_Lib_internal::TrainLength_Correction::i */ kcg_int i,
  /* TA_Lib_internal::TrainLength_Correction::v_static */ V_internal_Type_Obu_BasicTypes_ v_static,
  /* TA_Lib_internal::TrainLength_Correction::distance */ L_internal_Type_Obu_BasicTypes_ distance)
{
  /* TA_Lib_internal::TrainLength_Correction */
  static StaticSpeedSection_t_TrackAtlas tmp;
  /* TA_Lib_internal::TrainLength_Correction::corrected_distance */
  static L_internal_Type_Obu_BasicTypes_ corrected_distance;
  
  if ((0 <= i - 1) & (i - 1 < 50)) {
    kcg_copy_StaticSpeedSection_t_T(&tmp, &(*Static_Speed_Profile)[i - 1]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_T(
      &tmp,
      (StaticSpeedSection_t_TrackAtlas *) &DEFAULT_SSP_section_TA_SSP);
  }
  /* 1 */ if ((635 != v_static) & (v_static > tmp.v_static)) {
    corrected_distance = train_length + distance;
  }
  else {
    corrected_distance = distance;
  }
  return corrected_distance;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainLength_Correction_TA_Lib_i.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

