/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Close_InfraLib.h"

/* InfraLib::Balise_Group_Close */
void Balise_Group_Close_InfraLib(
  /* InfraLib::Balise_Group_Close::BG_internal_in */ B_data_internal_T_InfraLib *BG_internal_in,
  /* InfraLib::Balise_Group_Close::BG_message_in */ CompressedBaliseMessage_TM *BG_message_in,
  /* InfraLib::Balise_Group_Close::Error_out */ kcg_bool *Error_out,
  /* InfraLib::Balise_Group_Close::BG_message_out */ CompressedBaliseMessage_TM *BG_message_out)
{
  *Error_out = kcg_false;
  /* 1 */ if ((*BG_internal_in).balise_passed) {
    kcg_copy_BaliseTelegramHeader_i(
      &(*BG_message_out).Header,
      &(*BG_internal_in).header);
    kcg_copy_CompressedPackets_T_Co(
      &(*BG_message_out).Messages,
      &(*BG_internal_in).packets);
  }
  else {
    kcg_copy_CompressedBaliseMessag(BG_message_out, BG_message_in);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Group_Close_InfraLib.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

