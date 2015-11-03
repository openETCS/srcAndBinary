/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MessageData_TM_lib_interna.h"

/* TM_lib_internal::SEND_MessageData */
void SEND_MessageData_TM_lib_interna(
  /* TM_lib_internal::SEND_MessageData::StartAddress */ kcg_int StartAddress,
  /* TM_lib_internal::SEND_MessageData::EndAddress */ kcg_int EndAddress,
  /* TM_lib_internal::SEND_MessageData::DataIn */ CompressedPacketData_T_Common_T *DataIn,
  /* TM_lib_internal::SEND_MessageData::DataElementIn */ CompressedPacketData_T_Common_T *DataElementIn,
  /* TM_lib_internal::SEND_MessageData::DataOut */ CompressedPacketData_T_Common_T *DataOut)
{
  /* TM_lib_internal::SEND_MessageData */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_lib_internal::SEND_MessageData::_L402 */
  static kcg_int _L402;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    SEND_WriteBaliseDataElement_TM_(
      i,
      (*DataIn)[i],
      DataElementIn,
      StartAddress,
      EndAddress,
      &cond_iterw,
      &(*DataOut)[i]);
    _L402 = i + 1;
    if (!cond_iterw) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L402; i < 500; i++) {
    (*DataOut)[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_MessageData_TM_lib_interna.c
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

