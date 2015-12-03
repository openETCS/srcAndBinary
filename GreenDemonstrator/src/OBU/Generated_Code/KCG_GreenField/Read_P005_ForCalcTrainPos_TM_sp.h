/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _Read_P005_ForCalcTrainPos_TM_s
#define _Read_P005_ForCalcTrainPos_TM_s

#include "kcg_types.h"
#include "C_P005_ForCalcTrainPos_TM_conve.h"
#include "Read_P005_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_specific::Read_P005_ForCalcTrainPos */
extern void Read_P005_ForCalcTrainPos_TM_sp(
  /* TM_specific::Read_P005_ForCalcTrainPos::RadioMessage_IN */ CompressedPackets_T_Common_Type *RadioMessage_IN,
  /* TM_specific::Read_P005_ForCalcTrainPos::LRBG */ NID_LRBG LRBG,
  /* TM_specific::Read_P005_ForCalcTrainPos::NID_C_onboard */ NID_C NID_C_onboard,
  /* TM_specific::Read_P005_ForCalcTrainPos::LinkedBGsOUT */ LinkedBGs_T_BG_Types_Pkg *LinkedBGsOUT);

#endif /* _Read_P005_ForCalcTrainPos_TM_s */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P005_ForCalcTrainPos_TM_sp.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

