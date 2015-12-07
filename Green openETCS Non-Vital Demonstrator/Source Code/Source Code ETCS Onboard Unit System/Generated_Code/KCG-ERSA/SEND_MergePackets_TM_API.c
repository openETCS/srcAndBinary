/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MergePackets_TM_API.h"

/* TM_API::SEND_MergePackets */
void SEND_MergePackets_TM_API(
  /* TM_API::SEND_MergePackets::packets_IN */ CompressedPackets_T_Common_Types_Pkg *packets_IN,
  /* TM_API::SEND_MergePackets::P001 */ P001_trackside_int_T_TM *P001,
  /* TM_API::SEND_MergePackets::P002 */ P002_trackside_int_T_TM *P002,
  /* TM_API::SEND_MergePackets::P003_baseline2 */ P003V1_trackside_int_T_TM_baseline2 *P003_baseline2,
  /* TM_API::SEND_MergePackets::P005 */ P005_trackside_int_T_TM *P005,
  /* TM_API::SEND_MergePackets::P012 */ P012_trackside_int_T_TM *P012,
  /* TM_API::SEND_MergePackets::P015 */ P015_trackside_int_T_TM *P015,
  /* TM_API::SEND_MergePackets::P016 */ P016_trackside_int_T_TM *P016,
  /* TM_API::SEND_MergePackets::P021 */ P021_trackside_int_T_TM *P021,
  /* TM_API::SEND_MergePackets::P027_baseline2 */ P027V1_trackside_int_T_TM_baseline2 *P027_baseline2,
  /* TM_API::SEND_MergePackets::P039_baseline2 */ P039V1_trackside_int_T_TM_baseline2 *P039_baseline2,
  /* TM_API::SEND_MergePackets::P040 */ P040_trackside_int_T_TM *P040,
  /* TM_API::SEND_MergePackets::P041 */ P041_trackside_int_T_TM *P041,
  /* TM_API::SEND_MergePackets::P042 */ P042_trackside_int_T_TM *P042,
  /* TM_API::SEND_MergePackets::P045 */ P045_trackside_int_T_TM *P045,
  /* TM_API::SEND_MergePackets::P046 */ P046_trackside_int_T_TM *P046,
  /* TM_API::SEND_MergePackets::P057 */ P057_trackside_int_T_TM *P057,
  /* TM_API::SEND_MergePackets::P058 */ P058_trackside_int_T_TM *P058,
  /* TM_API::SEND_MergePackets::P064 */ P064_trackside_int_T_TM *P064,
  /* TM_API::SEND_MergePackets::P065 */ P065_trackside_int_T_TM *P065,
  /* TM_API::SEND_MergePackets::P066 */ P066_trackside_int_T_TM *P066,
  /* TM_API::SEND_MergePackets::P071 */ P071_trackside_int_T_TM *P071,
  /* TM_API::SEND_MergePackets::P072_baseline2 */ P072V1_trackside_int_T_TM_baseline2 *P072_baseline2,
  /* TM_API::SEND_MergePackets::P080 */ P080_trackside_int_T_TM *P080,
  /* TM_API::SEND_MergePackets::P131 */ P131_trackside_int_T_TM *P131,
  /* TM_API::SEND_MergePackets::P132 */ P132_trackside_int_T_TM *P132,
  /* TM_API::SEND_MergePackets::P133 */ P133_trackside_int_T_TM *P133,
  /* TM_API::SEND_MergePackets::P134 */ P134_trackside_int_T_TM *P134,
  /* TM_API::SEND_MergePackets::P135 */ P135_trackside_int_T_TM *P135,
  /* TM_API::SEND_MergePackets::P136 */ P136_trackside_int_T_TM *P136,
  /* TM_API::SEND_MergePackets::P137 */ P137_trackside_int_T_TM *P137,
  /* TM_API::SEND_MergePackets::P138 */ P138_trackside_int_T_TM *P138,
  /* TM_API::SEND_MergePackets::P139 */ P139_trackside_int_T_TM *P139,
  /* TM_API::SEND_MergePackets::P140 */ P140_trackside_int_T_TM *P140,
  /* TM_API::SEND_MergePackets::P141 */ P141_trackside_int_T_TM *P141,
  /* TM_API::SEND_MergePackets::P143 */ P143_trackside_int_T_TM *P143,
  /* TM_API::SEND_MergePackets::P145 */ P145_trackside_int_T_TM *P145,
  /* TM_API::SEND_MergePackets::P254 */ P254_trackside_int_T_TM *P254,
  /* TM_API::SEND_MergePackets::P255 */ P255_trackside_int_T_TM *P255,
  /* TM_API::SEND_MergePackets::packetsOUT */ CompressedPackets_T_Common_Types_Pkg *packetsOUT)
{
  /* TM_API::SEND_MergePackets */ kcg_bool op_call;
  /* TM_API::SEND_MergePackets::RadioMessagePackets_01_02 */ CompressedPackets_T_Common_Types_Pkg RadioMessagePackets_01_02;
  /* TM_API::SEND_MergePackets::_L24 */ CompressedPackets_T_Common_Types_Pkg _L24;
  
  /* ck__L6 */ if ((*P001).valid) {
    /* 12 */
    Write_P001_TM_trackside(
      P001,
      packets_IN,
      &op_call,
      &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  }
  /* ck__L15 */ if ((*P002).valid) {
    /* 11 */
    Write_P002_TM_trackside(P002, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L18 */ if ((*P003_baseline2).valid) {
    /* 11 */
    Write_P003V1_TM_trackside_baseline2(
      P003_baseline2,
      &_L24,
      &op_call,
      &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L26 */ if ((*P005).valid) {
    /* 13 */
    Write_P005_TM_trackside(P005, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L28 */ if ((*P012).valid) {
    /* 13 */
    Write_P012_TM_trackside(P012, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L73 */ if ((*P015).valid) {
    /* 14 */
    Write_P015_TM_trackside(P015, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L84 */ if ((*P016).valid) {
    /* 14 */
    Write_P016_TM_trackside(P016, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L86 */ if ((*P021).valid) {
    /* 13 */
    Write_P021_TM_trackside(P021, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L93 */ if ((*P027_baseline2).valid) {
    /* 3 */
    Write_P027V1_TM_trackside_baseline2(
      P027_baseline2,
      &_L24,
      &op_call,
      &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L252 */ if ((*P039_baseline2).valid) {
    /* 12 */
    Write_P039V1_TM_trackside_baseline2(
      P039_baseline2,
      &RadioMessagePackets_01_02,
      &op_call,
      &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L101 */ if ((*P040).valid) {
    /* 11 */
    Write_P040_TM_trackside(P040, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L103 */ if ((*P041).valid) {
    /* 12 */
    Write_P041_TM_trackside(P041, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L110 */ if ((*P042).valid) {
    /* 10 */
    Write_P042_TM_trackside(P042, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L117 */ if ((*P045).valid) {
    /* 9 */
    Write_P045_TM_trackside(P045, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L119 */ if ((*P046).valid) {
    /* 9 */
    Write_P046_TM_trackside(P046, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L126 */ if ((*P057).valid) {
    /* 10 */
    Write_P057_TM_trackside(P057, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L133 */ if ((*P058).valid) {
    /* 9 */
    Write_P058_TM_trackside(P058, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L135 */ if ((*P064).valid) {
    /* 8 */
    Write_P064_TM_trackside(P064, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L142 */ if ((*P065).valid) {
    /* 8 */
    Write_P065_TM_trackside(P065, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L149 */ if ((*P066).valid) {
    /* 7 */
    Write_P066_TM_trackside(P066, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L151 */ if ((*P071).valid) {
    /* 7 */
    Write_P071_TM_trackside(P071, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L158 */ if ((*P072_baseline2).valid) {
    /* 7 */
    Write_P072V1_TM_trackside_baseline2(
      P072_baseline2,
      &RadioMessagePackets_01_02,
      &op_call,
      &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L165 */ if ((*P080).valid) {
    /* 7 */
    Write_P080_TM_trackside(P080, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L167 */ if ((*P131).valid) {
    /* 6 */
    Write_P131_TM_trackside(P131, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L174 */ if ((*P132).valid) {
    /* 6 */
    Write_P132_TM_trackside(P132, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L181 */ if ((*P133).valid) {
    /* 5 */
    Write_P133_TM_trackside(P133, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L183 */ if ((*P134).valid) {
    /* 5 */
    Write_P134_TM_trackside(P134, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L190 */ if ((*P135).valid) {
    /* 5 */
    Write_P135_TM_trackside(P135, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L197 */ if ((*P136).valid) {
    /* 4 */
    Write_P136_TM_trackside(P136, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L199 */ if ((*P137).valid) {
    /* 4 */
    Write_P137_TM_trackside(P137, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L206 */ if ((*P138).valid) {
    /* 4 */
    Write_P138_TM_trackside(P138, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L213 */ if ((*P139).valid) {
    /* 2 */
    Write_P139_TM_trackside(P139, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L215 */ if ((*P140).valid) {
    /* 2 */
    Write_P140_TM_trackside(P140, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L222 */ if ((*P141).valid) {
    /* 2 */
    Write_P141_TM_trackside(P141, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L229 */ if ((*P143).valid) {
    /* 1 */
    Write_P143_TM_trackside(P143, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L231 */ if ((*P145).valid) {
    /* 1 */
    Write_P145_TM_trackside(P145, &RadioMessagePackets_01_02, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  /* ck__L238 */ if ((*P254).valid) {
    /* 1 */
    Write_P254_TM_trackside(P254, &_L24, &op_call, &RadioMessagePackets_01_02);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  /* ck__L243 */ if ((*P255).valid) {
    /* 1 */
    Write_P255_TM_trackside(
      P255,
      &RadioMessagePackets_01_02,
      &op_call,
      packetsOUT);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      packetsOUT,
      &RadioMessagePackets_01_02);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_MergePackets_TM_API.c
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

