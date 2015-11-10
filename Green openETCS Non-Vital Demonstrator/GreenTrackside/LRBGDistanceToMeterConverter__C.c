/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LRBGDistanceToMeterConverter__C.h"

/* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert */
kcg_real LRBGDistanceToMeterConverter__C(
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::inDistanceToLRBG */ D_LRBG inDistanceToLRBG,
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::in_Q_SCALE */ Q_SCALE in_Q_SCALE)
{
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::outDistanceToLRBGInMeters */
  static kcg_real outDistanceToLRBGInMeters;
  
  /* ck_in_Q_SCALE */ switch (in_Q_SCALE) {
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

/* $**************** KCG Version 6.4 (build i21) ****************
** LRBGDistanceToMeterConverter__C.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

