/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PackageContents_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::PackageContents */
kcg_bool PackageContents_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::PackageContents::inPacketId */kcg_int inPacketId)
{
  /* InformationFilter_Pkg::FirstFilter::PackageContents::outLevelTransitionOrderInMessage */
  static kcg_bool outLevelTransitionOrderInMessage;
  
  outLevelTransitionOrderInMessage = 141 == inPacketId;
  return outLevelTransitionOrderInMessage;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PackageContents_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

