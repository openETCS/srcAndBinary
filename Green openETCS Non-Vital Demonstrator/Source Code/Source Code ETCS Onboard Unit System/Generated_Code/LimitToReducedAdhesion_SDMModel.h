/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _LimitToReducedAdhesion_SDMMode
#define _LimitToReducedAdhesion_SDMMode

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDMModelPkg::LimitToReducedAdhesion */
extern void LimitToReducedAdhesion_SDMModel(
  /* SDMModelPkg::LimitToReducedAdhesion::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::LimitToReducedAdhesion::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMModelPkg::LimitToReducedAdhesion::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SDMModelPkg::LimitToReducedAdhesion::A_brake_safe_reduced */ ASafe_T_CalcBrakingCurves_types *A_brake_safe_reduced);

#endif /* _LimitToReducedAdhesion_SDMMode */
/* $**************** KCG Version 6.4 (build i21) ****************
** LimitToReducedAdhesion_SDMModel.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

