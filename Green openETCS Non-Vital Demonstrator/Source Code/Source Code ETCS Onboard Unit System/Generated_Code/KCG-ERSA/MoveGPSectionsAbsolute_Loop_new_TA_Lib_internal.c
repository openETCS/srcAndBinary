/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal.h"

/* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new */
void MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new::i */ kcg_int i,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new::ProfileOut */ GradientProfile_t_TrackAtlasTypes *ProfileOut)
{
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new */ Gradient_section_t_TrackAtlasTypes tmp1;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new */ L_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new::_L6 */ Gradient_section_t_TrackAtlasTypes _L6;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L6, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L6,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileOut, ProfileIn);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp1, &_L6);
  tmp1.Loc_LRBG = 0;
  /* 1 */ if (_L6.valid) {
    tmp = pos_LRBG;
  }
  else {
    tmp = 0;
  }
  tmp1.Loc_Absolute = _L6.Loc_Absolute + tmp;
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&(*ProfileOut)[i], &tmp1);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

