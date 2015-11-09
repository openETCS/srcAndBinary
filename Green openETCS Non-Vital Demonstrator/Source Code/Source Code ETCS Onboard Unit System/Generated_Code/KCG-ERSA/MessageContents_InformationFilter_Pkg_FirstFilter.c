/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MessageContents_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::MessageContents */
kcg_bool MessageContents_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::MessageContents::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage)
{
  static kcg_int i;
  /* InformationFilter_Pkg::FirstFilter::MessageContents::outLevelTransitionOrderInMessage */
  static kcg_bool outLevelTransitionOrderInMessage;
  
  outLevelTransitionOrderInMessage = kcg_false;
  for (i = 0; i < 30; i++) {
    outLevelTransitionOrderInMessage = outLevelTransitionOrderInMessage |
      /* 1 */
      PackageContents_InformationFilter_Pkg_FirstFilter(
        /* 1 */
        GetPacketId_InformationFilter_Pkg_Common(
          &(*inMessage).packets.PacketHeaders[i]));
  }
  return outLevelTransitionOrderInMessage;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MessageContents_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

