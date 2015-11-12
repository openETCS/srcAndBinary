/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _ODO_Toolbox_TrainModules_H_
#define _ODO_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "ODO_genOdometryInaccuracies_Too.h"
#include "ODO_genSpeedInaccuracies_Toolbo.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Toolbox::TrainModules::ODO */
extern void ODO_Toolbox_TrainModules(
  /* Toolbox::TrainModules::ODO::timestamp */ T_internal_Type_Obu_BasicTypes_ timestamp,
  /* Toolbox::TrainModules::ODO::velocity */ OdometrySpeed_T_Toolbox velocity,
  /* Toolbox::TrainModules::ODO::acceleration */ A_internal_Type_Obu_BasicTypes_ acceleration,
  /* Toolbox::TrainModules::ODO::position */ L_internal_Type_Obu_BasicTypes_ position,
  /* Toolbox::TrainModules::ODO::motionDirection */ odoMotionDirection_T_Obu_BasicT motionDirection,
  /* Toolbox::TrainModules::ODO::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry);

#endif /* _ODO_Toolbox_TrainModules_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_Toolbox_TrainModules.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

