/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */
#ifndef _Write_P042_TM_trackside_H_
#define _Write_P042_TM_trackside_H_

#include "kcg_types.h"
#include "C_P042_tracksim_compr_TM_conver.h"
#include "SEND_WriteBaliseMessageHeader_T.h"
#include "SEND_MessageData_TM_lib_interna.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_trackside::Write_P042 */
extern void Write_P042_TM_trackside(
  /* TM_trackside::Write_P042::Packet42 */ P042_trackside_int_T_TM *Packet42,
  /* TM_trackside::Write_P042::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* TM_trackside::Write_P042::Error */ kcg_bool *Error,
  /* TM_trackside::Write_P042::RadioPacketsOut */ CompressedPackets_T_Common_Type *RadioPacketsOut);

#endif /* _Write_P042_TM_trackside_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P042_TM_trackside.h
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

