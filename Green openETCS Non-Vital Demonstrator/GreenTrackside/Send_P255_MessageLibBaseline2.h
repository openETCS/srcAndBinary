/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _Send_P255_MessageLibBaseline2_
#define _Send_P255_MessageLibBaseline2_

#include "kcg_types.h"
#include "Write_P255_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* MessageLibBaseline2::Send_P255 */
extern void Send_P255_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P255::packet_data_in */ CompressedPackets_T_Common_Type *packet_data_in,
  /* MessageLibBaseline2::Send_P255::P255 */ P255_trackside_int_T_TM *P255,
  /* MessageLibBaseline2::Send_P255::packet_data_out */ CompressedPackets_T_Common_Type *packet_data_out);

#endif /* _Send_P255_MessageLibBaseline2_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Send_P255_MessageLibBaseline2.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

