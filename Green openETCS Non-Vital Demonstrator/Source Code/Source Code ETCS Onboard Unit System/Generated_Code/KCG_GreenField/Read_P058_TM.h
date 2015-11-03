/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _Read_P058_TM_H_
#define _Read_P058_TM_H_

#include "kcg_types.h"
#include "C_P058_compr_onboard_TM_convers.h"
#include "RECV_ReadPackets_TM_lib_interna.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P058 */
extern void Read_P058_TM(
  /* TM::Read_P058::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P058::received */ kcg_bool *received,
  /* TM::Read_P058::P058_OBU_out */ P058_OBU_T_TM *P058_OBU_out);

#endif /* _Read_P058_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P058_TM.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */

