/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _Read_P139_Legacy_TM_specific_H
#define _Read_P139_Legacy_TM_specific_H

#include "kcg_types.h"
#include "C_P139_to_legacy_t_TM_conversio.h"
#include "Read_P139_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_specific::Read_P139_Legacy */
extern void Read_P139_Legacy_TM_specific(
  /* TM_specific::Read_P139_Legacy::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_specific::Read_P139_Legacy::P139_legacy_out */ P139_ReversingSupervisionInform *P139_legacy_out);

#endif /* _Read_P139_Legacy_TM_specific_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P139_Legacy_TM_specific.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

