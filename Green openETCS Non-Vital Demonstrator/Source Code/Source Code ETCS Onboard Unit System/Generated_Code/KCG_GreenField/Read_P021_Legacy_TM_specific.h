/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _Read_P021_Legacy_TM_specific_H
#define _Read_P021_Legacy_TM_specific_H

#include "kcg_types.h"
#include "C_P021_to_legacy_t_TM_conversio.h"
#include "Read_P021_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_specific::Read_P021_Legacy */
extern void Read_P021_Legacy_TM_specific(
  /* TM_specific::Read_P021_Legacy::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_specific::Read_P021_Legacy::P015_legacy_out */ P21_GradientProfiles_T_Packet_T *P015_legacy_out);

#endif /* _Read_P021_Legacy_TM_specific_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P021_Legacy_TM_specific.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

