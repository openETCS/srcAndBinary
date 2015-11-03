/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaData_CheckBGCons.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData */
void FindIndexOfMetaData_CheckBGCons(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::acc */ MetadataElement_T_Common_Types_ *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::acc1 */ MetadataElement_T_Common_Types_ *acc1,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::go_on */ kcg_bool *go_on,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::metadata */ MetadataElement_T_Common_Types_ *metadata)
{
  *go_on = (*acc).valid & (*acc1).valid;
  /* 2 */ if (*go_on) {
    /* 1 */ if ((*acc).endAddress < (*acc1).endAddress) {
      kcg_copy_MetadataElement_T_Comm(metadata, acc1);
    }
    else {
      kcg_copy_MetadataElement_T_Comm(metadata, acc1);
      (*metadata).endAddress = (*acc).endAddress;
    }
  }
  else {
    kcg_copy_MetadataElement_T_Comm(metadata, acc);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FindIndexOfMetaData_CheckBGCons.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

