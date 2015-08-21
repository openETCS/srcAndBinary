/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsToNewLRBGafter_TA_Lib_internal.h"

/* TA_Lib_internal::MoveGPSectionsToNewLRBGafter */
void MoveGPSectionsToNewLRBGafter_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::ProfileOut */GradientProfile_t_TrackAtlasTypes *ProfileOut)
{
  static GradientProfile_t_TrackAtlasTypes tmp;
  static kcg_int i;
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::_L1 */
  static kcg_int _L1;
  
  _L1 = /* 1 */
    FindFirstRelevantGPForNewLRBG_TA_Lib_internal(ProfileIn, Distance_2LRBGs);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileOut, ProfileIn);
  for (i = 0; i < 33; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, ProfileOut);
    /* 1 */
    MoveGPSectionsToNewLRBGafter_Loop_TA_Lib_internal(
      i,
      &tmp,
      _L1,
      Distance_2LRBGs,
      ProfileOut);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveGPSectionsToNewLRBGafter_TA_Lib_internal.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

