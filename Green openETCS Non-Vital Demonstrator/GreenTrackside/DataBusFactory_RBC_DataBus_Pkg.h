/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _DataBusFactory_RBC_DataBus_Pkg
#define _DataBusFactory_RBC_DataBus_Pkg

#include "kcg_types.h"
#include "Clock__Limit_RBC_Time_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_DataBus_Pkg::DataBusFactory::outDataBus */ outDataBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int times_1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_DataBusFactory_RBC_DataBus;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_DataBus_Pkg::DataBusFactory */
extern void DataBusFactory_RBC_DataBus_Pkg(
  /* RBC_DataBus_Pkg::DataBusFactory::initConfig */ DynamicConfig_T *initConfig,
  /* RBC_DataBus_Pkg::DataBusFactory::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  outC_DataBusFactory_RBC_DataBus *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DataBusFactory_reset_RBC_DataBu(
  outC_DataBusFactory_RBC_DataBus *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DataBusFactory_init_RBC_DataBus(
  outC_DataBusFactory_RBC_DataBus *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _DataBusFactory_RBC_DataBus_Pkg */
/* $**************** KCG Version 6.4 (build i21) ****************
** DataBusFactory_RBC_DataBus_Pkg.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

