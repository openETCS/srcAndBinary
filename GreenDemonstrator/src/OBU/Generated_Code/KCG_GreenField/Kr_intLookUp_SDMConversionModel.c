/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kr_intLookUp_SDMConversionModel.h"

/* SDMConversionModelPkg::Kr_intLookUp */
kcg_int Kr_intLookUp_SDMConversionModel(
  /* SDMConversionModelPkg::Kr_intLookUp::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
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
    Kr_intIterator_SDMConversionMod(
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
** Kr_intLookUp_SDMConversionModel.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

