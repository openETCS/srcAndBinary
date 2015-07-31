/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
#ifndef _Read_P041_TM_H_
#define _Read_P041_TM_H_

#include "kcg_types.h"
#include "C_P041_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* TM::Read_P041 */
extern void Read_P041_TM(
  /* TM::Read_P041::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P041::received */kcg_bool *received,
  /* TM::Read_P041::P041_OBU_out */P041_OBU_T_TM *P041_OBU_out);

#endif /* _Read_P041_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P041_TM.h
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

