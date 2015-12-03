/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _FirstFilter_InformationFilter_
#define _FirstFilter_InformationFilter_

#include "kcg_types.h"
#include "LevelFilter_InformationFilter_P.h"
#include "GetPacketId_InformationFilter_P.h"
#include "SetValidFlag_InformationFilter_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::FirstFilter */
extern void FirstFilter_InformationFilter_P(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::messageForFilter2 */ ReceivedMessage_T_Common_Types_ *messageForFilter2,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::messageForBuffer */ ReceivedMessage_T_Common_Types_ *messageForBuffer,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::storeInBuffer1 */ kcg_bool *storeInBuffer1);

#endif /* _FirstFilter_InformationFilter_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FirstFilter_InformationFilter_P.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */

