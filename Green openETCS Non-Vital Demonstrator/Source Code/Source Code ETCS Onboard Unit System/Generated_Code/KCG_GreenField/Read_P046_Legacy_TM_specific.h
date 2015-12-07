/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:18
*************************************************************$ */
#ifndef _Read_P046_Legacy_TM_specific_H
#define _Read_P046_Legacy_TM_specific_H

#include "kcg_types.h"
#include "C_P046_to_legacy_t_TM_conversio.h"
#include "Read_P046_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_specific::Read_P046_Legacy */
extern void Read_P046_Legacy_TM_specific(
  /* TM_specific::Read_P046_Legacy::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_specific::Read_P046_Legacy::P046_legacy_out */ P46_ConditionalLevelTransitionO *P046_legacy_out);

#endif /* _Read_P046_Legacy_TM_specific_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P046_Legacy_TM_specific.h
** Generation date: 2015-12-07T14:50:18
*************************************************************$ */

