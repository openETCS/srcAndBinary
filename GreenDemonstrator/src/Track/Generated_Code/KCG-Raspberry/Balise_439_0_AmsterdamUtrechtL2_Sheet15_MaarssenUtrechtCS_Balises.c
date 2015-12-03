/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_439_0_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises.h"

/* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balise_439_0 */
void Balise_439_0_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balise_439_0::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balise_439_0::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balise_439_0::PIG_nom */kcg_int PIG_nom,
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balise_439_0::B_data_out */B_data_internal_T_InfraLib *B_data_out)
{
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balise_439_0::_L2 */ kcg_bool _L2;
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balise_439_0::_L21 */ kcg_int _L21;
  
  /* 1 */ Balise_Localisation_InfraLib(B_data_in, Header, PIG_nom, &_L21, &_L2);
  if (_L2) {
    /* 1 */
    Packets_BG439_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
      Header,
      B_data_in,
      B_data_out);
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(B_data_out, B_data_in);
  }
  (*B_data_out).pig_nom_0 = _L21;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_439_0_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

