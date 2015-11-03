/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */
#ifndef _Read_P138_TM_H_
#define _Read_P138_TM_H_

#include "kcg_types.h"
#include "C_P138_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P138 */
extern void Read_P138_TM(
  /* TM::Read_P138::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P138::received */ kcg_bool *received,
  /* TM::Read_P138::P138_OBU_out */ P138_OBU_T_TM *P138_OBU_out);

#endif /* _Read_P138_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P138_TM.h
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

