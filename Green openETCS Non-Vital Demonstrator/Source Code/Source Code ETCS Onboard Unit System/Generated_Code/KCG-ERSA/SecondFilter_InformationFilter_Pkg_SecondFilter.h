/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:37
*************************************************************$ */
#ifndef _SecondFilter_InformationFilter_Pkg_SecondFilter_H_
#define _SecondFilter_InformationFilter_Pkg_SecondFilter_H_

#include "kcg_types.h"
#include "DetermineBufferMessage_InformationFilter_Pkg_SecondFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::SecondFilter::SecondFilter */
extern void SecondFilter_InformationFilter_Pkg_SecondFilter(
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter2 */ ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inMessageForBuffer */ ReceivedMessage_T_Common_Types_Pkg *inMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */ kcg_bool *storeInBuffer2,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */ ReceivedMessage_T_Common_Types_Pkg *outMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */ ReceivedMessage_T_Common_Types_Pkg *messageForFilter3);

#endif /* _SecondFilter_InformationFilter_Pkg_SecondFilter_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SecondFilter_InformationFilter_Pkg_SecondFilter.h
** Generation date: 2015-12-07T14:47:37
*************************************************************$ */

