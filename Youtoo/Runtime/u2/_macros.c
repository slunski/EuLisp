/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module _macros
 **  Copyright: See file _macros.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level_1();
extern void initialize_module__telos0();
extern void initialize_module__stream0();
extern LispRef _stream0_bindings[];
extern LispRef _telos0_bindings[];
extern LispRef level_1_bindings[];
extern LispRef collect_bindings[];
extern LispRef format_bindings[];
extern LispRef boot_bindings[];
extern LispRef symbol_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 108 */
LispRef _macros_bindings[108];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module _macros */
void initialize_module__macros()
{
  if (is_initialized) return;
  initialize_module_level_1();
  initialize_module__telos0();
  initialize_module__stream0();
  eul_fast_table_set(eul_modules,"_macros",(LispRef) _macros_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1158, sym_1157, sym_1156, sym_1155, sym_1154, sym_1153, sym_1152, sym_1151, sym_1150, sym_1149, sym_1148, sym_1147, sym_1146, sym_1145, G001144, sym_1142, G001141, G001139, G001137, sym_1135, sym_1134, G001133, sym_1131, sym_1130, G001129, G001127, sym_1125, G001124, sym_1122, sym_1121, sym_1117, sym_1116, sym_1115, sym_1114, sym_1113, sym_1112, sym_1111, sym_1110, sym_1109, sym_1108, sym_1107, sym_1106, G001103, sym_1101, G001100, G001098, sym_1096, sym_1095, sym_1094, G001093, G001091, sym_1089, sym_1088, sym_1087, sym_1086, sym_1085, G001084, sym_1082, G001081, sym_1079, G001078, sym_1076, sym_1075, sym_1074, G001073, sym_1071, sym_1070, sym_1069, G001068, sym_1066, sym_1065, sym_1064, G001063, sym_1061, sym_1060, sym_1059, G001057, sym_1055, sym_1054, sym_1053, sym_1052, sym_1051, G001050;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 73 is_init: 0 index: 25 binding: anonymous */
  static const void *G001049[] = {I(aa,1b,10,1c),I(11,1d,47,00),I(01,50,1b,34),I(00,00,00,15),I(1d,23,00,00),B(_macros ,20),I(50,32,00,00),I(00,00,00,08),I(86,1b,34,00),I(00,00,00,16),I(23,00,00,00),B(_macros ,20),I(1f,03,0f,32),I(00,00,00,ec),I(1f,03,7b,24),B(_macros ,9),I(3c,01,1b,34),I(00,00,00,31),I(1f,04,86,0f),I(23,00,00,00),B(_macros ,21),I(1c,0f,1b,86),I(0f,47,00,00),I(1c,0f,23,00),B(_macros ,22),I(1c,0f,1b,1f),I(09,0f,22,05),I(32,00,00,00),I(00,00,00,b1),I(1f,04,12,1b),I(34,00,00,00),I(00,00,00,24),I(47,00,00,86),I(0f,23,00,00),B(_macros ,23),I(1c,0f,1b,1f),I(07,0f,22,02),I(32,00,00,00),I(00,00,00,87),I(1f,05,11,1b),I(34,00,00,00),I(00,00,00,3c),I(1f,06,86,0f),I(23,00,00,00),B(_macros ,21),I(1c,0f,23,00),B(_macros ,22),I(86,0f,1c,1c),I(0f,47,00,00),I(1c,0f,23,00),B(_macros ,24),I(1c,0f,1b,1f),I(0c,0f,22,06),I(32,00,00,00),I(00,00,00,45),I(24,00,00,00),B(boot1 ,14),I(34,00,00,00),I(00,00,00,34),I(1f,06,10,1b),I(86,0f,23,00),B(_macros ,21),I(1c,0f,1b,86),I(0f,47,00,00),I(1c,0f,23,00),B(_macros ,22),I(1c,0f,1b,1f),I(0c,0f,22,06),I(32,00,00,00),I(00,00,00,09),I(86,22,01,22),I(01,22,01,45),I(05,00,00,00)};

  eul_allocate_static_string(str_1058, "*** WARNING: missing else branch in (case ... ~a)", 49);
  /* Byte-vector with size: 39 is_init: 0 index: 30 binding: case */
  static const void *G001056[] = {I(43,fe,46,02),I(24,00,00,00),B(symbol ,6),I(3c,00,1c,24),B(boot ,19),I(3c,01,1b,2c),I(1f,03,1c,24),B(boot ,26),I(3c,02,1f,03),I(1c,1c,48,00),I(00,1b,48,00),I(01,47,00,01),I(10,1b,23,00),B(_macros ,20),I(50,12,1b,34),I(00,00,00,1d),I(23,00,00,00),B(_macros ,26),I(47,00,01,24),B(format ,5),I(3c,02,32,00),I(00,00,00,07),I(86,2a,1f,09),I(86,0f,47,00),I(00,1c,0f,1b),I(86,0f,23,00),B(_macros ,27),I(23,00,00,00),B(_macros ,25),I(3b,01,1f,0c),I(24,00,00,00),B(collect ,2),I(3c,02,23,00),B(_macros ,28),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_macros ,29),I(1c,0f,45,11)};

  /* Byte-vector with size: 23 is_init: 0 index: 34 binding: with-handler */
  static const void *G001062[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1d,86),I(0f,23,00,00),B(_macros ,31),I(1c,0f,23,00),B(_macros ,32),I(1f,04,0f,1b),I(86,0f,1f,04),I(1c,0f,1b,86),I(0f,83,86,0f),I(23,00,00,00),B(_macros ,33),I(1c,0f,1f,08),I(86,0f,1c,1c),I(0f,1f,04,1c),I(0f,23,00,00),B(_macros ,29),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,23,00,00),B(_macros ,32),I(1c,0f,45,11)};

  /* Byte-vector with size: 18 is_init: 0 index: 38 binding: let/cc */
  static const void *G001067[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1d,86),I(0f,1b,1f,03),I(0f,23,00,00),B(_macros ,35),I(1c,0f,23,00),B(_macros ,36),I(1c,0f,1b,86),I(0f,23,00,00),B(_macros ,37),I(1c,0f,1b,86),I(0f,1f,07,1c),I(0f,1b,86,0f),I(1f,09,86,0f),I(1c,1c,0f,23),B(_macros ,29),I(1c,0f,45,0e)};

  /* Byte-vector with size: 27 is_init: 0 index: 42 binding: last */
  static const void *G001072[] = {I(43,fe,1b,12),I(1b,34,00,00),I(00,00,00,3b),I(1d,86,0f,23),B(_macros ,39),I(1c,0f,83,86),I(0f,1c,1c,0f),I(23,00,00,00),B(_macros ,40),I(1c,0f,1b,86),I(0f,1f,08,1c),I(0f,23,00,00),B(_macros ,41),I(1c,0f,22,07),I(32,00,00,00),I(00,00,00,30),I(1d,86,0f,23),B(_macros ,39),I(1c,0f,1b,1f),I(04,0f,23,00),B(_macros ,40),I(1c,0f,1b,86),I(0f,1f,07,1c),I(0f,23,00,00),B(_macros ,41),I(1c,0f,22,06),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 44 binding: block */
  static const void *G001077[] = {I(a8,23,00,00),B(_macros ,43),I(1c,0f,45,01)};

  /* Byte-vector with size: 8 is_init: 0 index: 46 binding: defglobal */
  static const void *G001080[] = {I(ab,1c,86,0f),I(23,00,00,00),B(_macros ,21),I(1c,0f,1d,86),I(0f,1c,1c,0f),I(23,00,00,00),B(_macros ,45),I(1c,0f,45,06)};

  /* Byte-vector with size: 47 is_init: 0 index: 52 binding: unwind-protect */
  static const void *G001083[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,23,00),B(_macros ,47),I(86,0f,23,00),B(_macros ,21),I(1c,0f,83,86),I(0f,23,00,00),B(_macros ,48),I(1c,0f,1b,86),I(0f,1f,06,1c),I(24,00,00,00),B(boot ,8),I(3c,02,86,1c),I(0f,23,00,00),B(_macros ,49),I(1c,0f,23,00),B(_macros ,47),I(86,0f,23,00),B(_macros ,50),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_macros ,51),I(1c,0f,1b,86),I(0f,1f,0c,1c),I(0f,23,00,00),B(_macros ,45),I(1c,0f,1f,12),I(86,0f,1f,11),I(1c,0f,1b,86),I(0f,83,86,0f),I(23,00,00,00),B(_macros ,48),I(1c,0f,1f,15),I(86,0f,1c,1c),I(0f,1f,18,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1c,0f,23,00),B(_macros ,29),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,23,00,00),B(_macros ,32),I(1c,0f,45,1f)};

  /* Byte-vector with size: 3 is_init: 0 index: 53 binding: not */
  static const void *G001090[] = {I(aa,86,0f,23),B(_macros ,23),I(1c,0f,45,01)};

  /* Byte-vector with size: 23 is_init: 0 index: 57 binding: while */
  static const void *G001092[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1b,86),I(0f,1b,86,0f),I(1f,03,1c,24),B(boot ,8),I(3c,02,1f,05),I(1c,0f,23,00),B(_macros ,54),I(1c,0f,1b,86),I(0f,86,1c,0f),I(1f,07,1c,0f),I(1b,86,0f,1f),I(09,86,0f,1b),I(86,0f,1d,1c),I(0f,23,00,00),B(_macros ,55),I(1c,0f,1b,86),I(0f,23,00,00),B(_macros ,56),I(1c,0f,23,00),B(_macros ,43),I(1c,0f,45,12)};

  /* Byte-vector with size: 9 is_init: 0 index: 58 binding: anonymous */
  static const void *G001097[] = {I(aa,1b,10,1b),I(86,0f,23,00),B(_macros ,21),I(1c,0f,1f,03),I(11,1b,10,1b),I(86,0f,1f,03),I(1c,0f,23,00),B(_macros ,45),I(1c,0f,45,08)};

  /* Byte-vector with size: 27 is_init: 0 index: 60 binding: dynamic-let */
  static const void *G001099[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,2a,23),B(_macros ,27),I(23,00,00,00),B(_macros ,58),I(3b,01,1d,24),B(collect ,2),I(3c,02,23,00),B(_macros ,32),I(1d,0f,1f,03),I(24,00,00,00),B(collect ,9),I(3c,01,1b,86),I(0f,23,00,00),B(_macros ,48),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,23,00,00),B(_macros ,59),I(1c,0f,1b,86),I(0f,1f,08,1c),I(24,00,00,00),B(boot ,8),I(3c,02,23,00),B(_macros ,32),I(1c,0f,45,0c)};

  eul_allocate_static_string(str_1104, "time", 4);
  eul_allocate_static_string(str_1105, "time", 4);
  eul_allocate_static_string(str_1118, "\nsystem: ", 9);
  eul_allocate_static_string(str_1119, "\nuser: ", 7);
  eul_allocate_static_string(str_1120, "real: ", 6);
  /* Byte-vector with size: 84 is_init: 0 index: 80 binding: time-execution */
  static const void *G001102[] = {I(ab,23,00,00),B(_macros ,61),I(24,00,00,00),B(symbol ,6),I(3c,01,23,00),B(_macros ,62),I(24,00,00,00),B(symbol ,6),I(3c,01,23,00),B(_macros ,63),I(86,0f,1b,86),I(0f,1f,03,1c),I(0f,1f,06,86),I(0f,1f,04,1c),I(0f,1b,86,0f),I(1f,03,1c,0f),I(23,00,00,00),B(_macros ,64),I(86,0f,23,00),B(_macros ,65),I(1c,0f,23,00),B(_macros ,64),I(86,0f,23,00),B(_macros ,65),I(1c,0f,23,00),B(_macros ,66),I(1c,0f,23,00),B(_macros ,67),I(86,0f,23,00),B(_macros ,68),I(1c,0f,23,00),B(_macros ,69),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,23,00,00),B(_macros ,70),I(1c,0f,1b,86),I(0f,1f,0a,1c),I(0f,23,00,00),B(_macros ,49),I(1c,0f,23,00),B(_macros ,63),I(86,0f,1f,17),I(86,0f,1c,1c),I(0f,1f,03,1c),I(0f,23,00,00),B(_macros ,71),I(1c,0f,1b,86),I(0f,1f,1c,1c),I(0f,23,00,00),B(_macros ,72),I(1c,0f,82,86),I(0f,1f,1f,1c),I(0f,23,00,00),B(_macros ,73),I(1c,0f,83,86),I(0f,1f,22,1c),I(0f,23,00,00),B(_macros ,73),I(1c,0f,84,86),I(0f,1f,25,1c),I(0f,23,00,00),B(_macros ,73),I(1c,0f,23,00),B(_macros ,74),I(86,0f,1c,1c),I(0f,23,00,00),B(_macros ,75),I(1c,0f,1f,06),I(1c,0f,23,00),B(_macros ,76),I(1c,0f,1f,0b),I(1c,0f,23,00),B(_macros ,77),I(1c,0f,1f,2f),I(1c,0f,23,00),B(_macros ,78),I(1c,0f,1f,2f),I(86,0f,1c,1c),I(0f,1f,14,1c),I(0f,1f,2b,1c),I(0f,23,00,00),B(_macros ,79),I(1c,0f,45,37)};

  /* Byte-vector with size: 25 is_init: 0 index: 82 binding: butlast */
  static const void *G001123[] = {I(43,fe,1b,12),I(1b,34,00,00),I(00,00,00,37),I(1d,86,0f,23),B(_macros ,81),I(1c,0f,83,86),I(0f,1c,1c,0f),I(23,00,00,00),B(_macros ,41),I(1c,0f,1b,86),I(0f,23,00,00),B(_macros ,81),I(1c,0f,22,06),I(32,00,00,00),I(00,00,00,2c),I(1d,86,0f,23),B(_macros ,81),I(1c,0f,1b,1f),I(04,0f,23,00),B(_macros ,41),I(1c,0f,1b,86),I(0f,23,00,00),B(_macros ,81),I(1c,0f,22,05),I(45,03,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 83 binding: return-from */
  static const void *G001126[] = {I(43,fe,23,00),B(_macros ,32),I(1c,0f,1d,1c),I(24,00,00,00),B(boot1 ,26),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 86 binding: dynamic-setq */
  static const void *G001128[] = {I(ab,23,00,00),B(_macros ,84),I(86,0f,23,00),B(_macros ,85),I(1c,0f,1f,03),I(86,0f,23,00),B(_macros ,21),I(1c,0f,1f,04),I(86,0f,1c,1c),I(0f,1f,04,1c),I(0f,45,08,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 89 binding: defcondition */
  static const void *G001132[] = {I(43,fc,1d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(_macros ,87),I(1f,03,1f,03),I(0f,1c,1c,0f),I(1f,07,1c,0f),I(23,00,00,00),B(_macros ,88),I(1c,0f,45,09)};

  /* Byte-vector with size: 8 is_init: 0 index: 90 binding: throw */
  static const void *G001136[] = {I(43,fe,1c,86),I(0f,23,00,00),B(_macros ,50),I(1c,0f,23,00),B(_macros ,32),I(1f,03,0f,1b),I(86,0f,1d,1c),I(0f,45,06,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 91 binding: dynamic */
  static const void *G001138[] = {I(aa,86,0f,23),B(_macros ,21),I(1c,0f,1b,86),I(0f,23,00,00),B(_macros ,84),I(1c,0f,45,03)};

  /* Byte-vector with size: 13 is_init: 0 index: 93 binding: catch */
  static const void *G001140[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1b,86),I(0f,1f,03,1c),I(0f,1b,86,0f),I(1b,1f,05,0f),I(23,00,00,00),B(_macros ,92),I(1c,0f,1b,86),I(0f,1f,06,1c),I(0f,23,00,00),B(_macros ,43),I(1c,0f,45,0a)};

  /* Byte-vector with size: 126 is_init: 1 index: 0 binding: initialize-_macros */
  static const void *G001143[] = {I(87,25,00,00),B(_macros ,1),I(24,00,00,00),B(_stream0 ,1),I(3e,0b,24,00),B(_stream0 ,0),I(3c,00,21,01),I(24,00,00,00),B(_telos0 ,1),I(3e,0b,24,00),B(_telos0 ,0),I(3c,00,21,01),I(24,00,00,00),B(level_1 ,1),I(3e,0b,24,00),B(level_1 ,0),I(3c,00,21,01),I(23,00,00,00),B(_macros ,94),I(23,00,00,00),B(_macros ,93),I(3b,fe,25,00),B(_macros ,19),I(23,00,00,00),B(_macros ,50),I(23,00,00,00),B(_macros ,91),I(3b,01,25,00),B(_macros ,18),I(23,00,00,00),B(_macros ,95),I(23,00,00,00),B(_macros ,90),I(3b,fe,25,00),B(_macros ,17),I(23,00,00,00),B(_macros ,96),I(23,00,00,00),B(_macros ,89),I(3b,fc,25,00),B(_macros ,16),I(23,00,00,00),B(_macros ,97),I(23,00,00,00),B(_macros ,86),I(3b,02,25,00),B(_macros ,15),I(23,00,00,00),B(_macros ,98),I(23,00,00,00),B(_macros ,83),I(3b,fe,25,00),B(_macros ,14),I(23,00,00,00),B(_macros ,99),I(23,00,00,00),B(_macros ,82),I(3b,fe,25,00),B(_macros ,13),I(23,00,00,00),B(_macros ,100),I(23,00,00,00),B(_macros ,80),I(3b,02,25,00),B(_macros ,12),I(23,00,00,00),B(_macros ,92),I(23,00,00,00),B(_macros ,60),I(3b,fe,25,00),B(_macros ,11),I(23,00,00,00),B(_macros ,101),I(23,00,00,00),B(_macros ,57),I(3b,fe,25,00),B(_macros ,10),I(23,00,00,00),B(_macros ,102),I(23,00,00,00),B(_macros ,53),I(3b,01,25,00),B(_macros ,9),I(23,00,00,00),B(_macros ,59),I(23,00,00,00),B(_macros ,52),I(3b,fe,25,00),B(_macros ,8),I(23,00,00,00),B(_macros ,103),I(23,00,00,00),B(_macros ,46),I(3b,02,25,00),B(_macros ,7),I(23,00,00,00),B(_macros ,104),I(23,00,00,00),B(_macros ,44),I(3b,ff,25,00),B(_macros ,6),I(23,00,00,00),B(_macros ,105),I(23,00,00,00),B(_macros ,42),I(3b,fe,25,00),B(_macros ,5),I(23,00,00,00),B(_macros ,43),I(23,00,00,00),B(_macros ,38),I(3b,fe,25,00),B(_macros ,4),I(23,00,00,00),B(_macros ,106),I(23,00,00,00),B(_macros ,34),I(3b,fe,25,00),B(_macros ,3),I(23,00,00,00),B(_macros ,107),I(23,00,00,00),B(_macros ,30),I(3b,fe,25,00),B(_macros ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_1051,"else");
  eul_intern_symbol(sym_1052,"quote");
  eul_intern_symbol(sym_1053,"eql");
  eul_intern_symbol(sym_1054,"null?");
  eul_intern_symbol(sym_1055,"member");
  eul_allocate_bytevector( G001050,G001049);
  object_class(str_1058) = eul_static_string_class;
  eul_intern_symbol(sym_1059,"anonymous");
  eul_intern_symbol(sym_1060,"cond");
  eul_intern_symbol(sym_1061,"let");
  eul_allocate_bytevector( G001057,G001056);
  eul_intern_symbol(sym_1064,"push-error-handler");
  eul_intern_symbol(sym_1065,"progn");
  eul_intern_symbol(sym_1066,"pop-error-handlers");
  eul_allocate_bytevector( G001063,G001062);
  eul_intern_symbol(sym_1069,"call/ep-lambda");
  eul_intern_symbol(sym_1070,"named-lambda");
  eul_intern_symbol(sym_1071,"call/ep");
  eul_allocate_bytevector( G001068,G001067);
  eul_intern_symbol(sym_1074,"list-size");
  eul_intern_symbol(sym_1075,"-");
  eul_intern_symbol(sym_1076,"list-drop");
  eul_allocate_bytevector( G001073,G001072);
  eul_intern_symbol(sym_1079,"let/cc");
  eul_allocate_bytevector( G001078,G001077);
  eul_intern_symbol(sym_1082,"push-dynamic-variable");
  eul_allocate_bytevector( G001081,G001080);
  eul_intern_symbol(sym_1085,"*clean-ups*");
  eul_intern_symbol(sym_1086,"pop-dynamic-variables");
  eul_intern_symbol(sym_1087,"lambda");
  eul_intern_symbol(sym_1088,"dynamic");
  eul_intern_symbol(sym_1089,"cons");
  eul_allocate_bytevector( G001084,G001083);
  eul_allocate_bytevector( G001091,G001090);
  eul_intern_symbol(sym_1094,"when");
  eul_intern_symbol(sym_1095,"labels");
  eul_intern_symbol(sym_1096,"break");
  eul_allocate_bytevector( G001093,G001092);
  eul_allocate_bytevector( G001098,G001097);
  eul_intern_symbol(sym_1101,"unwind-protect");
  eul_allocate_bytevector( G001100,G001099);
  object_class(str_1104) = eul_static_string_class;
  object_class(str_1105) = eul_static_string_class;
  eul_intern_symbol(sym_1106,"cpu-time");
  eul_intern_symbol(sym_1107,"y");
  eul_intern_symbol(sym_1108,"x");
  eul_intern_symbol(sym_1109,"binary-");
  eul_intern_symbol(sym_1110,"<double-float>");
  eul_intern_symbol(sym_1111,"ticks-per-second");
  eul_intern_symbol(sym_1112,"convert");
  eul_intern_symbol(sym_1113,"/");
  eul_intern_symbol(sym_1114,"map");
  eul_intern_symbol(sym_1115,"setq");
  eul_intern_symbol(sym_1116,"vector-ref");
  eul_intern_symbol(sym_1117,"nl");
  object_class(str_1118) = eul_static_string_class;
  object_class(str_1119) = eul_static_string_class;
  object_class(str_1120) = eul_static_string_class;
  eul_intern_symbol(sym_1121,"sprint");
  eul_intern_symbol(sym_1122,"let*");
  eul_allocate_bytevector( G001103,G001102);
  eul_intern_symbol(sym_1125,"reverse-list");
  eul_allocate_bytevector( G001124,G001123);
  eul_allocate_bytevector( G001127,G001126);
  eul_intern_symbol(sym_1130,"dynamic-variable-ref");
  eul_intern_symbol(sym_1131,"setter");
  eul_allocate_bytevector( G001129,G001128);
  eul_intern_symbol(sym_1134,"<condition>");
  eul_intern_symbol(sym_1135,"defclass");
  eul_allocate_bytevector( G001133,G001132);
  eul_allocate_bytevector( G001137,G001136);
  eul_allocate_bytevector( G001139,G001138);
  eul_intern_symbol(sym_1142,"dynamic-let");
  eul_allocate_bytevector( G001141,G001140);
  eul_intern_symbol(sym_1145,"catch");
  eul_intern_symbol(sym_1146,"throw");
  eul_intern_symbol(sym_1147,"defcondition");
  eul_intern_symbol(sym_1148,"dynamic-setq");
  eul_intern_symbol(sym_1149,"return-from");
  eul_intern_symbol(sym_1150,"butlast");
  eul_intern_symbol(sym_1151,"time-execution");
  eul_intern_symbol(sym_1152,"while");
  eul_intern_symbol(sym_1153,"not");
  eul_intern_symbol(sym_1154,"defglobal");
  eul_intern_symbol(sym_1155,"block");
  eul_intern_symbol(sym_1156,"last");
  eul_intern_symbol(sym_1157,"with-handler");
  eul_intern_symbol(sym_1158,"case");
  eul_allocate_bytevector( G001144,G001143);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 20; i++)
      _macros_bindings[i] = eul_nil;
  }

  _macros_bindings[ 20] = sym_1051;
  _macros_bindings[ 21] = sym_1052;
  _macros_bindings[ 22] = sym_1053;
  _macros_bindings[ 23] = sym_1054;
  _macros_bindings[ 24] = sym_1055;
  _macros_bindings[ 25] = G001050;
  _macros_bindings[ 26] = str_1058;
  _macros_bindings[ 27] = sym_1059;
  _macros_bindings[ 28] = sym_1060;
  _macros_bindings[ 29] = sym_1061;
  _macros_bindings[ 30] = G001057;
  _macros_bindings[ 31] = sym_1064;
  _macros_bindings[ 32] = sym_1065;
  _macros_bindings[ 33] = sym_1066;
  _macros_bindings[ 34] = G001063;
  _macros_bindings[ 35] = sym_1069;
  _macros_bindings[ 36] = sym_1070;
  _macros_bindings[ 37] = sym_1071;
  _macros_bindings[ 38] = G001068;
  _macros_bindings[ 39] = sym_1074;
  _macros_bindings[ 40] = sym_1075;
  _macros_bindings[ 41] = sym_1076;
  _macros_bindings[ 42] = G001073;
  _macros_bindings[ 43] = sym_1079;
  _macros_bindings[ 44] = G001078;
  _macros_bindings[ 45] = sym_1082;
  _macros_bindings[ 46] = G001081;
  _macros_bindings[ 47] = sym_1085;
  _macros_bindings[ 48] = sym_1086;
  _macros_bindings[ 49] = sym_1087;
  _macros_bindings[ 50] = sym_1088;
  _macros_bindings[ 51] = sym_1089;
  _macros_bindings[ 52] = G001084;
  _macros_bindings[ 53] = G001091;
  _macros_bindings[ 54] = sym_1094;
  _macros_bindings[ 55] = sym_1095;
  _macros_bindings[ 56] = sym_1096;
  _macros_bindings[ 57] = G001093;
  _macros_bindings[ 58] = G001098;
  _macros_bindings[ 59] = sym_1101;
  _macros_bindings[ 60] = G001100;
  _macros_bindings[ 61] = str_1104;
  _macros_bindings[ 62] = str_1105;
  _macros_bindings[ 63] = sym_1106;
  _macros_bindings[ 64] = sym_1107;
  _macros_bindings[ 65] = sym_1108;
  _macros_bindings[ 66] = sym_1109;
  _macros_bindings[ 67] = sym_1110;
  _macros_bindings[ 68] = sym_1111;
  _macros_bindings[ 69] = sym_1112;
  _macros_bindings[ 70] = sym_1113;
  _macros_bindings[ 71] = sym_1114;
  _macros_bindings[ 72] = sym_1115;
  _macros_bindings[ 73] = sym_1116;
  _macros_bindings[ 74] = sym_1117;
  _macros_bindings[ 75] = str_1118;
  _macros_bindings[ 76] = str_1119;
  _macros_bindings[ 77] = str_1120;
  _macros_bindings[ 78] = sym_1121;
  _macros_bindings[ 79] = sym_1122;
  _macros_bindings[ 80] = G001103;
  _macros_bindings[ 81] = sym_1125;
  _macros_bindings[ 82] = G001124;
  _macros_bindings[ 83] = G001127;
  _macros_bindings[ 84] = sym_1130;
  _macros_bindings[ 85] = sym_1131;
  _macros_bindings[ 86] = G001129;
  _macros_bindings[ 87] = sym_1134;
  _macros_bindings[ 88] = sym_1135;
  _macros_bindings[ 89] = G001133;
  _macros_bindings[ 90] = G001137;
  _macros_bindings[ 91] = G001139;
  _macros_bindings[ 92] = sym_1142;
  _macros_bindings[ 93] = G001141;
  _macros_bindings[ 1] = eul_nil;
  _macros_bindings[ 94] = sym_1145;
  _macros_bindings[ 95] = sym_1146;
  _macros_bindings[ 96] = sym_1147;
  _macros_bindings[ 97] = sym_1148;
  _macros_bindings[ 98] = sym_1149;
  _macros_bindings[ 99] = sym_1150;
  _macros_bindings[ 100] = sym_1151;
  _macros_bindings[ 101] = sym_1152;
  _macros_bindings[ 102] = sym_1153;
  _macros_bindings[ 103] = sym_1154;
  _macros_bindings[ 104] = sym_1155;
  _macros_bindings[ 105] = sym_1156;
  _macros_bindings[ 106] = sym_1157;
  _macros_bindings[ 107] = sym_1158;
  eul_allocate_lambda( _macros_bindings[0], "initialize-_macros", 0, G001144);

  }
}


/* eof */
