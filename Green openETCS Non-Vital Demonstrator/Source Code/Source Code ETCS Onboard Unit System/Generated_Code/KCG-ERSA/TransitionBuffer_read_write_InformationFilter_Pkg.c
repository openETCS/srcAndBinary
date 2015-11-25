/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_read_write_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::TransitionBuffer_read_write */
void TransitionBuffer_read_write_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Buffer_In */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Stacksize_old */ kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Message_In */ ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Reset */ kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Buffer_Out */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Stacksize_new */ kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Message_out */ ReceivedMessage_T_Common_Types_Pkg *Message_out)
{
  /* InformationFilter_Pkg::TransitionBuffer_read_write */ kcg_int tmp;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L11 */ kcg_bool _L11;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L7 */ kcg_int _L7;
  /* InformationFilter_Pkg::TransitionBuffer_read_write::_L20 */ TransitionBuffer_T_InformationFilter_Pkg _L20;
  
  /* 4 */ if (Reset) {
    *Stacksize_new = 0;
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &_L20,
      (TransitionBuffer_T_InformationFilter_Pkg *)
        &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
  }
  else {
    *Stacksize_new = Stacksize_old;
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&_L20, Buffer_In);
  }
  _L11 = 0 == *Stacksize_new;
  _L7 = *Stacksize_new - 1;
  /* 2 */ if (_L11) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(Message_out, Message_In);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &(&(*Buffer_Out)[0])[0],
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  else {
    /* 1 */ if (_L7 < 0) {
      tmp = 0;
    }
    else {
      tmp = _L7;
    }
    if ((0 <= tmp) & (tmp < 3)) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(Message_out, &_L20[tmp]);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        Message_out,
        (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &(&(*Buffer_Out)[0])[0],
      Message_In);
  }
  kcg_copy_array_121056(&(*Buffer_Out)[1], (array_121056 *) &_L20[0]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_read_write_InformationFilter_Pkg.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

