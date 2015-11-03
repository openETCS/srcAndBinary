/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink */
void scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_scale */ Q_SCALE q_scale,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::d_link */ D_LINK d_link,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_locacc */ Q_LOCACC q_locacc,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::distance */ LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L15 */
  static kcg_int _L15;
  
  _L15 = q_locacc * cQLOCACC_resolution_TrainPosition_Types_Pck;
  (*distance).d_min = - _L15;
  (*distance).d_max = _L15;
  switch (q_scale) {
    case Q_SCALE_10_cm_scale :
      (*distance).nominal = d_link *
        cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_1_m_scale :
      (*distance).nominal = d_link *
        cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_10_m_scale :
      (*distance).nominal = d_link *
        cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

