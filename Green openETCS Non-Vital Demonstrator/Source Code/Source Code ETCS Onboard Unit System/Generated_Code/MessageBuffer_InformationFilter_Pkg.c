/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
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
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBuffer */ReceivedMessage_T_Common_Types_Pkg *inMessageFromLevelTransitionBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBufferValid */kcg_bool inMessageFromLevelTransitionBufferValid,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBuffer */ReceivedMessage_T_Common_Types_Pkg *inMessageFromRBCTransitionBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBufferValid */kcg_bool inMessageFromRBCTransitionBufferValid,
  outC_MessageBuffer_InformationFilter_Pkg *outC)
{
  /* InformationFilter_Pkg::MessageBuffer::_L36 */
  static kcg_bool _L36;
  
  /* 3 */
  FIFO_InformationFilter_Pkg_Common_3(
    inMessageFromLevelTransitionBuffer,
    inMessageFromLevelTransitionBufferValid,
    (kcg_bool) !(*inMessageFromTrain).valid,
    &outC->Context_3);
  _L36 = (*inMessageFromTrain).valid | outC->Context_3.outValid;
  /* 2 */
  FIFO_InformationFilter_Pkg_Common_3(
    inMessageFromRBCTransitionBuffer,
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
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

