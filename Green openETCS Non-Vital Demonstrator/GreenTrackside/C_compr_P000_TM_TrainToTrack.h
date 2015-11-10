/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _C_compr_P000_TM_TrainToTrack_H
#define _C_compr_P000_TM_TrainToTrack_H

#include "kcg_types.h"
#include "CAST_Int_to_NID_LRBG_TM_convers.h"
#include "CAST_Int_to_Q_DIRLRBG_TM_conver.h"
#include "CAST_Int_to_Q_DRLRBG_TM_convers.h"
#include "CAST_Int_to_L_DOUBTOVER_TM_conv.h"
#include "CAST_Int_to_L_DOUBTUNDER_TM_con.h"
#include "CAST_Int_to_Q_LENGTH_TM_convers.h"
#include "CAST_Int_to_L_TRAININT_TM_conve.h"
#include "CAST_Int_to_V_TRAIN_TM_conversi.h"
#include "CAST_Int_to_Q_DIRTRAIN_TM_conve.h"
#include "CAST_Int_to_M_MODE_TM_conversio.h"
#include "CAST_Int_to_M_LEVEL_TM_conversi.h"
#include "CAST_Int_to_NID_NTC_TM_conversi.h"
#include "CAST_Int_to_D_LRBG_TM_conversio.h"
#include "Decode_NID_PACKET_TM_TrainToTra.h"
#include "Filter_Variable_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_TrainToTrack::C_compr_P000 */
extern void C_compr_P000_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P000::P000_in */ P000_TrainTrack_int_TM_TrainToT *P000_in,
  /* TM_TrainToTrack::C_compr_P000::P000_out */ P000_TM_TrainToTrack *P000_out);

#endif /* _C_compr_P000_TM_TrainToTrack_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** C_compr_P000_TM_TrainToTrack.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

