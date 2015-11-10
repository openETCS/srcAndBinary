/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_ENGINE_TM_conve.h"

/* TM_conversions::CAST_Int_to_NID_ENGINE */
NID_ENGINE CAST_Int_to_NID_ENGINE_TM_conve(
  /* TM_conversions::CAST_Int_to_NID_ENGINE::nid_engine_int */ kcg_int nid_engine_int)
{
  /* TM_conversions::CAST_Int_to_NID_ENGINE::nid_engine */
  static NID_ENGINE nid_engine;
  
  nid_engine = nid_engine_int;
  return nid_engine;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_ENGINE_TM_conve.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

