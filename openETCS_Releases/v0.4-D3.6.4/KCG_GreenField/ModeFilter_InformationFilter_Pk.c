/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeFilter_InformationFilter_Pk.h"

/* InformationFilter_Pkg::ThirdFilter::ModeFilter */
kcg_bool ModeFilter_InformationFilter_Pk(
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inOperationModus */ M_MODE inOperationModus,
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inPacketId */ kcg_int inPacketId)
{
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter */
  static ModeDecisionTableActionKind_Dat tmp2;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter */
  static kcg_int tmp1;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter */
  static kcg_int tmp;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::outPacketAccept */
  static kcg_bool outPacketAccept;
  
  tmp1 = /* 1 */ MapPacketIdToRow_InformationFil(inPacketId);
  tmp = /* 1 */ MapModeToColumn_InformationFilt(inOperationModus);
  if ((0 <= tmp1) & (tmp1 < 256) & ((0 <= tmp) & (tmp < 17))) {
    tmp2 = ModeDecisionTable_DataDictionar[tmp1][tmp];
  }
  else {
    tmp2 = MD_NotRelevant_DataDictionary_P;
  }
  outPacketAccept = /* 1 */ CheckModeExceptions_Information(tmp2);
  return outPacketAccept;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ModeFilter_InformationFilter_Pk.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

