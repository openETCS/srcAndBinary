/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG440_AmsterdamUtrechtL.h"

/* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Packets_BG440 */
void Packets_BG440_AmsterdamUtrechtL(
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Packets_BG440::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Packets_BG440::Balise_data_in */ B_data_internal_T_InfraLib *Balise_data_in,
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Packets_BG440::Balise_data_out */ B_data_internal_T_InfraLib *Balise_data_out)
{
  kcg_copy_B_data_internal_T_Infr(Balise_data_out, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_i(&(*Balise_data_out).header, Header);
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &(*Balise_data_in).packets,
    (P255_trackside_int_T_TM *) &BGxxx_P255_Packets426,
    &(*Balise_data_out).packets);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Packets_BG440_AmsterdamUtrechtL.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

