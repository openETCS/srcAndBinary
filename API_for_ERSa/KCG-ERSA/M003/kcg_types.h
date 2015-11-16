/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG-ERSA/M003\kcg_s2c_config.txt
** Generation date: 2015-11-16T11:28:18
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
} struct__38382;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__38382 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

/* TM_transitional::Radio_TrackTrain_Header_T */
typedef struct__38382 Radio_TrackTrain_Header_T_TM_transitional;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__38400;

/* TM_radio_messages::M_027_T */
typedef struct__38400 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__38400 M_028_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__38410;

/* TM_radio_messages::M_032_T */
typedef struct__38410 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__38420;

/* TM_radio_messages::M_033_T */
typedef struct__38420 M_033_T_TM_radio_messages;

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
} struct__38431;

/* TM_radio_messages::M_034_T */
typedef struct__38431 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__38445;

/* TM_radio_messages::M_024_T */
typedef struct__38445 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__38445 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__38445 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__38445 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__38445 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__38445 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__38445 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__38445 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__38445 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__38454;

/* TM_radio_messages::M_045_T */
typedef struct__38454 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__38464;

/* TM_radio_messages::M_002_T */
typedef struct__38464 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__38475;

/* TM_radio_messages::M_008_T */
typedef struct__38475 M_008_T_TM_radio_messages;

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
} struct__38485;

/* TM_radio_messages::M_015_T */
typedef struct__38485 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__38499;

/* TM_radio_messages::M_018_T */
typedef struct__38499 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__38499 M_016_T_TM_radio_messages;

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
} struct__38509;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__38509 M_TrackTrain_Radio_T_TM_radio_messages;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__38527;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__38527 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__38535[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__38535 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__38538;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__38538 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__38543;

/* InfraLib::R_data_internal_T */
typedef struct__38543 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__38550;

/* TM_radio_messages::M_003_int_T */
typedef struct__38550 M_003_int_T_TM_radio_messages;

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
} struct__38562;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__38562 P003V1_trackside_int_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__38591;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__38591 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__38596[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__38596 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__38596 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__38599;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__38599 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__38607[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__38607 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__38610;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__38610 P027V1_trackside_int_T_TM_baseline2;

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
} struct__38625;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__38625 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__38643;

/* TM::CompressedRadioMessage */
typedef struct__38643 CompressedRadioMessage_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__38648;

/* TM::P015_section_int_T */
typedef struct__38648 P015_section_int_T_TM;

typedef P015_section_int_T_TM array__38655[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__38655 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__38655 P015_OBU_sectionlist_int_T_TM;

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
} struct__38658;

/* TM::P015_trackside_int_T */
typedef struct__38658 P015_trackside_int_T_TM;

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
} struct__38685;

/* TM::P065_trackside_int_T */
typedef struct__38685 P065_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__38698;

/* TM::P041_section_int_T */
typedef struct__38698 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__38704[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__38704 P041_trackide_sectionlist_T_TM;

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
} struct__38707;

/* TM::P041_trackside_int_T */
typedef struct__38707 P041_trackside_int_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__38721;

/* TM::P005_section_int_T */
typedef struct__38721 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__38731[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__38731 P005_trackide_sectionlist_T_TM;

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
} struct__38734;

/* TM::P005_trackside_int_T */
typedef struct__38734 P005_trackside_int_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__38751;

/* TM::P021_section_int_T */
typedef struct__38751 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__38757[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__38757 P021_trackide_sectionlist_T_TM;

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
} struct__38760;

/* TM::P021_trackside_int_T */
typedef struct__38760 P021_trackside_int_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P041_section_int_T_TM array__38785[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__38785 P041_OBU_sectionlist_int_T_TM;

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

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__38797[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__38797 P005_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef P027V1_section_int_T_TM_baseline2 array__38806[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__38806 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P021_section_int_T_TM array__38818[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__38818 P021_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_1[1];

#ifndef kcg_copy_struct__38382
#define kcg_copy_struct__38382(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38382)))
#endif /* kcg_copy_struct__38382 */

#ifndef kcg_copy_struct__38400
#define kcg_copy_struct__38400(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38400)))
#endif /* kcg_copy_struct__38400 */

#ifndef kcg_copy_struct__38410
#define kcg_copy_struct__38410(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38410)))
#endif /* kcg_copy_struct__38410 */

#ifndef kcg_copy_struct__38420
#define kcg_copy_struct__38420(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38420)))
#endif /* kcg_copy_struct__38420 */

#ifndef kcg_copy_struct__38431
#define kcg_copy_struct__38431(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38431)))
#endif /* kcg_copy_struct__38431 */

#ifndef kcg_copy_struct__38445
#define kcg_copy_struct__38445(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38445)))
#endif /* kcg_copy_struct__38445 */

#ifndef kcg_copy_struct__38454
#define kcg_copy_struct__38454(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38454)))
#endif /* kcg_copy_struct__38454 */

#ifndef kcg_copy_struct__38464
#define kcg_copy_struct__38464(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38464)))
#endif /* kcg_copy_struct__38464 */

#ifndef kcg_copy_struct__38475
#define kcg_copy_struct__38475(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38475)))
#endif /* kcg_copy_struct__38475 */

#ifndef kcg_copy_struct__38485
#define kcg_copy_struct__38485(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38485)))
#endif /* kcg_copy_struct__38485 */

#ifndef kcg_copy_struct__38499
#define kcg_copy_struct__38499(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38499)))
#endif /* kcg_copy_struct__38499 */

#ifndef kcg_copy_struct__38509
#define kcg_copy_struct__38509(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38509)))
#endif /* kcg_copy_struct__38509 */

#ifndef kcg_copy_struct__38527
#define kcg_copy_struct__38527(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38527)))
#endif /* kcg_copy_struct__38527 */

#ifndef kcg_copy_struct__38538
#define kcg_copy_struct__38538(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38538)))
#endif /* kcg_copy_struct__38538 */

#ifndef kcg_copy_struct__38543
#define kcg_copy_struct__38543(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38543)))
#endif /* kcg_copy_struct__38543 */

#ifndef kcg_copy_struct__38550
#define kcg_copy_struct__38550(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38550)))
#endif /* kcg_copy_struct__38550 */

#ifndef kcg_copy_struct__38562
#define kcg_copy_struct__38562(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38562)))
#endif /* kcg_copy_struct__38562 */

#ifndef kcg_copy_struct__38591
#define kcg_copy_struct__38591(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38591)))
#endif /* kcg_copy_struct__38591 */

#ifndef kcg_copy_struct__38599
#define kcg_copy_struct__38599(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38599)))
#endif /* kcg_copy_struct__38599 */

#ifndef kcg_copy_struct__38610
#define kcg_copy_struct__38610(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38610)))
#endif /* kcg_copy_struct__38610 */

#ifndef kcg_copy_struct__38625
#define kcg_copy_struct__38625(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38625)))
#endif /* kcg_copy_struct__38625 */

#ifndef kcg_copy_struct__38643
#define kcg_copy_struct__38643(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38643)))
#endif /* kcg_copy_struct__38643 */

#ifndef kcg_copy_struct__38648
#define kcg_copy_struct__38648(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38648)))
#endif /* kcg_copy_struct__38648 */

#ifndef kcg_copy_struct__38658
#define kcg_copy_struct__38658(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38658)))
#endif /* kcg_copy_struct__38658 */

#ifndef kcg_copy_struct__38685
#define kcg_copy_struct__38685(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38685)))
#endif /* kcg_copy_struct__38685 */

#ifndef kcg_copy_struct__38698
#define kcg_copy_struct__38698(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38698)))
#endif /* kcg_copy_struct__38698 */

#ifndef kcg_copy_struct__38707
#define kcg_copy_struct__38707(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38707)))
#endif /* kcg_copy_struct__38707 */

#ifndef kcg_copy_struct__38721
#define kcg_copy_struct__38721(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38721)))
#endif /* kcg_copy_struct__38721 */

#ifndef kcg_copy_struct__38734
#define kcg_copy_struct__38734(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38734)))
#endif /* kcg_copy_struct__38734 */

#ifndef kcg_copy_struct__38751
#define kcg_copy_struct__38751(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38751)))
#endif /* kcg_copy_struct__38751 */

#ifndef kcg_copy_struct__38760
#define kcg_copy_struct__38760(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38760)))
#endif /* kcg_copy_struct__38760 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__38535
#define kcg_copy_array__38535(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38535)))
#endif /* kcg_copy_array__38535 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__38596
#define kcg_copy_array__38596(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38596)))
#endif /* kcg_copy_array__38596 */

#ifndef kcg_copy_array__38607
#define kcg_copy_array__38607(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38607)))
#endif /* kcg_copy_array__38607 */

#ifndef kcg_copy_array__38655
#define kcg_copy_array__38655(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38655)))
#endif /* kcg_copy_array__38655 */

#ifndef kcg_copy_array__38704
#define kcg_copy_array__38704(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38704)))
#endif /* kcg_copy_array__38704 */

#ifndef kcg_copy_array__38731
#define kcg_copy_array__38731(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38731)))
#endif /* kcg_copy_array__38731 */

#ifndef kcg_copy_array__38757
#define kcg_copy_array__38757(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38757)))
#endif /* kcg_copy_array__38757 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__38785
#define kcg_copy_array__38785(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38785)))
#endif /* kcg_copy_array__38785 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__38797
#define kcg_copy_array__38797(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38797)))
#endif /* kcg_copy_array__38797 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array__38806
#define kcg_copy_array__38806(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38806)))
#endif /* kcg_copy_array__38806 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__38818
#define kcg_copy_array__38818(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38818)))
#endif /* kcg_copy_array__38818 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_comp_struct__38382
extern kcg_bool kcg_comp_struct__38382(
  struct__38382 *kcg_c1,
  struct__38382 *kcg_c2);
#endif /* kcg_comp_struct__38382 */

#ifndef kcg_comp_struct__38400
extern kcg_bool kcg_comp_struct__38400(
  struct__38400 *kcg_c1,
  struct__38400 *kcg_c2);
#endif /* kcg_comp_struct__38400 */

#ifndef kcg_comp_struct__38410
extern kcg_bool kcg_comp_struct__38410(
  struct__38410 *kcg_c1,
  struct__38410 *kcg_c2);
#endif /* kcg_comp_struct__38410 */

#ifndef kcg_comp_struct__38420
extern kcg_bool kcg_comp_struct__38420(
  struct__38420 *kcg_c1,
  struct__38420 *kcg_c2);
#endif /* kcg_comp_struct__38420 */

#ifndef kcg_comp_struct__38431
extern kcg_bool kcg_comp_struct__38431(
  struct__38431 *kcg_c1,
  struct__38431 *kcg_c2);
#endif /* kcg_comp_struct__38431 */

#ifndef kcg_comp_struct__38445
extern kcg_bool kcg_comp_struct__38445(
  struct__38445 *kcg_c1,
  struct__38445 *kcg_c2);
#endif /* kcg_comp_struct__38445 */

#ifndef kcg_comp_struct__38454
extern kcg_bool kcg_comp_struct__38454(
  struct__38454 *kcg_c1,
  struct__38454 *kcg_c2);
#endif /* kcg_comp_struct__38454 */

#ifndef kcg_comp_struct__38464
extern kcg_bool kcg_comp_struct__38464(
  struct__38464 *kcg_c1,
  struct__38464 *kcg_c2);
#endif /* kcg_comp_struct__38464 */

#ifndef kcg_comp_struct__38475
extern kcg_bool kcg_comp_struct__38475(
  struct__38475 *kcg_c1,
  struct__38475 *kcg_c2);
#endif /* kcg_comp_struct__38475 */

#ifndef kcg_comp_struct__38485
extern kcg_bool kcg_comp_struct__38485(
  struct__38485 *kcg_c1,
  struct__38485 *kcg_c2);
#endif /* kcg_comp_struct__38485 */

#ifndef kcg_comp_struct__38499
extern kcg_bool kcg_comp_struct__38499(
  struct__38499 *kcg_c1,
  struct__38499 *kcg_c2);
#endif /* kcg_comp_struct__38499 */

#ifndef kcg_comp_struct__38509
extern kcg_bool kcg_comp_struct__38509(
  struct__38509 *kcg_c1,
  struct__38509 *kcg_c2);
#endif /* kcg_comp_struct__38509 */

#ifndef kcg_comp_struct__38527
extern kcg_bool kcg_comp_struct__38527(
  struct__38527 *kcg_c1,
  struct__38527 *kcg_c2);
#endif /* kcg_comp_struct__38527 */

#ifndef kcg_comp_struct__38538
extern kcg_bool kcg_comp_struct__38538(
  struct__38538 *kcg_c1,
  struct__38538 *kcg_c2);
#endif /* kcg_comp_struct__38538 */

#ifndef kcg_comp_struct__38543
extern kcg_bool kcg_comp_struct__38543(
  struct__38543 *kcg_c1,
  struct__38543 *kcg_c2);
#endif /* kcg_comp_struct__38543 */

#ifndef kcg_comp_struct__38550
extern kcg_bool kcg_comp_struct__38550(
  struct__38550 *kcg_c1,
  struct__38550 *kcg_c2);
#endif /* kcg_comp_struct__38550 */

#ifndef kcg_comp_struct__38562
extern kcg_bool kcg_comp_struct__38562(
  struct__38562 *kcg_c1,
  struct__38562 *kcg_c2);
#endif /* kcg_comp_struct__38562 */

#ifndef kcg_comp_struct__38591
extern kcg_bool kcg_comp_struct__38591(
  struct__38591 *kcg_c1,
  struct__38591 *kcg_c2);
#endif /* kcg_comp_struct__38591 */

#ifndef kcg_comp_struct__38599
extern kcg_bool kcg_comp_struct__38599(
  struct__38599 *kcg_c1,
  struct__38599 *kcg_c2);
#endif /* kcg_comp_struct__38599 */

#ifndef kcg_comp_struct__38610
extern kcg_bool kcg_comp_struct__38610(
  struct__38610 *kcg_c1,
  struct__38610 *kcg_c2);
#endif /* kcg_comp_struct__38610 */

#ifndef kcg_comp_struct__38625
extern kcg_bool kcg_comp_struct__38625(
  struct__38625 *kcg_c1,
  struct__38625 *kcg_c2);
#endif /* kcg_comp_struct__38625 */

#ifndef kcg_comp_struct__38643
extern kcg_bool kcg_comp_struct__38643(
  struct__38643 *kcg_c1,
  struct__38643 *kcg_c2);
#endif /* kcg_comp_struct__38643 */

#ifndef kcg_comp_struct__38648
extern kcg_bool kcg_comp_struct__38648(
  struct__38648 *kcg_c1,
  struct__38648 *kcg_c2);
#endif /* kcg_comp_struct__38648 */

#ifndef kcg_comp_struct__38658
extern kcg_bool kcg_comp_struct__38658(
  struct__38658 *kcg_c1,
  struct__38658 *kcg_c2);
#endif /* kcg_comp_struct__38658 */

#ifndef kcg_comp_struct__38685
extern kcg_bool kcg_comp_struct__38685(
  struct__38685 *kcg_c1,
  struct__38685 *kcg_c2);
#endif /* kcg_comp_struct__38685 */

#ifndef kcg_comp_struct__38698
extern kcg_bool kcg_comp_struct__38698(
  struct__38698 *kcg_c1,
  struct__38698 *kcg_c2);
#endif /* kcg_comp_struct__38698 */

#ifndef kcg_comp_struct__38707
extern kcg_bool kcg_comp_struct__38707(
  struct__38707 *kcg_c1,
  struct__38707 *kcg_c2);
#endif /* kcg_comp_struct__38707 */

#ifndef kcg_comp_struct__38721
extern kcg_bool kcg_comp_struct__38721(
  struct__38721 *kcg_c1,
  struct__38721 *kcg_c2);
#endif /* kcg_comp_struct__38721 */

#ifndef kcg_comp_struct__38734
extern kcg_bool kcg_comp_struct__38734(
  struct__38734 *kcg_c1,
  struct__38734 *kcg_c2);
#endif /* kcg_comp_struct__38734 */

#ifndef kcg_comp_struct__38751
extern kcg_bool kcg_comp_struct__38751(
  struct__38751 *kcg_c1,
  struct__38751 *kcg_c2);
#endif /* kcg_comp_struct__38751 */

#ifndef kcg_comp_struct__38760
extern kcg_bool kcg_comp_struct__38760(
  struct__38760 *kcg_c1,
  struct__38760 *kcg_c2);
#endif /* kcg_comp_struct__38760 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__38535
extern kcg_bool kcg_comp_array__38535(
  array__38535 *kcg_c1,
  array__38535 *kcg_c2);
#endif /* kcg_comp_array__38535 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__38596
extern kcg_bool kcg_comp_array__38596(
  array__38596 *kcg_c1,
  array__38596 *kcg_c2);
#endif /* kcg_comp_array__38596 */

#ifndef kcg_comp_array__38607
extern kcg_bool kcg_comp_array__38607(
  array__38607 *kcg_c1,
  array__38607 *kcg_c2);
#endif /* kcg_comp_array__38607 */

#ifndef kcg_comp_array__38655
extern kcg_bool kcg_comp_array__38655(
  array__38655 *kcg_c1,
  array__38655 *kcg_c2);
#endif /* kcg_comp_array__38655 */

#ifndef kcg_comp_array__38704
extern kcg_bool kcg_comp_array__38704(
  array__38704 *kcg_c1,
  array__38704 *kcg_c2);
#endif /* kcg_comp_array__38704 */

#ifndef kcg_comp_array__38731
extern kcg_bool kcg_comp_array__38731(
  array__38731 *kcg_c1,
  array__38731 *kcg_c2);
#endif /* kcg_comp_array__38731 */

#ifndef kcg_comp_array__38757
extern kcg_bool kcg_comp_array__38757(
  array__38757 *kcg_c1,
  array__38757 *kcg_c2);
#endif /* kcg_comp_array__38757 */

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

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__38785
extern kcg_bool kcg_comp_array__38785(
  array__38785 *kcg_c1,
  array__38785 *kcg_c2);
#endif /* kcg_comp_array__38785 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array__38797
extern kcg_bool kcg_comp_array__38797(
  array__38797 *kcg_c1,
  array__38797 *kcg_c2);
#endif /* kcg_comp_array__38797 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array__38806
extern kcg_bool kcg_comp_array__38806(
  array__38806 *kcg_c1,
  array__38806 *kcg_c2);
#endif /* kcg_comp_array__38806 */

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

#ifndef kcg_comp_array__38818
extern kcg_bool kcg_comp_array__38818(
  array__38818 *kcg_c1,
  array__38818 *kcg_c2);
#endif /* kcg_comp_array__38818 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__38757

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__38757

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__38760

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__38760

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__38543

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__38543

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__38400

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__38400

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__38410

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__38410

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__38420

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__38420

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__38431

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__38431

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__38445

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__38445

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__38445

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__38445

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__38445

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__38445

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__38445

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__38445

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__38445

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__38445

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__38454

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__38454

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__38464

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__38464

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__38445

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__38445

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__38445

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__38445

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__38475

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__38475

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__38445

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__38445

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__38485

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__38485

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__38499

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__38499

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__38499

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__38499

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__38445

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__38445

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__38400

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__38400

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__38550

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__38550

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__38509

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__38509

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__38562

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__38562

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__38596

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__38596

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__38806

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__38806

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__38599

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__38599

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__38607

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__38607

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__38591

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__38591

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__38596

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__38596

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__38610

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__38610

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__38538

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__38538

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__38527

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__38527

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__38535

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__38535

#define kcg_comp_Radio_TrackTrain_Header_T_TM_transitional kcg_comp_struct__38382

#define kcg_copy_Radio_TrackTrain_Header_T_TM_transitional kcg_copy_struct__38382

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__38625

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__38625

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__38643

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__38643

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__38382

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__38382

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__38655

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__38655

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__38648

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__38648

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__38655

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__38655

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__38658

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__38658

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__38685

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__38685

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__38785

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__38785

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__38698

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__38698

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__38704

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__38704

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__38707

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__38707

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__38797

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__38797

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__38721

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__38721

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__38731

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__38731

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__38734

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__38734

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__38818

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__38818

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__38751

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__38751

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-16T11:28:18
*************************************************************$ */

