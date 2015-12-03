/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */
#ifndef _Normalize_Overlap_TA_MA_new_H_
#define _Normalize_Overlap_TA_MA_new_H_

#include "kcg_types.h"
#include "EVAL_V_Release_TA_Lib_internal.h"
#include "EVAL_Q_OVERLAP_TA_Lib_internal.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_MA_new::Normalize_Overlap */
extern void Normalize_Overlap_TA_MA_new(
  /* TA_MA_new::Normalize_Overlap::d_endsection */ L_internal_Type_Obu_BasicTypes_Pkg d_endsection,
  /* TA_MA_new::Normalize_Overlap::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA_new::Normalize_Overlap::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA_new::Normalize_Overlap::q_overlap */ kcg_bool *q_overlap,
  /* TA_MA_new::Normalize_Overlap::overlap */ DP_or_OL_t_TrackAtlasTypes *overlap);

#endif /* _Normalize_Overlap_TA_MA_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_Overlap_TA_MA_new.h
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */

