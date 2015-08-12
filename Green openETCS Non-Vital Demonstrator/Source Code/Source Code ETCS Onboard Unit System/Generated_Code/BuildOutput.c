/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildOutput.h"

/* BuildOutput */
void BuildOutput(
  /* BuildOutput::message */ReceivedMessage_T_Common_Types_Pkg *message,
  /* BuildOutput::valid */kcg_bool valid,
  /* BuildOutput::ReceivedMessage */ReceivedMessage_T_Common_Types_Pkg *ReceivedMessage)
{
  (*ReceivedMessage).valid = (*message).valid & valid;
  (*ReceivedMessage).source = (*message).source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*ReceivedMessage).radioMetadata,
    &(*message).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*ReceivedMessage).BG_Common_Header,
    &(*message).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*ReceivedMessage).Radio_Common_Header,
    &(*message).Radio_Common_Header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*ReceivedMessage).packets,
    &(*message).packets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*ReceivedMessage).sendingRBC,
    &(*message).sendingRBC);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildOutput.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
