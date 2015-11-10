/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */
#ifndef _SSP_Position_SSP_with_BGs_TA_S
#define _SSP_Position_SSP_with_BGs_TA_S

#include "kcg_types.h"
#include "_203_SSP_Merge_New_P27V1_to_Pro.h"
#include "SSP_Normalize_Profile_TA_SSP.h"
#include "SSP_Truncate_at_BG_TA_SSP.h"
#include "SSP_Correct_StartSection_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_SSP::SSP_Position_SSP_with_BGs */
extern void SSP_Position_SSP_with_BGs_TA_SS(
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileIn */ StaticSpeedProfile_t_TrackAtlas *ProfileIn,
  /* TA_SSP::SSP_Position_SSP_with_BGs::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  /* TA_SSP::SSP_Position_SSP_with_BGs::LastProfile */ StaticSpeedProfile_t_TrackAtlas *LastProfile,
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileOut */ StaticSpeedProfile_t_TrackAtlas *ProfileOut,
  /* TA_SSP::SSP_Position_SSP_with_BGs::available */ kcg_bool *available,
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileLoopOut */ StaticSpeedProfile_t_TrackAtlas *ProfileLoopOut);

#endif /* _SSP_Position_SSP_with_BGs_TA_S */
/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Position_SSP_with_BGs_TA_SS.h
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */

