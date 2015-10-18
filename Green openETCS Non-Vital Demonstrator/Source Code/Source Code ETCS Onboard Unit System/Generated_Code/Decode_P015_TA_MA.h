/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */
#ifndef _Decode_P015_TA_MA_H_
#define _Decode_P015_TA_MA_H_

#include "kcg_types.h"
#include "DecodeEndsection_TA_MA.h"
#include "CombineSections_TA_MA.h"
#include "Eval_Q_SCALE_TA_MRSP.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"
#include "EVAL_Q_DANGERPOINT_TA_Lib_internal.h"
#include "EVAL_V_Release_TA_Lib_internal.h"
#include "EVAL_Q_OVERLAP_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_MA::Decode_P015 */
extern void Decode_P015_TA_MA(
  /* TA_MA::Decode_P015::MA_onboard_in */ P015_OBU_T_TM *MA_onboard_in,
  /* TA_MA::Decode_P015::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Decode_P015::MA_decoded_out */ MovementAuthority_t_TrackAtlasTypes *MA_decoded_out);

#endif /* _Decode_P015_TA_MA_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Decode_P015_TA_MA.h
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */

