/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
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
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

