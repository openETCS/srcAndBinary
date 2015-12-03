/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */
#ifndef _Read_M157_TM_radio_messages_trackside_H_
#define _Read_M157_TM_radio_messages_trackside_H_

#include "kcg_types.h"
#include "C_header_to_M157_TM_RBC_conversions.h"
#include "C_compr_P001_TM_TrainToTrack.h"
#include "C_compr_P000_TM_TrainToTrack.h"
#include "C_compr_P004_TM_TrainToTrack.h"
#include "C_compr_P005_TM_TrainToTrack.h"
#include "C_compr_P044_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */


/* TM_radio_messages_trackside::Read_M157 */
extern void Read_M157_TM_radio_messages_trackside(
  /* TM_radio_messages_trackside::Read_M157::t_train_global */T_TRAIN t_train_global,
  /* TM_radio_messages_trackside::Read_M157::MessageIn */M_TrainTrack_Message_T_TM_radio_messages *MessageIn,
  /* TM_radio_messages_trackside::Read_M157::Message_157_out */M_157_T_TM_radio_messages *Message_157_out,
  /* TM_radio_messages_trackside::Read_M157::P000 */P000_TM_TrainToTrack *P000,
  /* TM_radio_messages_trackside::Read_M157::P001 */P001_TM_TrainToTrack *P001,
  /* TM_radio_messages_trackside::Read_M157::P004 */P004_TM_TrainToTrack *P004,
  /* TM_radio_messages_trackside::Read_M157::P005 */P005_TM_TrainToTrack *P005,
  /* TM_radio_messages_trackside::Read_M157::P044 */P044_TM_TrainToTrack *P044,
  /* TM_radio_messages_trackside::Read_M157::m_version */M_VERSION *m_version,
  /* TM_radio_messages_trackside::Read_M157::t_train_received */T_TRAIN *t_train_received);

#endif /* _Read_M157_TM_radio_messages_trackside_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_M157_TM_radio_messages_trackside.h
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

