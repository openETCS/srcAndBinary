/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_InformationFilter_Pkg_Common.h"

void TransitionBuffer_reset_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC)
{
  outC->init = kcg_true;
  /* 1 */ count_down_reset_digital(&outC->Context_1);
  /* 1 */ FIFO_reset_InformationFilter_Pkg_Common_3(&outC->_1_Context_1);
}

/* InformationFilter_Pkg::Common::TransitionBuffer */
void TransitionBuffer_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::TransitionBuffer::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inStoreMessage */kcg_bool inStoreMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inFlushMessages */kcg_bool inFlushMessages,
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC)
{
  static kcg_bool tmp1;
  static kcg_int tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = 0;
  }
  else {
    tmp = outC->_L10;
  }
  if (tmp > 0) {
    tmp1 = kcg_true;
  }
  else {
    tmp1 = kcg_false;
  }
  /* 1 */
  FIFO_InformationFilter_Pkg_Common_3(
    inMessage,
    inStoreMessage,
    tmp1,
    &outC->_1_Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outMessage,
    &outC->_1_Context_1.outData);
  outC->outMessageAvailable = outC->_1_Context_1.outValid;
  /* 1 */
  count_down_digital(
    inFlushMessages,
    outC->_1_Context_1.size,
    &outC->Context_1);
  outC->_L10 = outC->Context_1.cpt;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransitionBuffer_InformationFilter_Pkg_Common.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

