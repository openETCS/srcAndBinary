/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_systemTimeGenerator_Toolb.h"

#ifndef KCG_USER_DEFINED_INIT
void TRAIN_systemTimeGenerator_init_(outC_TRAIN_systemTimeGenerator_ *outC)
{
  outC->init = kcg_true;
  outC->timestamp = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TRAIN_systemTimeGenerator_reset(outC_TRAIN_systemTimeGenerator_ *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Functions::TRAIN_systemTimeGenerator */
void TRAIN_systemTimeGenerator_Toolb(
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::deltaTime */ kcg_int deltaTime,
  outC_TRAIN_systemTimeGenerator_ *outC)
{
  /* Toolbox::Functions::TRAIN_systemTimeGenerator */
  static kcg_int tmp;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    tmp = 0;
  }
  else {
    tmp = outC->timestamp;
  }
  outC->timestamp = deltaTime + tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TRAIN_systemTimeGenerator_Toolb.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

