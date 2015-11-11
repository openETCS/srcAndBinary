/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */
#ifndef _Read_P045_TM_H_
#define _Read_P045_TM_H_

#include "kcg_types.h"
#include "C_P045_compr_onboard_TM_convers.h"
#include "RECV_ReadPackets_TM_lib_interna.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P045 */
extern void Read_P045_TM(
  /* TM::Read_P045::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P045::received */ kcg_bool *received,
  /* TM::Read_P045::P045_OBU_out */ P45_RadioNetworkRegistration_T_ *P045_OBU_out);

#endif /* _Read_P045_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P045_TM.h
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

