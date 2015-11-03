/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentLookUp_SDMConversio.h"

/* SDMConversionModelPkg::brakePercentLookUp */
void brakePercentLookUp_SDMConversio(
  /* SDMConversionModelPkg::brakePercentLookUp::lambda0 */ kcg_int lambda0,
  /* SDMConversionModelPkg::brakePercentLookUp::av */ av_Map_t_SDMConversionModelPkg *av)
{
  /* SDMConversionModelPkg::brakePercentLookUp */
  static kcg_int tmp2;
  /* SDMConversionModelPkg::brakePercentLookUp */
  static kcg_int tmp1;
  /* SDMConversionModelPkg::brakePercentLookUp */
  static kcg_int tmp;
  /* SDMConversionModelPkg::brakePercentLookUp::V_lim */
  static kcg_int V_lim;
  /* SDMConversionModelPkg::brakePercentLookUp::_L96 */
  static kcg_bool _L96;
  /* SDMConversionModelPkg::brakePercentLookUp::_L101 */
  static kcg_bool _L101;
  /* SDMConversionModelPkg::brakePercentLookUp::_L102 */
  static kcg_bool _L102;
  
  tmp = lambda0 - cBrakePercentStepsMin_SDMConver;
  if ((0 <= tmp) & (tmp < 221)) {
    V_lim = cBrakePercentSpeedLookup_SDMCon[tmp];
    kcg_copy_a_BrakeSteps_t_SDMConv(
      &(*av).a,
      (a_BrakeSteps_t_SDMConversionMod *)
        &cBrakePercentALookup_SDMConvers[tmp]);
  }
  else {
    V_lim = cBrakePercentSpeedLookup_SDMCon[0];
    kcg_copy_a_BrakeSteps_t_SDMConv(
      &(*av).a,
      (a_BrakeSteps_t_SDMConversionMod *) &cBrakePercentALookup_SDMConvers[0]);
  }
  _L96 = V_lim <= cBrakePercentV_lim_SDMConversio[0];
  _L101 = V_lim <= cBrakePercentV_lim_SDMConversio[1];
  _L102 = V_lim <= cBrakePercentV_lim_SDMConversio[2];
  (*av).v[0] = 0;
  (*av).v[1] = V_lim;
  /* 10 */ if (_L96) {
    (*av).v[2] = cBrakePercentV_lim_SDMConversio[0];
    tmp2 = cBrakePercentV_lim_SDMConversio[1];
    tmp1 = cBrakePercentV_lim_SDMConversio[2];
    tmp = cBrakePercentV_lim_SDMConversio[3];
  }
  else {
    /* 9 */ if (_L101) {
      (*av).v[2] = cBrakePercentV_lim_SDMConversio[1];
      tmp2 = cBrakePercentV_lim_SDMConversio[2];
      tmp1 = cBrakePercentV_lim_SDMConversio[3];
    }
    else {
      /* 8 */ if (_L102) {
        (*av).v[2] = cBrakePercentV_lim_SDMConversio[2];
        tmp2 = cBrakePercentV_lim_SDMConversio[3];
      }
      else {
        /* 7 */ if (V_lim <= cBrakePercentV_lim_SDMConversio[3]) {
          (*av).v[2] = cBrakePercentV_lim_SDMConversio[3];
        }
        else {
          (*av).v[2] = 0;
        }
        tmp2 = 0;
      }
      tmp1 = 0;
    }
    tmp = 0;
  }
  (*av).v[3] = tmp2;
  (*av).v[4] = tmp1;
  (*av).v[5] = tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakePercentLookUp_SDMConversio.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

