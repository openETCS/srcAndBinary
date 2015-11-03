/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_TA_Lib_i.h"

/* TA_Lib_internal::MoveGPSectionsAbsolute */
void MoveGPSectionsAbsolute_TA_Lib_i(
  /* TA_Lib_internal::MoveGPSectionsAbsolute::ProfileIn */ GradientProfile_t_TrackAtlasTyp *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::ProfileOut */ GradientProfile_t_TrackAtlasTyp *ProfileOut)
{
  /* TA_Lib_internal::MoveGPSectionsAbsolute */
  static GradientProfile_t_TrackAtlasTyp acc;
  static kcg_int i;
  
  kcg_copy_GradientProfile_t_Trac(ProfileOut, ProfileIn);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_Trac(&acc, ProfileOut);
    /* 1 */
    MoveGPSectionsAbsolute_Loop_TA_(
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
** MoveGPSectionsAbsolute_TA_Lib_i.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

