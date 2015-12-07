/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_read_write_Inf.h"

/* InformationFilter_Pkg::TransitionBuffer_read_write */
void TransitionBuffer_read_write_Inf(
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Buffer_In */ TransitionBuffer_T_InformationF *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Stacksize_old */ kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Message_In */ ReceivedMessage_T_Common_Types_ *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Reset */ kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Buffer_Out */ TransitionBuffer_T_InformationF *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Stacksize_new */ kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Message_out */ ReceivedMessage_T_Common_Types_ *Message_out)
{
  /* InformationFilter_Pkg::TransitionBuffer_read_write */
  static kcg_int tmp;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L7 */
  static kcg_int _L7;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L20 */
  static TransitionBuffer_T_InformationF _L20;
  
  /* 4 */ if (Reset) {
    *Stacksize_new = 0;
    kcg_copy_TransitionBuffer_T_Inf(
      &_L20,
      (TransitionBuffer_T_InformationF *) &DEFAULT_TransitionBuffer_t_Info);
  }
  else {
    *Stacksize_new = Stacksize_old;
    kcg_copy_TransitionBuffer_T_Inf(&_L20, Buffer_In);
  }
  _L11 = 0 == *Stacksize_new;
  _L7 = *Stacksize_new - 1;
  /* 2 */ if (_L11) {
    kcg_copy_ReceivedMessage_T_Comm(Message_out, Message_In);
    kcg_copy_ReceivedMessage_T_Comm(
      &(&(*Buffer_Out)[0])[0],
      (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
  }
  else {
    /* 1 */ if (_L7 < 0) {
      tmp = 0;
    }
    else {
      tmp = _L7;
    }
    if ((0 <= tmp) & (tmp < 3)) {
      kcg_copy_ReceivedMessage_T_Comm(Message_out, &_L20[tmp]);
    }
    else {
      kcg_copy_ReceivedMessage_T_Comm(
        Message_out,
        (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
    }
    kcg_copy_ReceivedMessage_T_Comm(&(&(*Buffer_Out)[0])[0], Message_In);
  }
  kcg_copy_array_100401(&(*Buffer_Out)[1], (array_100401 *) &_L20[0]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_read_write_Inf.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

