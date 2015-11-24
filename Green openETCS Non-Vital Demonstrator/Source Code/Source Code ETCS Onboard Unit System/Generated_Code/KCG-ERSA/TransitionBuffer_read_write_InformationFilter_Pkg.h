/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */
#ifndef _TransitionBuffer_read_write_InformationFilter_Pkg_H_
#define _TransitionBuffer_read_write_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::TransitionBuffer_read_write */
extern void TransitionBuffer_read_write_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Buffer_In */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Stacksize_old */ kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Message_In */ ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Reset */ kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Buffer_Out */ TransitionBuffer_T_InformationFilter_Pkg *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Stacksize_new */ kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_read_write::Message_out */ ReceivedMessage_T_Common_Types_Pkg *Message_out);

#endif /* _TransitionBuffer_read_write_InformationFilter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_read_write_InformationFilter_Pkg.h
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

