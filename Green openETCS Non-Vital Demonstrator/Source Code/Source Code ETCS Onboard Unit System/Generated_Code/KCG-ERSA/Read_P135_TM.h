/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */
#ifndef _Read_P135_TM_H_
#define _Read_P135_TM_H_

#include "kcg_types.h"
#include "C_P135_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* TM::Read_P135 */
extern void Read_P135_TM(
  /* TM::Read_P135::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P135::received */kcg_bool *received,
  /* TM::Read_P135::P135_OBU_out */P135_OBU_T_TM *P135_OBU_out);

#endif /* _Read_P135_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P135_TM.h
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */

