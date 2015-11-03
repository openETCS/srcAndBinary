/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSSPSectionsAbsolute_TA_Lib_.h"

/* TA_Lib_internal::MoveSSPSectionsAbsolute */
void MoveSSPSectionsAbsolute_TA_Lib_(
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::ProfileIn */ StaticSpeedProfile_t_TrackAtlas *ProfileIn,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::ProfileOut */ StaticSpeedProfile_t_TrackAtlas *ProfileOut)
{
  /* TA_Lib_internal::MoveSSPSectionsAbsolute */
  static StaticSpeedProfile_t_TrackAtlas acc;
  static kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_T(ProfileOut, ProfileIn);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_T(&acc, ProfileOut);
    /* 1 */
    MoveSSPSectionsAbsolute_Loop_TA(
      i,
      &acc,
      msg_prvLRBG,
      msg_LRBG,
      pos_LRBG,
      pos_prvLRBG,
      ProfileOut);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveSSPSectionsAbsolute_TA_Lib_.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

