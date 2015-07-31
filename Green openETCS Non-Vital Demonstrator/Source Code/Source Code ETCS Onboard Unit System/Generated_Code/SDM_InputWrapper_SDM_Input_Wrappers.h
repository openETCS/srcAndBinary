/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _SDM_InputWrapper_SDM_Input_Wrappers_H_
#define _SDM_InputWrapper_SDM_Input_Wrappers_H_

#include "kcg_types.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"
#include "ConvertOdometry_SDM_Input_Wrappers.h"
#include "ConvertMRSP_section_SDM_Input_Wrappers.h"
#include "ConvertMA_SDM_Input_Wrappers.h"
#include "SummarizeSections_SDM_Input_Wrappers.h"

/* =====================  no input structure  ====================== */


/* SDM_Input_Wrappers::SDM_InputWrapper */
extern void SDM_InputWrapper_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SDM_InputWrapper::TrainPosition */trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SDM_Input_Wrappers::SDM_InputWrapper::ODO_to_SDM */odometry_T_Obu_BasicTypes_Pkg *ODO_to_SDM,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SDM_Input_Wrappers::SDM_InputWrapper::dataFromTrackAtlas */DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  /* SDM_Input_Wrappers::SDM_InputWrapper::mrsp_out */MRSP_internal_T_TargetManagement_types *mrsp_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::mrsp_update_out */kcg_bool *mrsp_update_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::ma_out */MA_section_real_T_TargetManagement_types *ma_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::ma_update_out */kcg_bool *ma_update_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::gp_update_out */kcg_bool *gp_update_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::odo_out */Odometry_real_T_SDM_Types_Pkg *odo_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations);

#endif /* _SDM_InputWrapper_SDM_Input_Wrappers_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SDM_InputWrapper_SDM_Input_Wrappers.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

