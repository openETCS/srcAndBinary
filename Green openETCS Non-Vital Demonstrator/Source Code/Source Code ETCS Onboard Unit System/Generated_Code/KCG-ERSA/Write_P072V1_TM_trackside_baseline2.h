/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:10
*************************************************************$ */
#ifndef _Write_P072V1_TM_trackside_baseline2_H_
#define _Write_P072V1_TM_trackside_baseline2_H_

#include "kcg_types.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"
#include "C_P072V1_tracksim_compr_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_trackside_baseline2::Write_P072V1 */
extern void Write_P072V1_TM_trackside_baseline2(
  /* TM_trackside_baseline2::Write_P072V1::Packet72V1 */ P072V1_trackside_int_T_TM_baseline2 *Packet72V1,
  /* TM_trackside_baseline2::Write_P072V1::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside_baseline2::Write_P072V1::Error */ kcg_bool *Error,
  /* TM_trackside_baseline2::Write_P072V1::RadioPacketsOut */ CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut);

#endif /* _Write_P072V1_TM_trackside_baseline2_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P072V1_TM_trackside_baseline2.h
** Generation date: 2015-11-25T14:46:10
*************************************************************$ */

