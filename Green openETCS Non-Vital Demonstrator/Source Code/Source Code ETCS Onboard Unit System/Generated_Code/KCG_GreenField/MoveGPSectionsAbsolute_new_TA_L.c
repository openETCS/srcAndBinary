/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_new_TA_L.h"

/* TA_Lib_internal::MoveGPSectionsAbsolute_new */
void MoveGPSectionsAbsolute_new_TA_L(
  /* TA_Lib_internal::MoveGPSectionsAbsolute_new::ProfileIn */ GradientProfile_t_TrackAtlasTyp *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_new::ProfileOut */ GradientProfile_t_TrackAtlasTyp *ProfileOut)
{
  /* TA_Lib_internal::MoveGPSectionsAbsolute_new */
  static GradientProfile_t_TrackAtlasTyp acc;
  static kcg_int i;
  
  kcg_copy_GradientProfile_t_Trac(ProfileOut, ProfileIn);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_Trac(&acc, ProfileOut);
    /* 1 */ MoveGPSectionsAbsolute_Loop_new(i, &acc, pos_LRBG, ProfileOut);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveGPSectionsAbsolute_new_TA_L.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

