/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_InformationFilter_Pkg_Common_3.h"

void FIFO_reset_InformationFilter_Pkg_Common_3(
  outC_FIFO_InformationFilter_Pkg_Common_3 *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* InformationFilter_Pkg::Common::FIFO */
void FIFO_InformationFilter_Pkg_Common_3(
  /* InformationFilter_Pkg::Common::FIFO::inData */ReceivedMessage_T_Common_Types_Pkg *inData,
  /* InformationFilter_Pkg::Common::FIFO::inValid */kcg_bool inValid,
  /* InformationFilter_Pkg::Common::FIFO::inReady */kcg_bool inReady,
  outC_FIFO_InformationFilter_Pkg_Common_3 *outC)
{
  static kcg_int tmp1;
  static kcg_int tmp;
  static array__108337 tmp2;
  /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L19 */
  static array__108337 _L19_IfBlock1;
  /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L9 */
  static kcg_int _L9_IfBlock1;
  /* InformationFilter_Pkg::Common::FIFO::_L44 */
  static kcg_bool _L44;
  
  for (tmp1 = 0; tmp1 < 3; tmp1++) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &tmp2[tmp1],
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  if (outC->init1) {
    _L9_IfBlock1 = 0;
  }
  else {
    _L9_IfBlock1 = outC->_L32;
  }
  if (_L9_IfBlock1 <= 3) {
    outC->size = _L9_IfBlock1;
  }
  else {
    outC->size = 3;
  }
  if (inValid) {
    for (tmp1 = 0; tmp1 < 3; tmp1++) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_L19_IfBlock1[tmp1],
        (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    }
    if (outC->init) {
      _L9_IfBlock1 = 0;
      kcg_copy_array__108337(&outC->_L4_IfBlock1, &_L19_IfBlock1);
    }
    else {
      _L9_IfBlock1 = outC->_L20_IfBlock1;
    }
    if ((0 <= _L9_IfBlock1) & (_L9_IfBlock1 < 3)) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L4_IfBlock1[_L9_IfBlock1],
        inData);
    }
    kcg_copy_array__108337(&outC->buffer, &outC->_L4_IfBlock1);
    outC->_L20_IfBlock1 = (_L9_IfBlock1 + 1) % 3;
    tmp1 = 1;
    outC->init = kcg_false;
  }
  else {
    if (outC->init1) {
      kcg_copy_array__108337(&outC->buffer, &tmp2);
    }
    tmp1 = 0;
  }
  if (outC->init1) {
    outC->init1 = kcg_false;
    _L9_IfBlock1 = 0;
  }
  else {
    _L9_IfBlock1 = outC->_L50;
  }
  if ((0 <= _L9_IfBlock1) & (_L9_IfBlock1 < 3)) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outData,
      &outC->buffer[_L9_IfBlock1]);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outData,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  _L44 = inReady & (outC->size > 0);
  if (_L44) {
    tmp = - 1;
  }
  else {
    tmp = 0;
  }
  outC->_L32 = outC->size + tmp1 + tmp;
  if (inValid & (outC->size == 3)) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  if (_L44) {
    tmp1 = 1;
    outC->outValid = kcg_true;
  }
  else {
    tmp1 = 0;
    outC->outValid = kcg_false;
  }
  outC->_L50 = (_L9_IfBlock1 + tmp1 + tmp) % 3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_InformationFilter_Pkg_Common_3.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

