/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */
#ifndef _Read_M003_TM_radio_messages_H_
#define _Read_M003_TM_radio_messages_H_

#include "kcg_types.h"
#include "Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */


/* TM_radio_messages::Read_M003 */
extern void Read_M003_TM_radio_messages(
  /* TM_radio_messages::Read_M003::RadioHeaderUniversalIn */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioHeaderUniversalIn,
  /* TM_radio_messages::Read_M003::received */kcg_bool *received,
  /* TM_radio_messages::Read_M003::M003_out */M_003_T_TM_radio_messages *M003_out);

#endif /* _Read_M003_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_M003_TM_radio_messages.h
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

