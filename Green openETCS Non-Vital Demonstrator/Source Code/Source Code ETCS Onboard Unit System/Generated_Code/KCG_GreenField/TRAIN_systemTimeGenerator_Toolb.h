/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _TRAIN_systemTimeGenerator_Tool
#define _TRAIN_systemTimeGenerator_Tool

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* Toolbox::Functions::TRAIN_systemTimeGenerator::timestamp */ timestamp;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TRAIN_systemTimeGenerator_;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::TRAIN_systemTimeGenerator */
extern void TRAIN_systemTimeGenerator_Toolb(
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::deltaTime */ kcg_int deltaTime,
  outC_TRAIN_systemTimeGenerator_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TRAIN_systemTimeGenerator_reset(
  outC_TRAIN_systemTimeGenerator_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TRAIN_systemTimeGenerator_init_(
  outC_TRAIN_systemTimeGenerator_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TRAIN_systemTimeGenerator_Tool */
/* $**************** KCG Version 6.4 (build i21) ****************
** TRAIN_systemTimeGenerator_Toolb.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

