/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */
#ifndef _Write_P015_TM_trackside_H_
#define _Write_P015_TM_trackside_H_

#include "kcg_types.h"
#include "C_P015_tracksim_compr_TM_conversions.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_trackside::Write_P015 */
extern void Write_P015_TM_trackside(
  /* TM_trackside::Write_P015::Packet15 */ P015_trackside_int_T_TM *Packet15,
  /* TM_trackside::Write_P015::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P015::Error */ kcg_bool *Error,
  /* TM_trackside::Write_P015::RadioPacketsOut */ CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut);

#endif /* _Write_P015_TM_trackside_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P015_TM_trackside.h
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

