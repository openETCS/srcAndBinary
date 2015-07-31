/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getParameterPositionReport_packagesSupport_Pkg.h"

/* packagesSupport_Pkg::getParameterPositionReport */
void getParameterPositionReport_packagesSupport_Pkg(
  /* packagesSupport_Pkg::getParameterPositionReport::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* packagesSupport_Pkg::getParameterPositionReport::outPositionReportParam */PositionReportParameter_T_Common_Types_Pkg *outPositionReportParam)
{
  /* packagesSupport_Pkg::getParameterPositionReport::_L69 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L69;
  
  (*outPositionReportParam).nidBG = (*inMessage).BG_Common_Header.nid_bg;
  (*outPositionReportParam).bgLocation =
    (*inMessage).BG_Common_Header.bgPosition.odo.o_nominal;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*outPositionReportParam).sendingRBC,
    &(*inMessage).sendingRBC);
  /* 1 */ Read_P058_Legacy_TM_specific(&(*inMessage).packets, &_L69);
  (*outPositionReportParam).present = _L69.valid;
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &(*outPositionReportParam).packet58,
    &_L69);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getParameterPositionReport_packagesSupport_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

