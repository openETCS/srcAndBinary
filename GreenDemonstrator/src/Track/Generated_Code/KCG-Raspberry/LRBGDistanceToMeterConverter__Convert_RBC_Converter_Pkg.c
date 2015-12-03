/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LRBGDistanceToMeterConverter__Convert_RBC_Converter_Pkg.h"

/* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert */
kcg_real LRBGDistanceToMeterConverter__Convert_RBC_Converter_Pkg(
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::inDistanceToLRBG */D_LRBG inDistanceToLRBG,
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::in_Q_SCALE */Q_SCALE in_Q_SCALE)
{
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::outDistanceToLRBGInMeters */ kcg_real outDistanceToLRBGInMeters;
  
  switch (in_Q_SCALE) {
    case Q_SCALE_10_cm_scale :
      outDistanceToLRBGInMeters = (kcg_real) inDistanceToLRBG * 0.1;
      break;
    case Q_SCALE_1_m_scale :
      outDistanceToLRBGInMeters = (kcg_real) inDistanceToLRBG;
      break;
    case Q_SCALE_10_m_scale :
      outDistanceToLRBGInMeters = (kcg_real) inDistanceToLRBG * 10.0;
      break;
    
  }
  return outDistanceToLRBGInMeters;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LRBGDistanceToMeterConverter__Convert_RBC_Converter_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

