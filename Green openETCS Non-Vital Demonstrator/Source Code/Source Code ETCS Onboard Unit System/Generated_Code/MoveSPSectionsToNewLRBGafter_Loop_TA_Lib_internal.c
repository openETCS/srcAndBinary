/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSPSectionsToNewLRBGafter_Loop_TA_Lib_internal.h"

/* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop */
void MoveSPSectionsToNewLRBGafter_Loop_TA_Lib_internal(
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::i */kcg_int i,
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::ProfileIn */SSP_cat_t_TA_MRSP *ProfileIn,
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::FirstElement */kcg_int FirstElement,
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::ProfileOut */SSP_cat_t_TA_MRSP *ProfileOut)
{
  static SSP_section_t_TA_MRSP tmp;
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L6 */
  static SSP_section_t_TA_MRSP _L6;
  
  if ((0 <= FirstElement + i) & (FirstElement + i < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&_L6, &(*ProfileIn)[FirstElement + i]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &_L6,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  kcg_copy_SSP_cat_t_TA_MRSP(ProfileOut, ProfileIn);
  kcg_copy_SSP_section_t_TA_MRSP(&tmp, &_L6);
  tmp.target = /* 2 */
    NormalizePos_TA_Lib_internal(_L6.target - Distance_2LRBGs, 0);
  if ((0 <= i) & (i < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&(*ProfileOut)[i], &tmp);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveSPSectionsToNewLRBGafter_Loop_TA_Lib_internal.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

