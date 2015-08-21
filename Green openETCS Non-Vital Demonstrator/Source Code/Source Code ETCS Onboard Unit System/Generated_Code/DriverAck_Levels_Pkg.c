/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DriverAck_Levels_Pkg.h"

void DriverAck_reset_Levels_Pkg(outC_DriverAck_Levels_Pkg *outC)
{
  outC->init = kcg_true;
}

/* Levels_Pkg::DriverAck */
void DriverAck_Levels_Pkg(
  /* Levels_Pkg::DriverAck::getAck */kcg_bool getAck,
  /* Levels_Pkg::DriverAck::newLevel */M_LEVEL newLevel,
  /* Levels_Pkg::DriverAck::oldLevel */M_LEVEL oldLevel,
  /* Levels_Pkg::DriverAck::currentDistance */kcg_int currentDistance,
  /* Levels_Pkg::DriverAck::transitionPosition */kcg_int transitionPosition,
  /* Levels_Pkg::DriverAck::ackDistance */kcg_int ackDistance,
  /* Levels_Pkg::DriverAck::immediateAck */kcg_bool immediateAck,
  /* Levels_Pkg::DriverAck::startOfMissionEnded */kcg_bool startOfMissionEnded,
  /* Levels_Pkg::DriverAck::transitionKnown */kcg_bool transitionKnown,
  /* Levels_Pkg::DriverAck::referencePosition */L_internal_Type_Obu_BasicTypes_Pkg referencePosition,
  outC_DriverAck_Levels_Pkg *outC)
{
  static kcg_bool tmp;
  /* Levels_Pkg::DriverAck::DriverAck */
  static SSM_ST_DriverAck DriverAck_state_sel;
  /* Levels_Pkg::DriverAck::DriverAck */
  static SSM_ST_DriverAck DriverAck_state_act;
  /* Levels_Pkg::DriverAck::distanceMemory */
  static kcg_bool distanceMemory;
  /* Levels_Pkg::DriverAck::_L16 */
  static kcg_int _L16;
  /* Levels_Pkg::DriverAck::_L51 */
  static kcg_int _L51;
  /* Levels_Pkg::DriverAck::_L54 */
  static kcg_bool _L54;
  /* Levels_Pkg::DriverAck::_L74 */
  static kcg_bool _L74;
  /* Levels_Pkg::DriverAck::_L79 */
  static kcg_bool _L79;
  
  if (outC->init) {
    _L54 = kcg_false;
    _L79 = kcg_false;
    _L51 = 0;
    _L16 = 0;
    outC->init = kcg_false;
    DriverAck_state_sel = SSM_st_Idle_DriverAck;
  }
  else {
    _L79 = outC->waitingForPassing;
    _L51 = outC->beginAcknowledgeDistance;
    _L54 = outC->waitingForAck;
    _L16 = outC->endAcknowledgeDistance;
    DriverAck_state_sel = outC->DriverAck_state_nxt;
  }
  if (_L54) {
    _L74 = currentDistance > _L16;
    tmp = currentDistance > _L51;
  }
  else {
    _L74 = kcg_false;
    tmp = kcg_false;
  }
  outC->transitionPositionPassed = immediateAck | _L74;
  _L74 = outC->transitionPositionPassed & _L54;
  switch (DriverAck_state_sel) {
    case SSM_st_WaitingForPassingComplete_DriverAck :
      if (_L74) {
        DriverAck_state_act = SSM_st_Idle_DriverAck;
      }
      else {
        DriverAck_state_act = SSM_st_WaitingForPassingComplete_DriverAck;
      }
      outC->service_brake = kcg_false;
      break;
    case SSM_st_WaitingForAck_DriverAck :
      if (getAck) {
        DriverAck_state_act = SSM_st_WaitingForPassingComplete_DriverAck;
        outC->service_brake = kcg_false;
      }
      else if (_L74) {
        DriverAck_state_act = SSM_st_Idle_DriverAck;
        outC->service_brake = kcg_true;
      }
      else {
        DriverAck_state_act = SSM_st_WaitingForAck_DriverAck;
        outC->service_brake = kcg_false;
      }
      break;
    case SSM_st_Idle_DriverAck :
      distanceMemory = /* 1 */ decideDriverAck_Levels_Pkg(newLevel, oldLevel);
      if (!transitionKnown & startOfMissionEnded & distanceMemory) {
        DriverAck_state_act = SSM_st_WaitingForAck_DriverAck;
      }
      else {
        DriverAck_state_act = SSM_st_Idle_DriverAck;
      }
      outC->service_brake = kcg_false;
      break;
    
  }
  switch (DriverAck_state_act) {
    case SSM_st_WaitingForPassingComplete_DriverAck :
      outC->waitingForAck = _L54;
      outC->waitingForPassing = kcg_true;
      outC->DriverAck_state_nxt = SSM_st_WaitingForPassingComplete_DriverAck;
      break;
    case SSM_st_WaitingForAck_DriverAck :
      outC->waitingForAck = kcg_true;
      outC->DriverAck_state_nxt = SSM_st_WaitingForAck_DriverAck;
      outC->waitingForPassing = _L79;
      break;
    case SSM_st_Idle_DriverAck :
      outC->waitingForAck = kcg_false;
      outC->waitingForPassing = kcg_false;
      outC->DriverAck_state_nxt = SSM_st_Idle_DriverAck;
      break;
    
  }
  distanceMemory = (outC->waitingForAck != _L54) & outC->waitingForAck;
  outC->needsAckFromDriver = immediateAck | (!_L79 & tmp);
  if (distanceMemory) {
    outC->endAcknowledgeDistance = referencePosition + transitionPosition;
    outC->beginAcknowledgeDistance = referencePosition + transitionPosition -
      ackDistance;
  }
  else {
    outC->endAcknowledgeDistance = _L16;
    outC->beginAcknowledgeDistance = _L51;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DriverAck_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

