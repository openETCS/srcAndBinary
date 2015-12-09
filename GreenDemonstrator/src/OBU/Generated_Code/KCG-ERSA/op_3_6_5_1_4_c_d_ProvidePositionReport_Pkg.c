/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_c_d_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  outC->trigger = kcg_true;
  outC->init = kcg_true;
  outC->rem_train2trackStatus.nid_ntc = 0;
  outC->rem_train2trackStatus.q_length =
    Q_LENGTH_No_train_integrity_information_available;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_c_d_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d */
void op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d */ Q_LENGTH tmp;
  
  /* last_init_ck_train2trackStatus */ if (outC->init) {
    outC->init = kcg_false;
    tmp = cTrainToTrackStatus_T_ProvidePositionReport_Pkg.q_length;
  }
  else {
    tmp = outC->rem_train2trackStatus.q_length;
  }
  outC->trigger = ((Q_LENGTH_Train_integrity_confirmed_by_driver ==
        (*train2trackStatus).q_length) | ((*train2trackStatus).q_length ==
        Q_LENGTH_Train_integrity_lost)) & ((*train2trackStatus).q_length !=
      tmp);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->rem_train2trackStatus,
    train2trackStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

