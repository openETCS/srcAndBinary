/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "D_behavior.h"

void D_behavior_reset(outC_D_behavior *outC)
{
  /* 1 */ ZoomLevel_reset(&outC->Context_1);
}

/* D_behavior */
void D_behavior(
  /* D_behavior::MousePressed */kcg_bool MousePressed,
  /* D_behavior::OverD9 */kcg_bool OverD9,
  /* D_behavior::OverD12 */kcg_bool OverD12,
  /* D_behavior::TrainPosition */kcg_real TrainPosition,
  /* D_behavior::GradientsStart */array_real_12 *GradientsStart,
  /* D_behavior::GradientsEnd */array_real_12 *GradientsEnd,
  /* D_behavior::PASP_SpeedPoints */tSpeedPoints *PASP_SpeedPoints,
  /* D_behavior::CPS */kcg_real CPS,
  outC_D_behavior *outC)
{
  static kcg_real tmp;
  static kcg_int i;
  /* D_behavior::_L35 */
  static tScale _L35;
  /* D_behavior::_L159 */
  static tPASP_Array _L159;
  /* D_behavior::_L202 */
  static kcg_real _L202;
  /* D_behavior::_L204 */
  static array_real_10 _L204;
  
  /* 1 */
  ZoomLevel(
    (kcg_bool) (OverD9 & MousePressed),
    (kcg_bool) (OverD12 & MousePressed),
    &outC->Context_1);
  kcg_copy_tScale(&outC->Scale, &outC->Context_1.Scale);
  if ((0 <= outC->Context_1.zoomlevel) & (outC->Context_1.zoomlevel < 6)) {
    kcg_copy_tScale(&_L35, (tScale *) &Scales[outC->Context_1.zoomlevel]);
  }
  else {
    kcg_copy_tScale(&_L35, (tScale *) &illegalScalesIndex);
  }
  for (i = 0; i < 12; i++) {
    outC->GradientStartInterpolated[i] = /* 1 */
      ComputeDistDisplay(
        _L35[5],
        _L35[8],
        (*GradientsStart)[i],
        TrainPosition,
        outC->Context_1.zoomlevel);
    outC->GradientEndInterpolated[i] = /* 2 */
      ComputeDistDisplay(
        _L35[5],
        _L35[8],
        (*GradientsEnd)[i],
        TrainPosition,
        outC->Context_1.zoomlevel);
    outC->GradientVisible[i] = kcg_true;
  }
  /* 1 */
  impPASPgetRelavantBreakingValues_PASP(
    CPS,
    &(*PASP_SpeedPoints)[0],
    &(*PASP_SpeedPoints)[1],
    &_L204,
    &_L159);
  for (i = 0; i < 4; i++) {
    outC->PASP_Distances[i] = /* 3 */
      ComputeDistDisplay(
        _L35[5],
        _L35[8],
        _L204[i + 0],
        TrainPosition,
        outC->Context_1.zoomlevel);
  }
  kcg_copy_array_real_4(&outC->PASP_Speeds, (array_real_4 *) &_L159[0]);
  _L202 = CPS;
  for (i = 0; i < 10; i++) {
    outC->SPDI_SpeedChangePosition[i] = /* 4 */
      ComputeDistDisplay(
        _L35[5],
        _L35[8],
        (*PASP_SpeedPoints)[0][i],
        TrainPosition,
        outC->Context_1.zoomlevel);
    tmp = _L202;
    /* 1 */
    SPDI_ComputeSpeedChangeIndex_SPDI(
      tmp,
      _L35[8],
      (*PASP_SpeedPoints)[0][i],
      (*PASP_SpeedPoints)[1][i],
      &_L202,
      &_L204[i],
      &outC->SPDI_SpeedChangeIndex[i],
      &outC->SPDI_SpeedChangeSymbolsVisible[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** D_behavior.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

