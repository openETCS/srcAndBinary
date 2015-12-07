/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSSPSectionsAbsolute_new_TA_.h"

/* TA_Lib_internal::MoveSSPSectionsAbsolute_new */
void MoveSSPSectionsAbsolute_new_TA_(
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_new::ProfileIn */ StaticSpeedProfile_t_TrackAtlas *ProfileIn,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_new::ProfileOut */ StaticSpeedProfile_t_TrackAtlas *ProfileOut)
{
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_new */
  static StaticSpeedProfile_t_TrackAtlas acc;
  static kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_T(ProfileOut, ProfileIn);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_T(&acc, ProfileOut);
    /* 1 */ MoveSSPSectionsAbsolute_Loop_ne(i, &acc, pos_LRBG, ProfileOut);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveSSPSectionsAbsolute_new_TA_.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

