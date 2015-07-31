/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DriverAck.h"

void DriverAck_reset(outC_DriverAck *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* DriverAck */
void DriverAck(
  /* DriverAck::getAck */kcg_bool getAck,
  /* DriverAck::newLevel */M_LEVEL newLevel,
  /* DriverAck::oldLevel */M_LEVEL oldLevel,
  /* DriverAck::currentDistance */kcg_int currentDistance,
  /* DriverAck::ackDistance */kcg_int ackDistance,
  /* DriverAck::immediateAck */kcg_bool immediateAck,
  outC_DriverAck *outC)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  /* DriverAck::DriverAck */
  static SSM_ST_DriverAck DriverAck_state_sel;
  /* DriverAck::DriverAck */
  static SSM_ST_DriverAck DriverAck_state_act;
  /* DriverAck::_L15 */
  static kcg_bool _L15;
  
  if (outC->init1) {
    _L15 = kcg_true;
    outC->init1 = kcg_false;
    DriverAck_state_sel = SSM_st_Idle_DriverAck;
  }
  else {
    _L15 = outC->needsAckFromDriver;
    DriverAck_state_sel = outC->DriverAck_state_nxt;
  }
  if (_L15) {
    tmp1 = currentDistance;
  }
  else {
    if (outC->init) {
      tmp1 = ackDistance;
    }
    else {
      tmp1 = outC->_L1_getAckDistance;
    }
    outC->_L1_getAckDistance = currentDistance;
    outC->init = kcg_false;
  }
  _L15 = immediateAck | (currentDistance > tmp1);
  switch (DriverAck_state_sel) {
    case SSM_st_Waiting_DriverAck :
      if (getAck) {
        DriverAck_state_act = SSM_st_Idle_DriverAck;
        outC->service_brake = kcg_false;
      }
      else if (_L15) {
        DriverAck_state_act = SSM_st_Idle_DriverAck;
        outC->service_brake = kcg_true;
      }
      else {
        DriverAck_state_act = SSM_st_Waiting_DriverAck;
        outC->service_brake = kcg_false;
      }
      break;
    case SSM_st_Idle_DriverAck :
      tmp = /* 1 */ decideDriverAck(newLevel, oldLevel);
      if (tmp) {
        DriverAck_state_act = SSM_st_Waiting_DriverAck;
      }
      else {
        DriverAck_state_act = SSM_st_Idle_DriverAck;
      }
      outC->service_brake = kcg_false;
      break;
    
  }
  switch (DriverAck_state_act) {
    case SSM_st_Idle_DriverAck :
      outC->needsAckFromDriver = kcg_false;
      outC->DriverAck_state_nxt = SSM_st_Idle_DriverAck;
      break;
    case SSM_st_Waiting_DriverAck :
      outC->needsAckFromDriver = kcg_true;
      outC->DriverAck_state_nxt = SSM_st_Waiting_DriverAck;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DriverAck.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

