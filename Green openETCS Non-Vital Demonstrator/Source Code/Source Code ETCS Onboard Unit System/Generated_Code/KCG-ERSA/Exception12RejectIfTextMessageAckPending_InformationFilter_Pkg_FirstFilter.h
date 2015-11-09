/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */
#ifndef _Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter_H_
#define _Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending */
extern void Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inCurrentTextMessageId */kcg_int inCurrentTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer);

#endif /* _Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */

