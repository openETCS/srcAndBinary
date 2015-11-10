/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Balise_Packets_InfraLib.h"

/* InfraLib::No_Balise_Packets */
void No_Balise_Packets_InfraLib(
  /* InfraLib::No_Balise_Packets::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::No_Balise_Packets::Balise_data_in */ B_data_internal_T_InfraLib *Balise_data_in,
  /* InfraLib::No_Balise_Packets::Balise_data_out */ B_data_internal_T_InfraLib *Balise_data_out)
{
  kcg_copy_B_data_internal_T_Infr(Balise_data_out, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_i(&(*Balise_data_out).header, Header);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** No_Balise_Packets_InfraLib.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

