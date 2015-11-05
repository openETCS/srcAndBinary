/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kr_intLookUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kr_intLookUp */
kcg_int Kr_intLookUp_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kr_intLookUp::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::Kr_intLookUp::trainData */ trainData_T_TIU_Types_Pkg *trainData)
{
  /* SDMConversionModelPkg::Kr_intLookUp */
  static kcg_int acc;
  /* SDMConversionModelPkg::Kr_intLookUp */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* SDMConversionModelPkg::Kr_intLookUp::m_KrInt */
  static kcg_int m_KrInt;
  
  m_KrInt = 100;
  /* 1 */ for (i = 0; i < 7; i++) {
    acc = m_KrInt;
    /* 1 */
    Kr_intIterator_SDMConversionModelPkg(
      acc,
      &(*NationalValues).nvkrintArray[i],
      (*trainData).trainLength,
      &cond_iterw,
      &m_KrInt);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  return m_KrInt;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kr_intLookUp_SDMConversionModelPkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

