/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */
#ifndef _Read_P042_TM_H_
#define _Read_P042_TM_H_

#include "kcg_types.h"
#include "C_P042_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* TM::Read_P042 */
extern void Read_P042_TM(
  /* TM::Read_P042::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P042::received */kcg_bool *received,
  /* TM::Read_P042::P042_OBU_out */P42_SessionManagement_T_Packet_Types_Pkg *P042_OBU_out);

#endif /* _Read_P042_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P042_TM.h
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */

