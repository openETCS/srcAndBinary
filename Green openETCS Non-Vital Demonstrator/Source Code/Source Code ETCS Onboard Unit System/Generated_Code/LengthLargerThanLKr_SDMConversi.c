/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LengthLargerThanLKr_SDMConversi.h"

/* SDMConversionModelPkg::LengthLargerThanLKr */
kcg_bool LengthLargerThanLKr_SDMConversi(
  /* SDMConversionModelPkg::LengthLargerThanLKr::L */ L_internal_Type_Obu_BasicTypes_ L,
  /* SDMConversionModelPkg::LengthLargerThanLKr::LnvKrInt */ L_NVKRINT LnvKrInt)
{
  /* SDMConversionModelPkg::LengthLargerThanLKr */
  static kcg_int tmp;
  /* SDMConversionModelPkg::LengthLargerThanLKr::isLarger */
  static kcg_bool isLarger;
  
  switch (LnvKrInt) {
    case L_NVKRINT_0m :
      tmp = cLKrIntLookUp_SDMConversionMode[0];
      break;
    case L_NVKRINT_25m :
      tmp = cLKrIntLookUp_SDMConversionMode[1];
      break;
    case L_NVKRINT_50m :
      tmp = cLKrIntLookUp_SDMConversionMode[2];
      break;
    case L_NVKRINT_75m :
      tmp = cLKrIntLookUp_SDMConversionMode[3];
      break;
    case L_NVKRINT_100m :
      tmp = cLKrIntLookUp_SDMConversionMode[4];
      break;
    case L_NVKRINT_150m :
      tmp = cLKrIntLookUp_SDMConversionMode[5];
      break;
    case L_NVKRINT_200m :
      tmp = cLKrIntLookUp_SDMConversionMode[6];
      break;
    case L_NVKRINT_300m :
      tmp = cLKrIntLookUp_SDMConversionMode[7];
      break;
    case L_NVKRINT_400m :
      tmp = cLKrIntLookUp_SDMConversionMode[8];
      break;
    case L_NVKRINT_500m :
      tmp = cLKrIntLookUp_SDMConversionMode[9];
      break;
    case L_NVKRINT_600m :
      tmp = cLKrIntLookUp_SDMConversionMode[10];
      break;
    case L_NVKRINT_700m :
      tmp = cLKrIntLookUp_SDMConversionMode[11];
      break;
    case L_NVKRINT_800m :
      tmp = cLKrIntLookUp_SDMConversionMode[12];
      break;
    case L_NVKRINT_900m :
      tmp = cLKrIntLookUp_SDMConversionMode[13];
      break;
    case L_NVKRINT_1000m :
      tmp = cLKrIntLookUp_SDMConversionMode[14];
      break;
    case L_NVKRINT_1100m :
      tmp = cLKrIntLookUp_SDMConversionMode[15];
      break;
    case L_NVKRINT_1200m :
      tmp = cLKrIntLookUp_SDMConversionMode[16];
      break;
    case L_NVKRINT_1300m :
      tmp = cLKrIntLookUp_SDMConversionMode[17];
      break;
    case L_NVKRINT_1400m :
      tmp = cLKrIntLookUp_SDMConversionMode[18];
      break;
    case L_NVKRINT_1500m :
      tmp = cLKrIntLookUp_SDMConversionMode[19];
      break;
    case L_NVKRINT_1600m :
      tmp = cLKrIntLookUp_SDMConversionMode[20];
      break;
    case L_NVKRINT_1700m :
      tmp = cLKrIntLookUp_SDMConversionMode[21];
      break;
    case L_NVKRINT_1800m :
      tmp = cLKrIntLookUp_SDMConversionMode[22];
      break;
    case L_NVKRINT_1900m :
      tmp = cLKrIntLookUp_SDMConversionMode[23];
      break;
    case L_NVKRINT_2000m :
      tmp = cLKrIntLookUp_SDMConversionMode[24];
      break;
    case L_NVKRINT_2100m :
      tmp = cLKrIntLookUp_SDMConversionMode[25];
      break;
    case L_NVKRINT_2200m :
      tmp = cLKrIntLookUp_SDMConversionMode[26];
      break;
    case L_NVKRINT_2300m :
      tmp = cLKrIntLookUp_SDMConversionMode[27];
      break;
    case L_NVKRINT_2400m :
      tmp = cLKrIntLookUp_SDMConversionMode[28];
      break;
    case L_NVKRINT_2500m :
      tmp = cLKrIntLookUp_SDMConversionMode[29];
      break;
    case L_NVKRINT_2600m :
      tmp = cLKrIntLookUp_SDMConversionMode[30];
      break;
    case L_NVKRINT_2700m :
      tmp = cLKrIntLookUp_SDMConversionMode[31];
      break;
    
  }
  isLarger = L >= 100 * tmp;
  return isLarger;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LengthLargerThanLKr_SDMConversi.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

