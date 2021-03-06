/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter */
void TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::TrainData */DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *TrainData,
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::TrainCategoryIndex */kcg_int *TrainCategoryIndex,
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::AxleLoadIndex */kcg_int *AxleLoadIndex,
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::TrainLenght */kcg_real *TrainLenght,
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::MaxSpeed */kcg_real *MaxSpeed,
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::LoadingGougeIndex */kcg_int *LoadingGougeIndex,
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::AirtightIndex */kcg_int *AirtightIndex,
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::BrakePerc */kcg_real *BrakePerc)
{
  *BrakePerc = (kcg_real) (*TrainData).m_brakeperct;
  *AirtightIndex = /* 1 */
    AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
      (*TrainData).m_airTight);
  *LoadingGougeIndex = /* 1 */
    LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
      (*TrainData).m_loadingGauge);
  *MaxSpeed = (kcg_real) (*TrainData).v_maxTrain;
  *TrainLenght = (kcg_real) (*TrainData).l_train;
  *AxleLoadIndex = /* 1 */
    AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
      (*TrainData).m_axleLoad);
  *TrainCategoryIndex = /* 1 */
    TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
      (*TrainData).trainCategory);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

