/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_Sheet06_Biljmer_integration_H_
#define _Amsterdam_Utrecht_Sheet06_Biljmer_integration_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"
#include "RBC_init_RadioLib.h"
#include "RBC_close_RadioLib.h"

/* =====================  no input structure  ====================== */


/* Amsterdam_Utrecht_Sheet06_Biljmer_integration */
extern void Amsterdam_Utrecht_Sheet06_Biljmer_integration(
  /* Amsterdam_Utrecht_Sheet06_Biljmer_integration::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* Amsterdam_Utrecht_Sheet06_Biljmer_integration::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* Amsterdam_Utrecht_Sheet06_Biljmer_integration::Trigger_in */kcg_int Trigger_in,
  /* Amsterdam_Utrecht_Sheet06_Biljmer_integration::Message_sent */kcg_bool Message_sent,
  /* Amsterdam_Utrecht_Sheet06_Biljmer_integration::Message_out */M_TrackTrain_Radio_T_TM_radio_messages *Message_out,
  /* Amsterdam_Utrecht_Sheet06_Biljmer_integration::Packets_out */CompressedPackets_T_Common_Types_Pkg *Packets_out);

#endif /* _Amsterdam_Utrecht_Sheet06_Biljmer_integration_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Sheet06_Biljmer_integration.h
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

