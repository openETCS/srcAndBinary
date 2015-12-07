/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSSPSectionsAbsolute_Loop_ne.h"

/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new */
void MoveSSPSectionsAbsolute_Loop_ne(
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new::i */ kcg_int i,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new::ProfileIn */ StaticSpeedProfile_t_TrackAtlas *ProfileIn,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new::ProfileOut */ StaticSpeedProfile_t_TrackAtlas *ProfileOut)
{
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new */
  static StaticSpeedSection_t_TrackAtlas tmp1;
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new */
  static L_internal_Type_Obu_BasicTypes_ tmp;
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new::_L6 */
  static StaticSpeedSection_t_TrackAtlas _L6;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_T(&_L6, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_T(
      &_L6,
      (StaticSpeedSection_t_TrackAtlas *) &DEFAULT_StaticSpeedSection_Trac);
  }
  kcg_copy_StaticSpeedProfile_t_T(ProfileOut, ProfileIn);
  kcg_copy_StaticSpeedSection_t_T(&tmp1, &_L6);
  tmp1.d_static_LRBG = 0;
  /* 1 */ if (_L6.valid) {
    tmp = pos_LRBG;
  }
  else {
    tmp = 0;
  }
  tmp1.d_static_abs = _L6.d_static_abs + tmp;
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_T(&(*ProfileOut)[i], &tmp1);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveSSPSectionsAbsolute_Loop_ne.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

