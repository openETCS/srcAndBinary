/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Init_InfraLib.h"

/* InfraLib::Balise_Group_Init */
void Balise_Group_Init_InfraLib(
  /* InfraLib::Balise_Group_Init::TrainPos */ kcg_real TrainPos,
  /* InfraLib::Balise_Group_Init::Engineering_Data */ BaliseGroupData_TM *Engineering_Data,
  /* InfraLib::Balise_Group_Init::BG_internal_out */ B_data_internal_T_InfraLib *BG_internal_out)
{
  kcg_copy_BaliseTelegramHeader_i(
    &(*BG_internal_out).header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Co(
    &(*BG_internal_out).packets,
    (CompressedPackets_T_Common_Type *) &DEFAULT_Packets_TM);
  (*BG_internal_out).engineering_BG_location = (*Engineering_Data).Pos;
  (*BG_internal_out).TrainPos = TrainPos;
  (*BG_internal_out).pig_nom_0 = 0;
  (*BG_internal_out).balise_passed = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Group_Init_InfraLib.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

