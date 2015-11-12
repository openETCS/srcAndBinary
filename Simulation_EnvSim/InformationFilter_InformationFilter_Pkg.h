/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:56
*************************************************************$ */
#ifndef _InformationFilter_InformationFilter_Pkg_H_
#define _InformationFilter_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"
#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"
#include "ThirdFilter_InformationFilter_Pkg_ThirdFilter.h"
#include "MessageBuffer_InformationFilter_Pkg.h"
#include "LevelTransitionEffective_InformationFilter_Pkg.h"
#include "RbcTransitionEffective_InformationFilter_Pkg.h"
#include "TransitionBuffer_InformationFilter_Pkg_Common.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::InformationFilter::outAcceptedMessage */ outAcceptedMessage;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L38 */ _L38;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L37 */ _L37;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L40 */ _L40;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L39 */ _L39;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MessageBuffer_InformationFilter_Pkg /* 1 */ _3_Context_1;
  outC_RbcTransitionEffective_InformationFilter_Pkg /* 1 */ _2_Context_1;
  outC_TransitionBuffer_InformationFilter_Pkg_Common /* 2 */ Context_2;
  outC_LevelTransitionEffective_InformationFilter_Pkg /* 1 */ _1_Context_1;
  outC_TransitionBuffer_InformationFilter_Pkg_Common /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_InformationFilter_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::InformationFilter */
extern void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inModus */M_MODE inModus,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */kcg_bool inTrainDataValid,
  outC_InformationFilter_InformationFilter_Pkg *outC);

extern void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC);

#endif /* _InformationFilter_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** InformationFilter_InformationFilter_Pkg.h
** Generation date: 2015-11-12T10:46:56
*************************************************************$ */

