/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"

/* TM_lib_internal::SEND_WriteBaliseMessageHeader */
void SEND_WriteBaliseMessageHeader_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::HeadersIn */ Metadata_T_Common_Types_Pkg *HeadersIn,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewHeader */ MetadataElement_T_Common_Types_Pkg *NewHeader,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::HeadersOut */ Metadata_T_Common_Types_Pkg *HeadersOut,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewStartAddr */ kcg_int *NewStartAddr,
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::NewEndAddr */ kcg_int *NewEndAddr)
{
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader */
  static kcg_int acc;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader */
  static MetadataElement_T_Common_Types_Pkg tmp;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _L3;
  
  _L7 = 0;
  for (i = 0; i < 30; i++) {
    acc = _L7;
    /* 1 */
    SEND_FindSlot_TM_lib_internal(
      acc,
      &(*HeadersIn)[i],
      (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_Headers_TM[i],
      &cond_iterw,
      &_L7);
    _L3 = i + 1;
    if (!cond_iterw) {
      break;
    }
  }
  /* 1 */ if (_L7 == 0) {
    *NewStartAddr = 0;
  }
  else {
    *NewStartAddr = _L7 + 1;
  }
  *NewEndAddr = *NewStartAddr + ((*NewHeader).endAddress -
      (*NewHeader).startAddress);
  kcg_copy_Metadata_T_Common_Types_Pkg(HeadersOut, HeadersIn);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp, NewHeader);
  tmp.startAddress = *NewStartAddr;
  tmp.endAddress = *NewEndAddr;
  if ((0 <= _L3 - 1) & (_L3 - 1 < 30)) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&(*HeadersOut)[_L3 - 1], &tmp);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_WriteBaliseMessageHeader_TM_lib_internal.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

