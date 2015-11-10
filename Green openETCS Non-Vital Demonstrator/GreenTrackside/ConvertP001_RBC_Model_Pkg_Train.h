/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _ConvertP001_RBC_Model_Pkg_Trai
#define _ConvertP001_RBC_Model_Pkg_Trai

#include "kcg_types.h"
#include "CAST_NID_LRBG_to_int_TM_convers.h"
#include "CAST_NID_PACKET_to_int_TM_conve.h"
#include "CAST_L_PACKET_to_int_TM_convers.h"
#include "CAST_D_LRBG_to_int_TM_conversio.h"
#include "CAST_L_DOUBTOVER_to_int_TM_conv.h"
#include "CAST_L_DOUBTUNDER_to_int_TM_con.h"
#include "CAST_V_TRAIN_to_int_TM_conversi.h"
#include "CAST_NID_NTC_to_int_TM_conversi.h"
#include "CAST_NID_PRVLRBG_to_int_TM_conv.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001 */
extern void ConvertP001_RBC_Model_Pkg_Train(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001::newP001 */ P001_TM_TrainToTrack *newP001,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001::oldP001 */ PT1_PositionReport_2BG_T_Packet *oldP001);

#endif /* _ConvertP001_RBC_Model_Pkg_Trai */
/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP001_RBC_Model_Pkg_Train.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

