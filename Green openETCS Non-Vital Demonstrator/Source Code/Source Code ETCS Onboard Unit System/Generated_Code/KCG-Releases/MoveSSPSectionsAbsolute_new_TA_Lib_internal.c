/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSSPSectionsAbsolute_new_TA_Lib_internal.h"

/* TA_Lib_internal::MoveSSPSectionsAbsolute_new */
void MoveSSPSectionsAbsolute_new_TA_Lib_internal(
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_new::ProfileIn */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_new::ProfileOut */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileOut)
{
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_new */
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(ProfileOut, ProfileIn);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, ProfileOut);
    /* 1 */
    MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal(
      i,
      &acc,
      pos_LRBG,
      ProfileOut);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveSSPSectionsAbsolute_new_TA_Lib_internal.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

