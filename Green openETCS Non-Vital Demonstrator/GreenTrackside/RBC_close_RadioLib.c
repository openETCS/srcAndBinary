/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_close_RadioLib.h"

/* RadioLib::RBC_close */
void RBC_close_RadioLib(
  /* RadioLib::RBC_close::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* RadioLib::RBC_close::Message_out */ M_TrackTrain_Radio_T_TM_radio_m *Message_out,
  /* RadioLib::RBC_close::Packets_out */ CompressedPackets_T_Common_Type *Packets_out)
{
  kcg_copy_CompressedPackets_T_Co(Packets_out, &(*RadiaDataIn).packets);
  kcg_copy_M_TrackTrain_Radio_T_T(Message_out, &(*RadiaDataIn).message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_close_RadioLib.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

