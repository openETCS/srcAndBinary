/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _FilterSequence_InformationFilt
#define _FilterSequence_InformationFilt

#include "kcg_types.h"
#include "FirstFilter_InformationFilter_P.h"
#include "SecondFilter_InformationFilter_.h"
#include "ThirdFilter_InformationFilter_P.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FilterSequence */
extern void FilterSequence_InformationFilte(
  /* InformationFilter_Pkg::FilterSequence::message */ ReceivedMessage_T_Common_Types_ *message,
  /* InformationFilter_Pkg::FilterSequence::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FilterSequence::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  /* InformationFilter_Pkg::FilterSequence::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::FilterSequence::inMode */ M_MODE inMode,
  /* InformationFilter_Pkg::FilterSequence::outMessage */ ReceivedMessage_T_Common_Types_ *outMessage,
  /* InformationFilter_Pkg::FilterSequence::bufferMessage */ ReceivedMessage_T_Common_Types_ *bufferMessage,
  /* InformationFilter_Pkg::FilterSequence::storeInBuffer */ kcg_bool *storeInBuffer);

#endif /* _FilterSequence_InformationFilt */
/* $**************** KCG Version 6.4 (build i21) ****************
** FilterSequence_InformationFilte.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

