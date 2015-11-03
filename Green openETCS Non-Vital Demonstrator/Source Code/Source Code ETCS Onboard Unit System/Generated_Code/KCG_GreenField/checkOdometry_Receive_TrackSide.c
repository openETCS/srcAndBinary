/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkOdometry_Receive_TrackSide.h"

/* Receive_TrackSide_Msg_Pkg::checkOdometry */
void checkOdometry_Receive_TrackSide(
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::actualOdometry */ odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::inCollector */ BGCollector_T_Receive_TrackSide *inCollector,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ kcg_bool *outMessageComplete,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ kcg_bool *outBGIsChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ BGCollector_T_Receive_TrackSide *outCollector)
{
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L15 */
  static kcg_bool _L15_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::isValid */
  static kcg_bool isValid;
  
  isValid = (*actualOdometry).valid & ((*inCollector).totalTelegrams > 0);
  /* ck_isValid */ if (isValid) {
    _L3_IfBlock1 = !/* 2 */
      checkMaxAbsOdoDistance_BasicLoc(
        &(*actualOdometry).odo,
        &(*inCollector).positionFirstContact.odometerOfBaliseDetection.odo,
        (OdometryLocations_T_Obu_BasicTy *) &cMaxDistanceBalisesInGroup_BG_T);
    *outMessageComplete = !(*inCollector).BGMessageSent & _L3_IfBlock1;
    _L15_IfBlock1 = _L3_IfBlock1 & ((*inCollector).collectedTelegrams <
        (*inCollector).collectedTelegrams);
    *outBGIsChangedEarly = _L15_IfBlock1;
    /* 1 */
    updateCollectorSingleBB_Receive(
      (kcg_bool) (_L15_IfBlock1 & (*inCollector).badBaliseFlag),
      inCollector,
      outCollector);
  }
  else {
    *outBGIsChangedEarly = kcg_false;
    *outMessageComplete = kcg_false;
    kcg_copy_BGCollector_T_Receive_(outCollector, inCollector);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkOdometry_Receive_TrackSide.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

