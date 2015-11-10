/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_TEXTMESSAGE_TM_.h"

/* TM_conversions::CAST_Int_to_NID_TEXTMESSAGE */
NID_TEXTMESSAGE CAST_Int_to_NID_TEXTMESSAGE_TM_(
  /* TM_conversions::CAST_Int_to_NID_TEXTMESSAGE::nid_textmessage_int */ kcg_int nid_textmessage_int)
{
  /* TM_conversions::CAST_Int_to_NID_TEXTMESSAGE::nid_textmessage */
  static NID_TEXTMESSAGE nid_textmessage;
  
  nid_textmessage = nid_textmessage_int;
  return nid_textmessage;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_TEXTMESSAGE_TM_.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

