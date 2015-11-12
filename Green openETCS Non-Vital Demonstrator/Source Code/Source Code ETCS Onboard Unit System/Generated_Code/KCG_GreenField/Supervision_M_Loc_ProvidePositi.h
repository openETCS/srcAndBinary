/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _Supervision_M_Loc_ProvidePosit
#define _Supervision_M_Loc_ProvidePosit

#include "kcg_types.h"
#include "op_GetLRBGfromBGs_ProvidePositi.h"
#include "op_3_6_5_1_4_j_ProvidePositionR.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::Supervision_M_Loc::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_3_6_5_1_4_j_ProvidePosi /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Supervision_M_Loc_ProvideP;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervision_M_Loc */
extern void Supervision_M_Loc_ProvidePositi(
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::mloc */ M_LOC mloc,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::present */ kcg_bool present,
  outC_Supervision_M_Loc_ProvideP *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Supervision_M_Loc_reset_Provide(
  outC_Supervision_M_Loc_ProvideP *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Supervision_M_Loc_init_ProvideP(
  outC_Supervision_M_Loc_ProvideP *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Supervision_M_Loc_ProvidePosit */
/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_M_Loc_ProvidePositi.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

