/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ThirdFilter_InformationFilter_P.h"

/* InformationFilter_Pkg::ThirdFilter::ThirdFilter */
void ThirdFilter_InformationFilter_P(
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inModus */ M_MODE inModus,
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::outMessage */ ReceivedMessage_T_Common_Types_ *outMessage)
{
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter */
  static Metadata_T_Common_Types_Pkg tmp;
  static kcg_int i;
  static kcg_bool tmp_1_1;
  
  (*outMessage).valid = (*inMessage).valid;
  (*outMessage).source = (*inMessage).source;
  kcg_copy_RadioMetadata_T_Common(
    &(*outMessage).radioMetadata,
    &(*inMessage).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_P(
    &(*outMessage).BG_Common_Header,
    &(*inMessage).BG_Common_Header);
  kcg_copy__11_Radio_TrackTrain_H(
    &(*outMessage).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*outMessage).sendingRBC,
    &(*inMessage).sendingRBC);
  kcg_copy_CompressedPackets_T_Co(
    &(*outMessage).packets,
    &(*inMessage).packets);
  for (i = 0; i < 30; i++) {
    tmp_1_1 = /* 2 */
      ModeFilter_InformationFilter_Pk(
        inModus,
        /* 1 */
        GetPacketId_InformationFilter_P(
          &(*inMessage).packets.PacketHeaders[i]));
    /* 1 */
    SetValidFlag_InformationFilter_(
      tmp_1_1,
      &(*inMessage).packets.PacketHeaders[i],
      &tmp[i]);
  }
  kcg_copy_Metadata_T_Common_Type(&(*outMessage).packets.PacketHeaders, &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ThirdFilter_InformationFilter_P.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

