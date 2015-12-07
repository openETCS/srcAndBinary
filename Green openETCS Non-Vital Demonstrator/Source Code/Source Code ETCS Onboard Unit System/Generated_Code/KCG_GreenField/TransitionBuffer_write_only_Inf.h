/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _TransitionBuffer_write_only_In
#define _TransitionBuffer_write_only_In

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::TransitionBuffer_write_only */
extern void TransitionBuffer_write_only_Inf(
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Buffer_In */ TransitionBuffer_T_InformationF *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Stacksize_old */ kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Message_In */ ReceivedMessage_T_Common_Types_ *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Reset */ kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Buffer_Out */ TransitionBuffer_T_InformationF *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_write_only::Message_out */ ReceivedMessage_T_Common_Types_ *Message_out);

#endif /* _TransitionBuffer_write_only_In */
/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_write_only_Inf.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

