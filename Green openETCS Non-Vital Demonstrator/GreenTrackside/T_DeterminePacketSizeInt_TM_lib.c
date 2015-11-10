/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_DeterminePacketSizeInt_TM_lib.h"

/* TM_lib_internal::T_DeterminePacketSizeInt */
kcg_int T_DeterminePacketSizeInt_TM_lib(
  /* TM_lib_internal::T_DeterminePacketSizeInt::n_iter */ kcg_int n_iter,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_body */ kcg_int size_body,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_section */ kcg_int size_section)
{
  /* TM_lib_internal::T_DeterminePacketSizeInt::p_size */
  static kcg_int p_size;
  
  p_size = size_body + n_iter * size_section;
  return p_size;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_DeterminePacketSizeInt_TM_lib.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

