/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */
#ifndef _CalculateSafeTrainLength_Provi
#define _CalculateSafeTrainLength_Provi

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::CalculateSafeTrainLength */
extern void CalculateSafeTrainLength_Provid(
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::safeTrainLength */ L_TRAININT *safeTrainLength,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::minSafeRearEnd */ kcg_int *minSafeRearEnd);

#endif /* _CalculateSafeTrainLength_Provi */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateSafeTrainLength_Provid.h
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */

