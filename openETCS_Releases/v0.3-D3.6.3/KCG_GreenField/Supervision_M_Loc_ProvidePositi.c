/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_M_Loc_ProvidePositi.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervision_M_Loc_init_ProvideP(outC_Supervision_M_Loc_ProvideP *outC)
{
  outC->trigger = kcg_true;
  /* 1 */ op_3_6_5_1_4_j_init_ProvidePosi(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervision_M_Loc_reset_Provide(outC_Supervision_M_Loc_ProvideP *outC)
{
  /* 1 */ op_3_6_5_1_4_j_reset_ProvidePos(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervision_M_Loc */
void Supervision_M_Loc_ProvidePositi(
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::mloc */ M_LOC mloc,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::present */ kcg_bool present,
  outC_Supervision_M_Loc_ProvideP *outC)
{
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L16 */
  static positionedBG_T_TrainPosition_Ty _L16;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L15 */
  static kcg_bool _L15;
  
  /* 1 */ op_GetLRBGfromBGs_ProvidePositi(posBGs, trainPos, &_L15, &_L16);
  /* 1 */ op_3_6_5_1_4_j_ProvidePositionR(&_L16, trainPos, &outC->Context_1);
  outC->trigger = (present & (M_LOC_Now == mloc)) |
    ((M_LOC_Do_not_send_position_repo == mloc) & !outC->Context_1.trigger) |
    (outC->Context_1.trigger & (M_LOC_Every_LRBG_compliant_bali == mloc));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_M_Loc_ProvidePositi.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

