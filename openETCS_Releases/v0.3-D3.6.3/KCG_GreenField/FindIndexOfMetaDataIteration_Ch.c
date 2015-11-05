/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaDataIteration_Ch.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */
void FindIndexOfMetaDataIteration_Ch(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::metadata */ Metadata_T_Common_Types_Pkg *metadata,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::index */ kcg_int *index,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::endAddress */ kcg_int *endAddress)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */
  static MetadataElement_T_Common_Types_ acc;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L12 */
  static MetadataElement_T_Common_Types_ _L12;
  
  kcg_copy_MetadataElement_T_Comm(&_L12, &(*metadata)[0]);
  for (i = 0; i < 29; i++) {
    kcg_copy_MetadataElement_T_Comm(&acc, &_L12);
    /* 1 */
    FindIndexOfMetaData_CheckBGCons(
      &acc,
      &(*metadata)[i + 1],
      &cond_iterw,
      &_L12);
    *index = i + 1;
    if (!cond_iterw) {
      break;
    }
  }
  *endAddress = _L12.endAddress;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FindIndexOfMetaDataIteration_Ch.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

