/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _op_3_8_2_3_a_MA_Request_H_
#define _op_3_8_2_3_a_MA_Request_H_

#include "kcg_types.h"
#include "DIV_real_XCP_numeric.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* MA_Request::op_3_8_2_3_a */
extern void op_3_8_2_3_a_MA_Request(
  /* MA_Request::op_3_8_2_3_a::t_mar */ T_MAR t_mar,
  /* MA_Request::op_3_8_2_3_a::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MA_Request::op_3_8_2_3_a::preindicationLoc */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  /* MA_Request::op_3_8_2_3_a::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* MA_Request::op_3_8_2_3_a::triggerMA */ kcg_bool *triggerMA,
  /* MA_Request::op_3_8_2_3_a::exception */ kcg_bool *exception);

#endif /* _op_3_8_2_3_a_MA_Request_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_8_2_3_a_MA_Request.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

