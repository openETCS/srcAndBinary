/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_M_Loc_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervision_M_Loc_init_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  outC->trigger = kcg_true;
  /* 1 */ op_3_6_5_1_4_j_init_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervision_M_Loc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervision_M_Loc */
void Supervision_M_Loc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::mloc */ M_LOC mloc,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::present */ kcg_bool present,
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L16 */
  static positionedBG_T_TrainPosition_Types_Pck _L16;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L15 */
  static kcg_bool _L15;
  
  /* 1 */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(posBGs, trainPos, &_L15, &_L16);
  /* 1 */
  op_3_6_5_1_4_j_ProvidePositionReport_Pkg(&_L16, trainPos, &outC->Context_1);
  outC->trigger = (present & (M_LOC_Now == mloc)) |
    ((M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group ==
        mloc) & !outC->Context_1.trigger) | (outC->Context_1.trigger &
      (M_LOC_Every_LRBG_compliant_balise_group == mloc));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_M_Loc_ProvidePositionReport_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

