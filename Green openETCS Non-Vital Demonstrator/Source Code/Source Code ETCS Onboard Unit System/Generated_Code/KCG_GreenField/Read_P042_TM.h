/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _Read_P042_TM_H_
#define _Read_P042_TM_H_

#include "kcg_types.h"
#include "C_P042_compr_onboard_TM_convers.h"
#include "RECV_ReadPackets_TM_lib_interna.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P042 */
extern void Read_P042_TM(
  /* TM::Read_P042::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P042::received */ kcg_bool *received,
  /* TM::Read_P042::P042_OBU_out */ P42_SessionManagement_T_Packet_ *P042_OBU_out);

#endif /* _Read_P042_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P042_TM.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

