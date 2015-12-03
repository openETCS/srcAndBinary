/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"

/* TM_lib_internal::SEND_WriteBaliseDataElement */
void SEND_WriteBaliseDataElement_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteBaliseDataElement::Index */ kcg_int Index,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::DataIn */ kcg_int DataIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::ElementIn */ CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::StartAddress */ kcg_int StartAddress,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::EndAddress */ kcg_int EndAddress,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::Cont */ kcg_bool *Cont,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::DataOut */ kcg_int *DataOut)
{
  *Cont = EndAddress >= Index;
  /* 1 */ if (*Cont & (Index >= StartAddress)) {
    if ((0 <= Index - StartAddress) & (Index - StartAddress < 500)) {
      *DataOut = (*ElementIn)[Index - StartAddress];
    }
    else {
      *DataOut = 0;
    }
  }
  else {
    *DataOut = DataIn;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_WriteBaliseDataElement_TM_lib_internal.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

