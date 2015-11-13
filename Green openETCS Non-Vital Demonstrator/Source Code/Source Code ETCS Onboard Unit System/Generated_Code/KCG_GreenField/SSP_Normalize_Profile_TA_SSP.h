/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
#ifndef _SSP_Normalize_Profile_TA_SSP_H
#define _SSP_Normalize_Profile_TA_SSP_H

#include "kcg_types.h"
#include "SSP_Normalize_Profile_loop_TA_S.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_SSP::SSP_Normalize_Profile */
extern void SSP_Normalize_Profile_TA_SSP(
  /* TA_SSP::SSP_Normalize_Profile::ProfileIn */ StaticSpeedProfile_t_TrackAtlas *ProfileIn,
  /* TA_SSP::SSP_Normalize_Profile::pos_BG */ L_internal_Type_Obu_BasicTypes_ pos_BG,
  /* TA_SSP::SSP_Normalize_Profile::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  /* TA_SSP::SSP_Normalize_Profile::ProfileNormalized_LRBG */ StaticSpeedProfile_t_TrackAtlas *ProfileNormalized_LRBG);

#endif /* _SSP_Normalize_Profile_TA_SSP_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Normalize_Profile_TA_SSP.h
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */

