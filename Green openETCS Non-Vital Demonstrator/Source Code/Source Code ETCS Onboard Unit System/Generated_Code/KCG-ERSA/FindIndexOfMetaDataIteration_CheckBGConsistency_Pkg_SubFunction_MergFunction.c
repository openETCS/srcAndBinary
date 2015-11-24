/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */
void FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::metadata */ Metadata_T_Common_Types_Pkg *metadata,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::index */ kcg_int *index,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::endAddress */ kcg_int *endAddress)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */ MetadataElement_T_Common_Types_Pkg acc;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */ kcg_bool cond_iterw;
  kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L12 */ MetadataElement_T_Common_Types_Pkg _L12;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L12, &(*metadata)[0]);
  for (i = 0; i < 29; i++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&acc, &_L12);
    /* 1 */
    FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
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
** FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

