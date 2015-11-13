/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kr_intIterator_SDMConversionMod.h"

/* SDMConversionModelPkg::Kr_intIterator */
void Kr_intIterator_SDMConversionMod(
  /* SDMConversionModelPkg::Kr_intIterator::m_last */ kcg_int m_last,
  /* SDMConversionModelPkg::Kr_intIterator::Kr_int */ nvkrint_T_Packet_Types_Pkg *Kr_int,
  /* SDMConversionModelPkg::Kr_intIterator::L */ L_internal_Type_Obu_BasicTypes_ L,
  /* SDMConversionModelPkg::Kr_intIterator::goOn */ kcg_bool *goOn,
  /* SDMConversionModelPkg::Kr_intIterator::m_now */ kcg_int *m_now)
{
  *goOn = (*Kr_int).valid & /* 1 */
    LengthLargerThanLKr_SDMConversi(L, (*Kr_int).l_nvkrint);
  /* 1 */ if (*goOn) {
    *m_now = /* 1 */ TransformA_realToA_int_SDM_Type((*Kr_int).m_nvkrint);
  }
  else {
    *m_now = m_last;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kr_intIterator_SDMConversionMod.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

