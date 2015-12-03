/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2MetaDataIteration_CheckBGC.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration */
void Merg2MetaDataIteration_CheckBGC(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::metaData */ Metadata_T_Common_Types_Pkg *metaData,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::telegram */ Telegram_T_BG_Types_Pkg *telegram,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::mergedMetaData */ Metadata_T_Common_Types_Pkg *mergedMetaData)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration */
  static Metadata_T_Common_Types_Pkg acc;
  static kcg_int i;
  
  kcg_copy_Metadata_T_Common_Type(mergedMetaData, metaData);
  for (i = 0; i < 30; i++) {
    kcg_copy_Metadata_T_Common_Type(&acc, mergedMetaData);
    /* 1 */
    Merg2MetaData_CheckBGConsistenc(
      i,
      &acc,
      &(*telegram).packets.PacketHeaders,
      mergedMetaData);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merg2MetaDataIteration_CheckBGC.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

