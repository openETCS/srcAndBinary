/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _Read_P015_TM_H_
#define _Read_P015_TM_H_

#include "kcg_types.h"
#include "C_P015_compr_onboard_TM_convers.h"
#include "RECV_ReadPackets_TM_lib_interna.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P015 */
extern void Read_P015_TM(
  /* TM::Read_P015::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P015::received */ kcg_bool *received,
  /* TM::Read_P015::P015_OBU_out */ P015_OBU_T_TM *P015_OBU_out);

#endif /* _Read_P015_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P015_TM.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

