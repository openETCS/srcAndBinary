/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */
#ifndef _D_behavior_H_
#define _D_behavior_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "ComputeDistDisplay.h"
#include "SPDI_ComputeSpeedChangeIndex_SPDI.h"
#include "ZoomLevel.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  tScale /* D_behavior::Scale */ Scale;
  array_real_12 /* D_behavior::GradientStartInterpolated */ GradientStartInterpolated;
  array_real_12 /* D_behavior::GradientEndInterpolated */ GradientEndInterpolated;
  array_bool_12 /* D_behavior::GradientVisible */ GradientVisible;
  array_real_4 /* D_behavior::PASP_Distances */ PASP_Distances;
  array_real_4 /* D_behavior::PASP_Speeds */ PASP_Speeds;
  array_real_10 /* D_behavior::SPDI_SpeedChangePosition */ SPDI_SpeedChangePosition;
  array_int_10 /* D_behavior::SPDI_SpeedChangeIndex */ SPDI_SpeedChangeIndex;
  array_bool_10 /* D_behavior::SPDI_SpeedChangeSymbolsVisible */ SPDI_SpeedChangeSymbolsVisible;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ZoomLevel /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_D_behavior;

/* ===========  node initialization and cycle functions  =========== */
/* D_behavior */
extern void D_behavior(
  /* D_behavior::MousePressed */kcg_bool MousePressed,
  /* D_behavior::OverD9 */kcg_bool OverD9,
  /* D_behavior::OverD12 */kcg_bool OverD12,
  /* D_behavior::TrainPosition */kcg_real TrainPosition,
  /* D_behavior::GradientsStart */array_real_12 *GradientsStart,
  /* D_behavior::GradientsEnd */array_real_12 *GradientsEnd,
  /* D_behavior::PASP_SpeedPoints */tSpeedPoints *PASP_SpeedPoints,
  /* D_behavior::CPS */kcg_real CPS,
  outC_D_behavior *outC);

extern void D_behavior_reset(outC_D_behavior *outC);

#endif /* _D_behavior_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** D_behavior.h
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

