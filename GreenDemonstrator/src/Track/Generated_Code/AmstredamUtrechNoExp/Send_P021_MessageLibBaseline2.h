/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */
#ifndef _Send_P021_MessageLibBaseline2_H_
#define _Send_P021_MessageLibBaseline2_H_

#include "kcg_types.h"
#include "C_P021_tracksim_compr_TM_conversions.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* MessageLibBaseline2::Send_P021 */
extern void Send_P021_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P021::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P021::P021 */P021_trackside_int_T_TM *P021,
  /* MessageLibBaseline2::Send_P021::B_data_out */CompressedPackets_T_Common_Types_Pkg *B_data_out);

#endif /* _Send_P021_MessageLibBaseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P021_MessageLibBaseline2.h
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

