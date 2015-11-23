/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_TEXTMESSAGE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_TEXTMESSAGE */
NID_TEXTMESSAGE CAST_Int_to_NID_TEXTMESSAGE_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_TEXTMESSAGE::nid_textmessage_int */kcg_int nid_textmessage_int)
{
  /* TM_conversions::CAST_Int_to_NID_TEXTMESSAGE::nid_textmessage */
  static NID_TEXTMESSAGE nid_textmessage;
  
  nid_textmessage = nid_textmessage_int;
  return nid_textmessage;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_TEXTMESSAGE_TM_conversions.c
** Generation date: 2015-11-23T09:24:24
*************************************************************$ */

