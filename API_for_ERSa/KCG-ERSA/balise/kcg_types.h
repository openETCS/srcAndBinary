/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG-ERSA/balise\kcg_s2c_config.txt
** Generation date: 2015-11-16T14:56:40
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
} struct__8392;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__8392 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__8400[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__8400 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__8403;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__8403 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_int q_updown;
  kcg_int m_version;
  kcg_int q_media;
  kcg_int n_pig;
  kcg_int n_total;
  kcg_int m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  kcg_int q_link;
} struct__8408;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__8408 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__8421;

/* InfraLib::B_data_internal_T */
typedef struct__8421 B_data_internal_T_InfraLib;

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
} struct__8433;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__8433 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__8462;

/* TM::CompressedBaliseMessage */
typedef struct__8462 CompressedBaliseMessage_TM;

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
} struct__8467;

/* TM::P042_trackside_int_T */
typedef struct__8467 P042_trackside_int_T_TM;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__8479;

/* TM::P046_section_int_T */
typedef struct__8479 P046_section_int_T_TM;

typedef P046_section_int_T_TM array__8484[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__8484 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__8487;

/* TM::P046_trackside_int_T */
typedef struct__8487 P046_trackside_int_T_TM;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__8498;

/* TM::P255_trackside_int_T */
typedef struct__8498 P255_trackside_int_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__8506[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__8506 P046_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_430[430];

typedef kcg_int array_int_1[1];

#ifndef kcg_copy_struct__8392
#define kcg_copy_struct__8392(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__8392)))
#endif /* kcg_copy_struct__8392 */

#ifndef kcg_copy_struct__8403
#define kcg_copy_struct__8403(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__8403)))
#endif /* kcg_copy_struct__8403 */

#ifndef kcg_copy_struct__8408
#define kcg_copy_struct__8408(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__8408)))
#endif /* kcg_copy_struct__8408 */

#ifndef kcg_copy_struct__8421
#define kcg_copy_struct__8421(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__8421)))
#endif /* kcg_copy_struct__8421 */

#ifndef kcg_copy_struct__8433
#define kcg_copy_struct__8433(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__8433)))
#endif /* kcg_copy_struct__8433 */

#ifndef kcg_copy_struct__8462
#define kcg_copy_struct__8462(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__8462)))
#endif /* kcg_copy_struct__8462 */

#ifndef kcg_copy_struct__8467
#define kcg_copy_struct__8467(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__8467)))
#endif /* kcg_copy_struct__8467 */

#ifndef kcg_copy_struct__8479
#define kcg_copy_struct__8479(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__8479)))
#endif /* kcg_copy_struct__8479 */

#ifndef kcg_copy_struct__8487
#define kcg_copy_struct__8487(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__8487)))
#endif /* kcg_copy_struct__8487 */

#ifndef kcg_copy_struct__8498
#define kcg_copy_struct__8498(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__8498)))
#endif /* kcg_copy_struct__8498 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__8400
#define kcg_copy_array__8400(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__8400)))
#endif /* kcg_copy_array__8400 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__8484
#define kcg_copy_array__8484(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__8484)))
#endif /* kcg_copy_array__8484 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__8506
#define kcg_copy_array__8506(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__8506)))
#endif /* kcg_copy_array__8506 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_430
#define kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_430)))
#endif /* kcg_copy_array_int_430 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_comp_struct__8392
extern kcg_bool kcg_comp_struct__8392(
  struct__8392 *kcg_c1,
  struct__8392 *kcg_c2);
#endif /* kcg_comp_struct__8392 */

#ifndef kcg_comp_struct__8403
extern kcg_bool kcg_comp_struct__8403(
  struct__8403 *kcg_c1,
  struct__8403 *kcg_c2);
#endif /* kcg_comp_struct__8403 */

#ifndef kcg_comp_struct__8408
extern kcg_bool kcg_comp_struct__8408(
  struct__8408 *kcg_c1,
  struct__8408 *kcg_c2);
#endif /* kcg_comp_struct__8408 */

#ifndef kcg_comp_struct__8421
extern kcg_bool kcg_comp_struct__8421(
  struct__8421 *kcg_c1,
  struct__8421 *kcg_c2);
#endif /* kcg_comp_struct__8421 */

#ifndef kcg_comp_struct__8433
extern kcg_bool kcg_comp_struct__8433(
  struct__8433 *kcg_c1,
  struct__8433 *kcg_c2);
#endif /* kcg_comp_struct__8433 */

#ifndef kcg_comp_struct__8462
extern kcg_bool kcg_comp_struct__8462(
  struct__8462 *kcg_c1,
  struct__8462 *kcg_c2);
#endif /* kcg_comp_struct__8462 */

#ifndef kcg_comp_struct__8467
extern kcg_bool kcg_comp_struct__8467(
  struct__8467 *kcg_c1,
  struct__8467 *kcg_c2);
#endif /* kcg_comp_struct__8467 */

#ifndef kcg_comp_struct__8479
extern kcg_bool kcg_comp_struct__8479(
  struct__8479 *kcg_c1,
  struct__8479 *kcg_c2);
#endif /* kcg_comp_struct__8479 */

#ifndef kcg_comp_struct__8487
extern kcg_bool kcg_comp_struct__8487(
  struct__8487 *kcg_c1,
  struct__8487 *kcg_c2);
#endif /* kcg_comp_struct__8487 */

#ifndef kcg_comp_struct__8498
extern kcg_bool kcg_comp_struct__8498(
  struct__8498 *kcg_c1,
  struct__8498 *kcg_c2);
#endif /* kcg_comp_struct__8498 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__8400
extern kcg_bool kcg_comp_array__8400(array__8400 *kcg_c1, array__8400 *kcg_c2);
#endif /* kcg_comp_array__8400 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__8484
extern kcg_bool kcg_comp_array__8484(array__8484 *kcg_c1, array__8484 *kcg_c2);
#endif /* kcg_comp_array__8484 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array__8506
extern kcg_bool kcg_comp_array__8506(array__8506 *kcg_c1, array__8506 *kcg_c2);
#endif /* kcg_comp_array__8506 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_33
extern kcg_bool kcg_comp_array_int_2_33(
  array_int_2_33 *kcg_c1,
  array_int_2_33 *kcg_c2);
#endif /* kcg_comp_array_int_2_33 */

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

#ifndef kcg_comp_array_int_430
extern kcg_bool kcg_comp_array_int_430(
  array_int_430 *kcg_c1,
  array_int_430 *kcg_c2);
#endif /* kcg_comp_array_int_430 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__8421

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__8421

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__8433

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__8433

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__8403

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__8403

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__8392

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__8392

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__8400

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__8400

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__8462

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__8462

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__8408

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__8408

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__8467

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__8467

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__8498

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__8498

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__8506

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__8506

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__8479

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__8479

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__8484

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__8484

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__8487

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__8487

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-16T14:56:40
*************************************************************$ */

