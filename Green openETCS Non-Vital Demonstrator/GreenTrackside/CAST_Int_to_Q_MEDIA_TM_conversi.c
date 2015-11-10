/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_MEDIA_TM_conversi.h"

/* TM_conversions::CAST_Int_to_Q_MEDIA */
Q_MEDIA CAST_Int_to_Q_MEDIA_TM_conversi(
  /* TM_conversions::CAST_Int_to_Q_MEDIA::q_media_int */ kcg_int q_media_int)
{
  /* TM_conversions::CAST_Int_to_Q_MEDIA::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::q_media */
  static Q_MEDIA q_media;
  
  IfBlock1_clock = q_media_int == INT_Q_MEDIA_Balise_TM_conversio;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_media = ENUM_Q_MEDIA_Balise_TM_conversi;
  }
  else {
    else_clock_IfBlock1 = q_media_int == INT_Q_MEDIA_Loop_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_media = ENUM_Q_MEDIA_Loop_TM_conversion;
    }
    else {
      q_media = ENUM_Q_MEDIA_Balise_TM_conversi;
    }
  }
  return q_media;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_MEDIA_TM_conversi.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

