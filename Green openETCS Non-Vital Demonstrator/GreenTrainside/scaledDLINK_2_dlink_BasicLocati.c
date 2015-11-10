/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDLINK_2_dlink_BasicLocati.h"

/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink */
void scaledDLINK_2_dlink_BasicLocati(
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_scale */ Q_SCALE q_scale,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::d_link */ D_LINK d_link,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_locacc */ Q_LOCACC q_locacc,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::distance */ LocWithInAcc_T_Obu_BasicTypes_P *distance)
{
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L15 */
  static kcg_int _L15;
  
  _L15 = q_locacc * cQLOCACC_resolution_TrainPositi;
  (*distance).d_min = - _L15;
  (*distance).d_max = _L15;
  switch (q_scale) {
    case Q_SCALE_10_cm_scale :
      (*distance).nominal = d_link * cQ_SCALE_10_cm_resolution_Train;
      break;
    case Q_SCALE_1_m_scale :
      (*distance).nominal = d_link * cQ_SCALE_1_m_resolution_TrainPo;
      break;
    case Q_SCALE_10_m_scale :
      (*distance).nominal = d_link * cQ_SCALE_10_m_resolution_TrainP;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** scaledDLINK_2_dlink_BasicLocati.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

