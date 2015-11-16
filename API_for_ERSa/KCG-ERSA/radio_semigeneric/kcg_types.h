/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-ERSA/radio_semigeneric\kcg_s2c_config.txt
** Generation date: 2015-11-16T17:03:44
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef unsigned char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* Q_ORIENTATION */
typedef enum {
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0,
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction = 1
} Q_ORIENTATION;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* T_TRAIN */
typedef kcg_int T_TRAIN;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* NID_EM */
typedef kcg_int NID_EM;

/* D_SR */
typedef kcg_int D_SR;

/* D_REF */
typedef kcg_int D_REF;

/* D_EMERGENCYSTOP */
typedef kcg_int D_EMERGENCYSTOP;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* D_TAFDISPLAY */
typedef kcg_int D_TAFDISPLAY;

/* L_TAFDISPLAY */
typedef kcg_int L_TAFDISPLAY;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
  kcg_int field4;
  kcg_int field5;
  kcg_int field6;
  kcg_int field7;
  kcg_int field8;
} struct__71000;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__71000 M_TrackTrain_Radio_T_TM_radio_messages;

typedef struct {
  kcg_int radioDevice;
  T_internal_Type_Obu_BasicTypes_Pkg receivedSystemTime;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_reference;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_SR d_sr;
  T_TRAIN t_sh_rqst;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
  M_VERSION m_version;
} struct__71015;

/* TM_transitional::Radio_TrackTrain_Header_T */
typedef struct__71015 Radio_TrackTrain_Header_T_TM_transitional;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__71015 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__71033;

/* TM_radio_messages::M_027_T */
typedef struct__71033 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__71033 M_028_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__71043;

/* TM_radio_messages::M_032_T */
typedef struct__71043 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__71053;

/* TM_radio_messages::M_033_T */
typedef struct__71053 M_033_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_TAFDISPLAY d_tafdisplay;
  L_TAFDISPLAY l_tafdisplay;
} struct__71064;

/* TM_radio_messages::M_034_T */
typedef struct__71064 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__71078;

/* TM_radio_messages::M_024_T */
typedef struct__71078 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__71078 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__71078 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__71078 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__71078 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__71078 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__71078 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__71078 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__71078 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__71087;

/* TM_radio_messages::M_045_T */
typedef struct__71087 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__71097;

/* TM_radio_messages::M_002_T */
typedef struct__71097 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__71108;

/* TM_radio_messages::M_008_T */
typedef struct__71108 M_008_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
} struct__71118;

/* TM_radio_messages::M_015_T */
typedef struct__71118 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__71132;

/* TM_radio_messages::M_018_T */
typedef struct__71132 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__71132 M_016_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_TRACTION;
  kcg_int M_TRACTION;
} struct__71142;

/* TM_baseline2::P039V1_trackside_int_T */
typedef struct__71142 P039V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_255[255];

/* TM::X_TEXT_trackside_T */
typedef array_int_255 X_TEXT_trackside_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TEXTCLASS;
  kcg_int Q_TEXTDISPLAY;
  kcg_int D_TEXTDISPLAY_start;
  kcg_int M_MODETEXTDISPLAY_start;
  kcg_int M_LEVELTEXTDISPLAY_start;
  kcg_int NID_NTC_start;
  kcg_int L_TEXTDISPLAY_end;
  kcg_int T_TEXTDISPLAY_end;
  kcg_int M_MODETEXTDISPLAY_end;
  kcg_int M_LEVELTEXTDISPLAY_end;
  kcg_int NID_NTC_end;
  kcg_int Q_TEXTCONFIRM;
  kcg_int L_TEXT;
  X_TEXT_trackside_T_TM X_TEXT;
} struct__71155;

/* TM_baseline2::P072V1_trackside_int_T */
typedef struct__71155 P072V1_trackside_int_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__71177;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__71177 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__71182[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__71182 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__71182 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__71185;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__71185 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__71193[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__71193 P027V1_trackside_sectionlist_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER_n;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
  kcg_int N_ITER_k;
  P027V1_trackside_sectionlist_T_TM_baseline2 SECTIONS_SSP;
} struct__71196;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__71196 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_32[32];

/* TM_baseline2::P003V1_trackide_sectionlist_T */
typedef array_int_32 P003V1_trackide_sectionlist_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_VALIDNV;
  kcg_int N_ITER;
  P003V1_trackide_sectionlist_T_TM_baseline2 SECTIONS;
  kcg_int V_NVSHUNT;
  kcg_int V_NVSTFF;
  kcg_int V_NVONSIGHT;
  kcg_int V_NVUNFIT;
  kcg_int V_NVREL;
  kcg_int D_NVROLL;
  kcg_int Q_NVSRBKTRG;
  kcg_int Q_NVEMRRLS;
  kcg_int V_NVALLOWOVTRP;
  kcg_int V_NVSUPOVTRP;
  kcg_int D_NVOVTRP;
  kcg_int T_NVOVTRP;
  kcg_int D_NVPOTRP;
  kcg_int M_NVCONTACT;
  kcg_int T_NVCONTACT;
  kcg_int M_NVDERUN;
  kcg_int D_NVSTFF;
  kcg_int Q_NVDRIVER_ADHES;
} struct__71214;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__71214 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_int radioDevice;
  kcg_int receivedSystemTime;
  kcg_int nid_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_reference;
  kcg_int nid_em;
  kcg_int q_scale;
  kcg_int d_sr;
  kcg_int t_sh_rqst;
  kcg_int d_ref;
  kcg_int q_dir;
  kcg_int d_emergencystop;
  kcg_int m_version;
} struct__71243;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__71243 Radio_TrackTrain_Header_T_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__71264;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__71264 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__71272[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__71272 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__71275;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__71275 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__71280;

/* TM::CompressedRadioMessage */
typedef struct__71280 CompressedRadioMessage_TM;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__71285;

/* TM::P255_trackside_int_T */
typedef struct__71285 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RIU;
  kcg_int NID_C;
  kcg_int NID_RIU;
  kcg_int NID_RADIO;
} struct__71290;

/* TM::P143_trackside_int_T */
typedef struct__71290 P143_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
} struct__71301;

/* TM::P064_trackside_int_T */
typedef struct__71301 P064_trackside_int_T_TM;

/* TM::P135_trackside_int_T */
typedef struct__71301 P135_trackside_int_T_TM;

/* TM::P254_trackside_int_T */
typedef struct__71301 P254_trackside_int_T_TM;

/* TM::P145_trackside_int_T */
typedef struct__71301 P145_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_REVERSE;
  kcg_int V_REVERSE;
} struct__71308;

/* TM::P139_trackside_int_T */
typedef struct__71308 P139_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_OPERATIONAL;
} struct__71318;

/* TM::P140_trackside_int_T */
typedef struct__71318 P140_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_GDIR;
  kcg_int G_TSR;
} struct__71326;

/* TM::P141_trackside_int_T */
typedef struct__71326 P141_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
} struct__71335;

/* TM::P136_trackside_int_T */
typedef struct__71335 P136_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__71345;

/* TM::P137_trackside_int_T */
typedef struct__71345 P137_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STARTREVERSE;
  kcg_int L_REVERSEAREA;
} struct__71353;

/* TM::P138_trackside_int_T */
typedef struct__71353 P138_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_RIU;
  kcg_int NID_C;
  kcg_int NID_RIU;
  kcg_int NID_RADIO;
  kcg_int D_INFILL;
  kcg_int NID_C_next;
  kcg_int NID_BG_next;
} struct__71363;

/* TM::P133_trackside_int_T */
typedef struct__71363 P133_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_LOOP;
  kcg_int D_LOOP;
  kcg_int L_LOOP;
  kcg_int Q_LOOPDIR;
  kcg_int Q_SSCODE;
} struct__71378;

/* TM::P134_trackside_int_T */
typedef struct__71378 P134_trackside_int_T_TM;

typedef struct {
  kcg_int D_MAMODE;
  kcg_int M_MAMODE;
  kcg_int V_MAMODE;
  kcg_int L_MAMODE;
  kcg_int L_ACKMAMODE;
  kcg_int Q_MAMODE;
} struct__71391;

/* TM::P080_section_int_T */
typedef struct__71391 P080_section_int_T_TM;

typedef P080_section_int_T_TM array__71400[32];

/* TM::P080_trackide_sectionlist_T */
typedef array__71400 P080_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_MAMODE;
  kcg_int M_MAMODE;
  kcg_int V_MAMODE;
  kcg_int L_MAMODE;
  kcg_int L_ACKMAMODE;
  kcg_int Q_MAMODE;
  kcg_int N_ITER;
  P080_trackide_sectionlist_T_TM SECTIONS;
} struct__71403;

/* TM::P080_trackside_int_T */
typedef struct__71403 P080_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_RBCTR;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} struct__71419;

/* TM::P131_trackside_int_T */
typedef struct__71419 P131_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_ASPECT;
} struct__71432;

/* TM::P132_trackside_int_T */
typedef struct__71432 P132_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_TSR;
} struct__71440;

/* TM::P066_trackside_int_T */
typedef struct__71440 P066_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_ADHESION;
  kcg_int L_ADHESION;
  kcg_int M_ADHESION;
} struct__71448;

/* TM::P071_trackside_int_T */
typedef struct__71448 P071_trackside_int_T_TM;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__71459;

/* TM::P058_section_int_T */
typedef struct__71459 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__71464[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__71464 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__71464 P058_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int T_CYCLOC;
  kcg_int D_CYCLOC;
  kcg_int M_LOC;
  kcg_int N_ITER;
  P058_trackide_sectionlist_T_TM SECTIONS;
} struct__71467;

/* TM::P058_trackside_int_T */
typedef struct__71467 P058_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_TSR;
  kcg_int D_TSR;
  kcg_int L_TSR;
  kcg_int Q_FRONT;
  kcg_int V_TSR;
} struct__71480;

/* TM::P065_trackside_int_T */
typedef struct__71480 P065_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__71493;

/* TM::P045_trackside_int_T */
typedef struct__71493 P045_trackside_int_T_TM;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__71501;

/* TM::P046_section_int_T */
typedef struct__71501 P046_section_int_T_TM;

typedef P046_section_int_T_TM array__71506[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__71506 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__71509;

/* TM::P046_trackside_int_T */
typedef struct__71509 P046_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__71520;

/* TM::P057_trackside_int_T */
typedef struct__71520 P057_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_CURRENT;
  kcg_int M_CURRENT;
} struct__71530;

/* TM::P040_trackside_int_T */
typedef struct__71530 P040_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__71540;

/* TM::P041_section_int_T */
typedef struct__71540 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__71546[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__71546 P041_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LEVELTR;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
  kcg_int N_ITER;
  P041_trackide_sectionlist_T_TM SECTIONS;
} struct__71549;

/* TM::P041_trackside_int_T */
typedef struct__71549 P041_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RBC;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} struct__71563;

/* TM::P042_trackside_int_T */
typedef struct__71563 P042_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int L_SECTION;
} struct__71575;

/* TM::P016_trackside_int_T */
typedef struct__71575 P016_trackside_int_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__71584;

/* TM::P021_section_int_T */
typedef struct__71584 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__71590[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__71590 P021_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
  kcg_int N_ITER;
  P021_trackide_sectionlist_T_TM SECTIONS;
} struct__71593;

/* TM::P021_trackside_int_T */
typedef struct__71593 P021_trackside_int_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__71606;

/* TM::P015_section_int_T */
typedef struct__71606 P015_section_int_T_TM;

typedef P015_section_int_T_TM array__71613[32];

/* TM::P012_trackide_sectionlist_T */
typedef array__71613 P012_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__71613 P015_OBU_sectionlist_int_T_TM;

/* TM::P015_trackide_sectionlist_T */
typedef array__71613 P015_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_LOA;
  kcg_int T_LOA;
  kcg_int N_ITER;
  P015_trackide_sectionlist_T_TM SECTIONS;
  kcg_int L_ENDSECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
  kcg_int Q_ENDTIMER;
  kcg_int T_ENDTIMER;
  kcg_int D_ENDTIMERSTARTLOC;
  kcg_int Q_DANGERPOINT;
  kcg_int D_DP;
  kcg_int V_RELEASEDP;
  kcg_int Q_OVERLAP;
  kcg_int D_STARTOL;
  kcg_int T_OL;
  kcg_int D_OL;
  kcg_int V_RELEASEOL;
} struct__71616;

/* TM::P015_trackside_int_T */
typedef struct__71616 P015_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_MAIN;
  kcg_int V_LOA;
  kcg_int T_LOA;
  kcg_int N_ITER;
  P012_trackide_sectionlist_T_TM SECTIONS;
  kcg_int L_ENDSECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
  kcg_int Q_ENDTIMER;
  kcg_int T_ENDTIMER;
  kcg_int D_ENDTIMERSTARTLOC;
  kcg_int Q_DANGERPOINT;
  kcg_int D_DP;
  kcg_int V_RELEASEDP;
  kcg_int Q_OVERLAP;
  kcg_int D_STARTOL;
  kcg_int T_OL;
  kcg_int D_OL;
  kcg_int V_RELEASEOL;
} struct__71643;

/* TM::P012_trackside_int_T */
typedef struct__71643 P012_trackside_int_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__71671;

/* TM::P005_section_int_T */
typedef struct__71671 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__71681[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__71681 P005_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
  kcg_int N_ITER;
  P005_trackide_sectionlist_T_TM SECTIONS;
} struct__71684;

/* TM::P005_trackside_int_T */
typedef struct__71684 P005_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_VERSION;
} struct__71701;

/* TM::P002_trackside_int_T */
typedef struct__71701 P002_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int NID_VBCMK;
} struct__71709;

/* TM::P001_trackside_int_T */
typedef struct__71709 P001_trackside_int_T_TM;

typedef P027V1_section_int_T_TM_baseline2 array__71715[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__71715 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef kcg_int array_int_198[198];

/* TM::P080_sections_array_flat_T */
typedef array_int_198 P080_sections_array_flat_T_TM;

typedef P080_section_int_T_TM array__71730[33];

/* TM::P080_OBU_sectionlist_int_T */
typedef array__71730 P080_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_6[6];

/* TM::P080_section_array_T */
typedef array_int_6 P080_section_array_T_TM;

typedef P080_section_array_T_TM array_int_6_33[33];

/* TM::P080_OBU_sectionlist_array_T */
typedef array_int_6_33 P080_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__71742[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__71742 P046_OBU_sectionlist_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P041_section_int_T_TM array__71751[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__71751 P041_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef P021_section_int_T_TM array__71760[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__71760 P021_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__71775[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__71775 P005_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_349[349];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_430[430];

typedef kcg_int array_int_496[496];

typedef kcg_int array_int_428[428];

typedef kcg_int array_int_228[228];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_297[297];

typedef kcg_int array_int_497[497];

typedef kcg_int array_int_495[495];

typedef kcg_int array_int_493[493];

typedef kcg_int array_int_494[494];

#ifndef kcg_copy_struct__71000
#define kcg_copy_struct__71000(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71000)))
#endif /* kcg_copy_struct__71000 */

#ifndef kcg_copy_struct__71015
#define kcg_copy_struct__71015(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71015)))
#endif /* kcg_copy_struct__71015 */

#ifndef kcg_copy_struct__71033
#define kcg_copy_struct__71033(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71033)))
#endif /* kcg_copy_struct__71033 */

#ifndef kcg_copy_struct__71043
#define kcg_copy_struct__71043(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71043)))
#endif /* kcg_copy_struct__71043 */

#ifndef kcg_copy_struct__71053
#define kcg_copy_struct__71053(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71053)))
#endif /* kcg_copy_struct__71053 */

#ifndef kcg_copy_struct__71064
#define kcg_copy_struct__71064(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71064)))
#endif /* kcg_copy_struct__71064 */

#ifndef kcg_copy_struct__71078
#define kcg_copy_struct__71078(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71078)))
#endif /* kcg_copy_struct__71078 */

#ifndef kcg_copy_struct__71087
#define kcg_copy_struct__71087(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71087)))
#endif /* kcg_copy_struct__71087 */

#ifndef kcg_copy_struct__71097
#define kcg_copy_struct__71097(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71097)))
#endif /* kcg_copy_struct__71097 */

#ifndef kcg_copy_struct__71108
#define kcg_copy_struct__71108(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71108)))
#endif /* kcg_copy_struct__71108 */

#ifndef kcg_copy_struct__71118
#define kcg_copy_struct__71118(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71118)))
#endif /* kcg_copy_struct__71118 */

#ifndef kcg_copy_struct__71132
#define kcg_copy_struct__71132(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71132)))
#endif /* kcg_copy_struct__71132 */

#ifndef kcg_copy_struct__71142
#define kcg_copy_struct__71142(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71142)))
#endif /* kcg_copy_struct__71142 */

#ifndef kcg_copy_struct__71155
#define kcg_copy_struct__71155(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71155)))
#endif /* kcg_copy_struct__71155 */

#ifndef kcg_copy_struct__71177
#define kcg_copy_struct__71177(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71177)))
#endif /* kcg_copy_struct__71177 */

#ifndef kcg_copy_struct__71185
#define kcg_copy_struct__71185(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71185)))
#endif /* kcg_copy_struct__71185 */

#ifndef kcg_copy_struct__71196
#define kcg_copy_struct__71196(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71196)))
#endif /* kcg_copy_struct__71196 */

#ifndef kcg_copy_struct__71214
#define kcg_copy_struct__71214(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71214)))
#endif /* kcg_copy_struct__71214 */

#ifndef kcg_copy_struct__71243
#define kcg_copy_struct__71243(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71243)))
#endif /* kcg_copy_struct__71243 */

#ifndef kcg_copy_struct__71264
#define kcg_copy_struct__71264(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71264)))
#endif /* kcg_copy_struct__71264 */

#ifndef kcg_copy_struct__71275
#define kcg_copy_struct__71275(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71275)))
#endif /* kcg_copy_struct__71275 */

#ifndef kcg_copy_struct__71280
#define kcg_copy_struct__71280(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71280)))
#endif /* kcg_copy_struct__71280 */

#ifndef kcg_copy_struct__71285
#define kcg_copy_struct__71285(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71285)))
#endif /* kcg_copy_struct__71285 */

#ifndef kcg_copy_struct__71290
#define kcg_copy_struct__71290(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71290)))
#endif /* kcg_copy_struct__71290 */

#ifndef kcg_copy_struct__71301
#define kcg_copy_struct__71301(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71301)))
#endif /* kcg_copy_struct__71301 */

#ifndef kcg_copy_struct__71308
#define kcg_copy_struct__71308(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71308)))
#endif /* kcg_copy_struct__71308 */

#ifndef kcg_copy_struct__71318
#define kcg_copy_struct__71318(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71318)))
#endif /* kcg_copy_struct__71318 */

#ifndef kcg_copy_struct__71326
#define kcg_copy_struct__71326(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71326)))
#endif /* kcg_copy_struct__71326 */

#ifndef kcg_copy_struct__71335
#define kcg_copy_struct__71335(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71335)))
#endif /* kcg_copy_struct__71335 */

#ifndef kcg_copy_struct__71345
#define kcg_copy_struct__71345(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71345)))
#endif /* kcg_copy_struct__71345 */

#ifndef kcg_copy_struct__71353
#define kcg_copy_struct__71353(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71353)))
#endif /* kcg_copy_struct__71353 */

#ifndef kcg_copy_struct__71363
#define kcg_copy_struct__71363(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71363)))
#endif /* kcg_copy_struct__71363 */

#ifndef kcg_copy_struct__71378
#define kcg_copy_struct__71378(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71378)))
#endif /* kcg_copy_struct__71378 */

#ifndef kcg_copy_struct__71391
#define kcg_copy_struct__71391(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71391)))
#endif /* kcg_copy_struct__71391 */

#ifndef kcg_copy_struct__71403
#define kcg_copy_struct__71403(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71403)))
#endif /* kcg_copy_struct__71403 */

#ifndef kcg_copy_struct__71419
#define kcg_copy_struct__71419(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71419)))
#endif /* kcg_copy_struct__71419 */

#ifndef kcg_copy_struct__71432
#define kcg_copy_struct__71432(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71432)))
#endif /* kcg_copy_struct__71432 */

#ifndef kcg_copy_struct__71440
#define kcg_copy_struct__71440(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71440)))
#endif /* kcg_copy_struct__71440 */

#ifndef kcg_copy_struct__71448
#define kcg_copy_struct__71448(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71448)))
#endif /* kcg_copy_struct__71448 */

#ifndef kcg_copy_struct__71459
#define kcg_copy_struct__71459(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71459)))
#endif /* kcg_copy_struct__71459 */

#ifndef kcg_copy_struct__71467
#define kcg_copy_struct__71467(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71467)))
#endif /* kcg_copy_struct__71467 */

#ifndef kcg_copy_struct__71480
#define kcg_copy_struct__71480(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71480)))
#endif /* kcg_copy_struct__71480 */

#ifndef kcg_copy_struct__71493
#define kcg_copy_struct__71493(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71493)))
#endif /* kcg_copy_struct__71493 */

#ifndef kcg_copy_struct__71501
#define kcg_copy_struct__71501(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71501)))
#endif /* kcg_copy_struct__71501 */

#ifndef kcg_copy_struct__71509
#define kcg_copy_struct__71509(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71509)))
#endif /* kcg_copy_struct__71509 */

#ifndef kcg_copy_struct__71520
#define kcg_copy_struct__71520(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71520)))
#endif /* kcg_copy_struct__71520 */

#ifndef kcg_copy_struct__71530
#define kcg_copy_struct__71530(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71530)))
#endif /* kcg_copy_struct__71530 */

#ifndef kcg_copy_struct__71540
#define kcg_copy_struct__71540(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71540)))
#endif /* kcg_copy_struct__71540 */

#ifndef kcg_copy_struct__71549
#define kcg_copy_struct__71549(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71549)))
#endif /* kcg_copy_struct__71549 */

#ifndef kcg_copy_struct__71563
#define kcg_copy_struct__71563(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71563)))
#endif /* kcg_copy_struct__71563 */

#ifndef kcg_copy_struct__71575
#define kcg_copy_struct__71575(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71575)))
#endif /* kcg_copy_struct__71575 */

#ifndef kcg_copy_struct__71584
#define kcg_copy_struct__71584(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71584)))
#endif /* kcg_copy_struct__71584 */

#ifndef kcg_copy_struct__71593
#define kcg_copy_struct__71593(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71593)))
#endif /* kcg_copy_struct__71593 */

#ifndef kcg_copy_struct__71606
#define kcg_copy_struct__71606(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71606)))
#endif /* kcg_copy_struct__71606 */

#ifndef kcg_copy_struct__71616
#define kcg_copy_struct__71616(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71616)))
#endif /* kcg_copy_struct__71616 */

#ifndef kcg_copy_struct__71643
#define kcg_copy_struct__71643(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71643)))
#endif /* kcg_copy_struct__71643 */

#ifndef kcg_copy_struct__71671
#define kcg_copy_struct__71671(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71671)))
#endif /* kcg_copy_struct__71671 */

#ifndef kcg_copy_struct__71684
#define kcg_copy_struct__71684(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71684)))
#endif /* kcg_copy_struct__71684 */

#ifndef kcg_copy_struct__71701
#define kcg_copy_struct__71701(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71701)))
#endif /* kcg_copy_struct__71701 */

#ifndef kcg_copy_struct__71709
#define kcg_copy_struct__71709(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__71709)))
#endif /* kcg_copy_struct__71709 */

#ifndef kcg_copy_array_int_255
#define kcg_copy_array_int_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_255)))
#endif /* kcg_copy_array_int_255 */

#ifndef kcg_copy_array__71182
#define kcg_copy_array__71182(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71182)))
#endif /* kcg_copy_array__71182 */

#ifndef kcg_copy_array__71193
#define kcg_copy_array__71193(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71193)))
#endif /* kcg_copy_array__71193 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__71272
#define kcg_copy_array__71272(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71272)))
#endif /* kcg_copy_array__71272 */

#ifndef kcg_copy_array__71400
#define kcg_copy_array__71400(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71400)))
#endif /* kcg_copy_array__71400 */

#ifndef kcg_copy_array__71464
#define kcg_copy_array__71464(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71464)))
#endif /* kcg_copy_array__71464 */

#ifndef kcg_copy_array__71506
#define kcg_copy_array__71506(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71506)))
#endif /* kcg_copy_array__71506 */

#ifndef kcg_copy_array__71546
#define kcg_copy_array__71546(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71546)))
#endif /* kcg_copy_array__71546 */

#ifndef kcg_copy_array__71590
#define kcg_copy_array__71590(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71590)))
#endif /* kcg_copy_array__71590 */

#ifndef kcg_copy_array__71613
#define kcg_copy_array__71613(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71613)))
#endif /* kcg_copy_array__71613 */

#ifndef kcg_copy_array__71681
#define kcg_copy_array__71681(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71681)))
#endif /* kcg_copy_array__71681 */

#ifndef kcg_copy_array__71715
#define kcg_copy_array__71715(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71715)))
#endif /* kcg_copy_array__71715 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array_int_198
#define kcg_copy_array_int_198(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_198)))
#endif /* kcg_copy_array_int_198 */

#ifndef kcg_copy_array__71730
#define kcg_copy_array__71730(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71730)))
#endif /* kcg_copy_array__71730 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_int_6_33
#define kcg_copy_array_int_6_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6_33)))
#endif /* kcg_copy_array_int_6_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__71742
#define kcg_copy_array__71742(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71742)))
#endif /* kcg_copy_array__71742 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__71751
#define kcg_copy_array__71751(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71751)))
#endif /* kcg_copy_array__71751 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array__71760
#define kcg_copy_array__71760(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71760)))
#endif /* kcg_copy_array__71760 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__71775
#define kcg_copy_array__71775(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__71775)))
#endif /* kcg_copy_array__71775 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_349
#define kcg_copy_array_int_349(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_349)))
#endif /* kcg_copy_array_int_349 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_430
#define kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_430)))
#endif /* kcg_copy_array_int_430 */

#ifndef kcg_copy_array_int_496
#define kcg_copy_array_int_496(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_496)))
#endif /* kcg_copy_array_int_496 */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_copy_array_int_228
#define kcg_copy_array_int_228(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_228)))
#endif /* kcg_copy_array_int_228 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_copy_array_int_297
#define kcg_copy_array_int_297(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_297)))
#endif /* kcg_copy_array_int_297 */

#ifndef kcg_copy_array_int_497
#define kcg_copy_array_int_497(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_497)))
#endif /* kcg_copy_array_int_497 */

#ifndef kcg_copy_array_int_495
#define kcg_copy_array_int_495(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_495)))
#endif /* kcg_copy_array_int_495 */

#ifndef kcg_copy_array_int_493
#define kcg_copy_array_int_493(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_493)))
#endif /* kcg_copy_array_int_493 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_comp_struct__71000
extern kcg_bool kcg_comp_struct__71000(
  struct__71000 *kcg_c1,
  struct__71000 *kcg_c2);
#endif /* kcg_comp_struct__71000 */

#ifndef kcg_comp_struct__71015
extern kcg_bool kcg_comp_struct__71015(
  struct__71015 *kcg_c1,
  struct__71015 *kcg_c2);
#endif /* kcg_comp_struct__71015 */

#ifndef kcg_comp_struct__71033
extern kcg_bool kcg_comp_struct__71033(
  struct__71033 *kcg_c1,
  struct__71033 *kcg_c2);
#endif /* kcg_comp_struct__71033 */

#ifndef kcg_comp_struct__71043
extern kcg_bool kcg_comp_struct__71043(
  struct__71043 *kcg_c1,
  struct__71043 *kcg_c2);
#endif /* kcg_comp_struct__71043 */

#ifndef kcg_comp_struct__71053
extern kcg_bool kcg_comp_struct__71053(
  struct__71053 *kcg_c1,
  struct__71053 *kcg_c2);
#endif /* kcg_comp_struct__71053 */

#ifndef kcg_comp_struct__71064
extern kcg_bool kcg_comp_struct__71064(
  struct__71064 *kcg_c1,
  struct__71064 *kcg_c2);
#endif /* kcg_comp_struct__71064 */

#ifndef kcg_comp_struct__71078
extern kcg_bool kcg_comp_struct__71078(
  struct__71078 *kcg_c1,
  struct__71078 *kcg_c2);
#endif /* kcg_comp_struct__71078 */

#ifndef kcg_comp_struct__71087
extern kcg_bool kcg_comp_struct__71087(
  struct__71087 *kcg_c1,
  struct__71087 *kcg_c2);
#endif /* kcg_comp_struct__71087 */

#ifndef kcg_comp_struct__71097
extern kcg_bool kcg_comp_struct__71097(
  struct__71097 *kcg_c1,
  struct__71097 *kcg_c2);
#endif /* kcg_comp_struct__71097 */

#ifndef kcg_comp_struct__71108
extern kcg_bool kcg_comp_struct__71108(
  struct__71108 *kcg_c1,
  struct__71108 *kcg_c2);
#endif /* kcg_comp_struct__71108 */

#ifndef kcg_comp_struct__71118
extern kcg_bool kcg_comp_struct__71118(
  struct__71118 *kcg_c1,
  struct__71118 *kcg_c2);
#endif /* kcg_comp_struct__71118 */

#ifndef kcg_comp_struct__71132
extern kcg_bool kcg_comp_struct__71132(
  struct__71132 *kcg_c1,
  struct__71132 *kcg_c2);
#endif /* kcg_comp_struct__71132 */

#ifndef kcg_comp_struct__71142
extern kcg_bool kcg_comp_struct__71142(
  struct__71142 *kcg_c1,
  struct__71142 *kcg_c2);
#endif /* kcg_comp_struct__71142 */

#ifndef kcg_comp_struct__71155
extern kcg_bool kcg_comp_struct__71155(
  struct__71155 *kcg_c1,
  struct__71155 *kcg_c2);
#endif /* kcg_comp_struct__71155 */

#ifndef kcg_comp_struct__71177
extern kcg_bool kcg_comp_struct__71177(
  struct__71177 *kcg_c1,
  struct__71177 *kcg_c2);
#endif /* kcg_comp_struct__71177 */

#ifndef kcg_comp_struct__71185
extern kcg_bool kcg_comp_struct__71185(
  struct__71185 *kcg_c1,
  struct__71185 *kcg_c2);
#endif /* kcg_comp_struct__71185 */

#ifndef kcg_comp_struct__71196
extern kcg_bool kcg_comp_struct__71196(
  struct__71196 *kcg_c1,
  struct__71196 *kcg_c2);
#endif /* kcg_comp_struct__71196 */

#ifndef kcg_comp_struct__71214
extern kcg_bool kcg_comp_struct__71214(
  struct__71214 *kcg_c1,
  struct__71214 *kcg_c2);
#endif /* kcg_comp_struct__71214 */

#ifndef kcg_comp_struct__71243
extern kcg_bool kcg_comp_struct__71243(
  struct__71243 *kcg_c1,
  struct__71243 *kcg_c2);
#endif /* kcg_comp_struct__71243 */

#ifndef kcg_comp_struct__71264
extern kcg_bool kcg_comp_struct__71264(
  struct__71264 *kcg_c1,
  struct__71264 *kcg_c2);
#endif /* kcg_comp_struct__71264 */

#ifndef kcg_comp_struct__71275
extern kcg_bool kcg_comp_struct__71275(
  struct__71275 *kcg_c1,
  struct__71275 *kcg_c2);
#endif /* kcg_comp_struct__71275 */

#ifndef kcg_comp_struct__71280
extern kcg_bool kcg_comp_struct__71280(
  struct__71280 *kcg_c1,
  struct__71280 *kcg_c2);
#endif /* kcg_comp_struct__71280 */

#ifndef kcg_comp_struct__71285
extern kcg_bool kcg_comp_struct__71285(
  struct__71285 *kcg_c1,
  struct__71285 *kcg_c2);
#endif /* kcg_comp_struct__71285 */

#ifndef kcg_comp_struct__71290
extern kcg_bool kcg_comp_struct__71290(
  struct__71290 *kcg_c1,
  struct__71290 *kcg_c2);
#endif /* kcg_comp_struct__71290 */

#ifndef kcg_comp_struct__71301
extern kcg_bool kcg_comp_struct__71301(
  struct__71301 *kcg_c1,
  struct__71301 *kcg_c2);
#endif /* kcg_comp_struct__71301 */

#ifndef kcg_comp_struct__71308
extern kcg_bool kcg_comp_struct__71308(
  struct__71308 *kcg_c1,
  struct__71308 *kcg_c2);
#endif /* kcg_comp_struct__71308 */

#ifndef kcg_comp_struct__71318
extern kcg_bool kcg_comp_struct__71318(
  struct__71318 *kcg_c1,
  struct__71318 *kcg_c2);
#endif /* kcg_comp_struct__71318 */

#ifndef kcg_comp_struct__71326
extern kcg_bool kcg_comp_struct__71326(
  struct__71326 *kcg_c1,
  struct__71326 *kcg_c2);
#endif /* kcg_comp_struct__71326 */

#ifndef kcg_comp_struct__71335
extern kcg_bool kcg_comp_struct__71335(
  struct__71335 *kcg_c1,
  struct__71335 *kcg_c2);
#endif /* kcg_comp_struct__71335 */

#ifndef kcg_comp_struct__71345
extern kcg_bool kcg_comp_struct__71345(
  struct__71345 *kcg_c1,
  struct__71345 *kcg_c2);
#endif /* kcg_comp_struct__71345 */

#ifndef kcg_comp_struct__71353
extern kcg_bool kcg_comp_struct__71353(
  struct__71353 *kcg_c1,
  struct__71353 *kcg_c2);
#endif /* kcg_comp_struct__71353 */

#ifndef kcg_comp_struct__71363
extern kcg_bool kcg_comp_struct__71363(
  struct__71363 *kcg_c1,
  struct__71363 *kcg_c2);
#endif /* kcg_comp_struct__71363 */

#ifndef kcg_comp_struct__71378
extern kcg_bool kcg_comp_struct__71378(
  struct__71378 *kcg_c1,
  struct__71378 *kcg_c2);
#endif /* kcg_comp_struct__71378 */

#ifndef kcg_comp_struct__71391
extern kcg_bool kcg_comp_struct__71391(
  struct__71391 *kcg_c1,
  struct__71391 *kcg_c2);
#endif /* kcg_comp_struct__71391 */

#ifndef kcg_comp_struct__71403
extern kcg_bool kcg_comp_struct__71403(
  struct__71403 *kcg_c1,
  struct__71403 *kcg_c2);
#endif /* kcg_comp_struct__71403 */

#ifndef kcg_comp_struct__71419
extern kcg_bool kcg_comp_struct__71419(
  struct__71419 *kcg_c1,
  struct__71419 *kcg_c2);
#endif /* kcg_comp_struct__71419 */

#ifndef kcg_comp_struct__71432
extern kcg_bool kcg_comp_struct__71432(
  struct__71432 *kcg_c1,
  struct__71432 *kcg_c2);
#endif /* kcg_comp_struct__71432 */

#ifndef kcg_comp_struct__71440
extern kcg_bool kcg_comp_struct__71440(
  struct__71440 *kcg_c1,
  struct__71440 *kcg_c2);
#endif /* kcg_comp_struct__71440 */

#ifndef kcg_comp_struct__71448
extern kcg_bool kcg_comp_struct__71448(
  struct__71448 *kcg_c1,
  struct__71448 *kcg_c2);
#endif /* kcg_comp_struct__71448 */

#ifndef kcg_comp_struct__71459
extern kcg_bool kcg_comp_struct__71459(
  struct__71459 *kcg_c1,
  struct__71459 *kcg_c2);
#endif /* kcg_comp_struct__71459 */

#ifndef kcg_comp_struct__71467
extern kcg_bool kcg_comp_struct__71467(
  struct__71467 *kcg_c1,
  struct__71467 *kcg_c2);
#endif /* kcg_comp_struct__71467 */

#ifndef kcg_comp_struct__71480
extern kcg_bool kcg_comp_struct__71480(
  struct__71480 *kcg_c1,
  struct__71480 *kcg_c2);
#endif /* kcg_comp_struct__71480 */

#ifndef kcg_comp_struct__71493
extern kcg_bool kcg_comp_struct__71493(
  struct__71493 *kcg_c1,
  struct__71493 *kcg_c2);
#endif /* kcg_comp_struct__71493 */

#ifndef kcg_comp_struct__71501
extern kcg_bool kcg_comp_struct__71501(
  struct__71501 *kcg_c1,
  struct__71501 *kcg_c2);
#endif /* kcg_comp_struct__71501 */

#ifndef kcg_comp_struct__71509
extern kcg_bool kcg_comp_struct__71509(
  struct__71509 *kcg_c1,
  struct__71509 *kcg_c2);
#endif /* kcg_comp_struct__71509 */

#ifndef kcg_comp_struct__71520
extern kcg_bool kcg_comp_struct__71520(
  struct__71520 *kcg_c1,
  struct__71520 *kcg_c2);
#endif /* kcg_comp_struct__71520 */

#ifndef kcg_comp_struct__71530
extern kcg_bool kcg_comp_struct__71530(
  struct__71530 *kcg_c1,
  struct__71530 *kcg_c2);
#endif /* kcg_comp_struct__71530 */

#ifndef kcg_comp_struct__71540
extern kcg_bool kcg_comp_struct__71540(
  struct__71540 *kcg_c1,
  struct__71540 *kcg_c2);
#endif /* kcg_comp_struct__71540 */

#ifndef kcg_comp_struct__71549
extern kcg_bool kcg_comp_struct__71549(
  struct__71549 *kcg_c1,
  struct__71549 *kcg_c2);
#endif /* kcg_comp_struct__71549 */

#ifndef kcg_comp_struct__71563
extern kcg_bool kcg_comp_struct__71563(
  struct__71563 *kcg_c1,
  struct__71563 *kcg_c2);
#endif /* kcg_comp_struct__71563 */

#ifndef kcg_comp_struct__71575
extern kcg_bool kcg_comp_struct__71575(
  struct__71575 *kcg_c1,
  struct__71575 *kcg_c2);
#endif /* kcg_comp_struct__71575 */

#ifndef kcg_comp_struct__71584
extern kcg_bool kcg_comp_struct__71584(
  struct__71584 *kcg_c1,
  struct__71584 *kcg_c2);
#endif /* kcg_comp_struct__71584 */

#ifndef kcg_comp_struct__71593
extern kcg_bool kcg_comp_struct__71593(
  struct__71593 *kcg_c1,
  struct__71593 *kcg_c2);
#endif /* kcg_comp_struct__71593 */

#ifndef kcg_comp_struct__71606
extern kcg_bool kcg_comp_struct__71606(
  struct__71606 *kcg_c1,
  struct__71606 *kcg_c2);
#endif /* kcg_comp_struct__71606 */

#ifndef kcg_comp_struct__71616
extern kcg_bool kcg_comp_struct__71616(
  struct__71616 *kcg_c1,
  struct__71616 *kcg_c2);
#endif /* kcg_comp_struct__71616 */

#ifndef kcg_comp_struct__71643
extern kcg_bool kcg_comp_struct__71643(
  struct__71643 *kcg_c1,
  struct__71643 *kcg_c2);
#endif /* kcg_comp_struct__71643 */

#ifndef kcg_comp_struct__71671
extern kcg_bool kcg_comp_struct__71671(
  struct__71671 *kcg_c1,
  struct__71671 *kcg_c2);
#endif /* kcg_comp_struct__71671 */

#ifndef kcg_comp_struct__71684
extern kcg_bool kcg_comp_struct__71684(
  struct__71684 *kcg_c1,
  struct__71684 *kcg_c2);
#endif /* kcg_comp_struct__71684 */

#ifndef kcg_comp_struct__71701
extern kcg_bool kcg_comp_struct__71701(
  struct__71701 *kcg_c1,
  struct__71701 *kcg_c2);
#endif /* kcg_comp_struct__71701 */

#ifndef kcg_comp_struct__71709
extern kcg_bool kcg_comp_struct__71709(
  struct__71709 *kcg_c1,
  struct__71709 *kcg_c2);
#endif /* kcg_comp_struct__71709 */

#ifndef kcg_comp_array_int_255
extern kcg_bool kcg_comp_array_int_255(
  array_int_255 *kcg_c1,
  array_int_255 *kcg_c2);
#endif /* kcg_comp_array_int_255 */

#ifndef kcg_comp_array__71182
extern kcg_bool kcg_comp_array__71182(
  array__71182 *kcg_c1,
  array__71182 *kcg_c2);
#endif /* kcg_comp_array__71182 */

#ifndef kcg_comp_array__71193
extern kcg_bool kcg_comp_array__71193(
  array__71193 *kcg_c1,
  array__71193 *kcg_c2);
#endif /* kcg_comp_array__71193 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__71272
extern kcg_bool kcg_comp_array__71272(
  array__71272 *kcg_c1,
  array__71272 *kcg_c2);
#endif /* kcg_comp_array__71272 */

#ifndef kcg_comp_array__71400
extern kcg_bool kcg_comp_array__71400(
  array__71400 *kcg_c1,
  array__71400 *kcg_c2);
#endif /* kcg_comp_array__71400 */

#ifndef kcg_comp_array__71464
extern kcg_bool kcg_comp_array__71464(
  array__71464 *kcg_c1,
  array__71464 *kcg_c2);
#endif /* kcg_comp_array__71464 */

#ifndef kcg_comp_array__71506
extern kcg_bool kcg_comp_array__71506(
  array__71506 *kcg_c1,
  array__71506 *kcg_c2);
#endif /* kcg_comp_array__71506 */

#ifndef kcg_comp_array__71546
extern kcg_bool kcg_comp_array__71546(
  array__71546 *kcg_c1,
  array__71546 *kcg_c2);
#endif /* kcg_comp_array__71546 */

#ifndef kcg_comp_array__71590
extern kcg_bool kcg_comp_array__71590(
  array__71590 *kcg_c1,
  array__71590 *kcg_c2);
#endif /* kcg_comp_array__71590 */

#ifndef kcg_comp_array__71613
extern kcg_bool kcg_comp_array__71613(
  array__71613 *kcg_c1,
  array__71613 *kcg_c2);
#endif /* kcg_comp_array__71613 */

#ifndef kcg_comp_array__71681
extern kcg_bool kcg_comp_array__71681(
  array__71681 *kcg_c1,
  array__71681 *kcg_c2);
#endif /* kcg_comp_array__71681 */

#ifndef kcg_comp_array__71715
extern kcg_bool kcg_comp_array__71715(
  array__71715 *kcg_c1,
  array__71715 *kcg_c2);
#endif /* kcg_comp_array__71715 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array_int_198
extern kcg_bool kcg_comp_array_int_198(
  array_int_198 *kcg_c1,
  array_int_198 *kcg_c2);
#endif /* kcg_comp_array_int_198 */

#ifndef kcg_comp_array__71730
extern kcg_bool kcg_comp_array__71730(
  array__71730 *kcg_c1,
  array__71730 *kcg_c2);
#endif /* kcg_comp_array__71730 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array_int_6_33
extern kcg_bool kcg_comp_array_int_6_33(
  array_int_6_33 *kcg_c1,
  array_int_6_33 *kcg_c2);
#endif /* kcg_comp_array_int_6_33 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array__71742
extern kcg_bool kcg_comp_array__71742(
  array__71742 *kcg_c1,
  array__71742 *kcg_c2);
#endif /* kcg_comp_array__71742 */

#ifndef kcg_comp_array_int_2_33
extern kcg_bool kcg_comp_array_int_2_33(
  array_int_2_33 *kcg_c1,
  array_int_2_33 *kcg_c2);
#endif /* kcg_comp_array_int_2_33 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__71751
extern kcg_bool kcg_comp_array__71751(
  array__71751 *kcg_c1,
  array__71751 *kcg_c2);
#endif /* kcg_comp_array__71751 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array__71760
extern kcg_bool kcg_comp_array__71760(
  array__71760 *kcg_c1,
  array__71760 *kcg_c2);
#endif /* kcg_comp_array__71760 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_4_32
extern kcg_bool kcg_comp_array_int_4_32(
  array_int_4_32 *kcg_c1,
  array_int_4_32 *kcg_c2);
#endif /* kcg_comp_array_int_4_32 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array__71775
extern kcg_bool kcg_comp_array__71775(
  array__71775 *kcg_c1,
  array__71775 *kcg_c2);
#endif /* kcg_comp_array__71775 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_349
extern kcg_bool kcg_comp_array_int_349(
  array_int_349 *kcg_c1,
  array_int_349 *kcg_c2);
#endif /* kcg_comp_array_int_349 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_430
extern kcg_bool kcg_comp_array_int_430(
  array_int_430 *kcg_c1,
  array_int_430 *kcg_c2);
#endif /* kcg_comp_array_int_430 */

#ifndef kcg_comp_array_int_496
extern kcg_bool kcg_comp_array_int_496(
  array_int_496 *kcg_c1,
  array_int_496 *kcg_c2);
#endif /* kcg_comp_array_int_496 */

#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */

#ifndef kcg_comp_array_int_228
extern kcg_bool kcg_comp_array_int_228(
  array_int_228 *kcg_c1,
  array_int_228 *kcg_c2);
#endif /* kcg_comp_array_int_228 */

#ifndef kcg_comp_array_int_491
extern kcg_bool kcg_comp_array_int_491(
  array_int_491 *kcg_c1,
  array_int_491 *kcg_c2);
#endif /* kcg_comp_array_int_491 */

#ifndef kcg_comp_array_int_297
extern kcg_bool kcg_comp_array_int_297(
  array_int_297 *kcg_c1,
  array_int_297 *kcg_c2);
#endif /* kcg_comp_array_int_297 */

#ifndef kcg_comp_array_int_497
extern kcg_bool kcg_comp_array_int_497(
  array_int_497 *kcg_c1,
  array_int_497 *kcg_c2);
#endif /* kcg_comp_array_int_497 */

#ifndef kcg_comp_array_int_495
extern kcg_bool kcg_comp_array_int_495(
  array_int_495 *kcg_c1,
  array_int_495 *kcg_c2);
#endif /* kcg_comp_array_int_495 */

#ifndef kcg_comp_array_int_493
extern kcg_bool kcg_comp_array_int_493(
  array_int_493 *kcg_c1,
  array_int_493 *kcg_c2);
#endif /* kcg_comp_array_int_493 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__71033

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__71033

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__71043

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__71043

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__71053

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__71053

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__71064

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__71064

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__71078

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__71078

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__71078

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__71078

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__71078

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__71078

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__71078

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__71078

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__71078

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__71078

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__71087

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__71087

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__71097

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__71097

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__71078

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__71078

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__71078

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__71078

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__71108

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__71108

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__71078

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__71078

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__71118

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__71118

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__71132

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__71132

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__71132

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__71132

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__71078

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__71078

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__71000

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__71000

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__71033

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__71033

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__71015

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__71015

#define kcg_comp_Radio_TrackTrain_Header_T_TM_transitional kcg_comp_struct__71015

#define kcg_copy_Radio_TrackTrain_Header_T_TM_transitional kcg_copy_struct__71015

#define kcg_comp_P039V1_trackside_int_T_TM_baseline2 kcg_comp_struct__71142

#define kcg_copy_P039V1_trackside_int_T_TM_baseline2 kcg_copy_struct__71142

#define kcg_comp_P072V1_trackside_int_T_TM_baseline2 kcg_comp_struct__71155

#define kcg_copy_P072V1_trackside_int_T_TM_baseline2 kcg_copy_struct__71155

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__71182

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__71182

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__71715

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__71715

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__71185

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__71185

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__71193

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__71193

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__71177

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__71177

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__71182

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__71182

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__71196

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__71196

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__71214

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__71214

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__71275

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__71275

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__71264

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__71264

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__71272

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__71272

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__71280

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__71280

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__71243

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__71243

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__71285

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__71285

#define kcg_comp_P143_trackside_int_T_TM kcg_comp_struct__71290

#define kcg_copy_P143_trackside_int_T_TM kcg_copy_struct__71290

#define kcg_comp_P145_trackside_int_T_TM kcg_comp_struct__71301

#define kcg_copy_P145_trackside_int_T_TM kcg_copy_struct__71301

#define kcg_comp_P254_trackside_int_T_TM kcg_comp_struct__71301

#define kcg_copy_P254_trackside_int_T_TM kcg_copy_struct__71301

#define kcg_comp_P139_trackside_int_T_TM kcg_comp_struct__71308

#define kcg_copy_P139_trackside_int_T_TM kcg_copy_struct__71308

#define kcg_comp_P140_trackside_int_T_TM kcg_comp_struct__71318

#define kcg_copy_P140_trackside_int_T_TM kcg_copy_struct__71318

#define kcg_comp_P141_trackside_int_T_TM kcg_comp_struct__71326

#define kcg_copy_P141_trackside_int_T_TM kcg_copy_struct__71326

#define kcg_comp_P136_trackside_int_T_TM kcg_comp_struct__71335

#define kcg_copy_P136_trackside_int_T_TM kcg_copy_struct__71335

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__71345

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__71345

#define kcg_comp_P138_trackside_int_T_TM kcg_comp_struct__71353

#define kcg_copy_P138_trackside_int_T_TM kcg_copy_struct__71353

#define kcg_comp_P133_trackside_int_T_TM kcg_comp_struct__71363

#define kcg_copy_P133_trackside_int_T_TM kcg_copy_struct__71363

#define kcg_comp_P134_trackside_int_T_TM kcg_comp_struct__71378

#define kcg_copy_P134_trackside_int_T_TM kcg_copy_struct__71378

#define kcg_comp_P135_trackside_int_T_TM kcg_comp_struct__71301

#define kcg_copy_P135_trackside_int_T_TM kcg_copy_struct__71301

#define kcg_comp_P080_trackide_sectionlist_T_TM kcg_comp_array__71400

#define kcg_copy_P080_trackide_sectionlist_T_TM kcg_copy_array__71400

#define kcg_comp_P080_trackside_int_T_TM kcg_comp_struct__71403

#define kcg_copy_P080_trackside_int_T_TM kcg_copy_struct__71403

#define kcg_comp_P080_OBU_sectionlist_int_T_TM kcg_comp_array__71730

#define kcg_copy_P080_OBU_sectionlist_int_T_TM kcg_copy_array__71730

#define kcg_comp_P080_section_array_T_TM kcg_comp_array_int_6

#define kcg_copy_P080_section_array_T_TM kcg_copy_array_int_6

#define kcg_comp_P080_OBU_sectionlist_array_T_TM kcg_comp_array_int_6_33

#define kcg_copy_P080_OBU_sectionlist_array_T_TM kcg_copy_array_int_6_33

#define kcg_comp_P080_sections_array_flat_T_TM kcg_comp_array_int_198

#define kcg_copy_P080_sections_array_flat_T_TM kcg_copy_array_int_198

#define kcg_comp_P080_section_int_T_TM kcg_comp_struct__71391

#define kcg_copy_P080_section_int_T_TM kcg_copy_struct__71391

#define kcg_comp_P131_trackside_int_T_TM kcg_comp_struct__71419

#define kcg_copy_P131_trackside_int_T_TM kcg_copy_struct__71419

#define kcg_comp_P132_trackside_int_T_TM kcg_comp_struct__71432

#define kcg_copy_P132_trackside_int_T_TM kcg_copy_struct__71432

#define kcg_comp_P066_trackside_int_T_TM kcg_comp_struct__71440

#define kcg_copy_P066_trackside_int_T_TM kcg_copy_struct__71440

#define kcg_comp_P071_trackside_int_T_TM kcg_comp_struct__71448

#define kcg_copy_P071_trackside_int_T_TM kcg_copy_struct__71448

#define kcg_comp_X_TEXT_trackside_T_TM kcg_comp_array_int_255

#define kcg_copy_X_TEXT_trackside_T_TM kcg_copy_array_int_255

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__71464

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__71464

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__71459

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__71459

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__71464

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__71464

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__71467

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__71467

#define kcg_comp_P064_trackside_int_T_TM kcg_comp_struct__71301

#define kcg_copy_P064_trackside_int_T_TM kcg_copy_struct__71301

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__71480

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__71480

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__71493

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__71493

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__71742

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__71742

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__71501

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__71501

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__71506

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__71506

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__71509

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__71509

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__71520

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__71520

#define kcg_comp_P040_trackside_int_T_TM kcg_comp_struct__71530

#define kcg_copy_P040_trackside_int_T_TM kcg_copy_struct__71530

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__71751

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__71751

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__71540

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__71540

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__71546

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__71546

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__71549

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__71549

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__71563

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__71563

#define kcg_comp_P016_trackside_int_T_TM kcg_comp_struct__71575

#define kcg_copy_P016_trackside_int_T_TM kcg_copy_struct__71575

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__71760

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__71760

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__71584

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__71584

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__71590

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__71590

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__71593

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__71593

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__71613

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__71613

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__71616

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__71616

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__71613

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__71613

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__71606

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__71606

#define kcg_comp_P012_trackide_sectionlist_T_TM kcg_comp_array__71613

#define kcg_copy_P012_trackide_sectionlist_T_TM kcg_copy_array__71613

#define kcg_comp_P012_trackside_int_T_TM kcg_comp_struct__71643

#define kcg_copy_P012_trackside_int_T_TM kcg_copy_struct__71643

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__71775

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__71775

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__71671

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__71671

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__71681

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__71681

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__71684

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__71684

#define kcg_comp_P002_trackside_int_T_TM kcg_comp_struct__71701

#define kcg_copy_P002_trackside_int_T_TM kcg_copy_struct__71701

#define kcg_comp_P001_trackside_int_T_TM kcg_comp_struct__71709

#define kcg_copy_P001_trackside_int_T_TM kcg_copy_struct__71709

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-16T17:03:44
*************************************************************$ */

