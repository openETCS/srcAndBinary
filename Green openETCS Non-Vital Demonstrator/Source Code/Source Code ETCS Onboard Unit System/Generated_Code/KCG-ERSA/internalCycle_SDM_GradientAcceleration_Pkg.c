/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "internalCycle_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::internalCycle */
void internalCycle_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::internalCycle::index */ kcg_int index,
  /* SDM_GradientAcceleration_Pkg::internalCycle::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::internalCycle::SvLPosition */ L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::internalCycle::condition */ kcg_bool *condition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::AccuOut */ ACC_SDM_GradientAcceleration_Pkg *AccuOut)
{
  /* SDM_GradientAcceleration_Pkg::internalCycle */
  static Gradient_section_real_t_SDM_GradientAcceleration_types tmp;
  /* SDM_GradientAcceleration_Pkg::internalCycle */
  static Gradient_real_t_SDM_GradientAcceleration_types acc;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L45 */
  static Gradient_real_t_SDM_GradientAcceleration_types _L45;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L74 */
  static kcg_int _L74;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L77 */
  static kcg_bool _L77;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L76 */
  static kcg_real _L76;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L75 */
  static kcg_bool _L75;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L79 */
  static kcg_real _L79;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L78 */
  static kcg_real _L78;
  
  /* 1 */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(
    GradientProfile,
    (*Accu).rearIndex,
    0,
    &tmp);
  _L45 = tmp.gradient;
  for (_L74 = 0; _L74 < 50; _L74++) {
    acc = _L45;
    /* 1 */
    lowestGradient_SDM_GradientAcceleration_Pkg(
      _L74,
      acc,
      GradientProfile,
      (*Accu).rearIndex,
      (*Accu).frontIndex,
      &_L75,
      &_L45);
    if (!_L75) {
      break;
    }
  }
  /* CalcNearestDistance */
  CalcNearestDistance_SDM_GradientAcceleration_Pkg(
    Accu,
    GradientProfile,
    &_L75,
    &_L76,
    &_L77);
  /* MoveTrainPosition */
  MoveTrainPosition_SDM_GradientAcceleration_Pkg(_L76, Accu, &_L78, &_L79);
  (*AccuOut).frontPos = _L78;
  (*AccuOut).rearPos = _L79;
  /* DetermineNewIndices */
  DetermineNewIndices_SDM_GradientAcceleration_Pkg(
    Accu,
    _L77,
    &(*AccuOut).frontIndex,
    &_L74);
  (*AccuOut).rearIndex = _L74;
  /* addNewSection */
  addNewSection_SDM_GradientAcceleration_Pkg(
    _L45,
    index,
    Accu,
    &(*AccuOut).compensatedGradientProfile);
  *condition = _L75 & (_L78 < SvLPosition);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** internalCycle_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

