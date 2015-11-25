/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_new_TA_Lib_internal.h"

/* TA_Lib_internal::MoveGPSectionsAbsolute_new */
void MoveGPSectionsAbsolute_new_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsAbsolute_new::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_new::ProfileOut */ GradientProfile_t_TrackAtlasTypes *ProfileOut)
{
  /* TA_Lib_internal::MoveGPSectionsAbsolute_new */ GradientProfile_t_TrackAtlasTypes acc;
  kcg_int i;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileOut, ProfileIn);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, ProfileOut);
    /* 1 */
    MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal(
      i,
      &acc,
      pos_LRBG,
      ProfileOut);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveGPSectionsAbsolute_new_TA_Lib_internal.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

