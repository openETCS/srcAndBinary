/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:26
*************************************************************$ */
#ifndef _Normalize_Dangerpoint_TA_MA_new_H_
#define _Normalize_Dangerpoint_TA_MA_new_H_

#include "kcg_types.h"
#include "EVAL_V_Release_TA_Lib_internal.h"
#include "EVAL_Q_DANGERPOINT_TA_Lib_internal.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_MA_new::Normalize_Dangerpoint */
extern void Normalize_Dangerpoint_TA_MA_new(
  /* TA_MA_new::Normalize_Dangerpoint::d_endsection */ L_internal_Type_Obu_BasicTypes_Pkg d_endsection,
  /* TA_MA_new::Normalize_Dangerpoint::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA_new::Normalize_Dangerpoint::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA_new::Normalize_Dangerpoint::q_dangerpoint */ kcg_bool *q_dangerpoint,
  /* TA_MA_new::Normalize_Dangerpoint::dangerpoint */ DP_or_OL_t_TrackAtlasTypes *dangerpoint);

#endif /* _Normalize_Dangerpoint_TA_MA_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_Dangerpoint_TA_MA_new.h
** Generation date: 2015-12-02T15:32:26
*************************************************************$ */

