/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */
#ifndef _ThirdFilter_InformationFilter_Pkg_ThirdFilter_H_
#define _ThirdFilter_InformationFilter_Pkg_ThirdFilter_H_

#include "kcg_types.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"
#include "ModeFilter_InformationFilter_Pkg_ThirdFilter.h"

/* =====================  no input structure  ====================== */


/* InformationFilter_Pkg::ThirdFilter::ThirdFilter */
extern void ThirdFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inModus */M_MODE inModus,
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::outMessage */ReceivedMessage_T_Common_Types_Pkg *outMessage);

#endif /* _ThirdFilter_InformationFilter_Pkg_ThirdFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ThirdFilter_InformationFilter_Pkg_ThirdFilter.h
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */
