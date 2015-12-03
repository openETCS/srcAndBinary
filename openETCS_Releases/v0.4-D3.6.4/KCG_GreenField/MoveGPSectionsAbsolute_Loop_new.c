/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_Loop_new.h"

/* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new */
void MoveGPSectionsAbsolute_Loop_new(
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new::i */ kcg_int i,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new::ProfileIn */ GradientProfile_t_TrackAtlasTyp *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new::ProfileOut */ GradientProfile_t_TrackAtlasTyp *ProfileOut)
{
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new */
  static Gradient_section_t_TrackAtlasTy tmp1;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new */
  static L_internal_Type_Obu_BasicTypes_ tmp;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new::_L6 */
  static Gradient_section_t_TrackAtlasTy _L6;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_Tra(&_L6, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_Tra(
      &_L6,
      (Gradient_section_t_TrackAtlasTy *) &DEFAULT_GradientSection_TrackAt);
  }
  kcg_copy_GradientProfile_t_Trac(ProfileOut, ProfileIn);
  kcg_copy_Gradient_section_t_Tra(&tmp1, &_L6);
  tmp1.Loc_LRBG = 0;
  /* 1 */ if (_L6.valid) {
    tmp = pos_LRBG;
  }
  else {
    tmp = 0;
  }
  tmp1.Loc_Absolute = _L6.Loc_Absolute + tmp;
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_Tra(&(*ProfileOut)[i], &tmp1);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveGPSectionsAbsolute_Loop_new.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

