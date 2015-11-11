/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_c_d_ProvidePositio.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_c_d_init_ProvidePo(outC_op_3_6_5_1_4_c_d_ProvidePo *outC)
{
  outC->trigger = kcg_true;
  outC->init = kcg_true;
  outC->rem_train2trackStatus.nid_ntc = 0;
  outC->rem_train2trackStatus.q_length = Q_LENGTH_No_train_integrity_inf;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_c_d_reset_ProvideP(outC_op_3_6_5_1_4_c_d_ProvidePo *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d */
void op_3_6_5_1_4_c_d_ProvidePositio(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  outC_op_3_6_5_1_4_c_d_ProvidePo *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d */
  static Q_LENGTH tmp;
  
  /* last_init_ck_train2trackStatus */ if (outC->init) {
    outC->init = kcg_false;
    tmp = cTrainToTrackStatus_T_ProvidePo.q_length;
  }
  else {
    tmp = outC->rem_train2trackStatus.q_length;
  }
  outC->trigger = ((Q_LENGTH_Train_integrity_confir ==
        (*train2trackStatus).q_length) | ((*train2trackStatus).q_length ==
        Q_LENGTH_Train_integrity_lost)) & ((*train2trackStatus).q_length !=
      tmp);
  kcg_copy_TrainToTrackStatus_T_B(
    &outC->rem_train2trackStatus,
    train2trackStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_c_d_ProvidePositio.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

