/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _SSP_Normalize_Profile_loop_TA_
#define _SSP_Normalize_Profile_loop_TA_

#include "kcg_types.h"
#include "TrainLength_Correction_TA_Lib_i.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_SSP_new::SSP_Normalize_Profile_loop */
extern void SSP_Normalize_Profile_loop_TA_S(
  /* TA_SSP_new::SSP_Normalize_Profile_loop::i */ kcg_int i,
  /* TA_SSP_new::SSP_Normalize_Profile_loop::ProfileIn */ StaticSpeedProfile_t_TrackAtlas *ProfileIn,
  /* TA_SSP_new::SSP_Normalize_Profile_loop::pos_BG */ L_internal_Type_Obu_BasicTypes_ pos_BG,
  /* TA_SSP_new::SSP_Normalize_Profile_loop::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  /* TA_SSP_new::SSP_Normalize_Profile_loop::ProfileNormalized_LRBG */ StaticSpeedProfile_t_TrackAtlas *ProfileNormalized_LRBG);

#endif /* _SSP_Normalize_Profile_loop_TA_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Normalize_Profile_loop_TA_S.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */

