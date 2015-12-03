/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _AGradient_SDM_GradientAccelera
#define _AGradient_SDM_GradientAccelera

#include "kcg_types.h"
#include "CalcA_Gradient_SDM_GradientAcce.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  A_gradient_t_SDM_GradientAccele /* SDM_GradientAcceleration_Pkg::AGradient::A_gradient */ A_gradient;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_AGradient_SDM_GradientAcce;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::AGradient */
extern void AGradient_SDM_GradientAccelerat(
  /* SDM_GradientAcceleration_Pkg::AGradient::TrainLocations */ TrainLocations_real_T_SDM_Types *TrainLocations,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile_updated */ kcg_bool GradientProfile_updated,
  /* SDM_GradientAcceleration_Pkg::AGradient::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::AGradient::targetCollection */ TargetCollection_T_TargetManage *targetCollection,
  outC_AGradient_SDM_GradientAcce *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AGradient_reset_SDM_GradientAcc(
  outC_AGradient_SDM_GradientAcce *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AGradient_init_SDM_GradientAcce(
  outC_AGradient_SDM_GradientAcce *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _AGradient_SDM_GradientAccelera */
/* $**************** KCG Version 6.4 (build i21) ****************
** AGradient_SDM_GradientAccelerat.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

