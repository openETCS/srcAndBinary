/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-ERSA/merged_example\kcg_s2c_config.txt
** Generation date: 2015-11-16T11:33:59
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

/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__11036;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__11036 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__11047;

/* TM::P058_section_int_T */
typedef struct__11047 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__11052[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__11052 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__11052 P058_OBU_sectionlist_int_T_TM;

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
} struct__11055;

/* TM::P058_trackside_int_T */
typedef struct__11055 P058_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef MetadataElement_T_Common_Types_Pkg array__11074[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__11074 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__11077;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__11077 CompressedPackets_T_Common_Types_Pkg;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__11085;

/* TM::P041_section_int_T */
typedef struct__11085 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__11091[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__11091 P041_trackide_sectionlist_T_TM;

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
} struct__11094;

/* TM::P041_trackside_int_T */
typedef struct__11094 P041_trackside_int_T_TM;

typedef P041_section_int_T_TM array__11108[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__11108 P041_OBU_sectionlist_int_T_TM;

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

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__11117;

/* TM::P057_trackside_int_T */
typedef struct__11117 P057_trackside_int_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__11127;

/* TM::P021_section_int_T */
typedef struct__11127 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__11133[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__11133 P021_trackide_sectionlist_T_TM;

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
} struct__11136;

/* TM::P021_trackside_int_T */
typedef struct__11136 P021_trackside_int_T_TM;

typedef P021_section_int_T_TM array__11149[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__11149 P021_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__11155;

/* TM::P015_section_int_T */
typedef struct__11155 P015_section_int_T_TM;

typedef P015_section_int_T_TM array__11162[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__11162 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__11162 P015_OBU_sectionlist_int_T_TM;

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
} struct__11165;

/* TM::P015_trackside_int_T */
typedef struct__11165 P015_trackside_int_T_TM;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__11201;

/* TM::P005_section_int_T */
typedef struct__11201 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__11211[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__11211 P005_trackide_sectionlist_T_TM;

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
} struct__11214;

/* TM::P005_trackside_int_T */
typedef struct__11214 P005_trackside_int_T_TM;

typedef P005_section_int_T_TM array__11231[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__11231 P005_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__11240;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__11240 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__11245[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__11245 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__11245 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__11248;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__11248 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__11256[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__11256 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__11259;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__11259 P027V1_trackside_int_T_TM_baseline2;

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
} struct__11277;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__11277 P003V1_trackside_int_T_TM_baseline2;

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
} struct__11306;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__11306 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__11324;

/* TM::CompressedRadioMessage */
typedef struct__11324 CompressedRadioMessage_TM;

typedef P027V1_section_int_T_TM_baseline2 array__11329[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__11329 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_428[428];

#ifndef kcg_copy_struct__11036
#define kcg_copy_struct__11036(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11036)))
#endif /* kcg_copy_struct__11036 */

#ifndef kcg_copy_struct__11047
#define kcg_copy_struct__11047(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11047)))
#endif /* kcg_copy_struct__11047 */

#ifndef kcg_copy_struct__11055
#define kcg_copy_struct__11055(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11055)))
#endif /* kcg_copy_struct__11055 */

#ifndef kcg_copy_struct__11077
#define kcg_copy_struct__11077(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11077)))
#endif /* kcg_copy_struct__11077 */

#ifndef kcg_copy_struct__11085
#define kcg_copy_struct__11085(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11085)))
#endif /* kcg_copy_struct__11085 */

#ifndef kcg_copy_struct__11094
#define kcg_copy_struct__11094(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11094)))
#endif /* kcg_copy_struct__11094 */

#ifndef kcg_copy_struct__11117
#define kcg_copy_struct__11117(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11117)))
#endif /* kcg_copy_struct__11117 */

#ifndef kcg_copy_struct__11127
#define kcg_copy_struct__11127(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11127)))
#endif /* kcg_copy_struct__11127 */

#ifndef kcg_copy_struct__11136
#define kcg_copy_struct__11136(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11136)))
#endif /* kcg_copy_struct__11136 */

#ifndef kcg_copy_struct__11155
#define kcg_copy_struct__11155(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11155)))
#endif /* kcg_copy_struct__11155 */

#ifndef kcg_copy_struct__11165
#define kcg_copy_struct__11165(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11165)))
#endif /* kcg_copy_struct__11165 */

#ifndef kcg_copy_struct__11201
#define kcg_copy_struct__11201(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11201)))
#endif /* kcg_copy_struct__11201 */

#ifndef kcg_copy_struct__11214
#define kcg_copy_struct__11214(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11214)))
#endif /* kcg_copy_struct__11214 */

#ifndef kcg_copy_struct__11240
#define kcg_copy_struct__11240(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11240)))
#endif /* kcg_copy_struct__11240 */

#ifndef kcg_copy_struct__11248
#define kcg_copy_struct__11248(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11248)))
#endif /* kcg_copy_struct__11248 */

#ifndef kcg_copy_struct__11259
#define kcg_copy_struct__11259(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11259)))
#endif /* kcg_copy_struct__11259 */

#ifndef kcg_copy_struct__11277
#define kcg_copy_struct__11277(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11277)))
#endif /* kcg_copy_struct__11277 */

#ifndef kcg_copy_struct__11306
#define kcg_copy_struct__11306(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11306)))
#endif /* kcg_copy_struct__11306 */

#ifndef kcg_copy_struct__11324
#define kcg_copy_struct__11324(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11324)))
#endif /* kcg_copy_struct__11324 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__11052
#define kcg_copy_array__11052(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11052)))
#endif /* kcg_copy_array__11052 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__11074
#define kcg_copy_array__11074(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11074)))
#endif /* kcg_copy_array__11074 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__11091
#define kcg_copy_array__11091(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11091)))
#endif /* kcg_copy_array__11091 */

#ifndef kcg_copy_array__11108
#define kcg_copy_array__11108(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11108)))
#endif /* kcg_copy_array__11108 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array__11133
#define kcg_copy_array__11133(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11133)))
#endif /* kcg_copy_array__11133 */

#ifndef kcg_copy_array__11149
#define kcg_copy_array__11149(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11149)))
#endif /* kcg_copy_array__11149 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__11162
#define kcg_copy_array__11162(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11162)))
#endif /* kcg_copy_array__11162 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__11211
#define kcg_copy_array__11211(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11211)))
#endif /* kcg_copy_array__11211 */

#ifndef kcg_copy_array__11231
#define kcg_copy_array__11231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11231)))
#endif /* kcg_copy_array__11231 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array__11245
#define kcg_copy_array__11245(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11245)))
#endif /* kcg_copy_array__11245 */

#ifndef kcg_copy_array__11256
#define kcg_copy_array__11256(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11256)))
#endif /* kcg_copy_array__11256 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__11329
#define kcg_copy_array__11329(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11329)))
#endif /* kcg_copy_array__11329 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_comp_struct__11036
extern kcg_bool kcg_comp_struct__11036(
  struct__11036 *kcg_c1,
  struct__11036 *kcg_c2);
#endif /* kcg_comp_struct__11036 */

#ifndef kcg_comp_struct__11047
extern kcg_bool kcg_comp_struct__11047(
  struct__11047 *kcg_c1,
  struct__11047 *kcg_c2);
#endif /* kcg_comp_struct__11047 */

#ifndef kcg_comp_struct__11055
extern kcg_bool kcg_comp_struct__11055(
  struct__11055 *kcg_c1,
  struct__11055 *kcg_c2);
#endif /* kcg_comp_struct__11055 */

#ifndef kcg_comp_struct__11077
extern kcg_bool kcg_comp_struct__11077(
  struct__11077 *kcg_c1,
  struct__11077 *kcg_c2);
#endif /* kcg_comp_struct__11077 */

#ifndef kcg_comp_struct__11085
extern kcg_bool kcg_comp_struct__11085(
  struct__11085 *kcg_c1,
  struct__11085 *kcg_c2);
#endif /* kcg_comp_struct__11085 */

#ifndef kcg_comp_struct__11094
extern kcg_bool kcg_comp_struct__11094(
  struct__11094 *kcg_c1,
  struct__11094 *kcg_c2);
#endif /* kcg_comp_struct__11094 */

#ifndef kcg_comp_struct__11117
extern kcg_bool kcg_comp_struct__11117(
  struct__11117 *kcg_c1,
  struct__11117 *kcg_c2);
#endif /* kcg_comp_struct__11117 */

#ifndef kcg_comp_struct__11127
extern kcg_bool kcg_comp_struct__11127(
  struct__11127 *kcg_c1,
  struct__11127 *kcg_c2);
#endif /* kcg_comp_struct__11127 */

#ifndef kcg_comp_struct__11136
extern kcg_bool kcg_comp_struct__11136(
  struct__11136 *kcg_c1,
  struct__11136 *kcg_c2);
#endif /* kcg_comp_struct__11136 */

#ifndef kcg_comp_struct__11155
extern kcg_bool kcg_comp_struct__11155(
  struct__11155 *kcg_c1,
  struct__11155 *kcg_c2);
#endif /* kcg_comp_struct__11155 */

#ifndef kcg_comp_struct__11165
extern kcg_bool kcg_comp_struct__11165(
  struct__11165 *kcg_c1,
  struct__11165 *kcg_c2);
#endif /* kcg_comp_struct__11165 */

#ifndef kcg_comp_struct__11201
extern kcg_bool kcg_comp_struct__11201(
  struct__11201 *kcg_c1,
  struct__11201 *kcg_c2);
#endif /* kcg_comp_struct__11201 */

#ifndef kcg_comp_struct__11214
extern kcg_bool kcg_comp_struct__11214(
  struct__11214 *kcg_c1,
  struct__11214 *kcg_c2);
#endif /* kcg_comp_struct__11214 */

#ifndef kcg_comp_struct__11240
extern kcg_bool kcg_comp_struct__11240(
  struct__11240 *kcg_c1,
  struct__11240 *kcg_c2);
#endif /* kcg_comp_struct__11240 */

#ifndef kcg_comp_struct__11248
extern kcg_bool kcg_comp_struct__11248(
  struct__11248 *kcg_c1,
  struct__11248 *kcg_c2);
#endif /* kcg_comp_struct__11248 */

#ifndef kcg_comp_struct__11259
extern kcg_bool kcg_comp_struct__11259(
  struct__11259 *kcg_c1,
  struct__11259 *kcg_c2);
#endif /* kcg_comp_struct__11259 */

#ifndef kcg_comp_struct__11277
extern kcg_bool kcg_comp_struct__11277(
  struct__11277 *kcg_c1,
  struct__11277 *kcg_c2);
#endif /* kcg_comp_struct__11277 */

#ifndef kcg_comp_struct__11306
extern kcg_bool kcg_comp_struct__11306(
  struct__11306 *kcg_c1,
  struct__11306 *kcg_c2);
#endif /* kcg_comp_struct__11306 */

#ifndef kcg_comp_struct__11324
extern kcg_bool kcg_comp_struct__11324(
  struct__11324 *kcg_c1,
  struct__11324 *kcg_c2);
#endif /* kcg_comp_struct__11324 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__11052
extern kcg_bool kcg_comp_array__11052(
  array__11052 *kcg_c1,
  array__11052 *kcg_c2);
#endif /* kcg_comp_array__11052 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__11074
extern kcg_bool kcg_comp_array__11074(
  array__11074 *kcg_c1,
  array__11074 *kcg_c2);
#endif /* kcg_comp_array__11074 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__11091
extern kcg_bool kcg_comp_array__11091(
  array__11091 *kcg_c1,
  array__11091 *kcg_c2);
#endif /* kcg_comp_array__11091 */

#ifndef kcg_comp_array__11108
extern kcg_bool kcg_comp_array__11108(
  array__11108 *kcg_c1,
  array__11108 *kcg_c2);
#endif /* kcg_comp_array__11108 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array__11133
extern kcg_bool kcg_comp_array__11133(
  array__11133 *kcg_c1,
  array__11133 *kcg_c2);
#endif /* kcg_comp_array__11133 */

#ifndef kcg_comp_array__11149
extern kcg_bool kcg_comp_array__11149(
  array__11149 *kcg_c1,
  array__11149 *kcg_c2);
#endif /* kcg_comp_array__11149 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array__11162
extern kcg_bool kcg_comp_array__11162(
  array__11162 *kcg_c1,
  array__11162 *kcg_c2);
#endif /* kcg_comp_array__11162 */

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

#ifndef kcg_comp_array__11211
extern kcg_bool kcg_comp_array__11211(
  array__11211 *kcg_c1,
  array__11211 *kcg_c2);
#endif /* kcg_comp_array__11211 */

#ifndef kcg_comp_array__11231
extern kcg_bool kcg_comp_array__11231(
  array__11231 *kcg_c1,
  array__11231 *kcg_c2);
#endif /* kcg_comp_array__11231 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array__11245
extern kcg_bool kcg_comp_array__11245(
  array__11245 *kcg_c1,
  array__11245 *kcg_c2);
#endif /* kcg_comp_array__11245 */

#ifndef kcg_comp_array__11256
extern kcg_bool kcg_comp_array__11256(
  array__11256 *kcg_c1,
  array__11256 *kcg_c2);
#endif /* kcg_comp_array__11256 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__11329
extern kcg_bool kcg_comp_array__11329(
  array__11329 *kcg_c1,
  array__11329 *kcg_c2);
#endif /* kcg_comp_array__11329 */

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

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__11306

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__11306

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__11324

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__11324

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__11052

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__11052

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__11047

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__11047

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__11052

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__11052

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__11055

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__11055

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__11108

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__11108

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__11085

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__11085

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__11091

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__11091

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__11094

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__11094

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__11117

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__11117

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__11149

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__11149

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__11127

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__11127

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__11133

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__11133

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__11136

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__11136

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__11162

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__11162

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__11155

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__11155

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__11162

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__11162

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__11165

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__11165

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__11231

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__11231

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__11201

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__11201

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__11211

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__11211

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__11214

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__11214

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__11245

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__11245

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__11329

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__11329

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__11248

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__11248

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__11256

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__11256

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__11240

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__11240

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__11245

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__11245

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__11259

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__11259

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__11277

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__11277

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__11077

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__11077

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__11036

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__11036

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__11074

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__11074

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-16T11:33:59
*************************************************************$ */

