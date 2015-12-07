/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2MetaData_CheckBGConsistenc.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData */
void Merg2MetaData_CheckBGConsistenc(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::ind */ kcg_int ind,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::acc */ Metadata_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_in */ Metadata_T_Common_Types_Pkg *metadata_in,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_out */ Metadata_T_Common_Types_Pkg *metadata_out)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData */
  static MetadataElement_T_Common_Types_ tmp1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData */
  static MetadataElement_T_Common_Types_ tmp;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L20 */
  static kcg_int _L20_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L15 */
  static kcg_int _L15_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::dup */
  static kcg_bool dup;
  
  dup = ((*acc)[0].nid_packet == (*metadata_in)[0].nid_packet) &
    ((*acc)[0].q_dir == (*metadata_in)[0].q_dir);
  /* ck_dup */ if (dup) {
    kcg_copy_Metadata_T_Common_Type(metadata_out, acc);
  }
  else {
    /* 3 */
    FindIndexOfMetaDataIteration_Ch(acc, &_L15_IfBlock1, &_L20_IfBlock1);
    kcg_copy_Metadata_T_Common_Type(metadata_out, acc);
    if ((0 <= ind) & (ind < 30)) {
      kcg_copy_MetadataElement_T_Comm(&tmp, &(*metadata_in)[ind]);
    }
    else {
      kcg_copy_MetadataElement_T_Comm(
        &tmp,
        (MetadataElement_T_Common_Types_ *) &cMetaDataElement_CheckBGConsist);
    }
    /* 1 */ ShiftAddress_CheckBGConsistency(&tmp, _L20_IfBlock1, &tmp1);
    if ((0 <= _L15_IfBlock1) & (_L15_IfBlock1 < 30)) {
      kcg_copy_MetadataElement_T_Comm(&(*metadata_out)[_L15_IfBlock1], &tmp1);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merg2MetaData_CheckBGConsistenc.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

