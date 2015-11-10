/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _ConvertP000_RBC_Model_Pkg_Trai
#define _ConvertP000_RBC_Model_Pkg_Trai

#include "kcg_types.h"
#include "CAST_NID_LRBG_to_int_TM_convers.h"
#include "CAST_NID_PACKET_to_int_TM_conve.h"
#include "CAST_L_PACKET_to_int_TM_convers.h"
#include "CAST_D_LRBG_to_int_TM_conversio.h"
#include "CAST_L_DOUBTOVER_to_int_TM_conv.h"
#include "CAST_L_DOUBTUNDER_to_int_TM_con.h"
#include "CAST_L_TRAININT_to_int_TM_conve.h"
#include "CAST_V_TRAIN_to_int_TM_conversi.h"
#include "CAST_NID_NTC_to_int_TM_conversi.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000 */
extern void ConvertP000_RBC_Model_Pkg_Train(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::newP000 */ P000_TM_TrainToTrack *newP000,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::oldP000 */ PT0_PositionReport_T_Packet_Tra *oldP000);

#endif /* _ConvertP000_RBC_Model_Pkg_Trai */
/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP000_RBC_Model_Pkg_Train.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

