/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T15:17:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProbeSDM_EnvSim.h"

#ifdef WITH_SCADE
extern void es_scade_probe_sdm_init(outC_ProbeSDM_EnvSim *outC);
extern void es_scade_probe_sdm_cycle(TargetCollection_T_TargetManagement_types *targetCollection,
                                     CurveCollection_T_CalcBrakingCurves_types *curveCollection,
                                     Target_T_TargetManagement_types *target,
                                     outC_ProbeSDM_EnvSim *outC);

int ProbeSDM_initialized_EnvSim = 0;
#endif // WITH_SCADE

void ProbeSDM_init_EnvSim(outC_ProbeSDM_EnvSim *outC)
{
#ifdef WITH_SCADE
  es_scade_probe_sdm_init(outC);
  ProbeSDM_initialized_EnvSim = 1;
#endif // WITH_SCADE
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ProbeSDM_reset_EnvSim(outC_ProbeSDM_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::ProbeSDM */
void ProbeSDM_EnvSim(
  /* EnvSim::ProbeSDM::targetCollection */ TargetCollection_T_TargetManage *targetCollection,
  /* EnvSim::ProbeSDM::curveCollection */ CurveCollection_T_CalcBrakingCu *curveCollection,
  /* EnvSim::ProbeSDM::target */ Target_T_TargetManagement_types *target,
  outC_ProbeSDM_EnvSim *outC)
{
  /* The body of this function must be provided */
  #ifdef WITH_SCADE
  if(!ProbeSDM_initialized_EnvSim) {
    ProbeSDM_init_EnvSim(outC);
  }
  es_scade_probe_sdm_cycle(targetCollection,curveCollection,target,outC);
#endif // WITH_SCADE
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ProbeSDM_EnvSim.dc
** Generation date: 2015-11-13T15:17:34
*************************************************************$ */