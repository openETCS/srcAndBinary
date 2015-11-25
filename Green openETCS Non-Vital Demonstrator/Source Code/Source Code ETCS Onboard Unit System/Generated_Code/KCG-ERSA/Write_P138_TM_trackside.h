/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */
#ifndef _Write_P138_TM_trackside_H_
#define _Write_P138_TM_trackside_H_

#include "kcg_types.h"
#include "C_P138_tracksim_compr_TM_conversions.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_trackside::Write_P138 */
extern void Write_P138_TM_trackside(
  /* TM_trackside::Write_P138::Packet138 */ P138_trackside_int_T_TM *Packet138,
  /* TM_trackside::Write_P138::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P138::Error */ kcg_bool *Error,
  /* TM_trackside::Write_P138::RadioPacketsOut */ CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut);

#endif /* _Write_P138_TM_trackside_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P138_TM_trackside.h
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

