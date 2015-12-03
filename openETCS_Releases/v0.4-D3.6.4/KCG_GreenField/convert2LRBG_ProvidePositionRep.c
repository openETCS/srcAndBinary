/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convert2LRBG_ProvidePositionRep.h"

/* ProvidePositionReport_Pkg::convert2LRBG */
NID_LRBG convert2LRBG_ProvidePositionRep(
  /* ProvidePositionReport_Pkg::convert2LRBG::nid_c */ NID_C nid_c,
  /* ProvidePositionReport_Pkg::convert2LRBG::nid_bg */ NID_BG nid_bg)
{
  /* ProvidePositionReport_Pkg::convert2LRBG::nid_lrbg */
  static NID_LRBG nid_lrbg;
  
  nid_lrbg = 100000 * nid_c + nid_bg;
  return nid_lrbg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** convert2LRBG_ProvidePositionRep.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

