/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */
#ifndef _Kv_intConstructor_SDMConversio
#define _Kv_intConstructor_SDMConversio

#include "kcg_types.h"
#include "TransformA_realToA_int_SDM_Type.h"
#include "Kv_intSetIterator_SDMConversion.h"
#include "Kv_intIterator_SDMConversionMod.h"
#include "Kv_intVectorMapper_SDMConversio.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDMConversionModelPkg::Kv_intConstructor */
extern void Kv_intConstructor_SDMConversion(
  /* SDMConversionModelPkg::Kv_intConstructor::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::Kv_intConstructor::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SDMConversionModelPkg::Kv_intConstructor::A_ebmax */ A_internal_Type_Obu_BasicTypes_ A_ebmax,
  /* SDMConversionModelPkg::Kv_intConstructor::A_brake_em */ av_Map_t_SDMConversionModelPkg *A_brake_em,
  /* SDMConversionModelPkg::Kv_intConstructor::A_brake_safe */ av_MergedMap_t_SDMConversionMod *A_brake_safe);

#endif /* _Kv_intConstructor_SDMConversio */
/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intConstructor_SDMConversion.h
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */

