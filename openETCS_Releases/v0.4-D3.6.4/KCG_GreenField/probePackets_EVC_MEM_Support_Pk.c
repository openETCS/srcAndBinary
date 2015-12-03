/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "probePackets_EVC_MEM_Support_Pk.h"

#ifndef KCG_USER_DEFINED_INIT
void probePackets_init_EVC_MEM_Suppo(outC_probePackets_EVC_MEM_Suppo *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->p65.valid = kcg_true;
  outC->p65.q_dir = Q_DIR_Reverse;
  outC->p65.q_scale = Q_SCALE_10_cm_scale;
  outC->p65.nid_tsr = 0;
  outC->p65.d_tsr = 0;
  outC->p65.l_tsr = 0;
  outC->p65.q_front = Q_FRONT_Train_length_delay_on_v;
  outC->p65.v_tsr = 0;
  outC->p80.valid = kcg_true;
  outC->p80.q_dir = Q_DIR_Reverse;
  outC->p80.l_packet = 0;
  outC->p80.q_scale = Q_SCALE_10_cm_scale;
  outC->p80.n_iter = 0;
  for (i = 0; i < 33; i++) {
    outC->p80.sections[i].valid = kcg_true;
    outC->p80.sections[i].d_mamode = 0;
    outC->p80.sections[i].m_mamode = M_MAMODE_On_Sight;
    outC->p80.sections[i].v_mamode = 0;
    outC->p80.sections[i].l_mamode = 0;
    outC->p80.sections[i].l_ackmamode = 0;
    outC->p80.sections[i].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->p42.valid = kcg_true;
  outC->p42.q_dir = Q_DIR_Reverse;
  outC->p42.q_rbc = Q_RBC_Terminate_communication_s;
  outC->p42.nid_c = 0;
  outC->p42.nid_rbc = 0;
  outC->p42.nid_radio = 0;
  outC->p42.q_sleepsession = Q_SLEEPSESSION_Ignore_session_e;
  outC->p27.valid = kcg_true;
  outC->p27.q_dir = Q_DIR_Reverse;
  outC->p27.q_scale = Q_SCALE_10_cm_scale;
  outC->p27.d_static = 0;
  outC->p27.v_static = 0;
  outC->p27.q_front = Q_FRONT_Train_length_delay_on_v;
  for (i = 0; i < 7; i++) {
    outC->p21[i].valid = kcg_true;
    outC->p21[i].q_dir = Q_DIR_Reverse;
    outC->p21[i].q_scale = Q_SCALE_10_cm_scale;
    outC->p21[i].d_gradient = 0;
    outC->p21[i].q_gdir = Q_GDIR_downhill;
    outC->p21[i].g_a = 0;
    outC->p27.diffArray[i].valid = kcg_true;
    outC->p27.diffArray[i].q_diff = Q_DIFF_Cant_Deficiency_specific;
    outC->p27.diffArray[i].nc_cddiff = _42_NC_CDDIFF_Specific_SSP_appl;
    outC->p27.diffArray[i].nc_diff = 0;
    outC->p27.diffArray[i].v_diff = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->p27.SSPArray[i].valid = kcg_true;
    outC->p27.SSPArray[i].d_static = 0;
    outC->p27.SSPArray[i].v_static = 0;
    outC->p27.SSPArray[i].q_front = Q_FRONT_Train_length_delay_on_v;
    for (i1 = 0; i1 < 7; i1++) {
      outC->p27.SSPArray[i].diffArray[i1].valid = kcg_true;
      outC->p27.SSPArray[i].diffArray[i1].q_diff =
        Q_DIFF_Cant_Deficiency_specific;
      outC->p27.SSPArray[i].diffArray[i1].nc_cddiff =
        _42_NC_CDDIFF_Specific_SSP_appl;
      outC->p27.SSPArray[i].diffArray[i1].nc_diff = 0;
      outC->p27.SSPArray[i].diffArray[i1].v_diff = 0;
    }
  }
  outC->p05.valid = kcg_true;
  outC->p05.q_dir = Q_DIR_Reverse;
  outC->p05.l_packet = 0;
  outC->p05.q_scale = Q_SCALE_10_cm_scale;
  outC->p05.n_iter = 0;
  for (i = 0; i < 33; i++) {
    outC->p05.sections[i].valid = kcg_true;
    outC->p05.sections[i].d_link = 0;
    outC->p05.sections[i].q_newcountry = Q_NEWCOUNTRY_Same_country__or__;
    outC->p05.sections[i].nid_c = 0;
    outC->p05.sections[i].nid_bg = 0;
    outC->p05.sections[i].q_linkorientation = _56_Q_LINKORIENTATION_The_balis;
    outC->p05.sections[i].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->p05.sections[i].q_locacc = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->p46[i].valid = kcg_true;
    outC->p46[i].q_dir = Q_DIR_Reverse;
    outC->p46[i].m_leveltr = M_LEVELTR_Level_0;
    outC->p46[i].nid_ntc = 0;
    outC->p41[i].valid = kcg_true;
    outC->p41[i].q_dir = Q_DIR_Reverse;
    outC->p41[i].q_scale = Q_SCALE_10_cm_scale;
    outC->p41[i].d_leveltr = 0;
    outC->p41[i].m_leveltr = M_LEVELTR_Level_0;
    outC->p41[i].nid_ntc = 0;
    outC->p41[i].l_ackleveltr = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void probePackets_reset_EVC_MEM_Supp(outC_probePackets_EVC_MEM_Suppo *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC_MEM_Support_Pkg::probePackets */
void probePackets_EVC_MEM_Support_Pk(
  /* EVC_MEM_Support_Pkg::probePackets::actualMessage */ API_TrackSideInput_T_API_Msg_Pk *actualMessage,
  outC_probePackets_EVC_MEM_Suppo *outC)
{
  /* EVC_MEM_Support_Pkg::probePackets::_L162 */
  static kcg_bool _L162;
  
  /* 1 */
  Read_P027V1_Legacy_for_ML_TM_sp(&(*actualMessage).packets, &outC->p27);
  /* 1 */ Read_P021_Legacy_TM_specific(&(*actualMessage).packets, &outC->p21);
  /* 1 */ Read_P041_Legacy_TM_specific(&(*actualMessage).packets, &outC->p41);
  /* 1 */ Read_P046_Legacy_TM_specific(&(*actualMessage).packets, &outC->p46);
  /* 1 */ Read_P005_TM(&(*actualMessage).packets, &_L162, &outC->p05);
  /* 1 */ Read_P042_TM(&(*actualMessage).packets, &_L162, &outC->p42);
  /* 1 */ Read_P080_TM(&(*actualMessage).packets, &_L162, &outC->p80);
  /* 1 */ Read_P065_TM(&(*actualMessage).packets, &_L162, &outC->p65);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** probePackets_EVC_MEM_Support_Pk.c
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

