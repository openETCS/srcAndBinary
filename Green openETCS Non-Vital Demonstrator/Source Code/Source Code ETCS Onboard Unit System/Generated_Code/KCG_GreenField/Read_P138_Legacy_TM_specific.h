/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _Read_P138_Legacy_TM_specific_H
#define _Read_P138_Legacy_TM_specific_H

#include "kcg_types.h"
#include "C_P138_to_legacy_t_TM_conversio.h"
#include "Read_P138_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_specific::Read_P138_Legacy */
extern void Read_P138_Legacy_TM_specific(
  /* TM_specific::Read_P138_Legacy::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_specific::Read_P138_Legacy::P138_legacy_out */ P138_ReversingAreaInformation_T *P138_legacy_out);

#endif /* _Read_P138_Legacy_TM_specific_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P138_Legacy_TM_specific.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

