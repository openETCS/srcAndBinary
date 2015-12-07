/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_CheckBGConsisten.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets */
void MergAllPackets_CheckBGConsisten(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegramACC */ Telegram_T_BG_Types_Pkg *telegramACC,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram */ Telegram_T_BG_Types_Pkg *telegram,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::go_on */ kcg_bool *go_on,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */ Telegram_T_BG_Types_Pkg *telegram_out)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L17 */
  static CompressedPacketData_T_Common_T _L17_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L13 */
  static kcg_int _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L11 */
  static kcg_int _L11_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L12 */
  static kcg_int _L12_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::diff */
  static kcg_int diff;
  static kcg_int i;
  
  *go_on = (*telegram).valid;
  diff = /* 4 */
    N_PIG2int_CheckBGConsistency_Pk((*telegramACC).telegramheader.n_pig) -
    /* 3 */ N_PIG2int_CheckBGConsistency_Pk((*telegram).telegramheader.n_pig);
  IfBlock1_clock = (diff == - 1) & (((*telegramACC).telegramheader.m_dup ==
        _44_M_DUP_This_balise_is_a_dupl) & ((*telegram).telegramheader.m_dup ==
        M_DUP_This_balise_is_a_duplicat)) & *go_on;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pk(telegram_out, telegram);
    kcg_copy_CompressedPacketData_T(
      &(*telegram_out).packets.PacketData,
      &(*telegramACC).packets.PacketData);
  }
  else {
    else_clock_IfBlock1 = (diff == 1) & (((*telegramACC).telegramheader.m_dup ==
          M_DUP_This_balise_is_a_duplicat) &
        ((*telegram).telegramheader.m_dup == _44_M_DUP_This_balise_is_a_dupl)) &
      *go_on;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pk(telegram_out, telegram);
      kcg_copy_CompressedPacketData_T(
        &(*telegram_out).packets.PacketData,
        &(*telegramACC).packets.PacketData);
    }
    else /* ck_anon_activ */ if (*go_on) {
      /* 1 */
      FindIndexOfMetaDataIteration_Ch(
        &(*telegramACC).packets.PacketHeaders,
        &_L11_IfBlock1,
        &_L12_IfBlock1);
      _L13_IfBlock1 = _L12_IfBlock1 + 1;
      kcg_copy_Telegram_T_BG_Types_Pk(telegram_out, telegram);
      /* 1 */
      Merg2MetaDataIteration_CheckBGC(
        &(*telegramACC).packets.PacketHeaders,
        telegram,
        &(*telegram_out).packets.PacketHeaders);
      for (i = 0; i < 500; i++) {
        _L17_IfBlock1[i] = _L13_IfBlock1;
      }
      /* 1 */
      Merg2PacketsListArray_CheckBGCo(
        &(*telegramACC).packets.PacketData,
        &_L17_IfBlock1,
        &(*telegram).packets.PacketData,
        &(*telegram_out).packets.PacketData);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pk(telegram_out, telegramACC);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergAllPackets_CheckBGConsisten.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

