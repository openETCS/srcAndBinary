/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */
#ifndef _Read_P065_TM_H_
#define _Read_P065_TM_H_

#include "kcg_types.h"
#include "C_P065_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P065 */
extern void Read_P065_TM(
  /* TM::Read_P065::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P065::received */ kcg_bool *received,
  /* TM::Read_P065::P065_OBU_out */ P065_OBU_T_TM *P065_OBU_out);

#endif /* _Read_P065_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P065_TM.h
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

