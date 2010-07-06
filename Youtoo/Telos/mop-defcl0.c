/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module mop-defcl0
 **  Copyright: See file mop-defcl0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level1();
extern LispRef level1_bindings[];
extern LispRef string_bindings[];
extern LispRef symbol_bindings[];
extern LispRef boot1_bindings[];
extern LispRef collect_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_key_bindings[];

/* Module bindings with size 95 */
LispRef mop_defcl0_bindings[95];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-defcl0 */
void initialize_module_mop_defcl0()
{
  if (is_initialized) return;
  initialize_module_level1();
  eul_fast_table_set(eul_modules,"mop_defcl0",(LispRef) mop_defcl0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1199, sym_1198, sym_1197, sym_1196, sym_1195, sym_1194, sym_1193, sym_1192, sym_1191, sym_1190, sym_1189, sym_1188, G001187, sym_1185, sym_1184, sym_1183, sym_1182, G001181, G001179, G001177, G001169, G001167, sym_1165, sym_1164, sym_1163, G001162, G001160, G001158, sym_1156, key_1155, G001154, sym_1152, sym_1151, G001150, sym_1148, G001147, G001145, sym_1143, sym_1142, key_1141, key_1140, key_1139, key_1138, key_1136, key_1134, key_1132, key_1129, sym_1128, sym_1126, sym_1125, sym_1124, sym_1123, sym_1122, G001121, sym_1119, sym_1118, sym_1117, sym_1116, sym_1115, sym_1114, sym_1113, sym_1112, sym_1111, G001110, G001108, key_1106, key_1104, key_1101, sym_1098, key_1097, key_1096, sym_1095, sym_1093, key_1092, sym_1091, G001090;

  /* Code vector and literal definitions */
  eul_allocate_static_cons(cons_1094, NULL, NULL);
  eul_allocate_static_cons(cons_1105, NULL, NULL);
  eul_allocate_static_cons(cons_1103, NULL, eul_as_static(cons_1105));
  eul_allocate_static_cons(cons_1102, NULL, eul_as_static(cons_1103));
  eul_allocate_static_cons(cons_1100, NULL, eul_as_static(cons_1102));
  eul_allocate_static_cons(cons_1099, NULL, eul_as_static(cons_1100));
  /* Byte-vector with size: 81 is_init: 0 index: 26 binding: do-direct-slotds */
  static const void *G001089[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,01,34),I(1c,10,7a,12),I(1b,34,00,00),I(00,00,00,3f),I(1d,10,1b,86),I(0f,23,00,00),B(mop_defcl0 ,14),I(1c,0f,1b,86),I(0f,23,00,00),B(mop_defcl0 ,15),I(1c,0f,23,00),B(mop_defcl0 ,16),I(1c,0f,1f,08),I(11,1b,24,00),B(mop_defcl0 ,2),I(3c,01,1d,1c),I(0f,22,08,32),I(00,00,00,ec),I(23,00,00,00),B(mop_defcl0 ,18),I(1f,03,74,23),B(mop_defcl0 ,19),I(1c,1f,03,24),B(mop_key ,2),I(3c,03,1f,05),I(74,23,00,00),B(mop_defcl0 ,20),I(1c,1f,05,24),B(mop_key ,2),I(3c,03,1f,07),I(72,1b,86,0f),I(23,00,00,00),B(mop_defcl0 ,14),I(1c,0f,1f,05),I(1f,08,50,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,23),I(1f,06,86,0f),I(86,1c,0f,23),B(mop_defcl0 ,21),I(1c,0f,1b,86),I(0f,23,00,00),B(mop_defcl0 ,19),I(1c,0f,22,04),I(1f,05,1f,0a),I(50,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,17),I(1f,06,86,0f),I(23,00,00,00),B(mop_defcl0 ,20),I(1c,0f,22,01),I(1f,0e,74,1b),I(23,00,00,00),B(mop_defcl0 ,25),I(24,00,00,00),B(mop_key ,3),I(3c,02,1d,1c),I(24,00,00,00),B(boot ,7),I(3c,02,1f,05),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,08),I(1c,0f,23,00),B(mop_defcl0 ,15),I(1c,0f,23,00),B(mop_defcl0 ,16),I(1c,0f,1f,15),I(11,1b,24,00),B(mop_defcl0 ,2),I(3c,01,1d,1c),I(0f,22,15,22),I(01,45,02,00)};

  /* Byte-vector with size: 74 is_init: 0 index: 27 binding: do-accessor */
  static const void *G001107[] = {I(43,04,1c,12),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,01,16),I(1d,10,23,00),B(mop_defcl0 ,22),I(50,1b,34,00),I(00,00,00,52),I(1f,03,73,1b),I(1f,07,1f,07),I(1f,06,24,00),B(mop_defcl0 ,4),I(3c,04,1c,1f),I(08,1f,08,1f),I(07,24,00,00),B(mop_defcl0 ,7),I(3c,04,1f,06),I(75,1f,09,1f),I(09,1d,1f,09),I(24,00,00,00),B(mop_defcl0 ,3),I(3c,04,1f,03),I(1f,03,1d,24),B(collect ,17),I(3d,03,0b,22),I(05,32,00,00),I(00,00,00,b8),I(1f,03,10,23),B(mop_defcl0 ,23),I(50,1b,34,00),I(00,00,00,42),I(1f,04,73,1b),I(1f,08,1f,08),I(1f,07,24,00),B(mop_defcl0 ,4),I(3c,04,1f,06),I(75,1f,09,1f),I(09,1d,1f,09),I(24,00,00,00),B(mop_defcl0 ,3),I(3c,04,1d,1c),I(24,00,00,00),B(boot ,7),I(3d,02,0b,22),I(04,32,00,00),I(00,00,00,6a),I(1f,04,10,23),B(mop_defcl0 ,24),I(50,1b,34,00),I(00,00,00,42),I(1f,05,73,1b),I(1f,09,1f,09),I(1f,08,87,24),B(mop_defcl0 ,7),I(3c,05,1f,07),I(75,1f,0a,1f),I(0a,1d,1f,0a),I(24,00,00,00),B(mop_defcl0 ,3),I(3c,04,1d,1c),I(24,00,00,00),B(boot ,7),I(3d,02,0c,22),I(04,32,00,00),I(00,00,00,1c),I(1f,05,75,1f),I(08,1f,08,1d),I(1f,08,24,00),B(mop_defcl0 ,3),I(3d,04,09,22),I(01,22,01,22),I(01,22,01,45),I(05,00,00,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 37 binding: do-reader */
  static const void *G001109[] = {I(43,04,23,00),B(mop_defcl0 ,28),I(86,0f,23,00),B(mop_defcl0 ,29),I(86,0f,23,00),B(mop_defcl0 ,30),I(1c,0f,1f,05),I(86,0f,23,00),B(mop_defcl0 ,31),I(1c,0f,23,00),B(mop_defcl0 ,32),I(1c,0f,23,00),B(mop_defcl0 ,33),I(86,0f,1b,86),I(0f,1d,1c,0f),I(1f,06,1c,0f),I(23,00,00,00),B(mop_defcl0 ,34),I(1c,0f,1f,0b),I(86,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1d,1c),I(0f,1b,86,0f),I(1f,0e,1c,0f),I(1f,13,1c,0f),I(23,00,00,00),B(mop_defcl0 ,35),I(1c,0f,1f,15),I(86,0f,23,00),B(mop_defcl0 ,36),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,45,19,00)};

  eul_allocate_static_cons(cons_1127, NULL, NULL);
  eul_allocate_static_cons(cons_1137, NULL, NULL);
  eul_allocate_static_cons(cons_1135, NULL, eul_as_static(cons_1137));
  eul_allocate_static_cons(cons_1133, NULL, eul_as_static(cons_1135));
  eul_allocate_static_cons(cons_1131, NULL, eul_as_static(cons_1133));
  eul_allocate_static_cons(cons_1130, NULL, eul_as_static(cons_1131));
  /* Byte-vector with size: 102 is_init: 0 index: 56 binding: defprimclass */
  static const void *G001120[] = {I(43,fb,1f,04),I(24,00,00,00),B(mop_defcl0 ,10),I(3c,01,1f,04),I(86,0f,23,00),B(mop_defcl0 ,38),I(1c,0f,1b,86),I(0f,1f,08,1c),I(0f,23,00,00),B(mop_defcl0 ,39),I(1c,0f,23,00),B(mop_defcl0 ,40),I(86,0f,23,00),B(mop_defcl0 ,41),I(1c,0f,23,00),B(mop_defcl0 ,42),I(86,0f,1f,0d),I(1c,0f,1d,1c),I(0f,1f,0a,86),I(0f,23,00,00),B(mop_defcl0 ,14),I(1c,0f,1f,0f),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(mop_defcl0 ,44),I(23,00,00,00),B(mop_defcl0 ,16),I(1c,0f,1f,11),I(24,00,00,00),B(mop_defcl0 ,2),I(3c,01,23,00),B(mop_defcl0 ,16),I(1c,0f,23,00),B(mop_defcl0 ,45),I(1f,13,86,24),B(mop_key ,2),I(3c,03,1f,14),I(24,00,00,00),B(mop_defcl0 ,6),I(3c,01,1c,1c),I(24,00,00,00),B(boot ,7),I(3c,02,1b,86),I(0f,23,00,00),B(mop_defcl0 ,14),I(1c,0f,1f,17),I(23,00,00,00),B(mop_defcl0 ,50),I(24,00,00,00),B(mop_key ,3),I(3c,02,1c,1c),I(0f,23,00,00),B(mop_defcl0 ,51),I(1c,0f,1f,08),I(1c,0f,23,00),B(mop_defcl0 ,52),I(1c,0f,1f,0c),I(1c,0f,23,00),B(mop_defcl0 ,53),I(1c,0f,1f,11),I(1c,0f,23,00),B(mop_defcl0 ,15),I(1c,0f,23,00),B(mop_defcl0 ,16),I(1c,0f,1b,86),I(0f,1f,26,1c),I(0f,23,00,00),B(mop_defcl0 ,54),I(1c,0f,1f,28),I(1f,26,24,00),B(mop_defcl0 ,12),I(3c,02,1f,29),I(1f,26,24,00),B(mop_defcl0 ,8),I(3c,02,1f,2a),I(1f,27,24,00),B(mop_defcl0 ,9),I(3c,02,1f,2b),I(1f,28,24,00),B(mop_defcl0 ,13),I(3c,02,1f,2c),I(86,0f,1c,1c),I(24,00,00,00),B(boot ,7),I(3c,02,1f,03),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,05),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,07),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,09),I(1c,0f,1f,23),I(1c,0f,1f,29),I(1c,0f,23,00),B(mop_defcl0 ,55),I(1c,0f,45,35)};

  /* Byte-vector with size: 30 is_init: 0 index: 57 binding: anonymous */
  static const void *G001144[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,68),I(1d,10,1b,7a),I(12,1b,34,00),I(00,00,00,1a),I(1f,04,11,1b),I(1f,05,47,00),I(00,3d,02,06),I(22,01,32,00),I(00,00,00,45),I(1c,11,23,00),B(mop_defcl0 ,20),I(1c,86,24,00),B(mop_key ,2),I(3c,03,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,07,11,1b),I(1f,08,47,00),I(00,3d,02,09),I(22,01,32,00),I(00,00,00,13),I(1f,07,11,1d),I(1f,08,0f,47),I(00,00,3d,02),I(08,22,03,22),I(02,45,03,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 59 binding: find-slot-keywords */
  static const void *G001146[] = {I(aa,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_defcl0 ,58),I(23,00,00,00),B(mop_defcl0 ,57),I(3b,02,48,00),I(00,1c,86,47),I(00,00,3d,02),I(02,45,02,00)};

  /* Byte-vector with size: 82 is_init: 0 index: 62 binding: do-writer */
  static const void *G001149[] = {I(43,fb,12,1b),I(34,00,00,00),I(00,00,00,a4),I(1f,04,86,0f),I(23,00,00,00),B(mop_defcl0 ,41),I(1c,0f,23,00),B(mop_defcl0 ,60),I(86,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,23,00),B(mop_defcl0 ,60),I(86,0f,23,00),B(mop_defcl0 ,29),I(1c,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1f,0a),I(86,0f,23,00),B(mop_defcl0 ,31),I(1c,0f,23,00),B(mop_defcl0 ,32),I(1c,0f,23,00),B(mop_defcl0 ,61),I(86,0f,1b,86),I(0f,1d,1c,0f),I(1f,06,1c,0f),I(23,00,00,00),B(mop_defcl0 ,34),I(1c,0f,23,00),B(mop_defcl0 ,60),I(86,0f,1f,11),I(1c,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1f,03),I(1c,0f,1b,86),I(0f,1f,10,1c),I(0f,1f,13,1c),I(0f,23,00,00),B(mop_defcl0 ,35),I(1c,0f,86,0f),I(22,16,32,00),I(00,00,00,a1),I(23,00,00,00),B(mop_defcl0 ,60),I(86,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,23,00),B(mop_defcl0 ,60),I(86,0f,23,00),B(mop_defcl0 ,29),I(1c,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1f,08),I(86,0f,23,00),B(mop_defcl0 ,31),I(1c,0f,23,00),B(mop_defcl0 ,32),I(1c,0f,23,00),B(mop_defcl0 ,61),I(86,0f,1b,86),I(0f,1d,1c,0f),I(1f,06,1c,0f),I(23,00,00,00),B(mop_defcl0 ,34),I(1c,0f,23,00),B(mop_defcl0 ,60),I(86,0f,1f,0f),I(1c,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1f,03),I(1c,0f,1b,86),I(0f,1f,10,1c),I(0f,1f,17,1c),I(0f,23,00,00),B(mop_defcl0 ,35),I(1c,0f,1f,19),I(86,0f,23,00),B(mop_defcl0 ,36),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,22,18,45),I(05,00,00,00)};

  /* Byte-vector with size: 53 is_init: 0 index: 65 binding: do-predicates */
  static const void *G001153[] = {I(ab,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,c2),I(1c,10,23,00),B(mop_defcl0 ,46),I(50,1b,34,00),I(00,00,00,9e),I(1d,73,23,00),B(mop_defcl0 ,43),I(86,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1b,86),I(0f,23,00,00),B(mop_defcl0 ,43),I(86,0f,23,00),B(mop_defcl0 ,28),I(1c,0f,1b,86),I(0f,86,86,0f),I(1c,1c,0f,1f),I(0c,86,0f,23),B(mop_defcl0 ,28),I(1c,0f,1b,86),I(0f,23,00,00),B(mop_defcl0 ,28),I(86,0f,1c,1c),I(0f,1b,86,0f),I(23,00,00,00),B(mop_defcl0 ,63),I(1c,0f,1f,07),I(1c,0f,23,00),B(mop_defcl0 ,63),I(1c,0f,1f,0e),I(1c,0f,1f,12),I(1c,0f,23,00),B(mop_defcl0 ,64),I(1c,0f,1b,86),I(0f,1f,18,75),I(1f,1a,1c,24),B(mop_defcl0 ,8),I(3c,02,1d,1c),I(24,00,00,00),B(boot ,7),I(3d,02,1c,22),I(18,32,00,00),I(00,00,00,18),I(1d,75,1f,04),I(1c,24,00,00),B(mop_defcl0 ,8),I(3d,02,05,22),I(01,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 66 binding: anonymous */
  static const void *G001157[] = {I(43,03,1d,12),I(1b,34,00,00),I(00,00,00,0f),I(1c,32,00,00),I(00,00,00,36),I(1f,03,11,1f),I(03,11,1f,05),I(10,1f,05,10),I(1c,1c,24,00),B(boot1 ,25),I(3c,02,1f,06),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,05),I(1f,05,1d,47),I(00,00,3d,03),I(0a,22,06,45),I(04,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 67 binding: anonymous */
  static const void *G001159[] = {I(aa,24,00,00),B(symbol ,6),I(3d,00,01,00)};

  /* Byte-vector with size: 66 is_init: 0 index: 71 binding: do-constructors */
  static const void *G001161[] = {I(ab,46,08,1b),I(12,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,f6),I(1c,10,23,00),B(mop_defcl0 ,48),I(50,1b,34,00),I(00,00,00,d2),I(1d,73,1b,7a),I(12,1b,34,00),I(00,00,00,46),I(23,00,00,00),B(mop_defcl0 ,68),I(86,0f,1f,06),I(1c,0f,23,00),B(mop_defcl0 ,69),I(1c,0f,23,00),B(mop_defcl0 ,70),I(1c,0f,1b,86),I(0f,23,00,00),B(mop_defcl0 ,68),I(1c,0f,1f,07),I(1c,0f,23,00),B(mop_defcl0 ,35),I(1c,0f,22,07),I(32,00,00,00),I(00,00,00,70),I(1c,11,23,00),B(mop_defcl0 ,58),I(23,00,00,00),B(mop_defcl0 ,67),I(3b,01,1c,24),B(collect ,2),I(3c,02,1f,03),I(10,86,1b,48),I(00,00,23,00),B(mop_defcl0 ,58),I(23,00,00,00),B(mop_defcl0 ,66),I(3b,03,48,00),I(00,47,00,00),I(1f,06,11,1b),I(1f,05,86,47),I(00,00,3c,03),I(1f,0c,1c,0f),I(23,00,00,00),B(mop_defcl0 ,69),I(1c,0f,1b,86),I(0f,1f,08,1c),I(0f,1f,08,1c),I(0f,23,00,00),B(mop_defcl0 ,35),I(1c,0f,22,0c),I(1f,05,75,1f),I(07,1c,24,00),B(mop_defcl0 ,9),I(3c,02,1d,1c),I(0f,22,05,32),I(00,00,00,16),I(1d,75,1f,04),I(1c,24,00,00),B(mop_defcl0 ,9),I(3d,02,05,22),I(01,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 72 binding: strip-<> */
  static const void *G001166[] = {I(aa,1b,82,02),I(1b,82,0b,27),I(3c,50,1b,34),I(00,00,00,25),I(1c,06,1b,2c),I(1f,03,83,1d),I(24,00,00,00),B(string ,6),I(3c,03,41,00),B(boot1 ,54),I(22,03,32,00),I(00,00,00,07),I(1d,45,03,00)};

  eul_allocate_static_cons(cons_1170, NULL, NULL);
  eul_allocate_static_cons(cons_1175, NULL, NULL);
  eul_allocate_static_cons(cons_1174, NULL, eul_as_static(cons_1175));
  eul_allocate_static_cons(cons_1173, NULL, eul_as_static(cons_1174));
  eul_allocate_static_cons(cons_1172, NULL, eul_as_static(cons_1173));
  eul_allocate_static_cons(cons_1171, NULL, eul_as_static(cons_1172));
  /* Byte-vector with size: 92 is_init: 0 index: 75 binding: defclass */
  static const void *G001168[] = {I(43,fc,1f,03),I(24,00,00,00),B(mop_defcl0 ,10),I(3c,01,23,00),B(mop_defcl0 ,47),I(1d,23,00,00),B(mop_defcl0 ,42),I(24,00,00,00),B(mop_key ,2),I(3c,03,1c,86),I(0f,23,00,00),B(mop_defcl0 ,14),I(1c,0f,1f,06),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(mop_defcl0 ,73),I(23,00,00,00),B(mop_defcl0 ,16),I(1c,0f,1f,08),I(24,00,00,00),B(mop_defcl0 ,2),I(3c,01,23,00),B(mop_defcl0 ,16),I(1c,0f,23,00),B(mop_defcl0 ,45),I(1f,0a,86,24),B(mop_key ,2),I(3c,03,1f,0b),I(24,00,00,00),B(mop_defcl0 ,6),I(3c,01,1c,1c),I(24,00,00,00),B(boot ,7),I(3c,02,1b,86),I(0f,23,00,00),B(mop_defcl0 ,14),I(1c,0f,1f,0e),I(23,00,00,00),B(mop_defcl0 ,74),I(24,00,00,00),B(mop_key ,3),I(3c,02,1c,1c),I(0f,23,00,00),B(mop_defcl0 ,51),I(1c,0f,1f,08),I(1c,0f,23,00),B(mop_defcl0 ,52),I(1c,0f,1f,0c),I(1c,0f,23,00),B(mop_defcl0 ,53),I(1c,0f,1f,11),I(1c,0f,23,00),B(mop_defcl0 ,15),I(1c,0f,1f,15),I(1c,0f,23,00),B(mop_defcl0 ,69),I(1c,0f,1b,86),I(0f,1f,1d,1c),I(0f,23,00,00),B(mop_defcl0 ,39),I(1c,0f,1f,1f),I(1f,1e,24,00),B(mop_defcl0 ,12),I(3c,02,1f,20),I(1f,1e,24,00),B(mop_defcl0 ,8),I(3c,02,1f,21),I(1f,1f,24,00),B(mop_defcl0 ,9),I(3c,02,1f,22),I(1f,20,24,00),B(mop_defcl0 ,13),I(3c,02,1f,23),I(86,0f,1c,1c),I(24,00,00,00),B(boot ,7),I(3c,02,1f,03),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,05),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,07),I(1c,24,00,00),B(boot ,7),I(3c,02,1f,09),I(1c,0f,23,00),B(mop_defcl0 ,55),I(1c,0f,45,2a)};

  /* Byte-vector with size: 28 is_init: 0 index: 76 binding: anonymous */
  static const void *G001176[] = {I(43,03,1d,12),I(1b,34,00,00),I(00,00,00,0f),I(1d,32,00,00),I(00,00,00,5e),I(1f,03,10,1b),I(7a,12,1b,34),I(00,00,00,1d),I(1f,05,11,1f),I(04,2c,1c,1f),I(07,1d,47,00),I(01,3d,03,08),I(22,02,32,00),I(00,00,00,37),I(1f,05,11,1d),I(10,1f,03,11),I(47,00,00,1d),I(1d,1f,09,24),B(mop_defcl0 ,3),I(3c,04,1b,1f),I(09,24,00,00),B(boot ,7),I(3c,02,1f,08),I(2c,1f,05,1d),I(1d,47,00,01),I(3d,03,0c,22),I(06,22,02,45),I(04,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 77 binding: do-accessors */
  static const void *G001178[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(mop_defcl0 ,58),I(23,00,00,00),B(mop_defcl0 ,76),I(3b,03,48,00),I(01,1c,24,00),B(boot ,18),I(3c,01,1b,2c),I(1f,03,86,1d),I(47,00,01,3d),I(03,05,45,05)};

  /* Byte-vector with size: 28 is_init: 0 index: 82 binding: do-printfn */
  static const void *G001180[] = {I(ab,23,00,00),B(mop_defcl0 ,49),I(1c,86,24,00),B(mop_key ,2),I(3c,03,1b,12),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,51),I(1f,03,86,0f),I(23,00,00,00),B(mop_defcl0 ,78),I(1c,0f,23,00),B(mop_defcl0 ,79),I(86,0f,1c,1c),I(0f,23,00,00),B(mop_defcl0 ,79),I(86,0f,23,00),B(mop_defcl0 ,78),I(1c,0f,1f,07),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,23,00,00),B(mop_defcl0 ,80),I(1c,0f,23,00),B(mop_defcl0 ,81),I(1c,0f,86,0f),I(22,0a,45,04)};

  /* Byte-vector with size: 80 is_init: 1 index: 0 binding: initialize-mop-defcl0 */
  static const void *G001186[] = {I(87,25,00,00),B(mop_defcl0 ,1),I(24,00,00,00),B(level1 ,1),I(3e,0b,24,00),B(level1 ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_defcl0 ,83),I(23,00,00,00),B(mop_defcl0 ,82),I(3b,02,25,00),B(mop_defcl0 ,13),I(23,00,00,00),B(mop_defcl0 ,84),I(23,00,00,00),B(mop_defcl0 ,77),I(3b,02,25,00),B(mop_defcl0 ,12),I(23,00,00,00),B(mop_defcl0 ,85),I(23,00,00,00),B(mop_defcl0 ,75),I(3b,fc,25,00),B(mop_defcl0 ,11),I(23,00,00,00),B(mop_defcl0 ,86),I(23,00,00,00),B(mop_defcl0 ,72),I(3b,01,25,00),B(mop_defcl0 ,10),I(23,00,00,00),B(mop_defcl0 ,87),I(23,00,00,00),B(mop_defcl0 ,71),I(3b,02,25,00),B(mop_defcl0 ,9),I(23,00,00,00),B(mop_defcl0 ,88),I(23,00,00,00),B(mop_defcl0 ,65),I(3b,02,25,00),B(mop_defcl0 ,8),I(23,00,00,00),B(mop_defcl0 ,89),I(23,00,00,00),B(mop_defcl0 ,62),I(3b,fb,25,00),B(mop_defcl0 ,7),I(23,00,00,00),B(mop_defcl0 ,90),I(23,00,00,00),B(mop_defcl0 ,59),I(3b,01,25,00),B(mop_defcl0 ,6),I(23,00,00,00),B(mop_defcl0 ,91),I(23,00,00,00),B(mop_defcl0 ,56),I(3b,fb,25,00),B(mop_defcl0 ,5),I(23,00,00,00),B(mop_defcl0 ,92),I(23,00,00,00),B(mop_defcl0 ,37),I(3b,04,25,00),B(mop_defcl0 ,4),I(23,00,00,00),B(mop_defcl0 ,93),I(23,00,00,00),B(mop_defcl0 ,27),I(3b,04,25,00),B(mop_defcl0 ,3),I(23,00,00,00),B(mop_defcl0 ,94),I(23,00,00,00),B(mop_defcl0 ,26),I(3b,01,25,00),B(mop_defcl0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_1091,"quote");
  eul_intern_keyword(key_1092,"name");
  eul_intern_symbol(sym_1093,"list");
  eul_intern_symbol(sym_1095,"absent");
  object_class(cons_1094) = eul_static_cons_class;
  eul_car(cons_1094) = sym_1095;
  eul_cdr(cons_1094) = eul_nil;
  eul_intern_keyword(key_1096,"default");
  eul_intern_keyword(key_1097,"keyword");
  eul_intern_symbol(sym_1098,"lambda");
  eul_intern_keyword(key_1101,"accessor");
  eul_intern_keyword(key_1104,"reader");
  eul_intern_keyword(key_1106,"writer");
  object_class(cons_1105) = eul_static_cons_class;
  eul_car(cons_1105) = key_1106;
  eul_cdr(cons_1105) = eul_nil;
  object_class(cons_1103) = eul_static_cons_class;
  eul_car(cons_1103) = key_1104;
  object_class(cons_1102) = eul_static_cons_class;
  eul_car(cons_1102) = key_1097;
  object_class(cons_1100) = eul_static_cons_class;
  eul_car(cons_1100) = key_1101;
  object_class(cons_1099) = eul_static_cons_class;
  eul_car(cons_1099) = key_1096;
  eul_allocate_bytevector( G001090,G001089);
  eul_allocate_bytevector( G001108,G001107);
  eul_intern_symbol(sym_1111,"x");
  eul_intern_symbol(sym_1112,"i");
  eul_intern_symbol(sym_1113,"o");
  eul_intern_symbol(sym_1114,"?");
  eul_intern_symbol(sym_1115,"binding-ref");
  eul_intern_symbol(sym_1116,"primitive-relative-ref");
  eul_intern_symbol(sym_1117,"opencoded-lambda");
  eul_intern_symbol(sym_1118,"defun");
  eul_intern_symbol(sym_1119,"declare-inline");
  eul_allocate_bytevector( G001110,G001109);
  eul_intern_symbol(sym_1122,"get-global-register");
  eul_intern_symbol(sym_1123,"defconstant");
  eul_intern_symbol(sym_1124,"primitive-class-of");
  eul_intern_symbol(sym_1125,"setter");
  eul_intern_symbol(sym_1126,"<simple-class>");
  eul_intern_symbol(sym_1128,"<object>");
  object_class(cons_1127) = eul_static_cons_class;
  eul_car(cons_1127) = sym_1128;
  eul_cdr(cons_1127) = eul_nil;
  eul_intern_keyword(key_1129,"keywords");
  eul_intern_keyword(key_1132,"predicate");
  eul_intern_keyword(key_1134,"class");
  eul_intern_keyword(key_1136,"constructor");
  eul_intern_keyword(key_1138,"print-function");
  object_class(cons_1137) = eul_static_cons_class;
  eul_car(cons_1137) = key_1138;
  eul_cdr(cons_1137) = eul_nil;
  object_class(cons_1135) = eul_static_cons_class;
  eul_car(cons_1135) = key_1136;
  object_class(cons_1133) = eul_static_cons_class;
  eul_car(cons_1133) = key_1134;
  object_class(cons_1131) = eul_static_cons_class;
  eul_car(cons_1131) = key_1132;
  object_class(cons_1130) = eul_static_cons_class;
  eul_car(cons_1130) = key_1129;
  eul_intern_keyword(key_1139,"direct-keywords");
  eul_intern_keyword(key_1140,"direct-slots");
  eul_intern_keyword(key_1141,"direct-superclasses");
  eul_intern_symbol(sym_1142,"initialize");
  eul_intern_symbol(sym_1143,"progn");
  eul_allocate_bytevector( G001121,G001120);
  eul_allocate_bytevector( G001145,G001144);
  eul_intern_symbol(sym_1148,"anonymous");
  eul_allocate_bytevector( G001147,G001146);
  eul_intern_symbol(sym_1151,"v");
  eul_intern_symbol(sym_1152,"set-primitive-relative-ref");
  eul_allocate_bytevector( G001150,G001149);
  eul_intern_keyword(key_1155,"method");
  eul_intern_symbol(sym_1156,"defgeneric");
  eul_allocate_bytevector( G001154,G001153);
  eul_allocate_bytevector( G001158,G001157);
  eul_allocate_bytevector( G001160,G001159);
  eul_intern_symbol(sym_1163,"inits");
  eul_intern_symbol(sym_1164,"make");
  eul_intern_symbol(sym_1165,"apply");
  eul_allocate_bytevector( G001162,G001161);
  eul_allocate_bytevector( G001167,G001166);
  object_class(cons_1170) = eul_static_cons_class;
  eul_car(cons_1170) = sym_1128;
  eul_cdr(cons_1170) = eul_nil;
  object_class(cons_1175) = eul_static_cons_class;
  eul_car(cons_1175) = key_1138;
  eul_cdr(cons_1175) = eul_nil;
  object_class(cons_1174) = eul_static_cons_class;
  eul_car(cons_1174) = key_1136;
  object_class(cons_1173) = eul_static_cons_class;
  eul_car(cons_1173) = key_1134;
  object_class(cons_1172) = eul_static_cons_class;
  eul_car(cons_1172) = key_1132;
  object_class(cons_1171) = eul_static_cons_class;
  eul_car(cons_1171) = key_1129;
  eul_allocate_bytevector( G001169,G001168);
  eul_allocate_bytevector( G001177,G001176);
  eul_allocate_bytevector( G001179,G001178);
  eul_intern_symbol(sym_1182,"obj");
  eul_intern_symbol(sym_1183,"str");
  eul_intern_symbol(sym_1184,"generic-prin");
  eul_intern_symbol(sym_1185,"defmethod");
  eul_allocate_bytevector( G001181,G001180);
  eul_intern_symbol(sym_1188,"do-printfn");
  eul_intern_symbol(sym_1189,"do-accessors");
  eul_intern_symbol(sym_1190,"defclass");
  eul_intern_symbol(sym_1191,"strip-<>");
  eul_intern_symbol(sym_1192,"do-constructors");
  eul_intern_symbol(sym_1193,"do-predicates");
  eul_intern_symbol(sym_1194,"do-writer");
  eul_intern_symbol(sym_1195,"find-slot-keywords");
  eul_intern_symbol(sym_1196,"defprimclass");
  eul_intern_symbol(sym_1197,"do-reader");
  eul_intern_symbol(sym_1198,"do-accessor");
  eul_intern_symbol(sym_1199,"do-direct-slotds");
  eul_allocate_bytevector( G001187,G001186);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 14; i++)
      mop_defcl0_bindings[i] = eul_nil;
  }

  mop_defcl0_bindings[ 14] = sym_1091;
  mop_defcl0_bindings[ 15] = key_1092;
  mop_defcl0_bindings[ 16] = sym_1093;
  mop_defcl0_bindings[ 17] = sym_1095;
  mop_defcl0_bindings[ 18] = cons_1094;
  mop_defcl0_bindings[ 19] = key_1096;
  mop_defcl0_bindings[ 20] = key_1097;
  mop_defcl0_bindings[ 21] = sym_1098;
  mop_defcl0_bindings[ 22] = key_1101;
  mop_defcl0_bindings[ 23] = key_1104;
  mop_defcl0_bindings[ 24] = key_1106;
  mop_defcl0_bindings[ 25] = cons_1099;
  mop_defcl0_bindings[ 26] = G001090;
  mop_defcl0_bindings[ 27] = G001108;
  mop_defcl0_bindings[ 28] = sym_1111;
  mop_defcl0_bindings[ 29] = sym_1112;
  mop_defcl0_bindings[ 30] = sym_1113;
  mop_defcl0_bindings[ 31] = sym_1114;
  mop_defcl0_bindings[ 32] = sym_1115;
  mop_defcl0_bindings[ 33] = sym_1116;
  mop_defcl0_bindings[ 34] = sym_1117;
  mop_defcl0_bindings[ 35] = sym_1118;
  mop_defcl0_bindings[ 36] = sym_1119;
  mop_defcl0_bindings[ 37] = G001110;
  mop_defcl0_bindings[ 38] = sym_1122;
  mop_defcl0_bindings[ 39] = sym_1123;
  mop_defcl0_bindings[ 40] = sym_1124;
  mop_defcl0_bindings[ 41] = sym_1125;
  mop_defcl0_bindings[ 42] = sym_1126;
  mop_defcl0_bindings[ 43] = sym_1128;
  mop_defcl0_bindings[ 44] = cons_1127;
  mop_defcl0_bindings[ 45] = key_1129;
  mop_defcl0_bindings[ 46] = key_1132;
  mop_defcl0_bindings[ 47] = key_1134;
  mop_defcl0_bindings[ 48] = key_1136;
  mop_defcl0_bindings[ 49] = key_1138;
  mop_defcl0_bindings[ 50] = cons_1130;
  mop_defcl0_bindings[ 51] = key_1139;
  mop_defcl0_bindings[ 52] = key_1140;
  mop_defcl0_bindings[ 53] = key_1141;
  mop_defcl0_bindings[ 54] = sym_1142;
  mop_defcl0_bindings[ 55] = sym_1143;
  mop_defcl0_bindings[ 56] = G001121;
  mop_defcl0_bindings[ 57] = G001145;
  mop_defcl0_bindings[ 58] = sym_1148;
  mop_defcl0_bindings[ 59] = G001147;
  mop_defcl0_bindings[ 60] = sym_1151;
  mop_defcl0_bindings[ 61] = sym_1152;
  mop_defcl0_bindings[ 62] = G001150;
  mop_defcl0_bindings[ 63] = key_1155;
  mop_defcl0_bindings[ 64] = sym_1156;
  mop_defcl0_bindings[ 65] = G001154;
  mop_defcl0_bindings[ 66] = G001158;
  mop_defcl0_bindings[ 67] = G001160;
  mop_defcl0_bindings[ 68] = sym_1163;
  mop_defcl0_bindings[ 69] = sym_1164;
  mop_defcl0_bindings[ 70] = sym_1165;
  mop_defcl0_bindings[ 71] = G001162;
  mop_defcl0_bindings[ 72] = G001167;
  mop_defcl0_bindings[ 73] = cons_1170;
  mop_defcl0_bindings[ 74] = cons_1171;
  mop_defcl0_bindings[ 75] = G001169;
  mop_defcl0_bindings[ 76] = G001177;
  mop_defcl0_bindings[ 77] = G001179;
  mop_defcl0_bindings[ 78] = sym_1182;
  mop_defcl0_bindings[ 79] = sym_1183;
  mop_defcl0_bindings[ 80] = sym_1184;
  mop_defcl0_bindings[ 81] = sym_1185;
  mop_defcl0_bindings[ 82] = G001181;
  mop_defcl0_bindings[ 1] = eul_nil;
  mop_defcl0_bindings[ 83] = sym_1188;
  mop_defcl0_bindings[ 84] = sym_1189;
  mop_defcl0_bindings[ 85] = sym_1190;
  mop_defcl0_bindings[ 86] = sym_1191;
  mop_defcl0_bindings[ 87] = sym_1192;
  mop_defcl0_bindings[ 88] = sym_1193;
  mop_defcl0_bindings[ 89] = sym_1194;
  mop_defcl0_bindings[ 90] = sym_1195;
  mop_defcl0_bindings[ 91] = sym_1196;
  mop_defcl0_bindings[ 92] = sym_1197;
  mop_defcl0_bindings[ 93] = sym_1198;
  mop_defcl0_bindings[ 94] = sym_1199;
  eul_allocate_lambda( mop_defcl0_bindings[0], "initialize-mop-defcl0", 0, G001187);

  }
}


/* eof */
