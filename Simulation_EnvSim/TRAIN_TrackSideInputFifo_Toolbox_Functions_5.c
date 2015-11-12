/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_TrackSideInputFifo_Toolbox_Functions_5.h"

void TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* Toolbox::Functions::TRAIN_TrackSideInputFifo */
void TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inData */API_TrackSideInput_T_API_Msg_Pkg *inData,
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inValid */kcg_bool inValid,
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inReady */kcg_bool inReady,
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  static kcg_int tmp1;
  static kcg_int tmp;
  static array__130657 tmp2;
  
  outC->IfBlock1_clock = inValid;
  for (tmp1 = 0; tmp1 < 5; tmp1++) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &tmp2[tmp1],
      (API_TrackSideInput_T_API_Msg_Pkg *)
        &cEmtpyTrackSideInputMessage_Toolbox);
  }
  if (outC->init1) {
    outC->_L38 = 0;
  }
  else {
    outC->_L38 = outC->_L32;
  }
  if (outC->_L38 <= 5) {
    outC->size = outC->_L38;
  }
  else {
    outC->size = 5;
  }
  if (inValid) {
    for (tmp1 = 0; tmp1 < 5; tmp1++) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &outC->_L19_IfBlock1[tmp1],
        (API_TrackSideInput_T_API_Msg_Pkg *)
          &cEmtpyTrackSideInputMessage_Toolbox);
    }
    if (outC->init) {
      outC->_L9_IfBlock1 = 0;
      kcg_copy_array__130657(&outC->_L4_IfBlock1, &outC->_L19_IfBlock1);
    }
    else {
      outC->_L9_IfBlock1 = outC->_L20_IfBlock1;
    }
    if ((0 <= outC->_L9_IfBlock1) & (outC->_L9_IfBlock1 < 5)) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &outC->_L4_IfBlock1[outC->_L9_IfBlock1],
        inData);
    }
    kcg_copy_array__130657(&outC->buffer, &outC->_L4_IfBlock1);
    outC->_L20_IfBlock1 = (outC->_L9_IfBlock1 + 1) % 5;
    outC->init = kcg_false;
  }
  else if (outC->init1) {
    kcg_copy_array__130657(&outC->buffer, &tmp2);
  }
  if (outC->init1) {
    outC->init1 = kcg_false;
    outC->entry = 0;
  }
  else {
    outC->entry = outC->_L50;
  }
  if ((0 <= outC->entry) & (outC->entry < 5)) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->outData,
      &outC->buffer[outC->entry]);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->outData,
      (API_TrackSideInput_T_API_Msg_Pkg *)
        &cEmtpyTrackSideInputMessage_Toolbox);
  }
  outC->_L44 = inReady & (outC->size > 0);
  if (outC->IfBlock1_clock) {
    tmp1 = 1;
  }
  else {
    tmp1 = 0;
  }
  if (outC->_L44) {
    tmp = - 1;
  }
  else {
    tmp = 0;
  }
  outC->_L32 = outC->size + tmp1 + tmp;
  if (outC->IfBlock1_clock & (outC->size == 5)) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  if (outC->_L44) {
    tmp1 = 1;
    outC->outValid = kcg_true;
  }
  else {
    tmp1 = 0;
    outC->outValid = kcg_false;
  }
  outC->_L50 = (outC->entry + tmp1 + tmp) % 5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TRAIN_TrackSideInputFifo_Toolbox_Functions_5.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

