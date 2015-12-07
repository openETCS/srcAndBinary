/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _checkOdometry_Receive_TrackSid
#define _checkOdometry_Receive_TrackSid

#include "kcg_types.h"
#include "updateCollectorSingleBB_Receive.h"
#include "checkMaxAbsOdoDistance_BasicLoc.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Receive_TrackSide_Msg_Pkg::checkOdometry */
extern void checkOdometry_Receive_TrackSide(
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::actualOdometry */ odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::inCollector */ BGCollector_T_Receive_TrackSide *inCollector,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ kcg_bool *outMessageComplete,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ kcg_bool *outBGIsChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ BGCollector_T_Receive_TrackSide *outCollector);

#endif /* _checkOdometry_Receive_TrackSid */
/* $**************** KCG Version 6.4 (build i21) ****************
** checkOdometry_Receive_TrackSide.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

