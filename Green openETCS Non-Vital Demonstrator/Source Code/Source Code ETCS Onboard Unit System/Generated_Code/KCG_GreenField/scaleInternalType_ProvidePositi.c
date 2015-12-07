/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaleInternalType_ProvidePositi.h"

/* ProvidePositionReport_Pkg::scaleInternalType */
kcg_int scaleInternalType_ProvidePositi(
  /* ProvidePositionReport_Pkg::scaleInternalType::scale */ Q_SCALE scale,
  /* ProvidePositionReport_Pkg::scaleInternalType::internalValue */ kcg_int internalValue)
{
  /* ProvidePositionReport_Pkg::scaleInternalType::scaledValue */
  static kcg_int scaledValue;
  
  switch (scale) {
    case Q_SCALE_10_cm_scale :
      scaledValue = internalValue / cQ_SCALE_10_cm_resolution_Train;
      break;
    case Q_SCALE_1_m_scale :
      scaledValue = internalValue / cQ_SCALE_1_m_resolution_TrainPo;
      break;
    case Q_SCALE_10_m_scale :
      scaledValue = internalValue / cQ_SCALE_10_m_resolution_TrainP;
      break;
    
  }
  return scaledValue;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** scaleInternalType_ProvidePositi.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

