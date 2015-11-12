/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _extractPositionReportFromBus_R
#define _extractPositionReportFromBus_R

#include "kcg_types.h"
#include "extractPositionReportFromBus_it.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus */
extern void extractPositionReportFromBus_RC(
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::messageBus */ M_TrainTrackMessageBus_t_TM_Tra *messageBus,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::found */ kcg_bool *found,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus::positionReport */ M_TrainTrack_Message_T_TM_radio *positionReport);

#endif /* _extractPositionReportFromBus_R */
/* $**************** KCG Version 6.4 (build i21) ****************
** extractPositionReportFromBus_RC.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

