/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

void CheckSpace_reset_TM_TrainTrack_Bus(outC_CheckSpace_TM_TrainTrack_Bus *outC)
{
  kcg_int i;
  
  for (i = 0; i < 5; i++) {
    /* 1 */ CheckSpaceLoop_reset_TM_TrainTrack_Bus(&outC->Context_1[i]);
  }
}

/* TM_TrainTrack_Bus::CheckSpace */
void CheckSpace_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::CheckSpace::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  outC_CheckSpace_TM_TrainTrack_Bus *outC)
{
  kcg_int i1;
  kcg_int tmp;
  kcg_int i;
  kcg_int noname;
  
  outC->_L5 = 0;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, MessageBus);
  for (i1 = 0; i1 < 5; i1++) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L6[i1],
      &outC->_L1);
  }
  outC->_L3 = kcg_true;
  outC->_L4 = outC->_L5;
  if (outC->_L3) {
    for (i = 0; i < 5; i++) {
      tmp = outC->_L4;
      /* 1 */
      CheckSpaceLoop_TM_TrainTrack_Bus(
        i,
        tmp,
        &outC->_L6[i],
        &outC->Context_1[i]);
      outC->_L4 = outC->Context_1[i].Count;
      outC->_L2 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L2 = 0;
  }
  outC->_L8 = BusWidth_TM_TrainTrack_Bus;
  outC->_L9 = outC->_L4 >= outC->_L8;
  noname = outC->_L2;
  outC->SlotsUsed = outC->_L4;
  outC->Busy = outC->_L9;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckSpace_TM_TrainTrack_Bus.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

