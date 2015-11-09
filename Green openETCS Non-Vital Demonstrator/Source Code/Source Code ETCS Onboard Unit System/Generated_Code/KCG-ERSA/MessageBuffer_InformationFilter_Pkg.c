/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MessageBuffer_InformationFilter_Pkg.h"

void MessageBuffer_reset_InformationFilter_Pkg(
  outC_MessageBuffer_InformationFilter_Pkg *outC)
{
  /* 2 */ FIFO_reset_InformationFilter_Pkg_Common_3(&outC->Context_2);
  /* 3 */ FIFO_reset_InformationFilter_Pkg_Common_3(&outC->Context_3);
}

/* InformationFilter_Pkg::MessageBuffer */
void MessageBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromTrain */ReceivedMessage_T_Common_Types_Pkg *inMessageFromTrain,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBuffer */ReceivedMessage_T_Common_Types_Pkg *_2_inMessageFromLevelTransitionBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBufferValid */kcg_bool inMessageFromLevelTransitionBufferValid,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBuffer */ReceivedMessage_T_Common_Types_Pkg *_1_inMessageFromRBCTransitionBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBufferValid */kcg_bool inMessageFromRBCTransitionBufferValid,
  outC_MessageBuffer_InformationFilter_Pkg *outC)
{
  /* InformationFilter_Pkg::MessageBuffer::_L36 */
  static kcg_bool _L36;
  
  /* 3 */
  FIFO_InformationFilter_Pkg_Common_3(
    _2_inMessageFromLevelTransitionBuffer,
    inMessageFromLevelTransitionBufferValid,
    (kcg_bool) !(*inMessageFromTrain).valid,
    &outC->Context_3);
  _L36 = (*inMessageFromTrain).valid | outC->Context_3.outValid;
  /* 2 */
  FIFO_InformationFilter_Pkg_Common_3(
    _1_inMessageFromRBCTransitionBuffer,
    inMessageFromRBCTransitionBufferValid,
    (kcg_bool) !_L36,
    &outC->Context_2);
  outC->outMessageValid = _L36 | outC->Context_2.outValid;
  if ((*inMessageFromTrain).valid) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      inMessageFromTrain);
  }
  else if (outC->Context_3.outValid) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      &outC->Context_3.outData);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      &outC->Context_2.outData);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MessageBuffer_InformationFilter_Pkg.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

