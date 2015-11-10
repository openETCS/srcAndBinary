/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_Loop_TA_.h"

/* TA_Lib_internal::MoveGPSectionsAbsolute_Loop */
void MoveGPSectionsAbsolute_Loop_TA_(
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::i */ kcg_int i,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::ProfileIn */ GradientProfile_t_TrackAtlasTyp *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::ProfileOut */ GradientProfile_t_TrackAtlasTyp *ProfileOut)
{
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop */
  static Gradient_section_t_TrackAtlasTy tmp1;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop */
  static kcg_int tmp;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L6 */
  static Gradient_section_t_TrackAtlasTy _L6;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_Tra(&_L6, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_Tra(
      &_L6,
      (Gradient_section_t_TrackAtlasTy *) &DEFAULT_GradientSection_TrackAt);
  }
  IfBlock1_clock = msg_LRBG & !msg_prvLRBG;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    else_clock_IfBlock1 = !msg_LRBG & msg_prvLRBG;
  }
  kcg_copy_GradientProfile_t_Trac(ProfileOut, ProfileIn);
  kcg_copy_Gradient_section_t_Tra(&tmp1, &_L6);
  tmp1.Loc_LRBG = 0;
  /* 1 */ if (_L6.valid) {
    /* ck_IfBlock1 */ if (IfBlock1_clock) {
      tmp = pos_LRBG;
    }
    else /* ck_anon_activ */ if (else_clock_IfBlock1) {
      tmp = pos_prvLRBG;
    }
    else {
      tmp = 0;
    }
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
** MoveGPSectionsAbsolute_Loop_TA_.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

