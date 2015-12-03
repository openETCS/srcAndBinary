/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShiftAddress_CheckBGConsistency.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress */
void ShiftAddress_CheckBGConsistency(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaData_In */ MetadataElement_T_Common_Types_ *metaData_In,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::distance */ kcg_int distance,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaData_Out */ MetadataElement_T_Common_Types_ *metaData_Out)
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
** ShiftAddress_CheckBGConsistency.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

