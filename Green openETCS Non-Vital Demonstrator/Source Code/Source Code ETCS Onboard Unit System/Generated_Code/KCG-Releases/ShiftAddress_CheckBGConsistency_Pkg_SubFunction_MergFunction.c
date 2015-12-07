/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress */
void ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaData_In */ MetadataElement_T_Common_Types_Pkg *metaData_In,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::distance */ kcg_int distance,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaData_Out */ MetadataElement_T_Common_Types_Pkg *metaData_Out)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L9 */
  static kcg_int _L9;
  
  (*metaData_Out).nid_packet = (*metaData_In).nid_packet;
  (*metaData_Out).q_dir = (*metaData_In).q_dir;
  (*metaData_Out).valid = (*metaData_In).valid;
  _L9 = 1 + distance;
  (*metaData_Out).startAddress = _L9;
  (*metaData_Out).endAddress = _L9 + ((*metaData_In).endAddress -
      (*metaData_In).startAddress);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

