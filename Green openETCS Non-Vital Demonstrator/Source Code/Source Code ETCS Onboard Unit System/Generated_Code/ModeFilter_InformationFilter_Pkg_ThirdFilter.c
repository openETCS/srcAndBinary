/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeFilter_InformationFilter_Pkg_ThirdFilter.h"

/* InformationFilter_Pkg::ThirdFilter::ModeFilter */
kcg_bool ModeFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inOperationModus */ M_MODE inOperationModus,
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inPacketId */ kcg_int inPacketId)
{
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter */
  static ModeDecisionTableActionKind_DataDictionary_Pkg tmp2;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter */
  static kcg_int tmp1;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter */
  static kcg_int tmp;
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::outPacketAccept */
  static kcg_bool outPacketAccept;
  
  tmp1 = /* 1 */ MapPacketIdToRow_InformationFilter_Pkg(inPacketId);
  tmp = /* 1 */ MapModeToColumn_InformationFilter_Pkg(inOperationModus);
  if ((0 <= tmp1) & (tmp1 < 256) & ((0 <= tmp) & (tmp < 17))) {
    tmp2 = ModeDecisionTable_DataDictionary_Pkg[tmp1][tmp];
  }
  else {
    tmp2 = MD_NotRelevant_DataDictionary_Pkg;
  }
  outPacketAccept = /* 1 */ CheckModeExceptions_InformationFilter_Pkg(tmp2);
  return outPacketAccept;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ModeFilter_InformationFilter_Pkg_ThirdFilter.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

