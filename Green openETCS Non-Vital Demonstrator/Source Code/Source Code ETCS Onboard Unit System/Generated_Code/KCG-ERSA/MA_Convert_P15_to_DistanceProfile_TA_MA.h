/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */
#ifndef _MA_Convert_P15_to_DistanceProfile_TA_MA_H_
#define _MA_Convert_P15_to_DistanceProfile_TA_MA_H_

#include "kcg_types.h"
#include "MA_Convert_P15_to_DistanceProfile_loop_TA_MA.h"
#include "Pack_Endsection_TA_MA.h"
#include "Normalize_Overlap_TA_MA.h"
#include "Normalize_Dangerpoint_TA_MA.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */


/* TA_MA::MA_Convert_P15_to_DistanceProfile */
extern void MA_Convert_P15_to_DistanceProfile_TA_MA(
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::Packet15_in */P015_OBU_T_TM *Packet15_in,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::NV_in */P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile::MovementAuthority */MovementAuthority_t_TrackAtlasTypes *MovementAuthority);

#endif /* _MA_Convert_P15_to_DistanceProfile_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_Convert_P15_to_DistanceProfile_TA_MA.h
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */

