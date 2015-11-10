/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P015_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P015 */
void Send_P015_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P015::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P015::P015 */P015_trackside_int_T_TM *P015,
  /* MessageLibBaseline2::Send_P015::B_data_out */CompressedPackets_T_Common_Types_Pkg *B_data_out)
{
  kcg_bool tmp;
  
  if ((*P015).valid) {
    /* 1 */ Write_P015_TM_trackside(P015, B_data_in, &tmp, B_data_out);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(B_data_out, B_data_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P015_MessageLibBaseline2.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

