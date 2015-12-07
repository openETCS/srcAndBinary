/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _C_P012_compr_onboard_TM_conver
#define _C_P012_compr_onboard_TM_conver

#include "kcg_types.h"
#include "CAST_Int_to_D_DP_TM_conversions.h"
#include "CAST_Int_to_D_OL_TM_conversions.h"
#include "CAST_Int_to_V_LOA_TM_conversion.h"
#include "CAST_Int_to_T_ENDTIMER_TM_conve.h"
#include "CAST_Int_to_T_SECTIONTIMER_TM_c.h"
#include "CAST_Int_to_Q_SECTIONTIMER_TM_c.h"
#include "CAST_Int_to_D_SECTIONTIMERSTOPL.h"
#include "CAST_Int_to_Q_OVERLAP_TM_conver.h"
#include "CAST_Int_to_Q_DANGERPOINT_TM_co.h"
#include "CAST_Int_to_T_LOA_TM_conversion.h"
#include "CAST_Int_to_T_OL_TM_conversions.h"
#include "CAST_Int_to_Q_ENDTIMER_TM_conve.h"
#include "CAST_Int_to_V_RELEASEDP_TM_conv.h"
#include "CAST_Int_to_L_ENDSECTION_TM_con.h"
#include "CAST_Int_to_V_RELEASEOL_TM_conv.h"
#include "CAST_Int_to_D_ENDTIMERSTARTLOC_.h"
#include "CAST_Int_to_D_STARTOL_TM_conver.h"
#include "CAST_Int_to_V_MAIN_TM_conversio.h"
#include "C_P012_unflatten_sections_TM_li.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_conversions::C_P012_compr_onboard */
extern void C_P012_compr_onboard_TM_convers(
  /* TM_conversions::C_P012_compr_onboard::PacketData */ CompressedPacketData_T_Common_T *PacketData,
  /* TM_conversions::C_P012_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_ *Metadata_Element,
  /* TM_conversions::C_P012_compr_onboard::P012_onboard */ P012_OBU_T_TM *P012_onboard);

#endif /* _C_P012_compr_onboard_TM_conver */
/* $**************** KCG Version 6.4 (build i21) ****************
** C_P012_compr_onboard_TM_convers.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

