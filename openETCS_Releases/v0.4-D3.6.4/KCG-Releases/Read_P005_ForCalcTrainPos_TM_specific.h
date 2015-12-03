/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */
#ifndef _Read_P005_ForCalcTrainPos_TM_specific_H_
#define _Read_P005_ForCalcTrainPos_TM_specific_H_

#include "kcg_types.h"
#include "C_P005_ForCalcTrainPos_TM_conversions.h"
#include "Read_P005_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_specific::Read_P005_ForCalcTrainPos */
extern void Read_P005_ForCalcTrainPos_TM_specific(
  /* TM_specific::Read_P005_ForCalcTrainPos::RadioMessage_IN */ CompressedPackets_T_Common_Types_Pkg *RadioMessage_IN,
  /* TM_specific::Read_P005_ForCalcTrainPos::LRBG */ NID_LRBG LRBG,
  /* TM_specific::Read_P005_ForCalcTrainPos::NID_C_onboard */ NID_C NID_C_onboard,
  /* TM_specific::Read_P005_ForCalcTrainPos::LinkedBGsOUT */ LinkedBGs_T_BG_Types_Pkg *LinkedBGsOUT);

#endif /* _Read_P005_ForCalcTrainPos_TM_specific_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P005_ForCalcTrainPos_TM_specific.h
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */

