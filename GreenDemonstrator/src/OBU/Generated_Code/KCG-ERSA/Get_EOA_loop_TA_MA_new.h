/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:48
*************************************************************$ */
#ifndef _Get_EOA_loop_TA_MA_new_H_
#define _Get_EOA_loop_TA_MA_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_MA_new::Get_EOA_loop */
extern void Get_EOA_loop_TA_MA_new(
  /* TA_MA_new::Get_EOA_loop::i */ kcg_int i,
  /* TA_MA_new::Get_EOA_loop::acc */ L_internal_Type_Obu_BasicTypes_Pkg acc,
  /* TA_MA_new::Get_EOA_loop::MA_sections */ MovementAuthoritySectionlist_t_TrackAtlasTypes *MA_sections,
  /* TA_MA_new::Get_EOA_loop::cont */ kcg_bool *cont,
  /* TA_MA_new::Get_EOA_loop::currentEOA */ L_internal_Type_Obu_BasicTypes_Pkg *currentEOA);

#endif /* _Get_EOA_loop_TA_MA_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Get_EOA_loop_TA_MA_new.h
** Generation date: 2015-12-09T10:03:48
*************************************************************$ */

