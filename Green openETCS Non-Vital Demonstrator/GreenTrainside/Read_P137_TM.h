/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */
#ifndef _Read_P137_TM_H_
#define _Read_P137_TM_H_

#include "kcg_types.h"
#include "C_P137_compr_onboard_TM_convers.h"
#include "RECV_ReadPackets_TM_lib_interna.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P137 */
extern void Read_P137_TM(
  /* TM::Read_P137::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P137::received */ kcg_bool *received,
  /* TM::Read_P137::P137_OBU_out */ P137_StopIfInStaffResponsible_T *P137_OBU_out);

#endif /* _Read_P137_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P137_TM.h
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */

