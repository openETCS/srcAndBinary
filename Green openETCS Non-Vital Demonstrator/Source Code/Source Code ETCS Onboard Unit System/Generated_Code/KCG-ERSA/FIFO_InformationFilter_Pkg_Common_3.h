/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */
#ifndef _FIFO_InformationFilter_Pkg_Common_3_H_
#define _FIFO_InformationFilter_Pkg_Common_3_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::FIFO::outData */ outData;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::outValid */ outValid;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::size */ size;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L20 */ _L20_IfBlock1;
  array__108337 /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L4 */ _L4_IfBlock1;
  array__108337 /* InformationFilter_Pkg::Common::FIFO::buffer */ buffer;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L32 */ _L32;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L50 */ _L50;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_FIFO_InformationFilter_Pkg_Common_3;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::Common::FIFO */
extern void FIFO_InformationFilter_Pkg_Common_3(
  /* InformationFilter_Pkg::Common::FIFO::inData */ReceivedMessage_T_Common_Types_Pkg *inData,
  /* InformationFilter_Pkg::Common::FIFO::inValid */kcg_bool inValid,
  /* InformationFilter_Pkg::Common::FIFO::inReady */kcg_bool inReady,
  outC_FIFO_InformationFilter_Pkg_Common_3 *outC);

extern void FIFO_reset_InformationFilter_Pkg_Common_3(
  outC_FIFO_InformationFilter_Pkg_Common_3 *outC);

#endif /* _FIFO_InformationFilter_Pkg_Common_3_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_InformationFilter_Pkg_Common_3.h
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */

