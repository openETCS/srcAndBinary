/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_write_only_Inf.h"

/* InformationFilter_Pkg::TransitionBuffer_write_only */
void TransitionBuffer_write_only_Inf(
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Buffer_In */ TransitionBuffer_T_InformationF *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Stacksize_old */ kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Message_In */ ReceivedMessage_T_Common_Types_ *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Reset */ kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Buffer_Out */ TransitionBuffer_T_InformationF *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Message_out */ ReceivedMessage_T_Common_Types_ *Message_out)
{
  /* InformationFilter_Pkg::TransitionBuffer_write_only */
  static array_100401 tmp;
  /* InformationFilter_Pkg::TransitionBuffer_write_only::_L2 */
  static kcg_int _L2;
  
  kcg_copy_ReceivedMessage_T_Comm(
    Message_out,
    (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
  /* 2 */ if (Reset) {
    _L2 = 0 + 1;
    kcg_copy_array_100401(
      &tmp,
      (array_100401 *) &DEFAULT_TransitionBuffer_t_Info[0]);
  }
  else {
    _L2 = Stacksize_old + 1;
    kcg_copy_array_100401(&tmp, (array_100401 *) &(*Buffer_In)[0]);
  }
  kcg_copy_ReceivedMessage_T_Comm(&(&(*Buffer_Out)[0])[0], Message_In);
  kcg_copy_array_100401(&(*Buffer_Out)[1], &tmp);
  /* 1 */ if (_L2 > DIM_TransitionBuffer_Informatio) {
    *Stacksize_new = DIM_TransitionBuffer_Informatio;
  }
  else {
    *Stacksize_new = _L2;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_write_only_Inf.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

